BSExtraData *__thiscall TESObjectCELL_GetMusicType(TESObjectCELL *this, int a2)
{
  float v3; // eax
  int v4; // ecx
  int v5; // edx
  BSExtraData *v6; // esi
  int *v7; // ecx
  TESWorldSpace *worldSpace; // ecx
  char v11; // bl
  CellCoordinates *coords; // eax
  SInt32 x; // eax
  TESCELL_CoordOrLight v14; // eax
  SInt32 y; // eax
  int *v16; // ebp
  int v17; // eax
  int v18; // ebx
  int v19; // eax
  int v20; // eax
  int v21; // ebp
  int *v22; // esi
  int v23; // eax
  int v24; // ebx
  int v25; // eax
  int v26; // eax
  TESWorldSpace *v27; // ecx
  int v28; // [esp+10h] [ebp-Ch]
  int *v29; // [esp+18h] [ebp-4h]
  int v30; // [esp+20h] [ebp+4h]

  sub_496EA0((char *)&stru_B35C80, this);
  if ( (dword_B35E10 & 1) == 0 )
  {
    v3 = Vector3_InitValue_;
    v4 = *((_DWORD *)&Vector3_InitValue_ + 1);
    v5 = LODWORD(dword_B3F9B0);
    dword_B35E10 |= 1u;
    *(float *)&qword_B35E04 = v3;
    HIDWORD(qword_B35E04) = v4;
    dword_B35E0C = v5;
  }
  v6 = sub_41F9C0(&this->members.extraData);
  if ( v6 || (this->members.flags0 & 1) != 0 )
    goto LABEL_9;
  v7 = (int *)sub_41F9B0(&this->members.extraData);
  v29 = v7;
  if ( !v7 )
  {
    if ( (this->members.flags0 & 1) == 0 )
    {
      worldSpace = this->members.worldSpace;
      if ( worldSpace )
        v6 = (BSExtraData *)sub_4EF0F0(worldSpace);
    }
LABEL_9:
    sub_496F50(&stru_B35C80, this);
    return v6;
  }
  if ( a2
    && ((v11 = this->members.flags0 & 1) != 0 || (coords = this->members.coordOrLight.coords) == 0
      ? (x = 0)
      : (x = coords->x),
        (v30 = x << 0xC, v28 = (x << 0xC) + 0x1000, v11)
     || (v14.coords = (CellCoordinates *)this->members.coordOrLight) == 0
      ? (y = 0)
      : (y = v14.coords->y),
        (double)v30 <= *(float *)a2
     && (double)v28 >= *(float *)a2
     && (double)(y << 0xC) <= *(float *)(a2 + 4)
     && (double)((y << 0xC) + 0x1000) >= *(float *)(a2 + 4)) )
  {
    if ( sub_8AA350((float *)a2, (float *)&qword_B35E04) && dword_B09554 != 3 )
    {
      sub_496F50(&stru_B35C80, this);
      return (BSExtraData *)dword_B09554;
    }
    v16 = *(int **)(TESDataHandler + 0xCD8);
    v17 = 0;
    if ( !v11 )
      v17 = (int)this->members.worldSpace;
    v18 = *v16;
    v19 = sub_4A67B0(v29, 7, *(float *)a2, *(float *)(a2 + 4), *(_DWORD *)(a2 + 8), v17);
    v20 = (*(int (__thiscall **)(int *, int))(v18 + 0x1C))(v16, v19);
    if ( v20 )
    {
      v21 = (*(int (__thiscall **)(int))(*(_DWORD *)v20 + 0x24))(v20);
      dword_B09554 = v21;
    }
    else
    {
      v21 = 0;
      dword_B09554 = 0;
    }
    LODWORD(qword_B35E04) = *(_DWORD *)a2;
    HIDWORD(qword_B35E04) = *(_DWORD *)(a2 + 4);
    dword_B35E0C = *(_DWORD *)(a2 + 8);
    dword_B35E00 = 0;
  }
  else if ( dword_B35E00 && (TESObjectCELL *)dword_B35E00 == this )
  {
    v21 = dword_B09554;
  }
  else
  {
    v22 = *(int **)(TESDataHandler + 0xCD8);
    v23 = 0;
    if ( (this->members.flags0 & 1) == 0 )
      v23 = (int)this->members.worldSpace;
    v24 = *v22;
    v25 = sub_4A6460(v7, 7, 0, v23);
    v26 = (*(int (__thiscall **)(int *, int))(v24 + 0x1C))(v22, v25);
    if ( v26 )
      v21 = (*(int (__thiscall **)(int))(*(_DWORD *)v26 + 0x24))(v26);
    else
      v21 = 0;
    dword_B09554 = v21;
    dword_B35E00 = (int)this;
  }
  if ( !v21 && (this->members.flags0 & 1) == 0 )
  {
    v27 = this->members.worldSpace;
    if ( v27 )
    {
      v21 = sub_4EF0F0(v27);
      dword_B09554 = v21;
    }
  }
  sub_496F50(&stru_B35C80, this);
  return (BSExtraData *)v21;
}
