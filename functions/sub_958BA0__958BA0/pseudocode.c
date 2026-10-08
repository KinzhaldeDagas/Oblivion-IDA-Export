_DWORD *__thiscall sub_958BA0(_DWORD *this, _DWORD *a2, int a3)
{
  _DWORD *result; // eax
  int v4; // esi
  int v5; // edx
  int v6; // edx
  _DWORD *v7; // [esp+14h] [ebp+8h]

  result = a2; /*0x958ba3*/
  v4 = a3; /*0x958ba9*/
  v5 = *(this + 3) - 1; /*0x958bad*/
  if ( a3 ) /*0x958bb1*/
  {
    v7 = this + v5 + 0x378; /*0x958bba*/
    do /*0x958be8*/
    {
      if ( v5 < 0 ) /*0x958bc2*/
        break; /*0x958bc2*/
      *(_DWORD *)(*a2 + 4 * a2[1]++) = *v7; /*0x958bd0*/
      --*(this + 3); /*0x958bd6*/
      --v4; /*0x958bdd*/
      --v5; /*0x958be1*/
      v7 += 0xFFFFFFFF; /*0x958be4*/
    }
    while ( v4 ); /*0x958be8*/
    if ( v4 > 0 ) /*0x958bed*/
    {
      do /*0x958c14*/
      {
        v6 = *(this + 4); /*0x958bf0*/
        *(this + 4) = v6 + 1; /*0x958bfa*/
        *(_DWORD *)(*a2 + 4 * a2[1]) = this + 0x14 * v6 + 0x3DC; /*0x958c09*/
        --v4; /*0x958c10*/
        ++a2[1]; /*0x958c11*/
      }
      while ( v4 ); /*0x958c14*/
    }
  }
  return result; /*0x958c16*/
}
