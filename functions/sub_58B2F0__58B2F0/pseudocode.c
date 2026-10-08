// Verified shared fallback called by CalculateValue when owner virtual PostParse returns NULL. Marks trait-specific dirty flags; ID trait 0xFA8 calls owning Menu vtable +4 AttachTileByID with numeric ID and Tile*. Visibility traits mark dirty bit4. Fallout named analogue 0x82232168.
Tile *__thiscall Tile::FinalPostParse(Tile *this, unsigned int trait, float value, const char *text)
{
  _DWORD *v6; // eax
  _DWORD *v7; // esi
  int v8; // ebx
  int v9; // eax
  Tile *v10; // eax
  Tile *v11; // ebx
  _DWORD *v12; // esi
  _DWORD *v13; // eax
  int v14; // edx
  unsigned __int16 v15; // cx
  _DWORD *v16; // eax
  int v17; // edx
  unsigned __int16 v18; // cx
  int ParentMenu; // esi
  Tile *i; // eax
  int v21; // ecx
  float traita; // [esp+10h] [ebp+4h]

  if ( trait == 0xFAD || trait == 0xFAC ) /*0x58b311*/
  {
LABEL_76:
    if ( Tile_GetFloat(this, 0xFA4) == fConstant_2 ) /*0x58b65b*/
      *((_DWORD *)this + 0xB) |= 0x100u; /*0x58b65d*/
    *((_DWORD *)this + 0xB) |= 1u; /*0x58b664*/
    return this; /*0x58b668*/
  }
  if ( trait == 0xFAB ) /*0x58b31d*/
  {
    v10 = this; /*0x58b56f*/
    if ( *((_DWORD *)this + 4) ) /*0x58b562*/
    {
      v11 = *((Tile **)this + 4); /*0x58b575*/
      do /*0x58b5eb*/
      {
        if ( !*((_DWORD *)v11 + 4) ) /*0x58b577*/
          break; /*0x58b57b*/
        v12 = *((_DWORD **)v10 + 6); /*0x58b57d*/
        v13 = v12; /*0x58b580*/
        if ( v12 ) /*0x58b584*/
        {
          while ( 1 ) /*0x58b586*/
          {
            v14 = v13[2]; /*0x58b586*/
            v15 = *(_WORD *)(v14 + 0x18); /*0x58b58c*/
            v13 = (_DWORD *)*v13; /*0x58b595*/
            if ( v15 == 0xFA6 ) /*0x58b597*/
              break; /*0x58b597*/
            if ( v15 > 0xFA6u || !v13 ) /*0x58b59d*/
              goto LABEL_65; /*0x58b59d*/
          }
          if ( fConstant_2 == *(float *)(v14 + 4) ) /*0x58b5b3*/
          {
            v16 = v12; /*0x58b5b5*/
            while ( 1 ) /*0x58b5bb*/
            {
              v17 = v16[2]; /*0x58b5bb*/
              v18 = *(_WORD *)(v17 + 0x18); /*0x58b5c1*/
              v16 = (_DWORD *)*v16; /*0x58b5ca*/
              if ( v18 == 0xFAB ) /*0x58b5cc*/
                break; /*0x58b5cc*/
              if ( v18 > 0xFABu || !v16 ) /*0x58b5d2*/
              {
                traita = 0.0; /*0x58b5d4*/
                goto LABEL_64; /*0x58b5d4*/
              }
            }
            traita = *(float *)(v17 + 4); /*0x58b63c*/
LABEL_64:
            value = traita + value; /*0x58b5d8*/
          }
        }
LABEL_65:
        v10 = v11; /*0x58b5e4*/
        v11 = *((Tile **)v11 + 4); /*0x58b5e6*/
      }
      while ( v11 ); /*0x58b5eb*/
    }
    ParentMenu = Tile_GetParentMenu(this); /*0x58b5f8*/
    for ( i = this; ; i = *((Tile **)i + 4) ) /*0x58b5fa*/
    {
      v21 = *((_DWORD *)i + 4); /*0x58b600*/
      if ( !v21 || !*(_DWORD *)(v21 + 0x10) ) /*0x58b607*/
        break; /*0x58b607*/
    }
    if ( ParentMenu ) /*0x58b615*/
    {
      if ( i ) /*0x58b619*/
      {
        if ( i != this && (double)*(int *)(ParentMenu + 0x18) < value ) /*0x58b62d*/
          *(_DWORD *)(ParentMenu + 0x18) = Double_To_SInt32(value); /*0x58b634*/
      }
    }
    goto LABEL_76; /*0x58b637*/
  }
  if ( (*(int (__thiscall **)(Tile *))(*(_DWORD *)this + 0xC))(this) == 0x387 /*0x58b361*/
    && (trait == 0xFD4 || trait == 0xFD5 || trait == 0xFD6 || trait == 0xFD7 || trait == 0xFD8 || trait == 0xFD3) )
  {
    *((_DWORD *)this + 0xB) |= 2u; /*0x58b363*/
    return this; /*0x58b36c*/
  }
  if ( (trait == 0xFCB || trait == 0xFCA || trait == 0xFDA || trait == 0xFD9) /*0x58b3b1*/
    && ((*(int (__thiscall **)(Tile *))(*(_DWORD *)this + 0xC))(this) == 0x386
     || (*(int (__thiscall **)(Tile *))(*(_DWORD *)this + 0xC))(this) == 0x385) )
  {
    if ( Tile_GetFloat(this, 0xFA4) == fConstant_2 ) /*0x58b541*/
      *((_DWORD *)this + 0xB) |= 0x100u; /*0x58b543*/
    *((_DWORD *)this + 0xB) |= 0x10u; /*0x58b54a*/
    return this; /*0x58b54e*/
  }
  else
  {
    if ( trait == 0xFA4 ) /*0x58b3bd*/
    {
      if ( (*(int (__thiscall **)(Tile *))(*(_DWORD *)this + 0xC))(this) == 0x386 /*0x58b3dd*/
        || (*(int (__thiscall **)(Tile *))(*(_DWORD *)this + 0xC))(this) == 0x385 )
      {
        *((_DWORD *)this + 0xB) |= 0x100u; /*0x58b3e3*/
        return this; /*0x58b3ef*/
      }
      return 0; /*0x58b50f*/
    }
    if ( trait == 0xFC8 ) /*0x58b3f8*/
    {
      if ( (*(int (__thiscall **)(Tile *))(*(_DWORD *)this + 0xC))(this) == 0x386 /*0x58b428*/
        || (*(int (__thiscall **)(Tile *))(*(_DWORD *)this + 0xC))(this) == 0x385
        || (*(int (__thiscall **)(Tile *))(*(_DWORD *)this + 0xC))(this) == 0x387 )
      {
        *((_DWORD *)this + 0xB) |= 0x200u; /*0x58b42e*/
        return this; /*0x58b43a*/
      }
      return 0; /*0x58b428*/
    }
    if ( trait == 0xFA1 || trait == 0xFA3 ) /*0x58b44f*/
    {
      *((_DWORD *)this + 0xB) |= 4u; /*0x58b51e*/
      return this; /*0x58b522*/
    }
    else
    {
      if ( trait != 0xFA7 && trait != 0xFCC && trait != 0xFCD && trait != 0xFCE ) /*0x58b47f*/
      {
        if ( trait == 0xFE6 ) /*0x58b48b*/
        {
          if ( (*(int (__thiscall **)(Tile *))(*(_DWORD *)this + 0xC))(this) == 0x386 && sub_588C10(this, 0xFE6) ) /*0x58b4a0*/
          {
            *((_DWORD *)this + 0xB) |= 0x20u; /*0x58b4a9*/
            return this; /*0x58b4b2*/
          }
          if ( (*(int (__thiscall **)(Tile *))(*(_DWORD *)this + 0xC))(this) == 0x388 && sub_588C10(this, 0xFE6) ) /*0x58b4cc*/
          {
            *((_DWORD *)this + 0xB) |= 0x40u; /*0x58b4d5*/
            return this; /*0x58b4de*/
          }
        }
        else if ( trait == 0xFA8 ) /*0x58b4e7*/
        {
          v6 = (_DWORD *)Tile_GetParentMenu(this); /*0x58b4eb*/
          v7 = v6; /*0x58b4f0*/
          if ( v6 ) /*0x58b4f4*/
          {
            v8 = *v6; /*0x58b4fa*/
            v9 = Double_To_SInt32(value); /*0x58b4fd*/
            (*(void (__thiscall **)(_DWORD *, int, Tile *))(v8 + 4))(v7, v9, this); /*0x58b508*/
          }
        }
        return 0; /*0x58b4d3*/
      }
      *((_DWORD *)this + 0xB) |= 8u; /*0x58b512*/
      return this; /*0x58b516*/
    }
  }
}
