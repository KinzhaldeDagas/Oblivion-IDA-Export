int __usercall ActiveEffect_Base_Link_::LoopBody@<eax>(_DWORD *a1@<esi>, int a2)
{
  _DWORD *v2; // esi

  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*a1 + 0x80))(*a1);// Verified ActiveEffect hit-effect relink call pushes EBX and EDI before dispatching each hit-effect vtable slot +0x80. EDI is the explicit linkContext; EBX is the third callback argument used as TESChildCELL* by MagicHitEffect_SetParentCellFromTarget. Universal EBX semantics remain Candidate because callers differ. /*0x68dd17*/
  v2 = (_DWORD *)a1[1]; /*0x68dd19*/
  if ( v2 ) /*0x68dd1e*/
    return ActiveEffect_Base_Link_::LoopTest(v2, a2); /*0x68dd1e*/
  else
    return ActiveEffect_Base_Link_::LoopExit(a2); /*0x68dd1f*/
}
