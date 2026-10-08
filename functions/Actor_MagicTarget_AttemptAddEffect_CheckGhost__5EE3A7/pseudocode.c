// positive sp value has been detected, the output may be wrong!
char __userpurge Actor_MagicTarget_AttemptAddEffect_::CheckGhost@<al>(
        _BYTE *a1@<ecx>,
        int a2@<ebx>,
        int *a3@<ebp>,
        double a4@<st0>,
        int a5,
        _DWORD *a6,
        int a7,
        void *a8,
        int a9,
        int a10,
        char a11)
{
  if ( !BaseExtraList_HasGhost(a1) || (*(int (__thiscall **)(_DWORD *))(*a6 + 0x18))(a6) == 4 ) /*0x5ee3c5*/
    return Actor_MagicTarget_AttemptAddEffect_::AttemptAdd(a2, a3, a6, a4, a5, (int)a6, a7, a8, a9, a10, a11); /*0x5ee3b7*/
  else
    return 0; /*0x5ee3c8*/
}
