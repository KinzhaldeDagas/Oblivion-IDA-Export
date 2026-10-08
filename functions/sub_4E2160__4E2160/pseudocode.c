void __usercall sub_4E2160(double a1@<st2>, double z@<st1>, int a3, char a4)
{
  NiAVObject *v4; // esi
  PlayerCharacter *v5; // eax
  int v6; // ebx
  TESObjectCELL *v7; // edi
  unsigned int y_low; // ecx
  unsigned int z_low; // edx
  signed int v10; // eax
  int v11; // eax
  float v12; // edx
  float v13; // ecx
  float v14; // edx
  int v15; // eax
  double v16; // st7
  bool v17; // c0
  TESObjectLAND *v18; // eax
  int v19; // edx
  double v20; // st7
  unsigned int v21; // ecx
  float v22; // edx
  int v23; // edi
  _DWORD *v24; // eax
  const char *v25; // eax
  float *v26; // eax
  int v27; // edx
  float v28; // edi
  char v29; // al
  float y; // ecx
  float v31; // edx
  int v32; // eax
  int v33; // eax
  double WaterHeight; // st7
  int v35; // eax
  BSExtraDataVtbl *v36; // eax
  void (__thiscall *Destructor)(BSExtraData *); // eax
  _DWORD *ShadowSceneNode; // eax
  ExtraDataList *v39; // eax
  int v40; // edx
  double v41; // st7
  TESForm *v42; // eax
  __int64 v43; // kr00_8
  char v44; // al
  __int64 v45; // kr08_8
  int v46; // eax
  float a2; // [esp+10h] [ebp-8Ch]
  TESWorldSpace *X; // [esp+14h] [ebp-88h]
  int X_4; // [esp+18h] [ebp-84h]
  int X_4a; // [esp+18h] [ebp-84h]
  unsigned int v51[6]; // [esp+60h] [ebp-3Ch] BYREF
  float v52; // [esp+78h] [ebp-24h]
  TESObjectCELL *parentCell; // [esp+7Ch] [ebp-20h]
  int v54; // [esp+80h] [ebp-1Ch] BYREF
  __int64 v55; // [esp+84h] [ebp-18h] BYREF
  float v56[2]; // [esp+8Ch] [ebp-10h] BYREF
  float v57; // [esp+94h] [ebp-8h]
  float v58; // [esp+98h] [ebp-4h]

  *(float *)&v4 = COERCE_FLOAT(Shared_GetPointerAtOffset08((Atmosphere *)a3)); /*0x4e2174*/
  v52 = *(float *)&v4; /*0x4e2177*/
  v5 = sub_4DC270((int)v4); /*0x4e217b*/
  v6 = (int)v5; /*0x4e2180*/
  if ( v5 ) /*0x4e2187*/
  {
    if ( (a4 & 1) == 0 ) /*0x4e2191*/
    {
LABEL_39:
      if ( (a4 & 2) != 0 ) /*0x4e268a*/
      {
        sub_711300((float *)&v4->members.m_worldTransform, (float *)&v54, (float *)&v55, (float *)&v55 + 1); /*0x4e269e*/
        v44 = sub_46B5C0(0); /*0x4e26a5*/
        v45 = v55; /*0x4e26ae*/
        LOBYTE(parentCell) = v44; /*0x4e26b2*/
        *(_DWORD *)(v6 + 0x20) = v54; /*0x4e26ba*/
        v46 = *(_DWORD *)v6; /*0x4e26bd*/
        *(_QWORD *)(v6 + 0x24) = v45; /*0x4e26bf*/
        (*(void (__thiscall **)(int, int))(v46 + 0x40))(v6, 4); /*0x4e26cf*/
        sub_46B5C0((char)parentCell); /*0x4e26d6*/
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v6 + 0x40))(v6, 8); /*0x4e26e7*/
      }
      return; /*0x4e26e7*/
    }
    parentCell = v5->super.super.super.super.parentCell; /*0x4e219c*/
    v7 = parentCell; /*0x4e2197*/
    if ( parentCell ) /*0x4e21a0*/
    {
      y_low = LODWORD(v4->members.m_worldTransform.pos.y); /*0x4e21ac*/
      z_low = LODWORD(v4->members.m_worldTransform.pos.z); /*0x4e21b2*/
      v51[1] = LODWORD(v4->members.m_worldTransform.pos.x); /*0x4e21b8*/
      v51[2] = y_low; /*0x4e21c6*/
      v51[3] = z_low; /*0x4e21ca*/
      if ( _finite(*(float *)&v51[1]) /*0x4e2250*/
        && _finite(*(float *)&v51[2])
        && _finite(*(float *)&v51[3])
        && !_isnan(*(float *)&v51[1])
        && !_isnan(*(float *)&v51[2])
        && !_isnan(*(float *)&v51[3]) )
      {
        if ( TESObjectCELL_IsInterior(parentCell) ) /*0x4e2262*/
        {
          v10 = sub_4C9BE0((TESObjectREFR *)v6); /*0x4e2270*/
          v11 = sub_441800(parentCell, v10, 2u); /*0x4e227d*/
          if ( !v11 ) /*0x4e2284*/
            goto LABEL_26; /*0x4e2284*/
          v12 = *(float *)(v11 + 0x24); /*0x4e228d*/
          v56[0] = *(float *)(v11 + 0x20); /*0x4e2290*/
          v13 = *(float *)(v11 + 0x28); /*0x4e2294*/
          v56[1] = v12; /*0x4e2297*/
          v14 = *(float *)(v11 + 0x2C); /*0x4e229b*/
          v57 = v13; /*0x4e229e*/
          v58 = v14; /*0x4e22ab*/
          if ( !NiPoint3__NotEqual(v56, &g_zeroNiPoint3) ) /*0x4e22b2*/
            goto LABEL_26; /*0x4e22b2*/
          z = v57 - v4->members.m_worldTransform.pos.z; /*0x4e22c5*/
          a1 = v58; /*0x4e22cb*/
          if ( v58 >= z ) /*0x4e22d6*/
            goto LABEL_26; /*0x4e22d6*/
          v15 = *(_DWORD *)v6; /*0x4e22dc*/
          *(double *)&v51[1] = v57; /*0x4e22de*/
          v16 = *(double *)&v51[1] - *(float *)((*(int (__thiscall **)(int, int *))(v15 + 0xF4))(v6, &v54) + 8); /*0x4e22f4*/
          z = v58; /*0x4e22f8*/
          v17 = v58 < v16; /*0x4e22fc*/
        }
        else
        {
          if ( !sub_4CE3C0(parentCell) ) /*0x4e2302*/
            goto LABEL_26; /*0x4e2302*/
          v18 = sub_4CE3C0(parentCell); /*0x4e2316*/
          *(float *)&v51[1] = *sub_4C46B0(v18, (float *)&v51[1]) - dbl_A3F428; /*0x4e232a*/
          z = v4->members.m_worldTransform.pos.z; /*0x4e2332*/
          if ( z >= *(float *)&v51[1] ) /*0x4e233f*/
            goto LABEL_26; /*0x4e233f*/
          v19 = *(_DWORD *)v6; /*0x4e2345*/
          *(double *)&v51[1] = *(float *)&v51[1]; /*0x4e2347*/
          v20 = *(float *)((*(int (__thiscall **)(int, int *))(v19 + 0xF4))(v6, &v54) + 8); /*0x4e235a*/
          v17 = v20 < *(double *)&v51[1]; /*0x4e235d*/
        }
        if ( v17 ) /*0x4e2366*/
        {
          v21 = *((_DWORD *)&g_zeroNiPoint3 + 1); /*0x4e236d*/
          v22 = MEMORY[0xB3F9B0][0]; /*0x4e2373*/
          *(float *)&v51[1] = g_zeroNiPoint3; /*0x4e2379*/
          v51[2] = v21; /*0x4e237d*/
          *(float *)&v51[3] = v22; /*0x4e238d*/
          sub_4D5D70(v7, a1, z, (float *)&v51[1], &v54); /*0x4e2391*/
          (*(void (__thiscall **)(int, unsigned int, unsigned int, unsigned int))(*(_DWORD *)v6 + 0xF8))( /*0x4e23b9*/
            v6,
            v51[1],
            v51[2],
            v51[3]);
        }
      }
      v23 = (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 0x154))(v6); /*0x4e23c7*/
      v51[1] = v23; /*0x4e23cb*/
      if ( v23 ) /*0x4e23cf*/
      {
        v24 = (_DWORD *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)v6 + 0xF4))(v6, &v54); /*0x4e23e0*/
        *(_DWORD *)(v23 + 0x54) = *v24; /*0x4e23e4*/
        *(_DWORD *)(v23 + 0x58) = v24[1]; /*0x4e23ea*/
        *(_DWORD *)(v23 + 0x5C) = v24[2]; /*0x4e23f0*/
        qmemcpy((void *)(v23 + 0x30), &stru_B26AF0[0xA].unk2C, 0x24u); /*0x4e2400*/
        v23 = v51[1]; /*0x4e2402*/
        *(float *)&v4 = v52; /*0x4e2406*/
      }
      sub_897A20(v23, 1); /*0x4e240d*/
      NiAVObject_UpdateNiAVObject((NiAVObject *)v23, 0.0, 1); /*0x4e241f*/
      v51[1] = *(_DWORD *)(a3 + 0x10); /*0x4e242c*/
      if ( v51[1] ) /*0x4e2430*/
      {
        v52 = sub_4D6A70((_DWORD *)v51[1]) * dbl_A3C770; /*0x4e243d*/
        z = v52; /*0x4e2447*/
        if ( v52 <= (double)flt_A31E2C ) /*0x4e2454*/
        {
          (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)a3 + 0x70))(a3, 6, 0); /*0x4e2472*/
          *(_WORD *)(a3 + 0xC) &= ~4u; /*0x4e2474*/
          v25 = (const char *)(*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v6 + 0xD4))(v6, *(_DWORD *)(v6 + 0xC)); /*0x4e2488*/
          PrintError("Disabling collision on ref '%s' (%08X).", v25, X_4); /*0x4e2490*/
        }
        else
        {
          sub_4D6B70((_DWORD *)v51[1], v52); /*0x4e245e*/
        }
      }
    }
