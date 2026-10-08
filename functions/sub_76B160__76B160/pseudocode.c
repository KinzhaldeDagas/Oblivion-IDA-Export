// Pass224: NiRenderer::RenderScreenTexture vtable slot. Uses cached renderer+0x89C NiPropertyState and transiently swaps slot 6 to NiScreenTexture+0x14.
void __thiscall sub_76B160(NiDX9Renderer *this, NiGeometry *a2)
{
  Ni2DBuffer ***p_unk89C; // ebp
  NiPropertyState *v4; // eax
  NiPropertyState *v5; // eax
  NiObjectNET *v6; // eax
  NiObjectNET *v7; // eax
  NiObjectNET *v8; // eax
  NiObjectNET *v9; // eax
  NiObjectNET *v10; // eax
  NiObjectNET *v11; // eax
  NiGeometryGroupManager *geometryGroupMgr; // ecx
  NiGeometryGroup *unsharedGeometryGroup; // eax
  float v14; // eax
  float v15; // edx
  float v16; // ecx
  NiNode *m_parent; // [esp-Ch] [ebp-60h]
  NiPropertyState *propertyState; // [esp+8h] [ebp-4Ch]
  NiDynamicEffectState *dynamicEffectState; // [esp+Ch] [ebp-48h]
  char v20[16]; // [esp+10h] [ebp-44h] BYREF
  float v21[13]; // [esp+20h] [ebp-34h] BYREF

  if ( !this->member.lostDevice ) /*0x76b166*/
  {
    if ( a2 ) /*0x76b17a*/
    {
      if ( a2->member.super.super.m_extraDataList ) /*0x76b180*/
      {
        p_unk89C = (Ni2DBuffer ***)&this->member.unk89C; /*0x76b198*/
        propertyState = this->member.super.propertyState; /*0x76b19f*/
        dynamicEffectState = this->member.super.dynamicEffectState; /*0x76b1a3*/
        if ( !this->member.unk89C ) /*0x76b18a*/
        {
          v4 = (NiPropertyState *)FormHeapAlloc(0x30u); /*0x76b1af*/
          if ( v4 ) /*0x76b1b9*/
            v5 = sub_7319E0(v4); /*0x76b1bd*/
          else
            v5 = 0; /*0x76b1c4*/
          NiSmartPointer_Set__((Ni2DBuffer **)&this->member.unk89C, (Ni2DBuffer *)v5); /*0x76b1c9*/
          v6 = (NiObjectNET *)FormHeapAlloc(0x1Cu); /*0x76b1d0*/
          if ( v6 ) /*0x76b1da*/
            v7 = sub_405990(v6); /*0x76b1de*/
          else
            v7 = 0; /*0x76b1e5*/
          LOWORD(v7[1].vtbl) = (int)v7[1].vtbl & 0xFFC7 | 0x10; /*0x76b1f4*/
          sub_707470(*p_unk89C, (Ni2DBuffer *)v7);// Pass224: RenderScreenTexture inserts custom NiVertexColorProperty into cached state slot 7. /*0x76b1fc*/
          v8 = (NiObjectNET *)FormHeapAlloc(0x1Cu); /*0x76b203*/
          if ( v8 ) /*0x76b20d*/
            v9 = NiAlphaProperty_ctor(v8); /*0x76b211*/
          else
            v9 = 0; /*0x76b218*/
          LOWORD(v9[1].vtbl) = (int)v9[1].vtbl & 0xFE00 | 0xED; /*0x76b228*/
          sub_707470(*p_unk89C, (Ni2DBuffer *)v9);// Pass224: RenderScreenTexture inserts custom NiAlphaProperty into cached state slot 0. /*0x76b230*/
          v10 = (NiObjectNET *)FormHeapAlloc(0x1Cu); /*0x76b237*/
          if ( v10 ) /*0x76b241*/
            v11 = NiObjectNET_Create(v10); /*0x76b245*/
          else
            v11 = 0; /*0x76b24c*/
          LOWORD(v11[1].vtbl) &= 0xFFFCu; /*0x76b24e*/
          sub_707470(*p_unk89C, (Ni2DBuffer *)v11);// Pass224: RenderScreenTexture inserts custom NiZBufferProperty into cached state slot 9. /*0x76b258*/
        }
        sub_707470(*p_unk89C, *(Ni2DBuffer **)&a2->member.super.super.m_extraDataListLen);// Pass224: RenderScreenTexture inserts NiScreenTexture +0x14 texturing property into cached state slot 6 for the draw. /*0x76b264*/
        geometryGroupMgr = this->member.geometryGroupMgr; /*0x76b26c*/
        this->member.super.propertyState = (NiPropertyState *)*p_unk89C; /*0x76b272*/
        unsharedGeometryGroup = this->member.unsharedGeometryGroup; /*0x76b275*/
        this->member.super.dynamicEffectState = 0; /*0x76b27b*/
        (*(void (__thiscall **)(NiGeometryGroupManager *, NiGeometryGroup *, NiGeometry *))(*(_DWORD *)geometryGroupMgr /*0x76b289*/
                                                                                          + 0x10))(
          geometryGroupMgr,
          unsharedGeometryGroup,
          a2);
        sub_769B60(this, a2); /*0x76b28e*/
        v14 = g_zeroNiPoint3; /*0x76b295*/
        v15 = MEMORY[0xB3F9B0][0]; /*0x76b29a*/
        qmemcpy(v21, &stru_B26AF0[0xA].unk2C, 0x24u); /*0x76b2ae*/
        v21[0xC] = 1.0; /*0x76b2b0*/
        v16 = MEMORY[0xB3F9AC]; /*0x76b2b4*/
        v21[9] = v14; /*0x76b2ba*/
        v21[0xA] = v16; /*0x76b2c2*/
        m_parent = a2->member.super.m_parent; /*0x76b2c9*/
        v21[0xB] = v15; /*0x76b2ca*/
        NiDX9Renderer_RenderGeometryNonSkinned(this, 0, 0, 0, v21, (UInt32)v20, (NiGeometryBufferData *)m_parent);// MoonSugarEffect decode: special extra-data/property render path also calls sub_7672F0 with a2/a3/a4 null-ish. Do not patch this call for first Moon Sugar geometry wobble; use RenderTriGeometries call site 0x007694D7 and filter null/screen/skinned geometry. /*0x76b2e0*/
        sub_707470(*p_unk89C, (Ni2DBuffer *)unk_B3F974);// Pass224: RenderScreenTexture resets cached state slot 6 back to default NiTexturingProperty global 0x00B3F974 after draw. /*0x76b2ef*/
        this->member.super.propertyState = propertyState; /*0x76b2fd*/
        this->member.super.dynamicEffectState = dynamicEffectState; /*0x76b300*/
      }
    }
  }
}
