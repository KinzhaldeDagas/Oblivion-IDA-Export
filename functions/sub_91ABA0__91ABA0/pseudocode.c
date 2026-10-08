int __thiscall sub_91ABA0(_DWORD *this, int a2)
{
  _DWORD *v3; // edi
  int i; // esi
  int result; // eax

  v3 = *(_DWORD **)(*(this + 0xC) + 4 * a2); /*0x91abac*/
  for ( i = 0; i < v3[2]; ++i ) /*0x91abb6*/
    (*(void (__thiscall **)(_DWORD, _DWORD, int))(*(_DWORD *)*(this + 6) + 0x10))( /*0x91abd2*/
      *(this + 6),
      *(_DWORD *)(v3[1] + 4 * i),
      unk_BA8420);
  result = v3[3] & 0x3FFFFFFF; /*0x91abe0*/
  v3[2] = 0; /*0x91ac03*/
  return result; /*0x91ac02*/
}
