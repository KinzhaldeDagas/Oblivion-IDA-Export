void __thiscall sub_6957C0(MobileObject *this)
{
  float *v2; // esi
  unsigned int *v3; // esi
  NiObjectNET *v4; // eax
  BSShaderProperty *v5; // edi
  NiObjectNET *v6; // eax
  BSShaderProperty *v7; // edi
  BSShaderProperty *v8; // eax
  NiObjectNET *v9; // eax
  BSShaderProperty *v10; // edi
  BSShaderProperty *v11; // eax
  TESObjectREFR *v12; // eax
  NiMaterialProperty *v13; // eax
  NiMaterialProperty *v14; // eax
  int v15; // ecx
  int v16; // ecx
  int v17; // edx
  float v18; // edx
  float v19; // [esp+2Ch] [ebp-24h]
  float v20; // [esp+2Ch] [ebp-24h]
  NiAVObject *v21; // [esp+30h] [ebp-20h]
  float v22; // [esp+34h] [ebp-1Ch] BYREF
  float v23; // [esp+38h] [ebp-18h] BYREF
  float v24; // [esp+3Ch] [ebp-14h]
  float v25; // [esp+40h] [ebp-10h]
  int v26; // [esp+4Ch] [ebp-4h]

  v2 = (float *)this->vtbl->super.GetNiNode(this);
  if ( v2 )
  {
    if ( !(*(int (__thiscall **)(float *, const char *))(*(_DWORD *)v2 + 0x58))(v2, "MagicAreaDisplay") )
    {
      v21 = (NiAVObject *)(*(int (__thiscall **)(float *))(*(_DWORD *)v2 + 8))(v2);
      if ( v21 )
      {
        v19 = v2[0x18];
        v20 = (double)EffectItem_GetArea(*((_DWORD **)this + 0x1C)) * fMagicUnitsPerFoot / v19;
        v3 = sub_6FC010(v20, 0xA, 0xA, 0);
        NiObjectNET_SetName((NiObjectNET *)v3, "MagicAreaDisplay");
        v3[0x15] = LODWORD(Vector3_InitValue_);
        v3[0x16] = *((_DWORD *)&Vector3_InitValue_ + 1);
        v3[0x17] = LODWORD(dword_B3F9B0);
        v4 = (NiObjectNET *)FormHeapAlloc(0x1Cu);
        v5 = (BSShaderProperty *)v4;
        v26 = 0;
        if ( v4 )
        {
          NiObjectNET::NiObjectNET(v4);
          v5->vtbl = &NiVertexColorProperty::`vftable';
          v5->member.super.flags = 8;
        }
        else
        {
          v5 = 0;
        }
        v5->member.super.flags &= 0xFFC7u;
        sub_405680((NiNode *)v3, v5);
        v6 = (NiObjectNET *)FormHeapAlloc(0x1Cu);
        v7 = (BSShaderProperty *)v6;
        v26 = 1;
        if ( v6 )
        {
          NiObjectNET::NiObjectNET(v6);
          v7->vtbl = &NiZBufferProperty::`vftable';
          v7->member.super.flags = 0xF;
          v8 = v7;
        }
        else
        {
          v8 = 0;
        }
        v8->member.super.flags |= 3u;
        sub_405680((NiNode *)v3, v8);
        v9 = (NiObjectNET *)FormHeapAlloc(0x1Cu);
        v10 = (BSShaderProperty *)v9;
        v26 = 2;
        if ( v9 )
        {
          NiObjectNET::NiObjectNET(v9);
          v10->vtbl = &NiWireframeProperty::`vftable';
          v10->member.super.flags = 0;
          v11 = v10;
        }
        else
        {
          v11 = 0;
        }
        v11->member.super.flags |= 1u;
        v26 = 0xFFFFFFFF;
        sub_405680((NiNode *)v3, v11);
        v23 = 0.0;
        v24 = 0.0;
        v25 = 0.0;
        v12 = sub_65ABE0(this, (TESObjectREFR *)&v22);
        sub_8A8140((char)v12->vtbl, &v23);
        v13 = (NiMaterialProperty *)FormHeapAlloc(0x5Cu);
        v26 = 3;
        if ( v13 )
          v14 = NiMaterialProperty::NiMaterialProperty(v13);
        else
          v14 = 0;
        *((_DWORD *)v14 + 7) = dword_B25AC4;
        *((_DWORD *)v14 + 8) = dword_B25AC8;
        v15 = dword_B25ACC;
        ++*((_DWORD *)v14 + 0x15);
        *((_DWORD *)v14 + 9) = v15;
        v16 = *((_DWORD *)v14 + 0x15);
        *((_DWORD *)v14 + 0xA) = dword_B25AC4;
        *((_DWORD *)v14 + 0xB) = dword_B25AC8;
        v17 = dword_B25ACC;
        *((_DWORD *)v14 + 0x15) = ++v16;
        *((_DWORD *)v14 + 0xC) = v17;
        *((float *)v14 + 0x10) = v23;
        *((float *)v14 + 0x11) = v24;
        v18 = v25;
        *((_DWORD *)v14 + 0x15) = v16 + 1;
        v26 = 0xFFFFFFFF;
        *((float *)v14 + 0x12) = v18;
        sub_405680((NiNode *)v3, (BSShaderProperty *)v14);
        ((void (__thiscall *)(NiAVObject *, unsigned int *, _DWORD))v21->vtbl[1].super.super.Destructor)(v21, v3, 0);
        NiAVObject_InitializePropertyState(v21);
      }
    }
  }
}
