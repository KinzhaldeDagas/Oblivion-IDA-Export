char __usercall sub_5CDA30@<al>(float *a1@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>)
{
  int v5; // eax
  const char *v6; // eax
  const char *v7; // eax
  _DWORD *v8; // eax
  double Float; // st7
  int v10; // eax
  _DWORD *v11; // ecx
  unsigned int v12; // edx
  const char *v13; // eax
  const char *v14; // eax
  _DWORD *v15; // eax
  const char *v16; // eax
  const char *v17; // eax
  _DWORD *v18; // eax
  int v19; // ebp
  int v20; // ecx
  int v21; // edi
  bool v22; // zf
  char *v23; // eax
  const char *v24; // eax
  const char *v25; // eax
  _DWORD *v26; // eax
  char *v27; // eax
  const char *v28; // eax
  const char *v29; // eax
  _DWORD *v30; // eax
  int (__thiscall *v31)(int, _DWORD, int); // eax
  int v32; // edi
  const char *v33; // eax
  const char *v34; // eax
  _DWORD *v35; // eax
  LowProcess *process; // ecx
  LowProcess_vtbl *v37; // edx
  UInt32 (__thiscall *Unk_E0)(BaseProcess *__hidden); // eax
  const char *v39; // eax
  TESObjectREFR *v40; // ecx
  NiObjectNET *NiNode; // edi
  int v42; // eax
  PlayerCharacter *v43; // ecx
  double v44; // st7
  BSStringT v46; // [esp-18h] [ebp-48h] BYREF
  BSStringT v47; // [esp-10h] [ebp-40h] BYREF
  int v48; // [esp-8h] [ebp-38h]
  int v49; // [esp-4h] [ebp-34h]
  char v50; // [esp+16h] [ebp-1Ah]
  char v51; // [esp+17h] [ebp-19h]
  int v52; // [esp+18h] [ebp-18h]
  __int16 *p_m_dataLen; // [esp+1Ch] [ebp-14h]
  __int16 *v54; // [esp+20h] [ebp-10h]
  int v55; // [esp+2Ch] [ebp-4h]

  v5 = ((int (__usercall *)@<eax>(PlayerCharacter *@<ecx>, double@<st0>, double@<st1>))TESDataHandler_g_PlayerRef->vtbl->super.super.super.GetBaseForm)(
         TESDataHandler_g_PlayerRef,
         a4,
         a3);
  v49 = 0xFAE;
  p_m_dataLen = &v47.m_dataLen;
  v52 = v5;
  v6 = (const char *)dword_B38F78;
  *(_DWORD *)&v47.m_dataLen = 0;
  v48 = 0;
  BSStringT_Set((BSStringT *)&v47.m_dataLen, v6, 0);
  v7 = (const char *)dword_B38F78;
  v54 = &v46.m_dataLen;
  v55 = 0;
  *(_DWORD *)&v46.m_dataLen = 0;
  v47.m_data = 0;
  BSStringT_Set((BSStringT *)&v46.m_dataLen, v7, 0);
  v55 = 0xFFFFFFFF;
  v8 = (_DWORD *)sub_5C3440(a1, *(char **)&v46.m_dataLen, (int)v47.m_data, *(unsigned __int8 **)&v47.m_dataLen, v48);
  Float = Tile_GetFloat(v8, v49);
  v10 = Double_To_SInt32(Float);
  v11 = (_DWORD *)(TESDataHandler + 0x44);
  v12 = 0xFFFFFFFF;
  v51 = 0;
  v50 = 0;
  if ( !v11 )
  {
LABEL_9:
    v13 = (const char *)dword_B38F78;
    v49 = dword_B38B78;
    v48 = 0xFB4;
    v54 = (__int16 *)&v47;
    v47.m_data = 0;
    v47.m_dataLen = 0;
    v47.m_bufLen = 0;
    BSStringT_Set(&v47, v13, 0);
    v14 = (const char *)dword_B38F78;
    p_m_dataLen = (__int16 *)&v46;
    v55 = 5;
    v46.m_data = 0;
    v46.m_dataLen = 0;
    v46.m_bufLen = 0;
    BSStringT_Set(&v46, v14, 0);
    v55 = 0xFFFFFFFF;
    v15 = (_DWORD *)sub_5C3440(
                      a1,
                      v46.m_data,
                      *(int *)&v46.m_dataLen,
                      (unsigned __int8 *)v47.m_data,
                      *(int *)&v47.m_dataLen);
    Tile_SetString(v15, (_DWORD *)v48, (char *)v49);
    v16 = (const char *)dword_B38FB0;
    v49 = (int)word_A36430;
    v48 = 0xFB4;
    v54 = (__int16 *)&v47;
    v47.m_data = 0;
    v47.m_dataLen = 0;
    v47.m_bufLen = 0;
    BSStringT_Set(&v47, v16, 0);
    v55 = 6;
LABEL_10:
    v17 = (const char *)dword_B38F78;
    p_m_dataLen = (__int16 *)&v46;
    v46.m_data = 0;
    v46.m_dataLen = 0;
    v46.m_bufLen = 0;
    BSStringT_Set(&v46, v17, 0);
    v55 = 0xFFFFFFFF;
    v18 = (_DWORD *)sub_5C3440(
                      a1,
                      v46.m_data,
                      *(int *)&v46.m_dataLen,
                      (unsigned __int8 *)v47.m_data,
                      *(int *)&v47.m_dataLen);
    Tile_SetString(v18, (_DWORD *)v48, (char *)v49);
    goto LABEL_11;
  }
  while ( v12 != v10 )
  {
    if ( *v11 )
    {
      if ( (*(_BYTE *)(*v11 + 0x70) & 1) != 0 )
        ++v12;
    }
    if ( v12 != v10 )
      v11 = (_DWORD *)v11[1];
    if ( !v11 )
      goto LABEL_9;
  }
  v21 = *v11;
  if ( !*v11 )
  {
    v39 = (const char *)dword_B38FB0;
    v49 = dword_B38B78;
    v48 = 0xFB4;
    v54 = (__int16 *)&v47;
    v47.m_data = 0;
    v47.m_dataLen = 0;
    v47.m_bufLen = 0;
    BSStringT_Set(&v47, v39, 0);
    v55 = 4;
    goto LABEL_10;
  }
  v22 = sub_52BDB0(*(_DWORD *)(v52 + 0xE8), 0) == 0;
  v23 = *(char **)(v21 + 0x1C);
  v51 = !v22;
  if ( !v23 )
    v23 = EmptyString;
  v49 = (int)v23;
  v24 = (const char *)dword_B38F78;
  v48 = 0xFB4;
  v54 = (__int16 *)&v47;
  v47.m_data = 0;
  v47.m_dataLen = 0;
  v47.m_bufLen = 0;
  BSStringT_Set(&v47, v24, 0);
  v25 = (const char *)dword_B38F70;
  p_m_dataLen = (__int16 *)&v46;
  v55 = 1;
  v46.m_data = 0;
  v46.m_dataLen = 0;
  v46.m_bufLen = 0;
  BSStringT_Set(&v46, v25, 0);
  v55 = 0xFFFFFFFF;
  v26 = (_DWORD *)sub_5C3440(
                    a1,
                    v46.m_data,
                    *(int *)&v46.m_dataLen,
                    (unsigned __int8 *)v47.m_data,
                    *(int *)&v47.m_dataLen);
  Tile_SetString(v26, (_DWORD *)v48, (char *)v49);
  v27 = *(char **)(v21 + 0x1C);
  if ( !v27 )
    v27 = EmptyString;
  v49 = (int)v27;
  v28 = (const char *)dword_B38F78;
  v48 = 0xFB4;
  v54 = (__int16 *)&v47;
  v47.m_data = 0;
  v47.m_dataLen = 0;
  v47.m_bufLen = 0;
  BSStringT_Set(&v47, v28, 0);
  v29 = (const char *)dword_B38F78;
  p_m_dataLen = (__int16 *)&v46;
  v55 = 2;
  v46.m_data = 0;
  v46.m_dataLen = 0;
  v46.m_bufLen = 0;
  BSStringT_Set(&v46, v29, 0);
  v55 = 0xFFFFFFFF;
  v30 = (_DWORD *)sub_5C3440(
                    a1,
                    v46.m_data,
                    *(int *)&v46.m_dataLen,
                    (unsigned __int8 *)v47.m_data,
                    *(int *)&v47.m_dataLen);
  Tile_SetString(v30, (_DWORD *)v48, (char *)v49);
  sub_662710(TESDataHandler_g_PlayerRef);
  MagicTarget_RemoveNonPersistentEffects(&TESDataHandler_g_PlayerRef->super.super.magicTarget, 0);
  sub_5E4B00(TESDataHandler_g_PlayerRef);
  *(_DWORD *)(v52 + 0xE8) = v21;
  v31 = *(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)(v21 + 0x24) + 0x10);
  v32 = v21 + 0x24;
  if ( v31(v32, 0, 0x43534544) )
  {
    v49 = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v32 + 0x10))(v32, 0, 0x43534544);
    v33 = (const char *)dword_B38FB0;
    v48 = 0xFB4;
    v54 = (__int16 *)&v47;
    v47.m_data = 0;
    v47.m_dataLen = 0;
    v47.m_bufLen = 0;
    BSStringT_Set(&v47, v33, 0);
    v34 = (const char *)dword_B38F78;
    p_m_dataLen = (__int16 *)&v46;
    v55 = 3;
    v46.m_data = 0;
    v46.m_dataLen = 0;
    v46.m_bufLen = 0;
    BSStringT_Set(&v46, v34, 0);
    v55 = 0xFFFFFFFF;
    v35 = (_DWORD *)sub_5C3440(
                      a1,
                      v46.m_data,
                      *(int *)&v46.m_dataLen,
                      (unsigned __int8 *)v47.m_data,
                      *(int *)&v47.m_dataLen);
    Tile_SetString(v35, (_DWORD *)v48, (char *)v49);
  }
  v22 = sub_52BDB0(*(_DWORD *)(v52 + 0xE8), 0) == 0;
  process = TESDataHandler_g_PlayerRef->super.super.super.process;
  v37 = process->__vftable;
  v49 = (int)TESDataHandler_g_PlayerRef;
  Unk_E0 = v37->Unk_E0;
  v50 = !v22;
  ((void (__thiscall *)(LowProcess *, int))Unk_E0)(process, v49);
