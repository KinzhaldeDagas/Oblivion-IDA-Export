void __cdecl sub_7AB1D0(__int16 a1)
{
  NiObjectNET *v1; // eax
  BSShaderProperty *v2; // esi
  NiMaterialProperty *v3; // ebp
  void (__stdcall *v4)(volatile LONG *); // ebx
  NiObjectNET *v5; // eax
  BSShaderProperty *v6; // esi
  NiObjectNET *v7; // eax
  BSShaderProperty *v8; // esi
  float *v9; // ebx
  NiGeometry *v10; // esi
  NiScreenElementsData *v11; // eax
  NiScreenElementsData *v12; // eax
  NiAVObject *v13; // esi
  NiObjectNET *v14; // eax
  NiObjectNET *v15; // edi
  NiMaterialProperty *v16; // eax
  double v17; // st7
  NiAVObject *v18; // ebx
  LONG (__stdcall *v19)(volatile LONG *); // ebx
  LONG (__stdcall *v20)(volatile LONG *); // edi
  LONG (__stdcall *v21)(volatile LONG *); // ebx
  int *v22; // edi
  int v23; // esi
  BSShaderProperty *v24; // [esp+24h] [ebp-4Ch]
  BSShaderProperty *v25; // [esp+28h] [ebp-48h]
  BSShaderProperty *a2; // [esp+2Ch] [ebp-44h]
  float *v27; // [esp+30h] [ebp-40h]
  float v28; // [esp+34h] [ebp-3Ch]
  float v29; // [esp+38h] [ebp-38h]
  float v30; // [esp+3Ch] [ebp-34h]
  int v31; // [esp+74h] [ebp+4h]

  if ( (_BYTE)a1 )
  {
    v1 = (NiObjectNET *)FormHeapAlloc(0x1Cu);
    v2 = (BSShaderProperty *)v1;
    v3 = 0;
    if ( v1 )
    {
      NiObjectNET::NiObjectNET(v1);
      v2->vtbl = &NiVertexColorProperty::`vftable';
      v2->member.super.flags = 8;
      a2 = v2;
    }
    else
    {
      a2 = 0;
      v2 = 0;
    }
    v4 = (void (__stdcall *)(volatile LONG *))InterlockedIncrement;
    if ( v2 )
      v4((volatile LONG *)&v2->member);
    v2->member.super.flags &= 0xFFC7u;
    v5 = (NiObjectNET *)FormHeapAlloc(0x1Cu);
    v6 = (BSShaderProperty *)v5;
    if ( v5 )
    {
      NiObjectNET::NiObjectNET(v5);
      v6->vtbl = &NiZBufferProperty::`vftable';
      v6->member.super.flags = 0xF;
      v25 = v6;
    }
    else
    {
      v25 = 0;
      v6 = 0;
    }
    if ( v6 )
      v4((volatile LONG *)&v6->member);
    v6->member.super.flags &= ~1u;
    v6->member.super.flags &= ~2u;
    v7 = (NiObjectNET *)FormHeapAlloc(0x1Cu);
    v8 = (BSShaderProperty *)v7;
    if ( v7 )
    {
      NiObjectNET::NiObjectNET(v7);
      v8->vtbl = &NiAlphaProperty::`vftable';
      v8->member.super.flags = 0xEC;
      v8->member.super.pad01A[0] = 0;
      v24 = v8;
    }
    else
    {
      v24 = 0;
      v8 = 0;
    }
    if ( v8 )
      v4((volatile LONG *)&v8->member);
    v8->member.super.flags &= ~1u;
    v9 = (float *)&unk_B2DE04;
    v31 = 0;
    v27 = (float *)&unk_B2DE04;
    while ( 1 )
    {
      v10 = (NiGeometry *)FormHeapAlloc(0xC0u);
      if ( v10 )
      {
        v11 = (NiScreenElementsData *)FormHeapAlloc(0x70u);
        if ( v11 )
        {
          v12 = NiScreenElementsData::Construct(v11, 0, 0, 1u, 1, 1, 4, 1, 2, 1);
          v13 = NiScreenElements::NiScreenElements(v10, v12);
        }
        else
        {
          v13 = NiScreenElements::NiScreenElements(v10, 0);
        }
      }
      else
      {
        v13 = 0;
      }
      if ( v13 )
        InterlockedIncrement((volatile LONG *)&v13->members);
      sub_702970((NiGeometry *)v13[1].members.super.m_pcName, 4u, 0, 0);
      sub_702EC0((NiGeometry *)v13[1].members.super.m_pcName, 0, 0.0, 0.0, 1.0, 1.0);
      sub_703050((NiGeometry *)v13[1].members.super.m_pcName);
      sub_702FC0((NiGeometry *)v13[1].members.super.m_pcName, 0, 0, 0.0, 0.0, 1.0, 1.0);
      v14 = (NiObjectNET *)FormHeapAlloc(0x24u);
      v15 = v14;
      if ( v14 )
      {
        NiObjectNET::NiObjectNET(v14);
        v15->vtbl = (NiObjectVtbl **)&NiStencilProperty::`vftable';
        v15[1].members.super.m_uiRefCount = 0;
        v15[1].members.m_pcName = (const char *)0xFFFFFFFF;
        LOWORD(v15[1].vtbl) = 0x4180;
      }
      else
      {
        v15 = 0;
      }
      if ( v15 )
        InterlockedIncrement((volatile LONG *)&v15->members);
      LOWORD(v15[1].vtbl) |= 1u;
      LOWORD(v15[1].vtbl) = v31 >= 0x10 ? (int)v15[1].vtbl & 0xFFF | 0x3000 : (int)v15[1].vtbl & 0xFFF | 0x2000;
      LOWORD(v15[1].vtbl) &= 0xFC01u;
      v15[1].members.super.m_uiRefCount = (unsigned __int16)(v31 + 1);
      v16 = (NiMaterialProperty *)FormHeapAlloc(0x5Cu);
      if ( v16 )
        v3 = NiMaterialProperty::NiMaterialProperty(v16);
      if ( v3 )
        InterlockedIncrement((volatile LONG *)v3 + 1);
      v28 = v9[0xFFFFFFFF];
      v29 = *v9;
      v17 = v9[1];
      ++*((_DWORD *)v3 + 0x15);
      v30 = v17;
      *((float *)v3 + 0x10) = v28;
      *((float *)v3 + 0x11) = v29;
      *((float *)v3 + 0x12) = v30;
      sub_405680((NiNode *)v13, (BSShaderProperty *)v15);
      sub_405680((NiNode *)v13, (BSShaderProperty *)v3);
      sub_405680((NiNode *)v13, a2);
      sub_405680((NiNode *)v13, v25);
      sub_405680((NiNode *)v13, v24);
      NiAVObject_InitializePropertyState(v13);
      NiAVObject_UpdateNiAVObject(v13, 0.0, 1);
      v18 = *(NiAVObject **)(4 * v31 + 0xB42CF8);
      if ( v18 != v13 )
      {
        if ( v18 )
        {
          if ( !InterlockedDecrement((volatile LONG *)&v18->members) )
            v18->vtbl->super.super.Destructor((NiRefObject *)v18, 1);
        }
        *(_DWORD *)(4 * v31 + 0xB42CF8) = v13;
        InterlockedIncrement((volatile LONG *)&v13->members);
      }
      v19 = InterlockedDecrement;
      if ( !InterlockedDecrement((volatile LONG *)v3 + 1) )
        (**(void (__thiscall ***)(NiMaterialProperty *, int))v3)(v3, 1);
      if ( !v19((volatile LONG *)&v15->members) )
        (*(void (__thiscall **)(NiObjectNET *, int))v15->vtbl)(v15, 1);
      if ( !v19((volatile LONG *)&v13->members) )
        v13->vtbl->super.super.Destructor((NiRefObject *)v13, 1);
      ++v31;
      v27 += 4;
      if ( (int)v27 >= (int)&dword_B2DF14 )
        break;
      v9 = v27;
      v3 = 0;
    }
    v20 = InterlockedDecrement;
    if ( !InterlockedDecrement((volatile LONG *)&v24->member) )
      (*(void (__thiscall **)(BSShaderProperty *, int))v24->vtbl)(v24, 1);
    if ( !v20((volatile LONG *)&v25->member) )
      (*(void (__thiscall **)(BSShaderProperty *, int))v25->vtbl)(v25, 1);
    if ( !v20((volatile LONG *)&a2->member) )
      (*(void (__thiscall **)(BSShaderProperty *, int))a2->vtbl)(a2, 1);
  }
  else
  {
    v21 = InterlockedDecrement;
    v22 = dword_B42CF8;
    do
    {
      v23 = *v22;
      if ( *v22 )
      {
        if ( !v21((volatile LONG *)(v23 + 4)) )
        {
          if ( v23 )
            (**(void (__thiscall ***)(int, int))v23)(v23, 1);
        }
        *v22 = 0;
      }
      ++v22;
    }
    while ( (int)v22 < (int)&dword_B42D3C );
  }
}
