char __thiscall sub_4F2270(TESWorldSpace *this, BSStringT *a2, float a3, float a4, float a5)
{
  float v7; // edx
  float v8; // eax
  BSStringT *v9; // edi
  TESForm *v10; // eax
  TESForm *v11; // ebx
  _DWORD *v12; // edi
  int (__thiscall **v13)(_DWORD *, int); // esi
  int *v14; // eax
  int v15; // eax
  int v16; // eax
  const char *v17; // ebx
  int v18; // eax
  int *v19; // esi
  int v20; // ebx
  _DWORD *v21; // eax
  _DWORD *v22; // edi
  int (__thiscall **v23)(_DWORD *, int); // esi
  int v24; // eax
  _BYTE *v25; // esi
  int *v26; // ecx
  int v27; // edi
  unsigned int v28; // eax
  const char *m_data; // eax
  unsigned int v30; // eax
  int v31; // eax
  float v32; // [esp+0h] [ebp-38h]
  float v33; // [esp+4h] [ebp-34h]
  int v34; // [esp+8h] [ebp-30h]
  char v35; // [esp+23h] [ebp-15h]
  int *v36; // [esp+24h] [ebp-14h]
  int v37; // [esp+28h] [ebp-10h]
  float v39[2]; // [esp+30h] [ebp-8h] BYREF

  if ( (dword_B360C8 & 1) == 0 )
  {
    dword_B360C8 |= 1u;
    stru_B360C0.m_data = 0;
    stru_B360C0.m_dataLen = 0;
    stru_B360C0.m_bufLen = 0;
    atexit(sub_A1C070);
  }
  if ( (dword_B360C8 & 2) == 0 )
    dword_B360C8 |= 2u;
  if ( !TESDataHandler )
    return 0;
  if ( (TESWorldSpace *)dword_B360BC == this )
  {
    if ( a3 == flt_B360B0 && a4 == flt_B360B4 && a5 == flt_B360B8 )
    {
      BSStringT_Set(a2, stru_B360C0.m_data, 0);
      return 0;
    }
  }
  else
  {
    BSStringT_Set(&stru_B360C0, EmptyString, 0);
  }
  v7 = a4;
  v8 = a5;
  v9 = a2;
  flt_B360B0 = a3;
  dword_B360BC = (int)this;
  flt_B360B4 = v7;
  flt_B360B8 = v8;
  BSStringT_Set(a2, EmptyString, 0);
  v10 = sub_44A270((TESWorldSpace **)TESDataHandler, a3, a4, this, 0);
  v11 = v10;
  if ( !v10 )
  {
    v18 = *(_DWORD *)(TESDataHandler + 0xBC);
    if ( v18 )
    {
      v19 = (int *)(v18 + 4);
      v36 = (int *)(v18 + 4);
    }
    else
    {
      v36 = 0;
      v19 = 0;
    }
    sub_4A6950(v39, &a3);
    v37 = 0xFFFFFFFF;
    v35 = 0;
    if ( !v19 )
      goto LABEL_52;
    while ( 1 )
    {
      v20 = *v19;
      if ( !*v19 )
        goto LABEL_51;
      if ( (*(_DWORD *)(v20 + 8) & 0x20) != 0
        || *(TESWorldSpace **)(v20 + 0x20) != this
        || (v21 = *(_DWORD **)(v20 + 0x1C)) == 0
        || !v21[1] && !*v21 )
      {
        v26 = (int *)v19[1];
        goto LABEL_49;
      }
      v22 = *(_DWORD **)(TESDataHandler + 0xCD8);
      v23 = (int (__thiscall **)(_DWORD *, int))(*v22 + 0x10);
      v24 = sub_4A4460(*(int **)(v20 + 0x18), 4);
      v25 = (_BYTE *)(*v23)(v22, v24);
      if ( !v25 )
        break;
      v27 = *(_DWORD *)(v20 + 0x1C);
      if ( !v27 )
      {
LABEL_39:
        v26 = (int *)v36[1];
        goto LABEL_49;
      }
      while ( 1 )
      {
        if ( !*(_DWORD *)v27 )
          goto LABEL_39;
        if ( sub_4A7330(*(float **)v27, v39) )
          break;
        v27 = *(_DWORD *)(v27 + 4);
        if ( !v27 )
          goto LABEL_39;
      }
      if ( v25[4] )
      {
        if ( v35 && (unsigned __int8)v25[6] <= v37 )
        {
          v26 = (int *)v36[1];
          goto LABEL_49;
        }
LABEL_46:
        v35 = v25[4];
        v37 = (unsigned __int8)v25[6];
        (*(void (__thiscall **)(_BYTE *, BSStringT *))(*(_DWORD *)v25 + 0x24))(v25, a2);
        v26 = (int *)v36[1];
        goto LABEL_49;
      }
      if ( !v35 && (unsigned __int8)v25[6] > v37 )
        goto LABEL_46;
      v36 = (int *)v36[1];
LABEL_50:
      if ( !v36 )
        goto LABEL_51;
      v19 = v36;
    }
    v26 = (int *)v36[1];
LABEL_49:
    v36 = v26;
    goto LABEL_50;
  }
  if ( !sub_4C9B40((ExtraDataList *)v10, 1) )
  {
LABEL_18:
    v17 = *(const char **)&v11[1].member.type;
    if ( !v17 )
      v17 = EmptyString;
    BSStringT_Set(v9, v17, 0);
    goto LABEL_52;
  }
  v12 = *(_DWORD **)(TESDataHandler + 0xCD8);
  v32 = a3;
  v33 = a4;
  v34 = LODWORD(a5);
  v13 = (int (__thiscall **)(_DWORD *, int))(*v12 + 0x10);
  v14 = (int *)sub_4C9B40((ExtraDataList *)v11, 1);
  v15 = sub_4A67B0(v14, 4, v32, v33, v34, (int)this);
  v16 = (*v13)(v12, v15);
  if ( !v16 )
  {
    v9 = a2;
    goto LABEL_18;
  }
  (*(void (__thiscall **)(int, BSStringT *))(*(_DWORD *)v16 + 0x24))(v16, a2);
LABEL_51:
  v9 = a2;
LABEL_52:
  LOWORD(v28) = v9->m_dataLen;
  if ( (_WORD)v28 == 0xFFFF )
    v28 = strlen(v9->m_data);
  else
    v28 = (unsigned __int16)v28;
  if ( !v28 )
  {
    m_data = this->fullName.name.m_data;
    if ( !m_data )
      m_data = EmptyString;
    BSStringT_Set(v9, m_data, 0);
  }
  LOWORD(v30) = v9->m_dataLen;
  if ( (_WORD)v30 == 0xFFFF )
    v30 = strlen(v9->m_data);
  else
    v30 = (unsigned __int16)v30;
  if ( !v30 )
    BSStringT_Set(v9, (const char *)sDefaultCellName, 0);
  if ( stru_B360C0.m_data && v9->m_data )
    v31 = _strcmp(v9->m_data, stru_B360C0.m_data);
  else
    v31 = 2 * (stru_B360C0.m_data == 0) - 1;
  if ( !v31 )
    return 0;
  BSStringT_Set(&stru_B360C0, v9->m_data, 0);
  return 1;
}
