int __thiscall sub_8B77A0(_DWORD *this, _DWORD *a2)
{
  int v3; // eax
  int v4; // edi
  const void **v5; // esi
  int result; // eax
  int v7; // eax
  int v8; // ebx
  int v9; // ecx

  sub_8A2690(this, a2); /*0x8b77b0*/
  if ( this && (v3 = *(this + 2)) != 0 ) /*0x8b77be*/
    v4 = *(_DWORD *)(v3 + 0xC); /*0x8b77c0*/
  else
    v4 = 0; /*0x8b77c5*/
  a2[2] = 0; /*0x8b77c7*/
  v5 = (const void **)(a2 + 1); /*0x8b77d1*/
  result = a2[3] & 0x3FFFFFFF; /*0x8b77d4*/
  if ( result < v4 ) /*0x8b77db*/
  {
    v7 = 2 * result; /*0x8b77dd*/
    if ( v4 >= v7 ) /*0x8b77e1*/
      v7 = v4; /*0x8b77e3*/
    result = sub_8A6E40(v5, v7, 0x10); /*0x8b77e9*/
  }
  a2[2] = v4; /*0x8b77f3*/
  if ( this && (v8 = *(this + 2)) != 0 ) /*0x8b77fd*/
    v9 = v8 + 0x10; /*0x8b77ff*/
  else
    v9 = 0; /*0x8b7804*/
  if ( v4 > 0 ) /*0x8b7808*/
  {
    result = 0; /*0x8b780a*/
    do /*0x8b7820*/
    {
      *(_OWORD *)((char *)*v5 + result) = *(_OWORD *)(result + v9); /*0x8b7816*/
      result += 0x10; /*0x8b781a*/
      --v4; /*0x8b781d*/
    }
    while ( v4 ); /*0x8b7820*/
  }
  return result; /*0x8b7822*/
}
