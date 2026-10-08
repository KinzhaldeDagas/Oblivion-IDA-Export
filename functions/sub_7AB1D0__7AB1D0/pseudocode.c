// MoonSugarEffect decode: mode-4 helper creates/releases global screen-element quads at B42CF8..B42D3C with vertex/z/alpha/stencil/material props; not a Moon Sugar mask API.
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
    v1 = (NiObjectNET *)FormHeapAlloc(0x1Cu); /*0x7ab204*/
    v2 = (BSShaderProperty *)v1; /*0x7ab209*/
    v3 = 0; /*0x7ab212*/
    if ( v1 ) /*0x7ab21a*/
    {
      NiObjectNET::NiObjectNET(v1); /*0x7ab21e*/
      v2->vtbl = &NiVertexColorProperty::`vftable'; /*0x7ab223*/
      v2->member.super.flags = 8; /*0x7ab229*/
      a2 = v2; /*0x7ab22f*/
    }
    else
    {
      a2 = 0; /*0x7ab235*/
      v2 = 0; /*0x7ab239*/
    }
    v4 = (void (__stdcall *)(volatile LONG *))InterlockedIncrement; /*0x7ab23d*/
    if ( v2 ) /*0x7ab247*/
      v4((volatile LONG *)&v2->member); /*0x7ab24d*/
    v2->member.super.flags &= 0xFFC7u; /*0x7ab24f*/
    v5 = (NiObjectNET *)FormHeapAlloc(0x1Cu); /*0x7ab25f*/
    v6 = (BSShaderProperty *)v5; /*0x7ab264*/
    if ( v5 ) /*0x7ab274*/
    {
      NiObjectNET::NiObjectNET(v5); /*0x7ab278*/
      v6->vtbl = &NiZBufferProperty::`vftable'; /*0x7ab27d*/
      v6->member.super.flags = 0xF; /*0x7ab283*/
      v25 = v6; /*0x7ab289*/
    }
    else
    {
      v25 = 0; /*0x7ab28f*/
      v6 = 0; /*0x7ab293*/
    }
    if ( v6 ) /*0x7ab29b*/
      v4((volatile LONG *)&v6->member); /*0x7ab2a1*/
    v6->member.super.flags &= ~1u; /*0x7ab2a8*/
    v6->member.super.flags &= ~2u; /*0x7ab2ac*/
    v7 = (NiObjectNET *)FormHeapAlloc(0x1Cu); /*0x7ab2b9*/
    v8 = (BSShaderProperty *)v7; /*0x7ab2be*/
    if ( v7 ) /*0x7ab2ce*/
    {
      NiObjectNET::NiObjectNET(v7); /*0x7ab2d2*/
      v8->vtbl = &NiAlphaProperty::`vftable'; /*0x7ab2d7*/
      v8->member.super.flags = 0xEC; /*0x7ab2dd*/
      v8->member.super.pad01A[0] = 0; /*0x7ab2e3*/
      v24 = v8; /*0x7ab2e7*/
    }
    else
    {
      v24 = 0; /*0x7ab2ed*/
      v8 = 0; /*0x7ab2f1*/
    }
    if ( v8 ) /*0x7ab2f9*/
      v4((volatile LONG *)&v8->member); /*0x7ab2ff*/
    v8->member.super.flags &= ~1u; /*0x7ab301*/
    v9 = (float *)&unk_B2DE04; /*0x7ab305*/
    v31 = 0; /*0x7ab30f*/
    v27 = (float *)&unk_B2DE04; /*0x7ab313*/
    while ( 1 )
    {
      v10 = (NiGeometry *)FormHeapAlloc(0xC0u); /*0x7ab330*/
      if ( v10 ) /*0x7ab340*/
      {
        v11 = (NiScreenElementsData *)FormHeapAlloc(0x70u); /*0x7ab344*/
        if ( v11 ) /*0x7ab357*/
        {
          v12 = NiScreenElementsData::Construct(v11, 0, 0, 1u, 1, 1, 4, 1, 2, 1); /*0x7ab36b*/
          v13 = NiScreenElements::NiScreenElements(v10, v12); /*0x7ab37d*/
        }
        else
        {
          v13 = NiScreenElements::NiScreenElements(v10, 0); /*0x7ab390*/
        }
      }
      else
      {
        v13 = 0; /*0x7ab394*/
      }
      if ( v13 ) /*0x7ab39c*/
        InterlockedIncrement((volatile LONG *)&v13->members); /*0x7ab3a2*/
      sub_702970((NiGeometry *)v13[1].members.super.m_pcName, 4u, 0, 0); /*0x7ab3b7*/
      sub_702EC0((NiGeometry *)v13[1].members.super.m_pcName, 0, 0.0, 0.0, 1.0, 1.0); /*0x7ab3d9*/
      sub_703050((NiGeometry *)v13[1].members.super.m_pcName); /*0x7ab3e4*/
      sub_702FC0((NiGeometry *)v13[1].members.super.m_pcName, 0, 0, 0.0, 0.0, 1.0, 1.0); /*0x7ab407*/
      v14 = (NiObjectNET *)FormHeapAlloc(0x24u); /*0x7ab40e*/
      v15 = v14; /*0x7ab413*/
      if ( v14 ) /*0x7ab423*/
      {
        NiObjectNET::NiObjectNET(v14); /*0x7ab427*/
        v15->vtbl = (NiObjectVtbl **)&NiStencilProperty::`vftable'; /*0x7ab42c*/
        v15[1].members.super.m_uiRefCount = 0; /*0x7ab432*/
        v15[1].members.m_pcName = (const char *)0xFFFFFFFF; /*0x7ab435*/
        LOWORD(v15[1].vtbl) = 0x4180; /*0x7ab43c*/
      }
      else
      {
        v15 = 0; /*0x7ab444*/
      }
      if ( v15 ) /*0x7ab44c*/
        InterlockedIncrement((volatile LONG *)&v15->members); /*0x7ab452*/
      LOWORD(v15[1].vtbl) |= 1u; /*0x7ab45c*/
      LOWORD(v15[1].vtbl) = v31 >= 0x10 ? (int)v15[1].vtbl & 0xFFF | 0x3000 : (int)v15[1].vtbl & 0xFFF | 0x2000;
      LOWORD(v15[1].vtbl) &= 0xFC01u; /*0x7ab491*/
      v15[1].members.super.m_uiRefCount = (unsigned __int16)(v31 + 1); /*0x7ab4a2*/
      v16 = (NiMaterialProperty *)FormHeapAlloc(0x5Cu); /*0x7ab4a5*/
      if ( v16 ) /*0x7ab4b8*/
        v3 = NiMaterialProperty::NiMaterialProperty(v16); /*0x7ab4c1*/
      if ( v3 ) /*0x7ab4c9*/
        InterlockedIncrement((volatile LONG *)v3 + 1); /*0x7ab4cf*/
      v28 = v9[0xFFFFFFFF]; /*0x7ab4d8*/
      v29 = *v9; /*0x7ab4e4*/
      v17 = v9[1]; /*0x7ab4e8*/
      ++*((_DWORD *)v3 + 0x15); /*0x7ab4eb*/
      v30 = v17; /*0x7ab4ef*/
      *((float *)v3 + 0x10) = v28; /*0x7ab503*/
      *((float *)v3 + 0x11) = v29; /*0x7ab512*/
      *((float *)v3 + 0x12) = v30; /*0x7ab51f*/
      sub_405680((NiNode *)v13, (BSShaderProperty *)v15); /*0x7ab522*/
      sub_405680((NiNode *)v13, (BSShaderProperty *)v3); /*0x7ab52a*/
      sub_405680((NiNode *)v13, a2); /*0x7ab536*/
      sub_405680((NiNode *)v13, v25); /*0x7ab542*/
      sub_405680((NiNode *)v13, v24); /*0x7ab54e*/
      NiAVObject_InitializePropertyState(v13); /*0x7ab555*/
      NiAVObject_UpdateNiAVObject(v13, 0.0, 1); /*0x7ab564*/
      v18 = *(NiAVObject **)(4 * v31 + 0xB42CF8); /*0x7ab56d*/
      if ( v18 != v13 ) /*0x7ab576*/
      {
        if ( v18 ) /*0x7ab57a*/
        {
          if ( !InterlockedDecrement((volatile LONG *)&v18->members) ) /*0x7ab580*/
            v18->vtbl->super.super.Destructor((NiRefObject *)v18, 1); /*0x7ab596*/
        }
        *(_DWORD *)(4 * v31 + 0xB42CF8) = v13; /*0x7ab5a0*/
        InterlockedIncrement((volatile LONG *)&v13->members); /*0x7ab5a7*/
      }
      v19 = InterlockedDecrement; /*0x7ab5ad*/
      if ( !InterlockedDecrement((volatile LONG *)v3 + 1) ) /*0x7ab5bc*/
        (**(void (__thiscall ***)(NiMaterialProperty *, int))v3)(v3, 1); /*0x7ab5cb*/
      if ( !v19((volatile LONG *)&v15->members) ) /*0x7ab5d6*/
        (*(void (__thiscall **)(NiObjectNET *, int))v15->vtbl)(v15, 1); /*0x7ab5e4*/
      if ( !v19((volatile LONG *)&v13->members) ) /*0x7ab5ef*/
        v13->vtbl->super.super.Destructor((NiRefObject *)v13, 1); /*0x7ab5fd*/
      ++v31; /*0x7ab603*/
      v27 += 4; /*0x7ab610*/
      if ( (int)v27 >= (int)&dword_B2DF14 ) /*0x7ab614*/
        break; /*0x7ab614*/
      v9 = v27; /*0x7ab320*/
      v3 = 0; /*0x7ab324*/
    }
    v20 = InterlockedDecrement; /*0x7ab61e*/
    if ( !InterlockedDecrement((volatile LONG *)&v24->member) ) /*0x7ab62d*/
      (*(void (__thiscall **)(BSShaderProperty *, int))v24->vtbl)(v24, 1); /*0x7ab63b*/
    if ( !v20((volatile LONG *)&v25->member) ) /*0x7ab64a*/
      (*(void (__thiscall **)(BSShaderProperty *, int))v25->vtbl)(v25, 1); /*0x7ab658*/
    if ( !v20((volatile LONG *)&a2->member) ) /*0x7ab66a*/
      (*(void (__thiscall **)(BSShaderProperty *, int))a2->vtbl)(a2, 1); /*0x7ab678*/
  }
  else
  {
    v21 = InterlockedDecrement; /*0x7ab68e*/
    v22 = unk_B42CF8; /*0x7ab694*/
    do /*0x7ab6cd*/
    {
      v23 = *v22; /*0x7ab6a0*/
      if ( *v22 ) /*0x7ab6a0*/
      {
        if ( !v21((volatile LONG *)(v23 + 4)) ) /*0x7ab6aa*/
        {
          if ( v23 ) /*0x7ab6b2*/
            (**(void (__thiscall ***)(int, int))v23)(v23, 1); /*0x7ab6bc*/
        }
        *v22 = 0; /*0x7ab6be*/
      }
      ++v22; /*0x7ab6c4*/
    }
    while ( (int)v22 < (int)&unk_B42D3C ); /*0x7ab6cd*/
  }
}
