// positive sp value has been detected, the output may be wrong!
char __userpurge Actor_MagicTarget_AttemptAddEffect_::CheckGhost@<al>(
        _BYTE *a1@<ecx>,
        int a2@<ebx>,
        int *a3@<ebp>,
        int a4,
        _DWORD *a5,
        int a6,
        void *a7,
        int a8,
        int a9,
        char a10)
{
  if ( !BaseExtraList_HasGhost(a1) || (*(int (__thiscall **)(_DWORD *))(*a5 + 0x18))(a5) == 4 )
    return Actor_MagicTarget_AttemptAddEffect_::AttemptAdd(a2, a3, a5, a4, (int)a5, a6, a7, a8, a9, a10);
  else
    return 0;
}
