char __thiscall sub_949070(_DWORD *this, const char *a2)
{
  int v3; // eax
  signed int v4; // ebx
  int v5; // esi
  int v7; // [esp+4h] [ebp-4h]

  v3 = *(this + 3) & 0x3FFFFFFF; /*0x94907a*/
  if ( v3 > *(this + 2) + 0x46 ) /*0x949084*/
  {
    v4 = 0; /*0x94908c*/
    v7 = 0; /*0x949090*/
    if ( a2 ) /*0x949094*/
    {
      v4 = sub_8B1860(a2) + 1; /*0x9490a1*/
      v7 = v4 % 2; /*0x9490b0*/
    }
    v5 = sub_948DF0((int)(this + 1), v4 + v7); /*0x9490c7*/
    LOBYTE(v3) = v7 + v4; /*0x9490cb*/
    *(_BYTE *)v5 = 0x50; /*0x9490d2*/
    *(_BYTE *)(v5 + 1) = v7 + v4; /*0x9490d5*/
    *(_WORD *)(v5 + 2) = 0; /*0x9490d8*/
    *(_WORD *)(v5 + 4) = 0; /*0x9490de*/
    if ( v4 > 0 ) /*0x9490e4*/
    {
      sub_8B1890((void *)(v5 + 6), a2, v4); /*0x9490ec*/
      LOBYTE(v3) = v7; /*0x9490f1*/
      if ( v7 ) /*0x9490fa*/
        *(_BYTE *)(v5 + v4 + 6) = 0; /*0x9490fc*/
    }
  }
  return v3; /*0x949103*/
}
