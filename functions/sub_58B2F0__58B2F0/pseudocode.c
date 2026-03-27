_DWORD *__thiscall sub_58B2F0(_DWORD *this, int a2, float a3, int a4)
{
  _DWORD *v6; // eax
  _DWORD *v7; // esi
  int v8; // ebx
  int v9; // eax
  _DWORD *v10; // eax
  _DWORD *v11; // ebx
  _DWORD *v12; // esi
  _DWORD *v13; // eax
  int v14; // edx
  unsigned __int16 v15; // cx
  _DWORD *v16; // eax
  int v17; // edx
  unsigned __int16 v18; // cx
  int ParentMenu; // esi
  _DWORD *i; // eax
  int v21; // ecx
  int v22; // [esp+10h] [ebp+4h]

  if ( a2 == 0xFAD || a2 == 0xFAC )
  {
LABEL_76:
    if ( Tile_GetFloat(this, 0xFA4) == fConstant_2 )
      *(this + 0xB) |= 0x100u;
    *(this + 0xB) |= 1u;
    return this;
  }
  if ( a2 == 0xFAB )
  {
    v10 = this;
    if ( *(this + 4) )
    {
      v11 = (_DWORD *)*(this + 4);
      do
      {
        if ( !v11[4] )
          break;
        v12 = (_DWORD *)v10[6];
        v13 = v12;
        if ( v12 )
        {
          while ( 1 )
          {
            v14 = v13[2];
            v15 = *(_WORD *)(v14 + 0x18);
            v13 = (_DWORD *)*v13;
            if ( v15 == 0xFA6 )
              break;
            if ( v15 > 0xFA6u || !v13 )
              goto LABEL_65;
          }
          if ( fConstant_2 == *(float *)(v14 + 4) )
          {
            v16 = v12;
            while ( 1 )
            {
              v17 = v16[2];
              v18 = *(_WORD *)(v17 + 0x18);
              v16 = (_DWORD *)*v16;
              if ( v18 == 0xFAB )
                break;
              if ( v18 > 0xFABu || !v16 )
              {
                *(float *)&v22 = 0.0;
                goto LABEL_64;
              }
            }
            v22 = *(int *)(v17 + 4);
LABEL_64:
            a3 = *(float *)&v22 + a3;
          }
        }
LABEL_65:
        v10 = v11;
        v11 = (_DWORD *)v11[4];
      }
      while ( v11 );
    }
    ParentMenu = Tile_GetParentMenu(this);
    for ( i = this; ; i = (_DWORD *)i[4] )
    {
      v21 = i[4];
      if ( !v21 || !*(_DWORD *)(v21 + 0x10) )
        break;
    }
    if ( ParentMenu )
    {
      if ( i )
      {
        if ( i != this && (double)*(int *)(ParentMenu + 0x18) < a3 )
          *(_DWORD *)(ParentMenu + 0x18) = Double_To_SInt32(a3);
      }
    }
    goto LABEL_76;
  }
  if ( (*(int (__thiscall **)(_DWORD *))(*this + 0xC))(this) == 0x387
    && (a2 == 0xFD4 || a2 == 0xFD5 || a2 == 0xFD6 || a2 == 0xFD7 || a2 == 0xFD8 || a2 == 0xFD3) )
  {
    *(this + 0xB) |= 2u;
    return this;
  }
  if ( (a2 == 0xFCB || a2 == 0xFCA || a2 == 0xFDA || a2 == 0xFD9)
    && ((*(int (__thiscall **)(_DWORD *))(*this + 0xC))(this) == 0x386
     || (*(int (__thiscall **)(_DWORD *))(*this + 0xC))(this) == 0x385) )
  {
    if ( Tile_GetFloat(this, 0xFA4) == fConstant_2 )
      *(this + 0xB) |= 0x100u;
    *(this + 0xB) |= 0x10u;
    return this;
  }
  else
  {
    if ( a2 == 0xFA4 )
    {
      if ( (*(int (__thiscall **)(_DWORD *))(*this + 0xC))(this) == 0x386
        || (*(int (__thiscall **)(_DWORD *))(*this + 0xC))(this) == 0x385 )
      {
        *(this + 0xB) |= 0x100u;
        return this;
      }
      return 0;
    }
    if ( a2 == 0xFC8 )
    {
      if ( (*(int (__thiscall **)(_DWORD *))(*this + 0xC))(this) == 0x386
        || (*(int (__thiscall **)(_DWORD *))(*this + 0xC))(this) == 0x385
        || (*(int (__thiscall **)(_DWORD *))(*this + 0xC))(this) == 0x387 )
      {
        *(this + 0xB) |= 0x200u;
        return this;
      }
      return 0;
    }
    if ( a2 == 0xFA1 || a2 == 0xFA3 )
    {
      *(this + 0xB) |= 4u;
      return this;
    }
    else
    {
      if ( a2 != 0xFA7 && a2 != 0xFCC && a2 != 0xFCD && a2 != 0xFCE )
      {
        if ( a2 == 0xFE6 )
        {
          if ( (*(int (__thiscall **)(_DWORD *))(*this + 0xC))(this) == 0x386 && sub_588C10(this, 0xFE6) )
          {
            *(this + 0xB) |= 0x20u;
            return this;
          }
          if ( (*(int (__thiscall **)(_DWORD *))(*this + 0xC))(this) == 0x388 && sub_588C10(this, 0xFE6) )
          {
            *(this + 0xB) |= 0x40u;
            return this;
          }
        }
        else if ( a2 == 0xFA8 )
        {
          v6 = (_DWORD *)Tile_GetParentMenu(this);
          v7 = v6;
          if ( v6 )
          {
            v8 = *v6;
            v9 = Double_To_SInt32(a3);
            (*(void (__thiscall **)(_DWORD *, int, _DWORD *))(v8 + 4))(v7, v9, this);
          }
        }
        return 0;
      }
      *(this + 0xB) |= 8u;
      return this;
    }
  }
}
