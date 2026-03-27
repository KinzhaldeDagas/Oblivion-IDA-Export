int __thiscall sub_4398D0(_DWORD *this, int a2)
{
  int v3; // esi
  void (__thiscall **v5)(_DWORD, int); // [esp+10h] [ebp-4h] BYREF
  int v6; // [esp+18h] [ebp+4h]

  sub_4392E0(this, a2);
  v6 = *(this + 0xE);
  v3 = dword_B39E04;
  v5 = 0;
  NiEnterCriticalSection((struct _RTL_CRITICAL_SECTION *)&stru_B39E80, (int)&unk_A2F830);
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD, int))(**(_DWORD **)(v3 + 0x24) + 4))(*(_DWORD *)(v3 + 0x24), v6) )
  {
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(v3 + 0x24) + 0x10))(*(_DWORD *)(v3 + 0x24), v6);
    if ( &v5 )
      (*v5)(&v5, 1);
  }
  return NiLeaveCriticalSection_0(&stru_B39E80);
}
