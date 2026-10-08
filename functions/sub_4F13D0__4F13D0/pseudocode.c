// Verified local WorldSpace component-copy path copies climate, parent/water, bounds, flags, and cell-map entries but not the owned TESRoad* at +0x54. CreateDuplicateForm has a distinct road-cloning path. +0x4C/+0x50 remain Unknown.
TESForm *__thiscall TESWorldSpace_CopyComponentsFrom(TESForm *this, void *arg0)
{
  TESForm *result; // eax
  TESForm *v4; // edi
  int data; // eax
  TESWorldSpace *v6; // ecx
  TESWaterForm *WaterFormParents; // eax
  int v8; // ecx
  UInt32 *p_refID; // eax
  _DWORD *v10; // ecx
  TESFormVtbl *vtbl; // edx
  void (__thiscall *ClearComponentReferences)(BaseFormComponent *); // ecx
  unsigned int v13; // eax
  void (__thiscall *CopyFromBase)(BaseFormComponent *, BaseFormComponent *); // edx
  void (__thiscall *v15)(BaseFormComponent *, BaseFormComponent *); // ebx
  MEF_U32PointerMapLayout32 *v16; // ecx
  MEF_U32PointerMapEntry32 *position; // [esp+8h] [ebp-8h] BYREF
  int a2; // [esp+Ch] [ebp-4h] BYREF

  result = (TESForm *)OblivionDynamicCast( /*0x4f13ea*/
                        arg0,
                        0,
                        (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                        &TESWorldSpace `RTTI Type Descriptor',
                        0);
  v4 = result; /*0x4f13ef*/
  if ( result ) /*0x4f13f6*/
  {
    TESForm_CopyAllComponentsFrom(this, result); /*0x4f13ff*/
    *((_BYTE *)this + 0x5C) = v4[3].member.modlist.next; /*0x4f1407*/
    *((_DWORD *)this + 0x1F) = *(_DWORD *)&v4[5].member.type; /*0x4f140d*/
    if ( *(_DWORD *)&v4[5].member.type ) /*0x4f1410*/
      data = TESWorldSpace_GetClimateFromRoot(*(_DWORD *)&v4[5].member.type);// Verified: TESWorldSpace component copy uses the resolved root Climate as destination field +0x58. /*0x4f1419*/
    else
      data = (int)v4[3].member.modlist.data; /*0x4f1420*/
    *((_DWORD *)this + 0x16) = data; /*0x4f1423*/
    v6 = *(TESWorldSpace **)&v4[5].member.type; /*0x4f1426*/
    if ( v6 ) /*0x4f142b*/
    {
      WaterFormParents = TESWorldSpace::GetWaterFormParents(v6); /*0x4f142d*/
    }
    else
    {
      WaterFormParents = (TESWaterForm *)v4[5].member.flags; /*0x4f1434*/
      if ( !WaterFormParents ) /*0x4f143c*/
        WaterFormParents = MEMORY[0xB360AC]; /*0x4f143e*/
    }
    *((_DWORD *)this + 0x20) = WaterFormParents; /*0x4f1443*/
    v8 = *(_DWORD *)&v4[5].member.type; /*0x4f1449*/
    if ( v8 ) /*0x4f144e*/
      p_refID = (UInt32 *)sub_4EF1B0(v8); /*0x4f1450*/
    else
      p_refID = &v4[5].member.refID; /*0x4f1457*/
    *((_DWORD *)this + 0x21) = *p_refID; /*0x4f145f*/
    *((_DWORD *)this + 0x22) = p_refID[1]; /*0x4f1468*/
    *((_DWORD *)this + 0x23) = p_refID[2]; /*0x4f1471*/
    v10 = *((_DWORD **)this + 0xC); /*0x4f147a*/
    *((_DWORD *)this + 0x24) = p_refID[3]; /*0x4f147d*/
    *((_DWORD *)this + 0x25) = *(_DWORD *)&v4[6].member.type; /*0x4f148a*/
    NiTMap_Clear(v10); /*0x4f1490*/
    vtbl = v4[2].vtbl; /*0x4f1495*/
    ClearComponentReferences = vtbl->super.ClearComponentReferences; /*0x4f1498*/
    v13 = 0; /*0x4f149b*/
    if ( ClearComponentReferences ) /*0x4f149f*/
    {
      CopyFromBase = vtbl->super.CopyFromBase; /*0x4f14a1*/
      v15 = CopyFromBase; /*0x4f14a4*/
      while ( !*(_DWORD *)v15 ) /*0x4f14a9*/
      {
        ++v13; /*0x4f14ab*/
        v15 = (void (__thiscall *)(BaseFormComponent *, BaseFormComponent *))((char *)v15 + 4); /*0x4f14ae*/
        if ( v13 >= (unsigned int)ClearComponentReferences ) /*0x4f14b3*/
          goto LABEL_16; /*0x4f14b3*/
      }
      result = *((TESForm **)CopyFromBase + v13); /*0x4f1500*/
    }
    else
    {
LABEL_16:
      result = 0; /*0x4f14b5*/
    }
    position = (MEF_U32PointerMapEntry32 *)result; /*0x4f14b9*/
    if ( result ) /*0x4f14be*/
    {
      do /*0x4f14f6*/
      {
        v16 = (MEF_U32PointerMapLayout32 *)v4[2].vtbl; /*0x4f14c5*/
        arg0 = 0; /*0x4f14d2*/
        NiTMap_U32Pointer_GetNextEntry(v16, &position, (unsigned int *)&a2, &arg0); /*0x4f14da*/
        result = (TESForm *)NiTMap_SetAt(*((_DWORD **)this + 0xC), a2, (int)arg0); /*0x4f14ec*/
      }
      while ( position ); /*0x4f14f6*/
    }
  }
  return result; /*0x4f14f8*/
}
