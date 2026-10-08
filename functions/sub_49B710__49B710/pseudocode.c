void __thiscall sub_49B710(Ni2DBuffer **this, char *a2)
{
  Ni2DBuffer **v3; // edi
  NiNode *v4; // eax
  NiNode *v5; // eax
  NiObjectNET *v6; // eax
  BSShaderProperty *v7; // esi
  NiMaterialProperty *v8; // eax
  NiMaterialProperty *v9; // eax
  NiObjectNET *v10; // eax
  BSShaderProperty *v11; // esi
  BSShaderProperty *v12; // eax
  NiObjectNET *v13; // eax
  NiObjectNET *v14; // esi
  Ni2DBuffer *v15; // ecx

  v3 = this + 1; /*0x49b73e*/
  if ( !*(this + 1) ) /*0x49b739*/
  {
    v4 = (NiNode *)FormHeapAlloc(0xDCu); /*0x49b74c*/
    if ( v4 ) /*0x49b762*/
      v5 = NiNode::NiNode(v4, 0); /*0x49b768*/
    else
      v5 = 0; /*0x49b76f*/
    NiSmartPointer_Set__(v3, (Ni2DBuffer *)v5); /*0x49b77b*/
    v6 = (NiObjectNET *)FormHeapAlloc(0x1Cu); /*0x49b782*/
    v7 = (BSShaderProperty *)v6; /*0x49b787*/
    if ( v6 ) /*0x49b79a*/
    {
      NiObjectNET::NiObjectNET(v6); /*0x49b79e*/
      v7->vtbl = &NiAlphaProperty::`vftable'; /*0x49b7a3*/
      v7->member.super.flags = 0xEC; /*0x49b7a9*/
      v7->member.super.pad01A[0] = 0; /*0x49b7af*/
    }
    else
    {
      v7 = 0; /*0x49b7b5*/
    }
    v7->member.super.flags = v7->member.super.flags & 0xDC00 | 0xED; /*0x49b7c3*/
    sub_405680((NiNode *)*v3, v7); /*0x49b7ce*/
    NiSmartPointer_Set__(this + 9, (Ni2DBuffer *)v7); /*0x49b7d7*/
    v8 = (NiMaterialProperty *)FormHeapAlloc(0x5Cu); /*0x49b7de*/
    if ( v8 ) /*0x49b7f5*/
      v9 = NiMaterialProperty::NiMaterialProperty(v8); /*0x49b7f9*/
    else
      v9 = 0; /*0x49b800*/
    *((_DWORD *)v9 + 0x15) += 2; /*0x49b804*/
    *((float *)v9 + 7) = 1.0; /*0x49b81c*/
    *((float *)v9 + 8) = 1.0; /*0x49b82b*/
    *((float *)v9 + 0xA) = 1.0; /*0x49b836*/
    *((float *)v9 + 9) = 1.0; /*0x49b83d*/
    *((float *)v9 + 0xB) = 1.0; /*0x49b844*/
    *((float *)v9 + 0xC) = 1.0; /*0x49b847*/
    sub_405680((NiNode *)*v3, (BSShaderProperty *)v9); /*0x49b850*/
    v10 = (NiObjectNET *)FormHeapAlloc(0x1Cu); /*0x49b857*/
    v11 = (BSShaderProperty *)v10; /*0x49b85c*/
    if ( v10 ) /*0x49b86f*/
    {
      NiObjectNET::NiObjectNET(v10); /*0x49b873*/
      v11->vtbl = &NiZBufferProperty::`vftable'; /*0x49b878*/
      v11->member.super.flags = 0xF; /*0x49b87e*/
      v12 = v11; /*0x49b884*/
    }
    else
    {
      v12 = 0; /*0x49b888*/
    }
    v12->member.super.flags = v12->member.super.flags & 0xFFFC | 1; /*0x49b897*/
    sub_405680((NiNode *)*v3, v12); /*0x49b8a2*/
    v13 = (NiObjectNET *)FormHeapAlloc(0x24u); /*0x49b8a9*/
    v14 = v13; /*0x49b8ae*/
    if ( v13 ) /*0x49b8c1*/
    {
      NiObjectNET::NiObjectNET(v13); /*0x49b8c5*/
      v14->vtbl = (NiObjectVtbl **)&NiStencilProperty::`vftable'; /*0x49b8ca*/
      v14[1].members.super.m_uiRefCount = 0; /*0x49b8d0*/
      v14[1].members.m_pcName = (const char *)0xFFFFFFFF; /*0x49b8d7*/
      LOWORD(v14[1].vtbl) = 0x4180; /*0x49b8da*/
    }
    else
    {
      v14 = 0; /*0x49b8e2*/
    }
    LOWORD(v14[1].vtbl) |= 0xC00u; /*0x49b8e4*/
    sub_405680((NiNode *)*v3, (BSShaderProperty *)v14); /*0x49b8f1*/
    v15 = *v3; /*0x49b8fc*/
    if ( a2 ) /*0x49b8fe*/
      NiObjectNET_SetName((NiObjectNET *)v15, a2); /*0x49b901*/
    else
      NiObjectNET_SetName((NiObjectNET *)v15, "Water Node"); /*0x49b908*/
  }
}
