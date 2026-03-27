int __usercall ActiveEffect_Base_PostLink_::LoopBody@<eax>(int a1@<ebx>, int a2@<ebp>, volatile LONG **a3@<esi>)
{
  volatile LONG *v3; // edi
  volatile LONG **v4; // esi

  v3 = *a3;
  (*(void (__thiscall **)(_DWORD, int, int, _DWORD))(**a3 + 0x84))(*a3, a1, a2, 0);
  sub_678D30((int *)&ActorProcessManager_ptr, v3);
  v4 = (volatile LONG **)a3[1];
  if ( v4 )
    return ActiveEffect_Base_PostLink_::LoopTest(a1, a2, v4);
  else
    return ActiveEffect_Base_PostLink_::LoopExit();
}
