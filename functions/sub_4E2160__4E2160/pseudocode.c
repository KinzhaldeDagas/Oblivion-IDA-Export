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
  unsigned int v22; // edx
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

  *(float *)&v4 = COERCE_FLOAT(sub_452A60((Atmosphere *)a3));
  v52 = *(float *)&v4;
  v5 = sub_4DC270((int)v4);
  v6 = (int)v5;
  if ( v5 )
  {
    if ( (a4 & 1) == 0 )
    {
LABEL_39:
      if ( (a4 & 2) != 0 )
      {
        sub_711300((float *)&v4->members.m_worldTransform, (float *)&v54, (float *)&v55, (float *)&v55 + 1);
        v44 = sub_46B5C0(0);
        v45 = v55;
        LOBYTE(parentCell) = v44;
        *(_DWORD *)(v6 + 0x20) = v54;
        v46 = *(_DWORD *)v6;
        *(_QWORD *)(v6 + 0x24) = v45;
        (*(void (__thiscall **)(int, int))(v46 + 0x40))(v6, 4);
        sub_46B5C0((char)parentCell);
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v6 + 0x40))(v6, 8);
      }
      return;
    }
    parentCell = v5->super.super.super.super.parentCell;
    v7 = parentCell;
    if ( parentCell )
    {
      y_low = LODWORD(v4->members.m_worldTransform.pos.y);
      z_low = LODWORD(v4->members.m_worldTransform.pos.z);
      v51[1] = LODWORD(v4->members.m_worldTransform.pos.x);
      v51[2] = y_low;
      v51[3] = z_low;
      if ( _finite(*(float *)&v51[1])
        && _finite(*(float *)&v51[2])
        && _finite(*(float *)&v51[3])
        && !_isnan(*(float *)&v51[1])
        && !_isnan(*(float *)&v51[2])
        && !_isnan(*(float *)&v51[3]) )
      {
        if ( TESObjectCELL_IsInterior(parentCell) )
        {
          v10 = sub_4C9BE0((TESObjectREFR *)v6);
          v11 = sub_441800(parentCell, v10, 2u);
          if ( !v11 )
            goto LABEL_26;
          v12 = *(float *)(v11 + 0x24);
          v56[0] = *(float *)(v11 + 0x20);
          v13 = *(float *)(v11 + 0x28);
          v56[1] = v12;
          v14 = *(float *)(v11 + 0x2C);
          v57 = v13;
          v58 = v14;
          if ( !sub_8AA390(v56, &Vector3_InitValue_) )
            goto LABEL_26;
          z = v57 - v4->members.m_worldTransform.pos.z;
          a1 = v58;
          if ( v58 >= z )
            goto LABEL_26;
          v15 = *(_DWORD *)v6;
          *(double *)&v51[1] = v57;
          v16 = *(double *)&v51[1] - *(float *)((*(int (__thiscall **)(int, int *))(v15 + 0xF4))(v6, &v54) + 8);
          z = v58;
          v17 = v58 < v16;
        }
        else
        {
          if ( !sub_4CE3C0(parentCell) )
            goto LABEL_26;
          v18 = sub_4CE3C0(parentCell);
          *(float *)&v51[1] = *sub_4C46B0(v18, (float *)&v51[1]) - dbl_A3F428;
          z = v4->members.m_worldTransform.pos.z;
          if ( z >= *(float *)&v51[1] )
            goto LABEL_26;
          v19 = *(_DWORD *)v6;
          *(double *)&v51[1] = *(float *)&v51[1];
          v20 = *(float *)((*(int (__thiscall **)(int, int *))(v19 + 0xF4))(v6, &v54) + 8);
          v17 = v20 < *(double *)&v51[1];
        }
        if ( v17 )
        {
          v21 = *((_DWORD *)&Vector3_InitValue_ + 1);
          v22 = LODWORD(dword_B3F9B0);
          *(float *)&v51[1] = Vector3_InitValue_;
          v51[2] = v21;
          v51[3] = v22;
          sub_4D5D70(v7, a1, z, (float *)&v51[1], &v54);
          (*(void (__thiscall **)(int, unsigned int, unsigned int, unsigned int))(*(_DWORD *)v6 + 0xF8))(
            v6,
            v51[1],
            v51[2],
            v51[3]);
        }
      }
      v23 = (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 0x154))(v6);
      v51[1] = v23;
      if ( v23 )
      {
        v24 = (_DWORD *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)v6 + 0xF4))(v6, &v54);
        *(_DWORD *)(v23 + 0x54) = *v24;
        *(_DWORD *)(v23 + 0x58) = v24[1];
        *(_DWORD *)(v23 + 0x5C) = v24[2];
        qmemcpy((void *)(v23 + 0x30), &stru_B26AF0[0xA].unk2C, 0x24u);
        v23 = v51[1];
        *(float *)&v4 = v52;
      }
      sub_897A20(v23, 1);
      NiAVObject_UpdateNiAVObject((NiAVObject *)v23, 0.0, 1);
      v51[1] = *(_DWORD *)(a3 + 0x10);
      if ( v51[1] )
      {
        v52 = sub_4D6A70((_DWORD *)v51[1]) * dbl_A3C770;
        z = v52;
        if ( v52 <= (double)flt_A31E2C )
        {
          (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)a3 + 0x70))(a3, 6, 0);
          *(_WORD *)(a3 + 0xC) &= ~4u;
          v25 = (const char *)(*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v6 + 0xD4))(v6, *(_DWORD *)(v6 + 0xC));
          PrintError("Disabling collision on ref '%s' (%08X).", v25, X_4);
        }
        else
        {
          sub_4D6B70((_DWORD *)v51[1], v52);
        }
      }
    }
