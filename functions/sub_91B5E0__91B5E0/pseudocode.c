int __thiscall sub_91B5E0(_DWORD *this, int a2)
{
  _DWORD *v3; // edi
  int i; // esi
  int result; // eax

  v3 = *(_DWORD **)(*(this + 0xC) + 4 * a2); /*0x91b5ec*/
  for ( i = 0; i < v3[2]; ++i ) /*0x91b5f6*/
    (*(void (__thiscall **)(_DWORD, _DWORD, int))(*(_DWORD *)*(this + 6) + 0x10))( /*0x91b612*/
      *(this + 6),
      *(_DWORD *)(v3[1] + 4 * i),
      unk_BA842C);
  result = v3[3] & 0x3FFFFFFF; /*0x91b620*/
  v3[2] = 0; /*0x91b643*/
  return result; /*0x91b642*/
}
