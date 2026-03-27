int __usercall ActiveEffect_Base_SaveSize_::LoopBody@<eax>(_DWORD *a1@<esi>, __int16 a2)
{
  __int16 v2; // ax
  _DWORD *v3; // esi
  __int16 v5; // [esp+Ch] [ebp+4h]

  v2 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*a1 + 0x74))(*a1);
  v3 = (_DWORD *)a1[1];
  v5 = v2 + 1 + a2;
  if ( v3 )
    return ActiveEffect_Base_SaveSize_::LoopTest(v3, v5);
  else
    return ActiveEffect_Base_SaveSize_::LoopExit();
}
