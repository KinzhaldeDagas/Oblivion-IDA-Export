// positive sp value has been detected, the output may be wrong!
void __userpurge sub_593B20(
        _DWORD *a1@<ecx>,
        double a2@<st2>,
        double a3@<st1>,
        double a4@<st0>,
        _DWORD *a5,
        signed int a6)
{
  int *v6; // edi
  TileWindow *v8; // esi
  unsigned int *TileFromTemplate; // eax
  BSStringT *v10; // esi
  int v11; // ebp
  int v12; // eax
  int v13; // ecx
  const char *v14; // eax
  int v15; // [esp-28h] [ebp-164h] BYREF
  float v16; // [esp-24h] [ebp-160h]
  int v17; // [esp-20h] [ebp-15Ch]
  int v18; // [esp-1Ch] [ebp-158h]
  int v19; // [esp-18h] [ebp-154h]
  int v20; // [esp-14h] [ebp-150h]
  int v21; // [esp-10h] [ebp-14Ch]
  BSStringT v22; // [esp-Ch] [ebp-148h] BYREF
  char *v23[2]; // [esp-4h] [ebp-140h] BYREF
  BSStringT v24; // [esp+18h] [ebp-124h]
  char v25[20]; // [esp+28h] [ebp-114h] BYREF
  int v26; // [esp+114h] [ebp-28h]
  int *v27; // [esp+11Ch] [ebp-20h]
  int v28; // [esp+120h] [ebp-1Ch]

  v6 = v27;
  v8 = (TileWindow *)a1[0x14];
  v22.m_data = 0;
  v22.m_dataLen = 0;
  v22.m_bufLen = 0;
  BSStringT_Set(&v22, "effect_template", 0);
  v26 = 0;
  TileFromTemplate = Menu_CreateTileFromTemplate(a1, a2, a3, a4, v8, v22.m_data, 0);
  v10 = (BSStringT *)TileFromTemplate;
  if ( TileFromTemplate )
  {
    v16 = (float)v28;
    Tile_SetFloat((Tile *)TileFromTemplate, (_DWORD *)0xFAE, v16);
    v11 = a1[0x25];
    if ( v11 )
      v12 = v11 + 0x24;
    else
      v12 = 0;
    v16 = *(float *)EffectItem_GetDisplayText((int)v23, v12, 1.0);
    LOBYTE(v26) = 1;
    Tile_SetString(v10, (_DWORD *)0xFB1, (char *)LODWORD(v16));
    LOBYTE(v26) = 0;
    FormHeapFree((unsigned int)v23[0]);
    v23[0] = (char *)&v15;
    EffectItem_GetName(
      v6,
      (int)&v15,
      v13,
      SLODWORD(v16),
      v17,
      v18,
      v19,
      v20,
      v21,
      (int)v22.m_data,
      *(int *)&v22.m_dataLen);
    sub_58A020(v10, v23[0], (int)v23[1]);
    v14 = *(const char **)(v6[7] + 0x48);
    if ( !v14 )
      v14 = EmptyString;
    _sprintf(v25, "%s\\%s", "Icons", v14);
    Tile_SetString(v10, (_DWORD *)0xFAF, v25);
  }
  FormHeapFree((unsigned int)v24.m_data);
}
