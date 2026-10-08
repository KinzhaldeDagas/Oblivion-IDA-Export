// Verified (Oblivion): size traversal calls each hit-effect vtable +0x74 with ECX=this, first explicit argument the owning ActiveEffect* (EDI), and second explicit argument the target reference passed to ActiveEffect_Base_SaveSize (EBX). This establishes the shared GetExtraSaveSize virtual signature.
int __usercall ActiveEffect_Base_SaveSize_::LoopBody@<eax>(_DWORD *a1@<esi>, int a2)
{
  __int16 v2; // ax
  _DWORD *v3; // esi

  v2 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*a1 + 0x74))(*a1); /*0x68da84*/
  v3 = (_DWORD *)a1[1]; /*0x68da86*/
  LOWORD(a2) = v2 + 1 + a2; /*0x68da8d*/
  if ( v3 ) /*0x68da94*/
    return ActiveEffect_Base_SaveSize_::LoopTest(v3, a2); /*0x68da94*/
  else
    return ActiveEffect_Base_SaveSize_::LoopExit(a2); /*0x68da95*/
}
