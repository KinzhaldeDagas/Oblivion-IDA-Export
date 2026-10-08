// Verified: detaches from old parent list and decrements child-count trait 0xFD0, assigns parent +0x10, increments new parent count, inserts in new parent child list. Optional sibling argument controls placement; null uses AddHead. This is attachment, not a float-value setter.
void __thiscall Tile::SetParent(Tile *this, Tile *parent, Tile *sibling)
{
  int v4; // edi
  OblivionTileValueView *Value; // eax
  void *v6; // ecx
  Tile *v7; // edi
  bool v8; // zf
  OblivionTileValueView *v9; // eax
  int v10; // edx
  _DWORD *v11; // eax
  int v12; // edi
  _DWORD *v13; // ecx
  _DWORD *v14; // ecx
  void *data; // [esp+Ch] [ebp-4h] BYREF

  v4 = *((_DWORD *)this + 4); /*0x58d1c5*/
  if ( v4 ) /*0x58d1ca*/
  {
    if ( !*(_BYTE *)(v4 + 4) ) /*0x58d1cc*/
    {
      *(float *)&data = Tile_GetFloat((_DWORD *)v4, 0xFD0) - dbl_A2F928; /*0x58d1eb*/
      Value = Tile::GetOrCreateValue((Tile *)v4, 0xFD0u); /*0x58d1ef*/
      if ( Value ) /*0x58d1f6*/
        Tile::Value::SetFloat(Value, *(float *)&data); /*0x58d202*/
      v6 = (void *)(*((_DWORD *)this + 4) + 0x30); /*0x58d20f*/
      data = this; /*0x58d212*/
      NiTPointerList_RemoveByData(v6, &data); /*0x58d216*/
    }
  }
  v7 = parent; /*0x58d21b*/
  v8 = parent == 0; /*0x58d21f*/
  *((float *)this + 4) = *(float *)&parent; /*0x58d221*/
  if ( !v8 ) /*0x58d224*/
  {
    *(float *)&parent = Tile_GetFloat(v7, 0xFD0) + dbl_A2F928; /*0x58d243*/
    v9 = Tile::GetOrCreateValue(v7, 0xFD0u); /*0x58d247*/
    if ( v9 ) /*0x58d24e*/
      Tile::Value::SetFloat(v9, *(float *)&parent); /*0x58d25a*/
    if ( sibling ) /*0x58d266*/
    {
      v10 = *((_DWORD *)this + 4); /*0x58d268*/
      v11 = *(_DWORD **)(v10 + 0x34); /*0x58d26b*/
      if ( v11 ) /*0x58d270*/
      {
        while ( 1 ) /*0x58d272*/
        {
          v8 = v11[2] == (_DWORD)sibling; /*0x58d272*/
          v12 = (int)v11; /*0x58d278*/
          v11 = (_DWORD *)*v11; /*0x58d27a*/
          if ( v8 ) /*0x58d27c*/
            break; /*0x58d27c*/
          if ( !v11 ) /*0x58d280*/
            goto LABEL_13; /*0x58d280*/
        }
        parent = this; /*0x58d2a2*/
        NiTPointerList_RemoveByData((void *)(v10 + 0x30), (void **)&parent); /*0x58d2a6*/
        v13 = (_DWORD *)(*((_DWORD *)this + 4) + 0x30); /*0x58d2b4*/
        parent = this; /*0x58d2b7*/
        sub_5986D0(v13, v12, &parent); /*0x58d2bb*/
      }
      else
      {
LABEL_13:
        parent = this; /*0x58d282*/
        NiTList_AddHead((_DWORD *)(v10 + 0x30), &parent); /*0x58d28e*/
      }
    }
    else
    {
      v14 = (_DWORD *)(*((_DWORD *)this + 4) + 0x30); /*0x58d2cf*/
      parent = this; /*0x58d2d2*/
      NiTList_AddHead(v14, &parent); /*0x58d2d6*/
    }
  }
}