LABEL_11:
  sub_5C9980(a1, a2, a3, 0);
  sub_5C6EA0(a1);
  sub_5C7070(1);
  if ( v50 == v51 )
  {
    UpdatePlayerHead(a2, a3, Float);
  }
  else
  {
    v19 = *((_DWORD *)TESDataHandler_g_PlayerRef->super.super.super.super.niNode + 7);
    TESObjectREFR_Set3D((TESObjectREFR *)TESDataHandler_g_PlayerRef, a2, a3, Float, 0);
    v20 = v52 + 0xAC;
    if ( v50 )
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v20 + 0x18))(v20, dword_B38B68);
    else
      Float = ((double (__thiscall *)(int, int))*(_DWORD *)(*(_DWORD *)v20 + 0x18))(v20, dword_B38B70);
    v40 = (TESObjectREFR *)TESDataHandler_g_PlayerRef;
    g_bUpdatePlayerModel = 1;
    NiNode = (NiObjectNET *)MobileObject_GenerateNiNode(v40, a2, a3, Float);
    (*(void (__thiscall **)(int, NiObjectNET *, int))(*(_DWORD *)v19 + 0x84))(v19, NiNode, 1);
    v49 = (int)"Player";
    g_bUpdatePlayerModel = 0;
    NiObjectNET_SetName(NiNode, (char *)v49);
    v42 = (*((int (__thiscall **)(NiObjectNET *, const char *))NiNode->vtbl + 0x16))(NiNode, "Camera01");
    v43 = TESDataHandler_g_PlayerRef;
    P3Camera = v42;
    v44 = ((double (__thiscall *)(PlayerCharacter *))v43->vtbl->super.super.super.Unk_52)(v43);
    UpdatePlayerHead(a2, a3, v44);
    ((void (__thiscall *)(LowProcess *, PlayerCharacter *))TESDataHandler_g_PlayerRef->super.super.super.process->Unk_E0)(
      TESDataHandler_g_PlayerRef->super.super.super.process,
      TESDataHandler_g_PlayerRef);
  }
  return sub_5C7BA0(a1, 0);
}
