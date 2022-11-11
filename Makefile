#------------------------------------------------------------------------------#
#                                VARIABLES                                     #
#------------------------------------------------------------------------------#

NAME	=	libftprintf.a
LIBFT	= 	libft.a
LDIR	=	libft/

# Compiler and flags
CC		=	gcc
CFLAGS	=	-Wall -Werror -Wextra
RM		=	rm -f

# Sources are all .c files
SRCS	=	ft_printf.c\
			ft_printnbr.c\
			ft_printunnbr.c\
			ft_printf_utils.c\
			ft_printptr.c\
			ft_printhex.c\
			ft_printstr.c


OBJS	=	$(SRCS:.c=.o)

#------------------------------------------------------------------------------#
#                                 TARGETS                                      #
#------------------------------------------------------------------------------#

all: $(LDIR)$(LIBFT) $(NAME)

# Generates output file
$(NAME): $(OBJS) $(LDIR)$(LIBFT)
	cp $(LDIR)$(LIBFT) $@
	ar -rcs $(NAME) $(OBJS)

# Compiles sources into objects
$(OBJS): $(SRCS)
	$(CC) $(CFLAGS) -c $(SRCS)

$(LDIR)$(LIBFT):
	$(MAKE) -C $(LDIR)

# Removes objects
clean:
	$(RM) $(OBJS)
	$(RM) $(LDIR)*.o

# Removes objects and executables
fclean: clean
	$(RM) $(NAME)
	$(RM) $(LDIR)$(LIBFT)

# Removes objects and executables and remakes
re: fclean all
