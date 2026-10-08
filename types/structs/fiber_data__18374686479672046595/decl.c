struct fiber_data
{
LPVOID param;
void *except;
void *stack_base;
void *stack_limit;
void *stack_allocation;
__declspec(align(16)) CONTEXT_2 context;
DWORD flags;
LPFIBER_START_ROUTINE start;
void *fls_slots;
};
