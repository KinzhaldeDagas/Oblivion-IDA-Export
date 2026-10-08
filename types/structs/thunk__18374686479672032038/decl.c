struct __unaligned __declspec(align(1)) thunk
{
BYTE mov_r10[3];
DWORD index;
BYTE mov_rax[2];
void *call_stubless;
BYTE jmp_rax[2];
};
