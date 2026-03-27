int __userpurge AbsorbEffect::AbsorbEffect@<eax>(
        int a1@<ebx>,
        LONG (__stdcall *a2)(volatile LONG *lpAddend)@<ebp>,
        int a3@<edi>,
        int a4@<esi>,
        int a5,
        int a6,
        int a7)
{
  if ( !a2((volatile LONG *)(a3 + 4)) && a3 != a1 )
    (**(void (__thiscall ***)(int, int))a3)(a3, 1);
  *(_DWORD *)(a4 + 0x40) = a1;
  return AbsorbEffect::AbsorbEffect(a5, a6, a7);
}