LABEL_26:
    v26 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v6 + 0x174))(v6);
    v27 = *((_DWORD *)v26 + 2);
    v28 = *v26;
    *(float *)&v55 = v26[1];
    HIDWORD(v55) = v27;
    v29 = sub_46B5C0(0);
    y = v4->members.m_worldTransform.pos.y;
    v31 = v4->members.m_worldTransform.pos.z;
    LOBYTE(v52) = v29;
    *(float *)(v6 + 0x2C) = v4->members.m_worldTransform.pos.x;
    v32 = *(_DWORD *)v6;
    *(float *)(v6 + 0x30) = y;
    *(float *)(v6 + 0x34) = v31;
    (*(void (__thiscall **)(int, int))(v32 + 0x40))(v6, 4);
    sub_46B5C0(SLOBYTE(v52));
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v6 + 0x40))(v6, 8);
    if ( *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)v6 + 0x170))(v6) + 4) == 0x1A
      && (*(_DWORD *)(v6 + 8) & 0x80) == 0 )
    {
      v33 = *(_DWORD *)v6;
      v52 = *(float *)(v6 + 0x40);
      *(double *)&v51[1] = *(float *)((*(int (__thiscall **)(int))(v33 + 0x174))(v6) + 8);
      WaterHeight = TESObjectCELL_GetWaterHeight((ExtraDataList *)LODWORD(v52));
      if ( WaterHeight > *(double *)&v51[1] )
      {
        sub_46AB60((_DWORD *)v6, 1);
        v35 = (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 0x154))(v6);
        sub_4DE1C0((int)v4, v35);
        v36 = sub_41E650((ExtraDataList *)(v6 + 0x44));
        if ( v36 )
        {
          Destructor = v36->Destructor;
          if ( Destructor )
          {
            X_4a = (int)Destructor;
            ShadowSceneNode = (_DWORD *)GetShadowSceneNode(0);
            sub_7C7DC0(ShadowSceneNode, X_4a);
          }
        }
      }
    }
    if ( !TES->currentInteriorCell )
    {
      v51[1] = (unsigned int)TES::GetCurrentWorldspace(TES);
      if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v6 + 0x190))(v6) )
        sub_5E1360((_BYTE *)v6, 0);
      *(float *)&v39 = COERCE_FLOAT((*(int (__thiscall **)(int))(*(_DWORD *)v6 + 0x174))(v6));
      v40 = *(_DWORD *)v6;
      v52 = *(float *)&v39;
      X = (TESWorldSpace *)v51[1];
      a2 = *(float *)((*(int (__thiscall **)(int))(v40 + 0x174))(v6) + 4);
      v41 = *(float *)LODWORD(v52);
      v42 = sub_44A270((TESWorldSpace **)TESDataHandler, *(float *)LODWORD(v52), a2, X, 0);
      if ( v42 != (TESForm *)parentCell )
      {
        if ( v42 )
        {
          LOBYTE(parentCell) = sub_46B5C0(0);
          sub_4DD4B0(v6, a1, z, v41, (Actor *)v6, 0, (TESWorldSpace *)v51[1]);
          sub_46B5C0((char)parentCell);
        }
        else
        {
          LOBYTE(parentCell) = sub_46B5C0(0);
          TESObjectREFR_SetPosition((TESObjectREFR *)v6, v28, *(float *)&v55, *((float *)&v55 + 1));
          sub_46B5C0((char)parentCell);
          v43 = v55;
          v4->members.m_localTransform.pos.x = v28;
          *(_QWORD *)&v4->members.m_localTransform.pos.y = v43;
          (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)a3 + 0x70))(a3, 6, 0);
        }
      }
    }
    goto LABEL_39;
  }
}
