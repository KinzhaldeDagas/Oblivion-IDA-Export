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

  v3 = this + 1;
  if ( !*(this + 1) )
  {
    v4 = (NiNode *)FormHeapAlloc(0xDCu);
    if ( v4 )
      v5 = NiNode::NiNode(v4, 0);
    else
      v5 = 0;
    NiSmartPointer_Set__(v3, (Ni2DBuffer *)v5);
    v6 = (NiObjectNET *)FormHeapAlloc(0x1Cu);
    v7 = (BSShaderProperty *)v6;
    if ( v6 )
    {
      NiObjectNET::NiObjectNET(v6);
      v7->vtbl = &NiAlphaProperty::`vftable';
      v7->member.super.flags = 0xEC;
      v7->member.super.pad01A[0] = 0;
    }
    else
    {
      v7 = 0;
    }
    v7->member.super.flags = v7->member.super.flags & 0xDC00 | 0xED;
    sub_405680((NiNode *)*v3, v7);
    NiSmartPointer_Set__(this + 9, (Ni2DBuffer *)v7);
    v8 = (NiMaterialProperty *)FormHeapAlloc(0x5Cu);
    if ( v8 )
      v9 = NiMaterialProperty::NiMaterialProperty(v8);
    else
      v9 = 0;
    *((_DWORD *)v9 + 0x15) += 2;
    *((float *)v9 + 7) = 1.0;
    *((float *)v9 + 8) = 1.0;
    *((float *)v9 + 0xA) = 1.0;
    *((float *)v9 + 9) = 1.0;
    *((float *)v9 + 0xB) = 1.0;
    *((float *)v9 + 0xC) = 1.0;
    sub_405680((NiNode *)*v3, (BSShaderProperty *)v9);
    v10 = (NiObjectNET *)FormHeapAlloc(0x1Cu);
    v11 = (BSShaderProperty *)v10;
    if ( v10 )
    {
      NiObjectNET::NiObjectNET(v10);
      v11->vtbl = &NiZBufferProperty::`vftable';
      v11->member.super.flags = 0xF;
      v12 = v11;
    }
    else
    {
      v12 = 0;
    }
    v12->member.super.flags = v12->member.super.flags & 0xFFFC | 1;
    sub_405680((NiNode *)*v3, v12);
    v13 = (NiObjectNET *)FormHeapAlloc(0x24u);
    v14 = v13;
    if ( v13 )
    {
      NiObjectNET::NiObjectNET(v13);
      v14->vtbl = (NiObjectVtbl **)&NiStencilProperty::`vftable';
      v14[1].members.super.m_uiRefCount = 0;
      v14[1].members.m_pcName = (const char *)0xFFFFFFFF;
      LOWORD(v14[1].vtbl) = 0x4180;
    }
    else
    {
      v14 = 0;
    }
    LOWORD(v14[1].vtbl) |= 0xC00u;
    sub_405680((NiNode *)*v3, (BSShaderProperty *)v14);
    v15 = *v3;
    if ( a2 )
      NiObjectNET_SetName((NiObjectNET *)v15, a2);
    else
      NiObjectNET_SetName((NiObjectNET *)v15, "Water Node");
  }
}
