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

  if ( !this->member.lostDevice )
  {
    if ( a2 )
    {
      if ( a2->member.super.super.m_extraDataList )
      {
        p_unk89C = (Ni2DBuffer ***)&this->member.unk89C;
        propertyState = this->member.super.propertyState;
        dynamicEffectState = this->member.super.dynamicEffectState;
        if ( !this->member.unk89C )
        {
          v4 = (NiPropertyState *)FormHeapAlloc(0x30u);
          if ( v4 )
            v5 = sub_7319E0(v4);
          else
            v5 = 0;
          NiSmartPointer_Set__((Ni2DBuffer **)&this->member.unk89C, (Ni2DBuffer *)v5);
          v6 = (NiObjectNET *)FormHeapAlloc(0x1Cu);
          if ( v6 )
            v7 = sub_405990(v6);
          else
            v7 = 0;
          LOWORD(v7[1].vtbl) = (int)v7[1].vtbl & 0xFFC7 | 0x10;
          sub_707470(*p_unk89C, (Ni2DBuffer *)v7);
          v8 = (NiObjectNET *)FormHeapAlloc(0x1Cu);
          if ( v8 )
            v9 = sub_47F920(v8);
          else
            v9 = 0;
          LOWORD(v9[1].vtbl) = (int)v9[1].vtbl & 0xFE00 | 0xED;
          sub_707470(*p_unk89C, (Ni2DBuffer *)v9);
          v10 = (NiObjectNET *)FormHeapAlloc(0x1Cu);
          if ( v10 )
            v11 = NiObjectNET_Create(v10);
          else
            v11 = 0;
          LOWORD(v11[1].vtbl) &= 0xFFFCu;
          sub_707470(*p_unk89C, (Ni2DBuffer *)v11);
        }
        sub_707470(*p_unk89C, *(Ni2DBuffer **)&a2->member.super.super.m_extraDataListLen);
        geometryGroupMgr = this->member.geometryGroupMgr;
        this->member.super.propertyState = (NiPropertyState *)*p_unk89C;
        unsharedGeometryGroup = this->member.unsharedGeometryGroup;
        this->member.super.dynamicEffectState = 0;
        (*(void (__thiscall **)(NiGeometryGroupManager *, NiGeometryGroup *, NiGeometry *))(*(_DWORD *)geometryGroupMgr
                                                                                          + 0x10))(
          geometryGroupMgr,
          unsharedGeometryGroup,
          a2);
        sub_769B60(this, a2);
        v14 = Vector3_InitValue_;
        v15 = dword_B3F9B0;
        qmemcpy(v21, &stru_B26AF0[0xA].unk2C, 0x24u);
        v21[0xC] = 1.0;
        v16 = *(&Vector3_InitValue_ + 1);
        v21[9] = v14;
        v21[0xA] = v16;
        m_parent = a2->member.super.m_parent;
        v21[0xB] = v15;
        sub_7672F0(this, 0, 0, 0, v21, (UInt32)v20, (NiGeometryBufferData *)m_parent);
        sub_707470(*p_unk89C, (Ni2DBuffer *)dword_B3F974);
        this->member.super.propertyState = propertyState;
        this->member.super.dynamicEffectState = dynamicEffectState;
      }
    }
  }
}
