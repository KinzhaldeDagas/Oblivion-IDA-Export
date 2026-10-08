int __thiscall sub_8E1440(
        const void **this,
        int a2,
        __int16 a3,
        unsigned __int16 a4,
        unsigned __int16 a5,
        _WORD *a6,
        _WORD *a7)
{
  int v8; // esi
  signed int v9; // eax
  char *v10; // eax
  char *v11; // eax
  int result; // eax

  v8 = (int)*(this + 1) + 2; /*0x8e144a*/
  v9 = (unsigned int)*(this + 2) & 0x3FFFFFFF; /*0x8e144d*/
  if ( v9 < v8 ) /*0x8e1454*/
  {
    v10 = (char *)(2 * v9); /*0x8e1456*/
    if ( v8 >= (int)v10 ) /*0x8e145a*/
      v10 = (char *)*(this + 1) + 2; /*0x8e145c*/
    sub_8A6E40(this, (int)v10, 4); /*0x8e1462*/
  }
  v11 = (char *)*this + 4 * v8 - 0xC; /*0x8e1471*/
  for ( *(this + 1) = (const void *)v8; a5 <= *(_WORD *)v11; v11 += 0xFFFFFFFC ) /*0x8e147b*/
    *((_DWORD *)v11 + 2) = *(_DWORD *)v11; /*0x8e1482*/
  *((_WORD *)v11 + 4) = a5; /*0x8e1491*/
  *((_WORD *)v11 + 5) = a3; /*0x8e1495*/
  for ( *a7 = ((v11 - (_BYTE *)*this) >> 2) + 2; a4 < *(_WORD *)v11; v11 += 0xFFFFFFFC ) /*0x8e14b4*/
    *((_DWORD *)v11 + 1) = *(_DWORD *)v11; /*0x8e14b8*/
  *((_WORD *)v11 + 3) = a3; /*0x8e14c3*/
  *((_WORD *)v11 + 2) = a4; /*0x8e14cb*/
  result = ((v11 - (_BYTE *)*this) >> 2) + 1; /*0x8e14d4*/
  *a6 = result; /*0x8e14d6*/
  return result; /*0x8e14d5*/
}
