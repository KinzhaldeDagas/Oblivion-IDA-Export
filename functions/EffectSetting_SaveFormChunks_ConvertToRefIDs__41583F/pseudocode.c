int __usercall EffectSetting_SaveFormChunks_::ConvertToRefIDs@<eax>(
        _DWORD *a1@<esi>,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11)
{
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // ebp
  int v20; // eax
  int v21; // ebx
  int v22; // eax
  int v23; // edi
  int v24; // eax
  int v26; // [esp+4h] [ebp+4h]
  int v27; // [esp+8h] [ebp+8h]
  int v28; // [esp+Ch] [ebp+Ch]
  int v29; // [esp+10h] [ebp+10h]

  v11 = a1[0x20];
  v26 = v11;
  if ( v11 )
    v12 = *(_DWORD *)(v11 + 0xC);
  else
    v12 = 0;
  a1[0x20] = v12;
  v13 = a1[0x21];
  v27 = v13;
  if ( v13 )
    v14 = *(_DWORD *)(v13 + 0xC);
  else
    v14 = 0;
  a1[0x21] = v14;
  v15 = a1[0x22];
  v28 = v15;
  if ( v15 )
    v16 = *(_DWORD *)(v15 + 0xC);
  else
    v16 = 0;
  a1[0x22] = v16;
  v17 = a1[0x23];
  v29 = v17;
  if ( v17 )
    v18 = *(_DWORD *)(v17 + 0xC);
  else
    v18 = 0;
  v19 = a1[0x1E];
  a1[0x23] = v18;
  if ( v19 )
    v20 = *(_DWORD *)(v19 + 0xC);
  else
    v20 = 0;
  v21 = a1[0x1F];
  a1[0x1E] = v20;
  if ( v21 )
    v22 = *(_DWORD *)(v21 + 0xC);
  else
    v22 = 0;
  v23 = a1[0x1C];
  a1[0x1F] = v22;
  if ( v23 )
    v24 = *(_DWORD *)(v23 + 0xC);
  else
    v24 = 0;
  a1[0x1C] = v24;
  return EffectSetting_SaveFormChunks_::SaveDataBlock((int)a1, v26, v27, v28, v29, a6, a7, a8, a9, a10, a11);
}
