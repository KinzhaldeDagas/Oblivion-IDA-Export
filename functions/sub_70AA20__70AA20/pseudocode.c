char __thiscall sub_70AA20(_DWORD *this, _BYTE *a2, int a3, _BYTE *a4)
{
  char v5; // al
  _BYTE *v6; // ebp
  _BYTE *v7; // ebx
  unsigned int v8; // edi
  int v9; // ebx
  int v10; // ecx
  void (__thiscall *v11)(int, _BYTE **, int, char *); // eax
  char result; // al
  char v13; // [esp+12h] [ebp-2h] BYREF
  char v14; // [esp+13h] [ebp-1h]

  v5 = sub_707770(this); /*0x70aa27*/
  v14 = v5; /*0x70aa31*/
  if ( !(_BYTE)a3 ) /*0x70aa35*/
    LOBYTE(a3) = v5; /*0x70aa37*/
  v6 = a2; /*0x70aa3b*/
  v7 = a4; /*0x70aa43*/
  *a2 = a3; /*0x70aa47*/
  v8 = 0; /*0x70aa4a*/
  *v7 = 1; /*0x70aa4c*/
  if ( *((_WORD *)this + 0x5B) ) /*0x70aa4f*/
  {
    v9 = a3; /*0x70aa58*/
    do /*0x70aab9*/
    {
      if ( *((unsigned __int16 *)this + 0x5B) > v8 ) /*0x70aa69*/
      {
        v10 = *(_DWORD *)(*(this + 0x2C) + 4 * v8); /*0x70aa71*/
        if ( v10 ) /*0x70aa76*/
        {
          v11 = *(void (__thiscall **)(int, _BYTE **, int, char *))(*(_DWORD *)v10 + 0x5C); /*0x70aa7a*/
          LOBYTE(a2) = 0; /*0x70aa88*/
          v13 = 1; /*0x70aa8d*/
          v11(v10, &a2, v9, &v13); /*0x70aa92*/
          if ( (_BYTE)a2 ) /*0x70aa99*/
            *v6 = 1; /*0x70aa9b*/
          if ( !v13 ) /*0x70aaa4*/
            *a4 = 0; /*0x70aaaa*/
        }
      }
      ++v8; /*0x70aab4*/
    }
    while ( v8 < *((unsigned __int16 *)this + 0x5B) ); /*0x70aab9*/
    v7 = a4; /*0x70aabb*/
  }
  result = sub_7077A0(this); /*0x70aac1*/
  if ( result || *(this + 3) ) /*0x70aaca*/
  {
    *v6 = 1; /*0x70aad0*/
    *((_WORD *)this + 0xC) |= 2u; /*0x70aad4*/
  }
  else if ( *v6 ) /*0x70aadb*/
  {
    *((_WORD *)this + 0xC) |= 2u; /*0x70aae1*/
  }
  else
  {
    *((_WORD *)this + 0xC) &= ~2u; /*0x70aae8*/
  }
  if ( (_BYTE)a3 ) /*0x70aaf3*/
    *((_WORD *)this + 0xC) |= 4u; /*0x70aaf5*/
  else
    *((_WORD *)this + 0xC) &= ~4u; /*0x70aafc*/
  if ( result ) /*0x70ab04*/
    *((_WORD *)this + 0xC) |= 8u; /*0x70ab06*/
  else
    *((_WORD *)this + 0xC) &= ~8u; /*0x70ab0d*/
  if ( *v7 ) /*0x70ab13*/
    *((_WORD *)this + 0xC) |= 0x10u; /*0x70ab18*/
  else
    *((_WORD *)this + 0xC) &= ~0x10u; /*0x70ab1f*/
  if ( v14 ) /*0x70ab2a*/
    *v7 = 0; /*0x70ab2c*/
  return result; /*0x70ab2f*/
}
