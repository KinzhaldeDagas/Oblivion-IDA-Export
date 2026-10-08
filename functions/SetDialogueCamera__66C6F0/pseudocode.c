void __thiscall SetDialogueCamera(PlayerCharacter *a1, Actor *a3, float a4, UInt8 a5)
{
  double v4; // st5
  char v7; // zf
  TESObjectCELL *v8; // eax
  UInt32 DwordAtOffset40; // edi
  UInt32 WorldSpace; // eax
  float v11; // ecx
  float v12; // eax
  ActorVtbl *vtbl; // edx
  int v14; // eax
  int v15; // edi
  char v16; // cl
  double v17; // st7
  float v18; // eax
  SceneGraph *v19; // ebx
  double v20; // st7
  double v21; // st6
  float *v22; // eax
  int v23; // edx
  int v24; // ecx
  float v25; // eax
  ActorVtbl *v26; // edx
  double v27; // st6
  double ZRotation; // st7
  ActorAnimData *AnimData; // eax
  float arg1; // [esp+10h] [ebp-28h]
  double a2; // [esp+20h] [ebp-18h] BYREF
  float v32; // [esp+28h] [ebp-10h]
  float v33; // [esp+2Ch] [ebp-Ch] BYREF
  float v34; // [esp+30h] [ebp-8h]
  float v35; // [esp+34h] [ebp-4h]
  char v36; // [esp+3Ch] [ebp+4h]
  float a4a; // [esp+40h] [ebp+8h]
  float v38; // [esp+44h] [ebp+Ch]
  float a5b; // [esp+44h] [ebp+Ch]
  float a5a; // [esp+44h] [ebp+Ch]
  float a5c; // [esp+44h] [ebp+Ch]
  float a5d; // [esp+44h] [ebp+Ch]
  float v43; // [esp+44h] [ebp+Ch]
  float v44; // [esp+44h] [ebp+Ch]
  float a5e; // [esp+44h] [ebp+Ch]

  if ( a3 ) /*0x66c6fd*/
  {
    if ( 1.0 == a4 ) /*0x66c70e*/
      a1->worldFoV = g_DialogueFov_; /*0x66c716*/
    if ( MEMORY[0xB3BB04] ) /*0x66c71c*/
    {
      v7 = a1->isThirdPerson == 0; /*0x66c725*/
      unk_B3BB08 = 0.0; /*0x66c72e*/
      unk_B3BB05 = 0; /*0x66c734*/
      MEMORY[0xB3BB04] = 0; /*0x66c73e*/
      ToggleBody(a1, v7); /*0x66c746*/
    }
    if ( Shared_GetDwordAtOffset40(a1) /*0x66c760*/
      && (v8 = (TESObjectCELL *)Shared_GetDwordAtOffset40(a1), TESObjectCELL_IsInterior(v8)) )
    {
      DwordAtOffset40 = Shared_GetDwordAtOffset40(a3); /*0x66c772*/
      WorldSpace = Shared_GetDwordAtOffset40(a1); /*0x66c774*/
    }
    else
    {
      DwordAtOffset40 = (UInt32)TESObjectREFR_GetWorldSpace((TESObjectREFR *)a3); /*0x66c784*/
      WorldSpace = (UInt32)TESObjectREFR_GetWorldSpace((TESObjectREFR *)a1); /*0x66c786*/
    }
    if ( DwordAtOffset40 == WorldSpace ) /*0x66c78d*/
    {
      v11 = *(float *)(MEMORY[0xB3BB0C] + 0x88); /*0x66c79e*/
      v12 = *(float *)(MEMORY[0xB3BB0C] + 0x90); /*0x66c7a4*/
      v34 = *(float *)(MEMORY[0xB3BB0C] + 0x8C); /*0x66c7aa*/
      vtbl = a3->vtbl; /*0x66c7ae*/
      v33 = v11; /*0x66c7b1*/
      v35 = v12; /*0x66c7b5*/
      v36 = 0; /*0x66c7c1*/
      if ( !vtbl->super.super.GetNiNode((TESObjectREFR *)a3) ) /*0x66c7ca*/
      {
LABEL_38:
        v44 = v35 * v35 + v33 * v33 + v34 * v34; /*0x66cbc4*/
        a5e = sqrt(v44); /*0x66cbef*/
        arg1 = (float)Double_To_SInt32((a5e - dbl_A73DD8) / fCostant_100 * dbl_A492B0 + dbl_A492F0); /*0x66cc1f*/
        SetCameraFOV((float *)a1, arg1); /*0x66cc22*/
        return; /*0x66cc22*/
      }
      v14 = ((int (__thiscall *)(Actor *, _DWORD))a3->vtbl->super.super.Unk_4D)(a3, 0); /*0x66c7de*/
      v15 = v14; /*0x66c7e0*/
      if ( v14 ) /*0x66c7e4*/
      {
        if ( (*(_BYTE *)(v14 + 0x18) & 1) != 0 ) /*0x66c7ee*/
        {
          *(_WORD *)(v14 + 0x18) &= ~1u; /*0x66c7f2*/
          NiAVObject_UpdateNiAVObject((NiAVObject *)v14, 0.0, 0); /*0x66c800*/
          (*(void (__thiscall **)(int))(*(_DWORD *)v15 + 0x78))(v15); /*0x66c80c*/
          *(_WORD *)(v15 + 0x18) |= 1u; /*0x66c80e*/
        }
        v16 = BYTE1(qword_B3BB2C[0x69]); /*0x66c813*/
        if ( BYTE1(qword_B3BB2C[0x69]) ) /*0x66c813*/
        {
          if ( a4 < 1.0 ) /*0x66c828*/
          {
            v16 = 0; /*0x66c82a*/
            BYTE1(qword_B3BB2C[0x69]) = 0; /*0x66c82c*/
          }
        }
        v17 = flt_B14F28; /*0x66c835*/
        v18 = *(float *)(v15 + 0x24); /*0x66c83b*/
        v19 = (SceneGraph *)g_WorldSceneReceiverRoot; /*0x66c83e*/
        v7 = *((_DWORD *)g_WorldSceneReceiverRoot + 0x37) == 0; /*0x66c844*/
        LODWORD(a2) = *(_DWORD *)(v15 + 0x20); /*0x66c84b*/
        v32 = *(float *)(v15 + 0x28); /*0x66c852*/
        *((float *)&a2 + 1) = v18; /*0x66c85a*/
        v32 = v17 + v32; /*0x66c85e*/
        v33 = v33 - *(float *)&a2; /*0x66c86a*/
        v34 = v34 - v18; /*0x66c876*/
        v35 = v35 - v32; /*0x66c882*/
        if ( !v7 ) /*0x66c886*/
        {
          v36 = 1; /*0x66c88e*/
          if ( !v16 ) /*0x66c893*/
          {
            *(float *)&a2 = *(float *)(v15 + 0x2C); /*0x66c8a1*/
            a2 = sub_404E30(&unk_B14F10) * *(float *)&a2; /*0x66c8b2*/
            *(float *)&a2 = a2 / NiPoint3_Length(&v33); /*0x66c8bf*/
            *(float *)&a2 = atan(*(float *)&a2); /*0x66c8cc*/
            *(float *)&a2 = *(float *)&a2 * fCostant_100; /*0x66c8df*/
            v20 = *(float *)&a2; /*0x66c8e8*/
            if ( *(float *)GameSetting_GetSafeFloatPointer((int *)&g_DefaulFOV) <= (double)*(float *)&a2 ) /*0x66c8f5*/
              v20 = *(float *)GameSetting_GetSafeFloatPointer((int *)&g_DefaulFOV); /*0x66c909*/
            v21 = 1.0; /*0x66c90d*/
            if ( a4 < 1.0 ) /*0x66c91a*/
              v21 = a4; /*0x66c91c*/
            *(float *)&a2 = v21; /*0x66c922*/
            v4 = 1.0 - *(float *)&a2; /*0x66c939*/
            *(float *)&a2 = v20 + (a1->worldFoV - v20) * v4; /*0x66c93f*/
            SetCameraFOV_0(v19, *(float *)&a2, 0.0);// MoonSugarEffect decode: dialogue camera path calls SetCameraFOV_0 during dialogue framing; reinforces FOV as shared gameplay/UI camera state. /*0x66c94a*/
            UpdateParticleShaderFOVData(*(float *)&a2); /*0x66c957*/
            if ( a4 >= 1.0 ) /*0x66c96a*/
              BYTE1(qword_B3BB2C[0x69]) = 1; /*0x66c96c*/
          }
        }
      }
      else
      {
        v22 = a3->vtbl->super.super.GetPos(a3); /*0x66c980*/
        v23 = *((_DWORD *)v22 + 1); /*0x66c982*/
        v24 = *(_DWORD *)v22; /*0x66c985*/
        v25 = v22[2]; /*0x66c987*/
        HIDWORD(a2) = v23; /*0x66c98a*/
        v26 = a3->vtbl; /*0x66c98e*/
        LODWORD(a2) = v24; /*0x66c991*/
        v32 = ((double (__thiscall *)(Actor *))v26->super.super.GetScale)(a3) * a1->firstPersonNiNodeTranslateZ + v25; /*0x66c9ad*/
        v33 = v33 - *(float *)&a2; /*0x66c9b9*/
        v34 = v34 - *((float *)&a2 + 1); /*0x66c9c5*/
        v35 = v35 - v32; /*0x66c9d1*/
      }
      if ( a5 ) /*0x66c9db*/
      {
LABEL_37:
        if ( v36 ) /*0x66cbc2*/
          return; /*0x66cbc2*/
        goto LABEL_38; /*0x66cbc2*/
      }
      a2 = v35; /*0x66c9e9*/
      v38 = a2 / NiPoint3_Length(&v33); /*0x66c9f6*/
      a5b = asin(v38); /*0x66ca03*/
      a5a = a5b - Actor_GetAimPitch((Actor *)a1); /*0x66ca1a*/
      a4a = fabs(a5a); /*0x66ca24*/
      v27 = flt_B14F18 * dbl_A31C78; /*0x66ca32*/
      if ( v27 >= a4a ) /*0x66ca3f*/
      {
        if ( !LOBYTE(qword_B3BB2C[0x69]) ) /*0x66ca51*/
        {
LABEL_33:
          if ( a1->vtbl->super.super.super.GetSleepState((TESObjectREFR *)a1) ) /*0x66caa6*/
          {
            *(float *)&a2 = -v33; /*0x66cac6*/
            *((float *)&a2 + 1) = -v34; /*0x66cad0*/
            v32 = -v35; /*0x66cada*/
            a5d = Vector3_CalculateHeadingRadiansXY((float *)&a2); /*0x66cae3*/
            a2 = a5d; /*0x66caf0*/
            ZRotation = MobileObject_GetZRotation((MobileObject *)a1); /*0x66caf4*/
            a1->unk61C = a2 - ZRotation; /*0x66cafd*/
          }
          else
          {
            ((void (__thiscall *)(PlayerCharacter *, Actor *))a1->vtbl->super.super.Unk_79)(a1, a3); /*0x66cab7*/
          }
          unk_B3BAC8 = a1->vtbl->super.super.GetZRotation((MobileObject *)a1); /*0x66cb0f*/
          unk_B3BAC4 = Actor_GetAimPitch((Actor *)a1); /*0x66cb1c*/
          TogglePOV(a1, 1u); /*0x66cb26*/
          sub_5E05F0((Actor *)a1, 0x3F); /*0x66cb2f*/
          a1->isThirdPerson = 1; /*0x66cb42*/
          Actor_ProcessAction((Actor *)a1, 1.0, 1.0); /*0x66cb49*/
          a1->isThirdPerson = 0; /*0x66cb4e*/
          v43 = *(float *)&MEMORY[0xB33E90][0xC]; /*0x66cb5d*/
          AnimData = TESObjectREFR_GetAnimData((TESObjectREFR *)a1); /*0x66cb61*/
          ActorAnimData_Update(AnimData, (Actor *)a1, v43, kTerrainLODQuadRayDirectionZ); /*0x66cb7d*/
          ActorAnimData_Update( /*0x66cb9f*/
            a1->firstPersonAnimData,
            (Actor *)a1,
            *(float *)&MEMORY[0xB33E90][0xC],
            kTerrainLODQuadRayDirectionZ);
          sub_603CA0((Actor *)a1, v4, v27, 0.0, 0.0); /*0x66cbac*/
          a1->vtbl->super.super.super.Unk_3F((TESObjectREFR *)a1); /*0x66cbbb*/
          goto LABEL_37; /*0x66cbbb*/
        }
      }
      else
      {
        LOBYTE(qword_B3BB2C[0x69]) = 1; /*0x66ca41*/
      }
      a5c = a5a * *(float *)GameSetting_GetSafeFloatPointer(&dword_B14F30); /*0x66ca66*/
      sub_65ABC0((TESObjectREFR *)a1, a5c); /*0x66ca71*/
      v27 = *(float *)GameSetting_GetSafeFloatPointer(&dword_B14F20) * dbl_A31C78; /*0x66ca86*/
      if ( v27 > a4a ) /*0x66ca93*/
        LOBYTE(qword_B3BB2C[0x69]) = 0; /*0x66ca95*/
      goto LABEL_33; /*0x66ca95*/
    }
  }
}
