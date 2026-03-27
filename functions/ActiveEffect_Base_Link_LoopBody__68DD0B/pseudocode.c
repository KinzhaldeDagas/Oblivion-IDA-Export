int __usercall ActiveEffect_Base_Link_::LoopBody@<eax>(_DWORD *a1@<esi>, int a2)
{
  _DWORD *v2; // esi

  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*a1 + 0x80))(*a1);
  v2 = (_DWORD *)a1[1];
  if ( v2 )
    return ActiveEffect_Base_Link_::LoopTest(v2, a2);
  else
    return ActiveEffect_Base_Link_::LoopExit(a2);
}
