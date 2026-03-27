double __thiscall sub_4CC1A0(ExtraDataList *this, float *a2, int a3, int a4)
{
  BSExtraData *v5; // eax
  BSExtraDataMembr *p_members; // ebx
  int v8; // edi
  int v9; // eax
  double v10; // st7
  int v11; // eax
  _BYTE *v12; // esi
  float **v13; // edi
  float *v14; // ebx
  double v15; // st7
  double v16; // st7
  int v18; // eax
  _DWORD *v19; // eax
  int v20; // esi
  int v21; // ebx
  int *v22; // eax
  float *v23; // esi
  double v24; // st7
  double v25; // st7
  int v26; // [esp+0h] [ebp-28h]
  float v27; // [esp+4h] [ebp-24h]
  float v28; // [esp+4h] [ebp-24h]
  BSExtraDataMembr *next; // [esp+18h] [ebp-10h]
  float v30; // [esp+1Ch] [ebp-Ch]
  float v31; // [esp+20h] [ebp-8h]
  unsigned int i; // [esp+24h] [ebp-4h]
  int NextObject; // [esp+34h] [ebp+Ch]
  float v35; // [esp+34h] [ebp+Ch]
  int v36; // [esp+34h] [ebp+Ch]
  float v37; // [esp+34h] [ebp+Ch]

  v5 = sub_4C9B40(this, 1);
  if ( v5 )
  {
    p_members = &v5->members;
    next = &v5->members;
  }
  else
  {
    next = 0;
    p_members = 0;
  }
  if ( (*((_BYTE *)this + 0x24) & 1) != 0 || !p_members )
    return 0.0;
  v31 = flt_A32048;
  v8 = 0xFFFFFFFF;
  for ( i = 0xFFFFFFFF; ; v8 = i )
  {
    v9 = *(_DWORD *)&p_members->type;
    v10 = 0.0;
    if ( !*(_DWORD *)&p_members->type )
      break;
    if ( (*(_DWORD *)(v9 + 8) & 0x20) != 0 )
    {
      next = (BSExtraDataMembr *)p_members->next;
      goto LABEL_31;
    }
    v30 = 0.0;
    v11 = sub_4A4460(*(int **)(v9 + 0x18), a3);
    v12 = (_BYTE *)v11;
    if ( !v11 || !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v11 + 0x1C))(v11) )
      goto LABEL_30;
    if ( v12[4] )
    {
      if ( (unsigned __int8)v12[6] <= v8 )
      {
        next = (BSExtraDataMembr *)p_members->next;
        goto LABEL_31;
      }
    }
    else if ( v8 >= 0 )
    {
      goto LABEL_30;
    }
    v13 = *(float ***)(*(_DWORD *)&p_members->type + 0x1C);
    if ( !v13 )
    {
LABEL_30:
      next = (BSExtraDataMembr *)p_members->next;
      goto LABEL_31;
    }
    do
    {
      v14 = *v13;
      if ( !*v13 )
        break;
      if ( v30 > 0.0 )
        goto LABEL_35;
      NextObject = TESObject_GetNextObject(*v13);
      v15 = (double)NextObject;
      if ( NextObject < 0 )
        v15 = v15 + flt_A2FC78;
      v27 = v15;
      v35 = sub_4A74E0(v14, a2, v27);
      v16 = v35 <= 1.0 ? v35 : (float)1.0;
      if ( v30 <= v16 )
        v30 = v16;
      v13 = (float **)v13[1];
    }
    while ( v13 );
    if ( v30 <= 0.0 )
    {
      p_members = next;
      goto LABEL_30;
    }
LABEL_35:
    if ( v12[4] )
    {
      v31 = flt_A32048;
      i = (unsigned __int8)v12[6];
    }
    if ( (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v12 + 0xC))(v12) == 2
      && a4
      && (*(int (__thiscall **)(int))(*(_DWORD *)a4 + 4))(a4)
      && !(**(int (__thiscall ***)(int))a4)(a4) )
    {
      v18 = (*(int (__thiscall **)(_DWORD, _BYTE *))(**(_DWORD **)(TESDataHandler + 0xCD8) + 8))(
              *(_DWORD *)(TESDataHandler + 0xCD8),
              v12);
      v19 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v18 + 0x28))(v18);
      if ( !sub_4A6860(v19, a4, 1, 0) )
      {
        next = (BSExtraDataMembr *)next->next;
        goto LABEL_31;
      }
    }
    else if ( (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v12 + 0xC))(v12) == 6 )
    {
      if ( a4 )
      {
        if ( (*(int (__thiscall **)(int))(*(_DWORD *)a4 + 4))(a4) )
        {
          if ( (**(int (__thiscall ***)(int))a4)(a4) == 1 )
          {
            v20 = (*(int (__thiscall **)(_DWORD, _BYTE *))(**(_DWORD **)(TESDataHandler + 0xCD8) + 0x18))(
                    *(_DWORD *)(TESDataHandler + 0xCD8),
                    v12);
            v21 = (*(int (__thiscall **)(int))(*(_DWORD *)a4 + 0xC))(a4)
                ? *(_DWORD *)((*(int (__thiscall **)(int))(*(_DWORD *)a4 + 0xC))(a4) + 0xC)
                : 0xFFFFFFFF;
            v26 = *(_DWORD *)((*(int (__thiscall **)(int))(*(_DWORD *)a4 + 4))(a4) + 0xC);
            v22 = (int *)(*(int (__thiscall **)(int))(*(_DWORD *)v20 + 0x24))(v20);
            if ( !sub_4A6070(v22, v26, v21) )
            {
              next = (BSExtraDataMembr *)next->next;
              goto LABEL_31;
            }
          }
        }
      }
    }
    for ( ; v13; v13 = (float **)v13[1] )
    {
      v23 = *v13;
      if ( !*v13 )
        break;
      v36 = TESObject_GetNextObject(*v13);
      v24 = (double)v36;
      if ( v36 < 0 )
        v24 = v24 + flt_A2FC78;
      v28 = v24;
      v37 = sub_4A74E0(v23, a2, v28);
      v25 = v37 <= 1.0 ? v37 : (float)1.0;
      if ( v30 <= v25 )
        v30 = v25;
    }
    if ( v30 <= (double)v31 )
      v31 = v30;
    next = (BSExtraDataMembr *)next->next;
LABEL_31:
    if ( !next )
    {
      v10 = 0.0;
      break;
    }
    p_members = next;
  }
  if ( v31 >= v10 && v31 <= 1.0 )
    return v31;
  return (float)v10;
}
