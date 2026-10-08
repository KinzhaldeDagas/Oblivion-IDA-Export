int __thiscall sub_8C9880(_DWORD *this, float *a2)
{
  int result; // eax
  int v4; // esi
  int v5; // esi
  int v6; // ecx

  result = sub_8A2760(a2); /*0x8c9889*/
  if ( (_BYTE)result ) /*0x8c9890*/
  {
    if ( this && (v4 = *(this + 2)) != 0 && (v5 = *(_DWORD *)(v4 + 0x10)) != 0 ) /*0x8c98a2*/
      v6 = *(_DWORD *)(v5 + 8); /*0x8c98a4*/
    else
      v6 = 0; /*0x8c98a9*/
    if ( v6 ) /*0x8c98ad*/
      return (*(int (__thiscall **)(int, float *))(*(_DWORD *)v6 + 0x8C))(v6, a2); /*0x8c98b8*/
  }
  return result; /*0x8c98ba*/
}
