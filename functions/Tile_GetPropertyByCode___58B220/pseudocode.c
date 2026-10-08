// Verified: sorted trait lookup; if absent allocates 0x1C bytes, constructs Value at 0x589DF0, stores owner Tile at +0 and inserts into Tile value list. Corrects misleading existing-property-only interpretation.
OblivionTileValueView *__thiscall Tile::GetOrCreateValue(Tile *this, unsigned int trait)
{
  _DWORD *v3; // ecx
  unsigned __int16 v4; // si
  char v5; // bl
  int v6; // edi
  OblivionTileValueView *result; // eax
  signed int v8; // edx
  OblivionTileValueView *v9; // eax
  OblivionTileValueView *v10; // esi

  v3 = *((_DWORD **)this + 6); /*0x58b246*/
  v4 = trait; /*0x58b249*/
  v5 = 0; /*0x58b24d*/
  v6 = (int)v3; /*0x58b251*/
  if ( v3 ) /*0x58b253*/
  {
    while ( 1 ) /*0x58b258*/
    {
      result = (OblivionTileValueView *)v3[2]; /*0x58b258*/
      v6 = (int)v3; /*0x58b25c*/
      v3 = (_DWORD *)*v3; /*0x58b25e*/
      if ( result ) /*0x58b260*/
      {
        v8 = result->trait; /*0x58b262*/
        if ( v8 == trait ) /*0x58b268*/
          return result; /*0x58b268*/
        if ( v8 > (int)trait ) /*0x58b26a*/
          break; /*0x58b26a*/
      }
      if ( !v3 ) /*0x58b26e*/
        goto LABEL_8; /*0x58b26e*/
    }
    v5 = 1; /*0x58b272*/
  }
LABEL_8:
  v9 = (OblivionTileValueView *)FormHeapAlloc(0x1Cu); /*0x58b274*/
  trait = (unsigned int)v9; /*0x58b27e*/
  if ( v9 ) /*0x58b28c*/
    v10 = Tile::Value::Initialize(v9, v4); /*0x58b296*/
  else
    v10 = 0; /*0x58b29a*/
  trait = (unsigned int)v10; /*0x58b2a6*/
  if ( v10 ) /*0x58b2aa*/
  {
    v10->owner = this; /*0x58b2ae*/
    if ( v5 && v6 ) /*0x58b2b4*/
      NiTPointerList__InsertBeforePosition((_DWORD *)this + 5, v6, &trait); /*0x58b2bf*/
    else
      NiTPointerList__AddTail((BSTextureManager *)((char *)this + 0x14), (void **)&trait); /*0x58b2ce*/
  }
  return v10; /*0x58b2d5*/
}
