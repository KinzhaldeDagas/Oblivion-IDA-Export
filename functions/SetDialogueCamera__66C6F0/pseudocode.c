void __thiscall SetDialogueCamera(PlayerCharacter *a1, Actor *a3, float a4, UInt8 a5)
{
  double v4; // st5
  char v7; // zf
  TESObjectCELL *v8; // eax
  void *ParentCell; // edi
  void *WorldSpace; // eax
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
  AnimSequenceSingle *AnimData; // eax
  float v30; // [esp+10h] [ebp-28h]
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

  if ( a3 )
  {
    if ( 1.0 == a4 )
      a1->worldFoV = g_DialogueFov_;
    if ( VanityCamState )
    {
      v7 = a1->isThirdPerson == 0;
      flt_B3BB08 = 0.0;
      byte_B3BB05 = 0;
      VanityCamState = 0;
      ToggleBody(a1, v7);
    }
    if ( TESObjectREFR_GetParentCell((TESObjectREFR *)a1)
      && (v8 = TESObjectREFR_GetParentCell((TESObjectREFR *)a1), TESObjectCELL_IsInterior(v8)) )
    {
      ParentCell = TESObjectREFR_GetParentCell((TESObjectREFR *)a3);
      WorldSpace = TESObjectREFR_GetParentCell((TESObjectREFR *)a1);
    }
    else
    {
      ParentCell = TESObjectREFR_GetWorldSpace((TESObjectREFR *)a3);
      WorldSpace = TESObjectREFR_GetWorldSpace((TESObjectREFR *)a1);
    }
    if ( ParentCell == WorldSpace )
    {
      v11 = *(float *)(CameraP1 + 0x88);
      v12 = *(float *)(CameraP1 + 0x90);
      v34 = *(float *)(CameraP1 + 0x8C);
      vtbl = a3->vtbl;
      v33 = v11;
      v35 = v12;
      v36 = 0;
      if ( !vtbl->super.super.GetNiNode((TESObjectREFR *)a3) )
      {
LABEL_38:
        v44 = v35 * v35 + v33 * v33 + v34 * v34;
        a5e = sqrt(v44);
        v30 = (float)Double_To_SInt32((a5e - dbl_A73DD8) / fCostant_100 * dbl_A492B0 + dbl_A492F0);
        SetCameraFOV((float *)a1, v30);
        return;
      }
      v14 = ((int (__thiscall *)(Actor *, _DWORD))a3->vtbl->super.super.Unk_4D)(a3, 0);
      v15 = v14;
      if ( v14 )
      {
        if ( (*(_BYTE *)(v14 + 0x18) & 1) != 0 )
        {
          *(_WORD *)(v14 + 0x18) &= ~1u;
          NiAVObject_UpdateNiAVObject((NiAVObject *)v14, 0.0, 0);
          (*(void (__thiscall **)(int))(*(_DWORD *)v15 + 0x78))(v15);
          *(_WORD *)(v15 + 0x18) |= 1u;
        }
        v16 = byte_B3BCD1;
        if ( byte_B3BCD1 )
        {
          if ( a4 < 1.0 )
          {
            v16 = 0;
            byte_B3BCD1 = 0;
          }
        }
        v17 = flt_B14F28;
        v18 = *(float *)(v15 + 0x24);
        v19 = g_worldScenegraph;
        v7 = g_worldScenegraph->camera == 0;
        LODWORD(a2) = *(_DWORD *)(v15 + 0x20);
        v32 = *(float *)(v15 + 0x28);
        *((float *)&a2 + 1) = v18;
        v32 = v17 + v32;
        v33 = v33 - *(float *)&a2;
        v34 = v34 - v18;
        v35 = v35 - v32;
        if ( !v7 )
        {
          v36 = 1;
          if ( !v16 )
          {
            *(float *)&a2 = *(float *)(v15 + 0x2C);
            a2 = sub_404E30(&unk_B14F10) * *(float *)&a2;
            *(float *)&a2 = a2 / sub_404C90(&v33);
            *(float *)&a2 = atan(*(float *)&a2);
            *(float *)&a2 = *(float *)&a2 * fCostant_100;
            v20 = *(float *)&a2;
            if ( *(float *)GameSetting_GetSafeFloatPointer((int *)&g_DefaulFOV) <= (double)*(float *)&a2 )
              v20 = *(float *)GameSetting_GetSafeFloatPointer((int *)&g_DefaulFOV);
            v21 = 1.0;
            if ( a4 < 1.0 )
              v21 = a4;
            *(float *)&a2 = v21;
            v4 = 1.0 - *(float *)&a2;
            *(float *)&a2 = v20 + (a1->worldFoV - v20) * v4;
            SetCameraFOV_0(v19, *(float *)&a2, 0.0);
            UpdateParticleShaderFOVData(*(float *)&a2);
            if ( a4 >= 1.0 )
              byte_B3BCD1 = 1;
          }
        }
      }
      else
      {
        v22 = a3->vtbl->super.super.GetPos(a3);
        v23 = *((_DWORD *)v22 + 1);
        v24 = *(_DWORD *)v22;
        v25 = v22[2];
        HIDWORD(a2) = v23;
        v26 = a3->vtbl;
        LODWORD(a2) = v24;
        v32 = ((double (__thiscall *)(Actor *))v26->super.super.GetScale)(a3) * a1->firstPersonNiNodeTranslateZ + v25;
        v33 = v33 - *(float *)&a2;
        v34 = v34 - *((float *)&a2 + 1);
        v35 = v35 - v32;
      }
      if ( a5 )
      {
LABEL_37:
        if ( v36 )
          return;
        goto LABEL_38;
      }
      a2 = v35;
      v38 = a2 / sub_404C90(&v33);
      a5b = asin(v38);
      a5a = a5b - sub_4A9720((Actor *)a1);
      a4a = fabs(a5a);
      v27 = flt_B14F18 * dbl_A31C78;
      if ( v27 >= a4a )
      {
        if ( !byte_B3BCD0 )
        {
LABEL_33:
          if ( a1->vtbl->super.super.super.GetSleepState((TESObjectREFR *)a1) )
          {
            *(float *)&a2 = -v33;
            *((float *)&a2 + 1) = -v34;
            v32 = -v35;
            a5d = sub_683CB0((float *)&a2);
            a2 = a5d;
            ZRotation = MobileObject_GetZRotation((MobileObject *)a1);
            a1->unk61C = a2 - ZRotation;
          }
          else
          {
            ((void (__thiscall *)(PlayerCharacter *, Actor *))a1->vtbl->super.super.Unk_79)(a1, a3);
          }
          flt_B3BAC8 = a1->vtbl->super.super.GetZRotation((MobileObject *)a1);
          flt_B3BAC4 = sub_4A9720((Actor *)a1);
          TogglePOV(a1, 1u);
          sub_5E05F0((Actor *)a1, 0x3F);
          a1->isThirdPerson = 1;
          Actor_ProcessAction((Actor *)a1, v4, v27, 1.0, 1.0, 1.0);
          a1->isThirdPerson = 0;
          v43 = flt_B33E9C;
          AnimData = (AnimSequenceSingle *)TESObjectREFR_GetAnimData((Actor *)a1);
          sub_476D10(AnimData, v15, v4, v27, v43, (int)a1, v43, flt_A30634);
          sub_476D10(
            (AnimSequenceSingle *)a1->firstPersonAnimData,
            v15,
            v4,
            v27,
            flt_B33E9C,
            (int)a1,
            flt_B33E9C,
            flt_A30634);
          sub_603CA0((Actor *)a1, v4, v27, 0.0, 0.0);
          a1->vtbl->super.super.super.Unk_3F((TESObjectREFR *)a1);
          goto LABEL_37;
        }
      }
      else
      {
        byte_B3BCD0 = 1;
      }
      a5c = a5a * *(float *)GameSetting_GetSafeFloatPointer(&dword_B14F30);
      sub_65ABC0((TESObjectREFR *)a1, a5c);
      v27 = *(float *)GameSetting_GetSafeFloatPointer(&dword_B14F20) * dbl_A31C78;
      if ( v27 > a4a )
        byte_B3BCD0 = 0;
      goto LABEL_33;
    }
  }
}
