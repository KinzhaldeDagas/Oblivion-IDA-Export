int __thiscall sub_91BEF0(_DWORD *this, int a2)
{
  _DWORD *v3; // edi
  int i; // esi
  int result; // eax

  v3 = *(_DWORD **)(*(this + 0xC) + 4 * a2); /*0x91befc*/
  for ( i = 0; i < v3[2]; ++i ) /*0x91bf06*/
    (*(void (__thiscall **)(_DWORD, _DWORD, int))(*(_DWORD *)*(this + 6) + 0x10))( /*0x91bf22*/
      *(this + 6),
      *(_DWORD *)(v3[1] + 4 * i),
      unk_BA8438);
  result = v3[3] & 0x3FFFFFFF; /*0x91bf30*/
  v3[2] = 0; /*0x91bf53*/
  return result; /*0x91bf52*/
}
