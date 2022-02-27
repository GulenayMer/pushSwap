// sa -- swap a
// swap the first 2 elements at the top of stack a 
void	sa(t_stack *stack)
{
	stack->a[0];
	stack->a[0] = stack->a[1];
	write(1, "sa\n", 3);
};


// sb  -- swap b
// swap the first 2 elements at the top of stack b
void	sb(t_stack *stack)
{
	stack->b[0];
	stack->b[0] = stack->b[1];
	write(1, "sb\n", 3);
};


// ss -- sa + sb
void	ss(t_stack *stack)
{
	stack->a[0];
	stack->a[0] = stack->a[1];

	stack->b[0];
	stack->b[0] = stack->b[1];
	write(1, "ss\n", 3);
};

//pa -- push a
// take the 1. element at the top of b, put it at the top of a  
void	pa(t_stack *stack)
{
	stack->a[0] = stack->b[0];
	stack->a[1] = stack->a[0];
	write(1, "pa\n", 3);
};

// pb -- push b
// take the 1.element at the top of a, put it at the top of b
void	pb(t_stack *stack)
{
	
	write(1, "pb\n", 3);
};

// ra -- rotate a
// shift up all elements of stack a by 1  -- the 1. element becomes the last one
void	ra(t_stack *stack)
{
	
	write(1, "ra\n", 3);
};

// rb -- rotate b
// shift up all elements of stack b by 1 -- the 1.element becomes the last one
void	rb(t_stack *stack)
{
	
	write(1, "rb\n", 3);
};

// rr --- ra + rb
void	rr(t_stack *stack)
{
	
	write(1, "rr\n", 3);
};

// rra -- reverse rotate a 
// shift down all elements of stack a by 1 -- the last element becomes the 1.
void	rra(t_stack *stack)
{
	
	write(1, "rra\n", 4);
};

// rrb -- reverse rotate b
// shift down all elements of stack b by 1 -- the last element becomes the 1.
void	rrb(t_stack *stack)
{
	
	write(1, "rrb\n", 4);
};

// rrr -- rra + rrb
void	rrr(t_stack *stack)
{
	
	write(1, "rrr\n", 4);
};
