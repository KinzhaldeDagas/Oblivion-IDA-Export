void __userpurge sub_45E990(double a1@<st2>, double a2@<st1>, double st7_0@<st0>, TESChildCELL *a4)
{
  float *v4; // eax
  float v5; // ecx
  float v6; // edx
  float v7; // eax
  void *vtbl; // edx
  void *v9; // eax
  TESObjectCELL *v10; // edi
  UInt32 v11; // eax
  TESObjectCELL **v12; // ebx
  float *v13; // eax
  BSExtraDataVtbl *v15; // eax
  BSExtraDataVtbl *v16; // edi
  TESObjectCELL *v17; // ebx
  TESObjectCELL **v18; // eax
  _DWORD *DwordAtOffset40; // eax
  _DWORD *v20; // eax
  _DWORD *v21; // eax
  void *v22; // eax
  NiPoint3 *Position; // eax
  float x; // ecx
  float y; // edx
  float radians; // [esp+Ch] [ebp-34h]
  float v27; // [esp+1Ch] [ebp-24h] BYREF
  float v28; // [esp+20h] [ebp-20h]
  float v29; // [esp+24h] [ebp-1Ch]
  int a3; // [esp+28h] [ebp-18h] BYREF
  int a3_4; // [esp+2Ch] [ebp-14h] BYREF
  int z_low; // [esp+30h] [ebp-10h]
  float v33[3]; // [esp+34h] [ebp-Ch] BYREF

  if ( a4 ) /*0x45e99f*/
  {
    v4 = (float *)(*((int (__thiscall **)(TESChildCELL *))a4->vtbl + 0x5D))(a4); /*0x45e9af*/
    v5 = *v4; /*0x45e9b1*/
    v6 = v4[1]; /*0x45e9b3*/
    v7 = v4[2]; /*0x45e9b6*/
    v27 = v5; /*0x45e9b9*/
    v33[0] = *(float *)&a4[8].vtbl; /*0x45e9c0*/
    v28 = v6; /*0x45e9c8*/
    vtbl = a4[9].vtbl; /*0x45e9cc*/
    v29 = v7; /*0x45e9cf*/
    v9 = a4[0xA].vtbl; /*0x45e9d3*/
    LODWORD(v33[1]) = vtbl; /*0x45e9d9*/
    LODWORD(v33[2]) = v9; /*0x45e9dd*/
    if ( sub_452430(&v27) ) /*0x45e9e1*/
    {
      PrintError("Corrupt location found loading reference %08X, fixing it.", a4[3].vtbl); /*0x45e9f7*/
      if ( (*((unsigned __int8 (__thiscall **)(TESChildCELL *))a4->vtbl + 0x64))(a4) && sub_5E0260(a4) ) /*0x45ea15*/
      {
        v10 = (TESObjectCELL *)sub_5E1F60(a4); /*0x45ea27*/
        v11 = sub_5E1F40((Actor *)a4); /*0x45ea29*/
        v12 = (TESObjectCELL **)v11; /*0x45ea30*/
        if ( v10 || v11 ) /*0x45ea36*/
        {
          v13 = (float *)(*((int (__thiscall **)(TESChildCELL *, int *))a4->vtbl + 0x3D))(a4, &a3); /*0x45ea4b*/
          TESObjectREFR_SetPosition((TESObjectREFR *)a4, *v13, v13[1], v13[2]); /*0x45ea64*/
          _EAX = (*((int (__thiscall **)(TESChildCELL *, int *))a4->vtbl + 0x3C))(a4, &a3_4); /*0x45ea78*/
          __asm { fld     dword ptr [eax+8] } /*0x45ea7a*/
          __asm { fstp    [esp+34h+radians]; radians }
          TESObjectREFR_SetRotationZ((TESObjectREFR *)a4, radians); /*0x45ea83*/
          sub_4DD4B0((int)v12, a1, a2, st7_0, (Actor *)a4, v10, v12); /*0x45ea8b*/
        }
      }
      else if ( BaseExtraList_GetExtraData((ExtraDataList *)&a4[0x11], kExtraData_StartingPosition) ) /*0x45ea9f*/
      {
        (*((void (__thiscall **)(TESChildCELL *, float *))a4->vtbl + 0x3D))(a4, &v27); /*0x45eabb*/
        (*((void (__thiscall **)(TESChildCELL *, int *))a4->vtbl + 0x3C))(a4, &a3); /*0x45eacc*/
        TESObjectREFR_SetPosition((TESObjectREFR *)a4, v27, v28, v29); /*0x45eae9*/
        sub_4D89A0((int *)a4, a3, a3_4, z_low); /*0x45eb09*/
        v15 = sub_41F7F0((ExtraDataList *)&a4[0x11]); /*0x45eb10*/
        v16 = v15; /*0x45eb15*/
        if ( v15 ) /*0x45eb19*/
        {
          v17 = (TESObjectCELL *)OblivionDynamicCast( /*0x45eb42*/
                                   v15,
                                   0,
                                   (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                   &TESObjectCELL `RTTI Type Descriptor',
                                   0);
          v18 = (TESObjectCELL **)OblivionDynamicCast( /*0x45eb44*/
                                    v16,
                                    0,
                                    (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                    &TESWorldSpace `RTTI Type Descriptor',
                                    0);
          if ( v17 || v18 ) /*0x45eb52*/
            sub_4DD4B0((int)v17, a1, a2, st7_0, (Actor *)a4, v17, v18); /*0x45eb5b*/
        }
      }
      else if ( Shared_GetDwordAtOffset40(a4) /*0x45eb9c*/
             && (DwordAtOffset40 = (_DWORD *)Shared_GetDwordAtOffset40(a4), sub_4AF170(DwordAtOffset40))
             && (v20 = (_DWORD *)Shared_GetDwordAtOffset40(a4),
                 v21 = (_DWORD *)sub_4AF170(v20),
                 (v22 = (void *)sub_4E5A10(v21)) != 0) )
      {
        Position = PathGraphNode_GetPosition(v22); /*0x45eba0*/
        x = Position->x; /*0x45eba5*/
        y = Position->y; /*0x45eba7*/
        z_low = SLODWORD(Position->z); /*0x45ebad*/
        __asm /*0x45ebb1*/
        {
          fld     [esp+34h+var_10]
          fadd    qword ptr ds:0A3AA50h
        }
        __asm { fstp    [esp+40h+var_10] }
        TESObjectREFR_SetPosition((TESObjectREFR *)a4, x, y, *(float *)&z_low); /*0x45ebd0*/
      }
      else
      {
        TESObjectREFR_SetPosition((TESObjectREFR *)a4, g_zeroNiPoint3.x, g_zeroNiPoint3.y, g_zeroNiPoint3.z); /*0x45ebf3*/
      }
    }
    if ( sub_452430(v33) ) /*0x45ebff*/
    {
      PrintError("Corrupt angle found loading reference %08X, setting to (0, 0, 0).", a4[3].vtbl); /*0x45ec11*/
      sub_4D89A0((int *)a4, LODWORD(g_zeroNiPoint3.x), LODWORD(g_zeroNiPoint3.y), LODWORD(g_zeroNiPoint3.z)); /*0x45ec35*/
    }
  }
}
