int __thiscall sub_8A1F70(_DWORD *this, float *a2)
{
  int result; // eax
  int v4; // esi
  int v5; // esi
  int v6; // ecx

  result = sub_8A2760(a2); /*0x8a1f79*/
  if ( (_BYTE)result ) /*0x8a1f80*/
  {
    if ( this && (v4 = *(this + 2)) != 0 && (v5 = *(_DWORD *)(v4 + 0xC)) != 0 ) /*0x8a1f92*/
      v6 = *(_DWORD *)(v5 + 8); /*0x8a1f94*/
    else
      v6 = 0; /*0x8a1f99*/
    if ( v6 ) /*0x8a1f9d*/
      return (*(int (__thiscall **)(int, float *))(*(_DWORD *)v6 + 0x8C))(v6, a2); /*0x8a1fa8*/
  }
  return result; /*0x8a1faa*/
}
