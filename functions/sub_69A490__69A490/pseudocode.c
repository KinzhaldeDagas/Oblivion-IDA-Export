bool __stdcall sub_69A490(NiPoint3 a1, TESObjectREFR *argC)
{
  TESObjectREFR *v2; // esi
  TESObjectCELL *ParentCell; // edi
  BSExtraDataVtbl *v5; // edi
  int v6; // eax
  float v7; // ecx
  float v8; // edx
  float v9; // eax
  double v10; // st7
  hkVector4 v11; // xmm0
  double v12; // st7
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  NiPoint3 a2; // [esp+14h] [ebp-9Ch] BYREF
  bhkWorldRayCastData v18; // [esp+20h] [ebp-90h] BYREF

  v2 = argC;
  if ( !argC )
    return 0;
  if ( !TESObjectREFR_GetParentCell(argC) )
    return 0;
  ParentCell = TESObjectREFR_GetParentCell(v2);
  v5 = TESObjectCELL_IsInterior(ParentCell) ? sub_424180(&ParentCell->members.extraData) : (BSExtraDataVtbl *)bhkWorldM;
  if ( !v5 )
    return 0;
  sub_8A7F20(0x1C, 1, 1);
  sub_8A7F20(0x1C, 0x13, 1);
  sub_8A7F20(0x1C, 2, 1);
  sub_8A7F20(0x1C, 3, 0);
  sub_8A7F20(0x1C, 4, 0);
  sub_8A7F20(0x1C, 5, 0);
  sub_8A7F20(0x1C, 6, 0);
  sub_8A7F20(0x1C, 7, 0);
  sub_8A7F20(0x1C, 8, 0);
  sub_8A7F20(0x1C, 9, 1);
  sub_8A7F20(0x1C, 0xA, 0);
  sub_8A7F20(0x1C, 0xB, 0);
  sub_8A7F20(0x1C, 0xC, 0);
  sub_8A7F20(0x1C, 0xD, 1);
  sub_8A7F20(0x1C, 0xE, 1);
  sub_8A7F20(0x1C, 0xF, 0);
  sub_8A7F20(0x1C, 0x10, 0);
  sub_8A7F20(0x1C, 0x11, 1);
  sub_8A7F20(0x1C, 0x12, 0);
  sub_8A7F20(0x1C, 0x14, 0);
  sub_8A7F20(0x1C, 0x15, 0);
  sub_8A7F20(0x1C, 0x18, 0);
  sub_8A7F20(0x1C, 0x1A, 0);
  sub_8A7F20(0x1C, 0x1B, 0);
  sub_8A7F20(0x1C, 0x1C, 0);
  sub_8A7F20(0x1C, 0x1D, 0);
  sub_8A7F20(0x1C, 0x1E, 0);
  sub_8A7F20(0x1C, 0x1F, 0);
  v6 = (int)v2->vtbl->GetPos(v2);
  v7 = *(float *)v6;
  v8 = *(float *)(v6 + 4);
  v9 = *(float *)(v6 + 8);
  a2.x = v7;
  a2.y = v8;
  a2.z = v9;
  v10 = sub_5E0660(v2);
  v11 = stru_BA7A40;
  v12 = v10 * dbl_A2FAA0 + a2.z;
  v18.WorldRayCastInput.EnableShapeCollectionFilter = 0;
  v18.WorldRayCastInput.FilterInfo = 0;
  v18.WorldRayCastOutput.RootCollidable = 0;
  a2.z = v12;
  memset(&v18.BroadPhaseAabbCache, 0, 0xC);
  v18.WorldRayCastOutput.HitFraction = 1.0;
  v18.unk60 = v11;
  if ( MobileObject_GetCharProxy((MobileObject *)v2) )
  {
    v13 = *((_DWORD *)MobileObject_GetCharProxy((MobileObject *)v2) + 0xD9);
    if ( v13 )
    {
      v14 = *(_DWORD *)(v13 + 8);
      if ( v14 && (v15 = v14 + 0x14) != 0 )
        v16 = HIWORD(*(_DWORD *)(v15 + 0x1C));
      else
        v16 = 0;
    }
    else
    {
      v16 = 0;
    }
  }
  else
  {
    v16 = (unsigned __int16)(dword_B2EB3C + 1);
    dword_B2EB3C = v16;
    if ( !v16 )
    {
      v16 = 0xA;
      dword_B2EB3C = 0xA;
    }
  }
  v18.WorldRayCastInput.FilterInfo = (v16 << 0x10) | 0x1C;
  bhkWorldRayCastData::SetCastInputFrom(&v18, &a1);
  bhkWorldRayCastData::SetCastInputTo(&v18, &a2);
  return (*((unsigned __int8 (__thiscall **)(BSExtraDataVtbl *, bhkWorldRayCastData *))v5->Destructor + 0x22))(v5, &v18) == 0;
}
