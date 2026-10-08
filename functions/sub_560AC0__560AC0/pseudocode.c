// OBLIVION AUTHORITY 2026-08-27: Material application selects forced/TES branch and leaf dimming scalars and writes accepted [0,1] values to the engine before texture/material loads. It has cleanup EH but no internal catch. A swallowed later exception can therefore leave the scalar update applied while subsequent material setup is partial.
void __thiscall BSTreeModel_ApplyBaseObject(
        BSTreeModel_OblivionLayout_058 *this,
        TESObjectTREE_OblivionLayout_080_NiTArrayVerified *tree)
{
  TESObjectTREE_OblivionLayout_080_NiTArrayVerified *v2; // edi
  char *v3; // ebp
  double v4; // st7
  double v5; // st6
  double v6; // st6
  double v7; // st6
  double v8; // st6
  double v9; // st5
  double v10; // st4
  double v11; // rt2
  double v12; // st4
  double v13; // st6
  double v14; // rtt
  double v15; // st4
  double v16; // st7
  const OB_CSpeedTreeRT_010201A0 *v17; // ecx
  unsigned int v18; // eax
  char *v19; // edi
  char *v21; // eax
  int *SourceTexture_010201A0; // eax
  NiTexture *v23; // esi
  NiTexturingProperty *v24; // eax
  NiTexturingProperty *v25; // eax
  const char *v26; // eax
  const char *v27; // edx
  unsigned int v28; // eax
  char *v29; // edi
  int *v31; // eax
  NiTexturingProperty **v32; // esi
  int *v33; // eax
  NiTexture *v34; // edi
  NiTexturingProperty *v35; // eax
  NiTexturingProperty *v36; // eax
  NiTexture *v37; // esi
  float value; // [esp+0h] [ebp-15Ch]
  float valuea; // [esp+0h] [ebp-15Ch]
  float valueb; // [esp+0h] [ebp-15Ch]
  float v41; // [esp+18h] [ebp-144h]
  float v42; // [esp+18h] [ebp-144h]
  float v43; // [esp+18h] [ebp-144h]
  float v44; // [esp+18h] [ebp-144h]
  void *slot; // [esp+1Ch] [ebp-140h] BYREF
  NiTexture *texture; // [esp+20h] [ebp-13Ch] BYREF
  TESObjectTREE_OblivionLayout_080_NiTArrayVerified *v47; // [esp+24h] [ebp-138h]
  NiSourceTexture *outTexture; // [esp+28h] [ebp-134h] BYREF
  OB_CSpeedTreeRT_STextures texturesOut; // [esp+2Ch] [ebp-130h] BYREF
  char ArgList[260]; // [esp+48h] [ebp-114h] BYREF
  unsigned int v51; // [esp+158h] [ebp-4h]

  v2 = tree; /*0x560afb*/
  v3 = (char *)this; /*0x560b02*/
  outTexture = (NiSourceTexture *)this; /*0x560b06*/
  v47 = tree; /*0x560b0a*/
  texture = 0; /*0x560b0e*/
  v51 = 0; /*0x560b14*/
  if ( tree ) /*0x560b1b*/
  {
    if ( this->speedTree ) /*0x560b21*/
    {
      if ( this->modelState_0_uninit_1_base_2_instance != 2 ) /*0x560b2e*/
      {
        v4 = 0.0; /*0x560b3e*/
        v5 = OB_INI_fTreeForceBranchDimming_SpeedTree_010201A0; /*0x560b40*/
        if ( v5 < 0.0 || v5 > 1.0 ) /*0x560b56*/
        {
          v41 = ((double (__thiscall *)(TESObjectTREE_OblivionLayout_080_NiTArrayVerified *))*(_DWORD *)(*(_DWORD *)tree->prefix_000_047 + 0x14C))(tree);// Verified: when fTreeForceBranchDimming is outside [0,1], dispatches TESObjectTREE vtable +0x14C to TESObjectTREE_GetBranchDimming, which reads +0x64; accepted values are written to CSpeedTreeRT before texture setup. /*0x560b68*/
          v4 = 0.0; /*0x560b6c*/
          v5 = v41; /*0x560b6e*/
        }
        if ( v5 >= v4 && v5 <= 1.0 ) /*0x560b84*/
        {
          value = v5; /*0x560b8c*/
          CSpeedTreeRT__SetBranchDimmingScalar(*((OB_CSpeedTreeRT_010201A0 **)v3 + 3), value); /*0x560b8f*/
          v4 = 0.0; /*0x560b94*/
        }
        v6 = OB_INI_fTreeForceLeafDimming_SpeedTree_010201A0;// Reads fTreeForceLeafDimming:SpeedTree setting value. Its database default is -1.0, which is outside [0,1] and therefore selects the per-TESObjectTREE fallback getter. /*0x560ba4*/
        if ( v6 < v4 || v6 > 1.0 ) /*0x560bba*/
        {
          v42 = ((double (__thiscall *)(TESObjectTREE_OblivionLayout_080_NiTArrayVerified *))*(_DWORD *)(*(_DWORD *)tree->prefix_000_047 + 0x154))(tree);// Verified: when fTreeForceLeafDimming is outside [0,1], dispatches TESObjectTREE vtable +0x154 to TESObjectTREE_GetLeafDimming, which reads +0x68; accepted values are written to CSpeedTreeRT before texture setup. /*0x560bcc*/
          v4 = 0.0; /*0x560bd0*/
          v6 = v42; /*0x560bd2*/
        }
        if ( v6 >= v4 && v6 <= 1.0 ) /*0x560be8*/
        {
          valuea = v6; /*0x560bf0*/
          CSpeedTreeRT__SetLeafDimmingScalar(*((OB_CSpeedTreeRT_010201A0 **)v3 + 3), valuea);// Calls CSpeedTreeRT::SetLeafDimmingScalar before the later leaf texture/property loads. Values outside [0,1] are not written, preserving the parsed/default SPT scalar. /*0x560bf3*/
          v4 = 0.0; /*0x560bf8*/
        }
        v7 = flt_B12608; /*0x560c08*/
        if ( v7 < v4 ) /*0x560c13*/
        {
          v43 = ((double (__thiscall *)(TESObjectTREE_OblivionLayout_080_NiTArrayVerified *))*(_DWORD *)(*(_DWORD *)tree->prefix_000_047 + 0x134))(tree);// Verified: when the force-CS override is negative, calls TESObjectTREE_GetCurveScalar via vtable +0x134 (field +0x58) and copies a nonnegative result into BSTreeModel+0x44. /*0x560c25*/
          v4 = 0.0; /*0x560c29*/
          v7 = v43; /*0x560c2b*/
        }
        if ( v7 >= v4 ) /*0x560c36*/
          *((float *)v3 + 0x11) = v7; /*0x560c38*/
        *(float *)&slot = flt_B12620; /*0x560c45*/
        v44 = flt_B12628; /*0x560c4f*/
        v8 = *(float *)&slot; /*0x560c53*/
        v9 = flt_A430CC; /*0x560c5b*/
        if ( *(float *)&slot < v4 || v9 < v8 || (v10 = v44, v44 < v4) || v10 > v9 || v10 < v8 ) /*0x560c94*/
        {
          *(float *)&slot = ((double (__thiscall *)(TESObjectTREE_OblivionLayout_080_NiTArrayVerified *))*(_DWORD *)(*(_DWORD *)tree->prefix_000_047 + 0x13C))(tree);// Verified: invalid forced minimum-angle settings fall back through vtable +0x13C to TESObjectTREE_GetMinimumLeafAngle (field +0x5C). /*0x560caa*/
          v44 = ((double (__thiscall *)(TESObjectTREE_OblivionLayout_080_NiTArrayVerified *))*(_DWORD *)(*(_DWORD *)tree->prefix_000_047 + 0x144))(tree);// Verified: invalid forced maximum-angle settings fall back through vtable +0x144 to TESObjectTREE_GetMaximumLeafAngle (field +0x60). /*0x560cba*/
          v9 = flt_A430CC; /*0x560cc6*/
          v4 = 0.0; /*0x560cce*/
          v10 = v44; /*0x560cd0*/
          v8 = *(float *)&slot; /*0x560cd0*/
        }
        v11 = v10; /*0x560cd2*/
        v12 = v8; /*0x560cd2*/
        v13 = v11; /*0x560cd2*/
        if ( v12 >= v4 && v12 <= v9 ) /*0x560ce4*/
        {
          v14 = v12; /*0x560ce6*/
          v15 = v4; /*0x560ce6*/
          v16 = v14; /*0x560ce6*/
          if ( v15 <= v13 && v9 >= v13 && v13 >= v16 ) /*0x560d01*/
          {
            valueb = v16; /*0x560d07*/
            CSpeedTreeRT__SetMinimumBudAngle(*((OB_CSpeedTreeRT_010201A0 **)v3 + 3), valueb);// Verified: after the fallback/override pair passes [0,90] bounds and min<=max, applies the pair to CSpeedTreeRT_SetMinimumBudAngle and SetMaximumBudAngle. /*0x560d0a*/
            CSpeedTreeRT__SetMaximumBudAngle(*((OB_CSpeedTreeRT_010201A0 **)v3 + 3), v44); /*0x560d1a*/
          }
        }
        if ( !*((_DWORD *)v3 + 0xD) ) /*0x560d36*/
        {
          CSpeedTreeRT__STextures_ctor(&texturesOut); /*0x560d48*/
          v17 = *((const OB_CSpeedTreeRT_010201A0 **)v3 + 3); /*0x560d4d*/
          LOBYTE(v51) = 1; /*0x560d55*/
          CSpeedTreeRT__GetTextures(v17, &texturesOut); /*0x560d5d*/
          strcpy(ArgList, "Textures\\Trees\\Branches\\"); /*0x560d74*/
          v18 = strlen(texturesOut.branchTextureFilename) + 1; /*0x560d8d*/
          v19 = (char *)&texturesOut.projectedShadowTextureFilename + 3; /*0x560d91*/
          while ( *++v19 ) /*0x560d9c*/
            ; /*0x560d94*/
          qmemcpy(v19, texturesOut.branchTextureFilename, v18); /*0x560da3*/
          v21 = &ArgList[&ArgList[strlen(ArgList) + 1] - &ArgList[1]]; /*0x560dbe*/
          v21[0xFFFFFFFD] = 0x64; /*0x560dc6*/
          v21[0xFFFFFFFE] = 0x64; /*0x560dc9*/
          v21[0xFFFFFFFF] = 0x73; /*0x560dde*/
          SourceTexture_010201A0 = (int *)OB_TES_LoadOrFindSourceTexture_010201A0( /*0x560de2*/
                                            (NiSourceTexture **)&slot,
                                            ArgList,
                                            1,
                                            0);
          LOBYTE(v51) = 2; /*0x560dec*/
          OB_NiSmartPointer_Assign_010201A0((int *)&texture, SourceTexture_010201A0); /*0x560df4*/
          LOBYTE(v51) = 1; /*0x560dfd*/
          NiPointerSlot_Release(&slot); /*0x560e05*/
          v23 = texture; /*0x560e0a*/
          if ( texture ) /*0x560e10*/
          {
            v24 = (NiTexturingProperty *)FormHeapAlloc(0x30u); /*0x560e14*/
            slot = v24; /*0x560e1c*/
            LOBYTE(v51) = 3; /*0x560e22*/
            if ( v24 ) /*0x560e2a*/
              v25 = NiTexturingProperty::NiTexturingProperty(v24); /*0x560e2e*/
            else
              v25 = 0; /*0x560e35*/
            LOBYTE(v51) = 1; /*0x560e3a*/
            NiSmartPointer_Set__((Ni2DBuffer **)v3 + 0xD, (Ni2DBuffer *)v25); /*0x560e42*/
            OB_NiTexturingProperty_SetBaseTexture_010201A0(*((NiTexturingProperty **)v3 + 0xD), v23); /*0x560e4a*/
          }
          LOBYTE(v51) = 0; /*0x560e53*/
          CSpeedTreeRT__STextures_dtor(&texturesOut); /*0x560e5b*/
          v2 = v47; /*0x560e60*/
        }
        if ( !*((_DWORD *)v3 + 0xE) ) /*0x560e64*/
        {
          if ( OB_CompactString_Length_010201A0(&v2->prefix_000_047[0x3C]) ) /*0x560e77*/
          {
            v26 = *(const char **)&v2->prefix_000_047[0x40]; /*0x560e84*/
            strcpy(ArgList, "Textures\\Trees\\Leaves\\"); /*0x560e97*/
            if ( !v26 ) /*0x560e9c*/
              v26 = EmptyString; /*0x560e9e*/
            v27 = v26; /*0x560ea3*/
            v28 = strlen(v26) + 1; /*0x560eb2*/
            v29 = (char *)&texturesOut.projectedShadowTextureFilename + 3; /*0x560eb4*/
            while ( *++v29 ) /*0x560ebf*/
              ; /*0x560eb7*/
            qmemcpy(v29, v27, v28); /*0x560ec8*/
            v31 = (int *)OB_TES_LoadOrFindSourceTexture_010201A0((NiSourceTexture **)&slot, ArgList, 1, 0);// ApplyBaseObject loads the single TESObjectTREE leaf texture into BSTreeModel+0x38. Failure/exception here is separate from per-vertex packed-green dimming and from alpha-test mip disappearance. /*0x560ee5*/
            LOBYTE(v51) = 4; /*0x560eed*/
            OB_NiSmartPointer_Assign_010201A0((int *)v3 + 0xE, v31); /*0x560ef5*/
            LOBYTE(v51) = 0; /*0x560efe*/
            NiPointerSlot_Release(&slot); /*0x560f06*/
          }
          v2 = v47; /*0x560f0b*/
          v3 = (char *)outTexture; /*0x560f0f*/
        }
        v32 = (NiTexturingProperty **)(v3 + 0x3C); /*0x560f17*/
        if ( !*((_DWORD *)v3 + 0xF) ) /*0x560f13*/
        {
          CSpeedTreeRT__STextures_ctor(&texturesOut); /*0x560f24*/
          LOBYTE(v51) = 5; /*0x560f30*/
          OB_TESObjectTREE_BuildBillboardTexturePath_010201A0((TESObjectTREE_BillboardTail *)v2, ArgList); /*0x560f38*/
          v33 = (int *)OB_TES_LoadOrFindSourceTexture_010201A0(&outTexture, ArgList, 1, 0); /*0x560f51*/
          LOBYTE(v51) = 6; /*0x560f5b*/
          OB_NiSmartPointer_Assign_010201A0((int *)&texture, v33); /*0x560f63*/
          LOBYTE(v51) = 5; /*0x560f6c*/
          NiPointerSlot_Release((void **)&outTexture); /*0x560f74*/
          v34 = texture; /*0x560f79*/
          if ( texture ) /*0x560f7f*/
          {
            v35 = (NiTexturingProperty *)FormHeapAlloc(0x30u); /*0x560f83*/
            v47 = (TESObjectTREE_OblivionLayout_080_NiTArrayVerified *)v35; /*0x560f8b*/
            LOBYTE(v51) = 7; /*0x560f91*/
            if ( v35 ) /*0x560f99*/
              v36 = NiTexturingProperty::NiTexturingProperty(v35); /*0x560f9d*/
            else
              v36 = 0; /*0x560fa4*/
            LOBYTE(v51) = 5; /*0x560fa9*/
            NiSmartPointer_Set__((Ni2DBuffer **)v3 + 0xF, (Ni2DBuffer *)v36); /*0x560fb1*/
            OB_NiTexturingProperty_SetBaseTexture_010201A0(*v32, v34); /*0x560fb9*/
            OB_NiTexturingProperty_SetClampMode_010201A0(*v32, 0); /*0x560fc2*/
          }
          LOBYTE(v51) = 0; /*0x560fcb*/
          CSpeedTreeRT__STextures_dtor(&texturesOut); /*0x560fd3*/
        }
        v37 = texture; /*0x560fd8*/
        v51 = 0xFFFFFFFF; /*0x560fde*/
        if ( texture ) /*0x560fe9*/
        {
          if ( !InterlockedDecrement((volatile LONG *)&texture->members) ) /*0x560fef*/
            v37->__vftable->super.super.Destructor((NiRefObject *)v37, 1); /*0x561001*/
        }
      }
    }
  }
}