LABEL_26:
    v26 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v6 + 0x174))(v6); /*0x4e249c*/
    v27 = *((_DWORD *)v26 + 2); /*0x4e24ab*/
    v28 = *v26; /*0x4e24ae*/
    *(float *)&v55 = v26[1]; /*0x4e24b2*/
    HIDWORD(v55) = v27; /*0x4e24b6*/
    v29 = sub_46B5C0(0); /*0x4e24ba*/
    y = v4->members.m_worldTransform.pos.y; /*0x4e24bf*/
    v31 = v4->members.m_worldTransform.pos.z; /*0x4e24c5*/
    LOBYTE(v52) = v29; /*0x4e24cb*/
    *(float *)(v6 + 0x2C) = v4->members.m_worldTransform.pos.x; /*0x4e24d5*/
    v32 = *(_DWORD *)v6; /*0x4e24d8*/
    *(float *)(v6 + 0x30) = y; /*0x4e24da*/
    *(float *)(v6 + 0x34) = v31; /*0x4e24e0*/
    (*(void (__thiscall **)(int, int))(v32 + 0x40))(v6, 4); /*0x4e24ea*/
    sub_46B5C0(SLOBYTE(v52)); /*0x4e24f1*/
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v6 + 0x40))(v6, 8); /*0x4e2502*/
    if ( *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)v6 + 0x170))(v6) + 4) == 0x1A /*0x4e251f*/
      && (*(_DWORD *)(v6 + 8) & 0x80) == 0 )
    {
      v33 = *(_DWORD *)v6; /*0x4e2524*/
      v52 = *(float *)(v6 + 0x40); /*0x4e2526*/
      *(double *)&v51[1] = *(float *)((*(int (__thiscall **)(int))(v33 + 0x174))(v6) + 8); /*0x4e253b*/
      WaterHeight = TESObjectCELL_GetWaterHeight((ExtraDataList *)LODWORD(v52)); /*0x4e253f*/
      if ( WaterHeight > *(double *)&v51[1] ) /*0x4e254d*/
      {
        sub_46AB60((_DWORD *)v6, 1); /*0x4e2553*/
        v35 = (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 0x154))(v6); /*0x4e2562*/
        sub_4DE1C0((int)v4, v35); /*0x4e2565*/
        v36 = ExtraDataList_GetLight((ExtraDataList *)(v6 + 0x44)); /*0x4e2570*/
        if ( v36 ) /*0x4e2577*/
        {
          Destructor = v36->Destructor; /*0x4e2579*/
          if ( Destructor ) /*0x4e257d*/
          {
            X_4a = (int)Destructor; /*0x4e257f*/
            ShadowSceneNode = (_DWORD *)GetShadowSceneNode(0); /*0x4e2582*/
            ShadowSceneNode_RemoveFullLightBySource(ShadowSceneNode, X_4a); /*0x4e258c*/
          }
        }
      }
    }
    if ( !MEMORY[0xB333A0]->currentInteriorCell ) /*0x4e2597*/
    {
      v51[1] = (unsigned int)TES::GetCurrentWorldspace(MEMORY[0xB333A0]); /*0x4e25a6*/
      if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v6 + 0x190))(v6) ) /*0x4e25b4*/
        sub_5E1360((_BYTE *)v6, 0); /*0x4e25be*/
      *(float *)&v39 = COERCE_FLOAT((*(int (__thiscall **)(int))(*(_DWORD *)v6 + 0x174))(v6)); /*0x4e25cd*/
      v40 = *(_DWORD *)v6; /*0x4e25cf*/
      v52 = *(float *)&v39; /*0x4e25d1*/
      X = (TESWorldSpace *)v51[1]; /*0x4e25db*/
      a2 = *(float *)((*(int (__thiscall **)(int))(v40 + 0x174))(v6) + 4); /*0x4e25f0*/
      v41 = *(float *)LODWORD(v52); /*0x4e25f4*/
      v42 = sub_44A270((TESWorldSpace **)g_TESDataHandler, *(float *)LODWORD(v52), a2, X, 0); /*0x4e25ff*/
      if ( v42 != (TESForm *)parentCell ) /*0x4e2608*/
      {
        if ( v42 ) /*0x4e260e*/
        {
          LOBYTE(parentCell) = sub_46B5C0(0); /*0x4e2670*/
          sub_4DD4B0(v6, a1, z, v41, (Actor *)v6, 0, (TESObjectCELL **)v51[1]); /*0x4e2674*/
          sub_46B5C0((char)parentCell); /*0x4e267e*/
        }
        else
        {
          LOBYTE(parentCell) = sub_46B5C0(0); /*0x4e2620*/
          TESObjectREFR_SetPosition((TESObjectREFR *)v6, v28, *(float *)&v55, *((float *)&v55 + 1)); /*0x4e2630*/
          sub_46B5C0((char)parentCell); /*0x4e263a*/
          v43 = v55; /*0x4e2643*/
          v4->members.m_localTransform.pos.x = v28; /*0x4e2647*/
          *(_QWORD *)&v4->members.m_localTransform.pos.y = v43; /*0x4e264a*/
          (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)a3 + 0x70))(a3, 6, 0); /*0x4e265f*/
        }
      }
    }
    goto LABEL_39; /*0x4e2661*/
  }
}
