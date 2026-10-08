NiDX9TextureData *__cdecl sub_774550(NiTexture *a2, NiDX9Renderer *a3)
{
  Unk6F4 *v2; // ecx
  unsigned int v3; // eax
  NiDX9TextureData *v5; // eax
  NiDX9TextureData *v6; // ebx
  NiInterpController *m_controller; // ebp
  const char *m_pcName; // esi
  NiDevImageConverter *v9; // eax
  int v10; // eax
  Ni2DBuffer *v11; // eax
  float m_fHiKeyTime; // ecx
  int v13; // eax
  Ni2DBuffer *v14; // esi
  unsigned int v15; // esi
  const void *v16; // eax
  int v17; // ecx
  Ni2DBuffer *v18; // esi
  NiDX9Renderer *v19; // ecx
  float v20; // ecx
  UInt32 v21; // eax
  _DWORD *p_vtbl; // esi
  NiDevImageConverter *v23; // eax
  int v24; // eax
  Ni2DBuffer *v25; // eax
  UInt32 v26; // eax
  int v27; // eax
  unsigned int i; // edi
  LONG (__stdcall *v29)(volatile LONG *); // edi
  LONG (__stdcall *v30)(volatile LONG *); // edi
  char v31; // [esp+15h] [ebp-5h]
  unsigned int p_flags; // [esp+16h] [ebp-4h]
  const void *v33; // [esp+16h] [ebp-4h]

  v2 = &a3->member.unk6F4[2]; /*0x77455b*/
  v3 = 0; /*0x774561*/
  while ( !*(&v2->unk00 + v3) ) /*0x774566*/
  {
    if ( *(&v2->unk04 + v3) ) /*0x774568*/
    {
      ++v3; /*0x774578*/
      break; /*0x774578*/
    }
    v3 += 2; /*0x77456e*/
    if ( v3 >= 0x16 ) /*0x774574*/
      break; /*0x774574*/
  }
  if ( v3 == 0x16 ) /*0x77457e*/
  {
    Shared_NoOpVirtual_60D0A0(v2); /*0x774585*/
    return 0; /*0x774594*/
  }
  v5 = (NiDX9TextureData *)FormHeapAlloc(0x80u); /*0x77459c*/
  v6 = v5; /*0x7745a5*/
  if ( v5 ) /*0x7745ac*/
  {
    sub_760BF0(v5, a2, a3); /*0x7745b2*/
    v6->_vtbl = &NiDX9SourceCubeMapData::`vftable'; /*0x7745b7*/
    v6[1].PixelFormat.ExtraData = 0; /*0x7745bd*/
    v6[1]._vtbl = 0; /*0x7745c0*/
  }
  else
  {
    v6 = 0; /*0x7745c5*/
  }
  m_controller = a2[1].members.super.m_controller; /*0x7745c7*/
  if ( m_controller ) /*0x7745cc*/
    InterlockedIncrement((volatile LONG *)&m_controller->member); /*0x7745d2*/
  p_flags = (unsigned int)&m_controller->member.flags; /*0x7745dd*/
  v31 = 0; /*0x7745e1*/
  if ( !m_controller ) /*0x7745e6*/
  {
    m_pcName = a2[1].members.super.m_pcName; /*0x7745e8*/
    if ( m_pcName ) /*0x7745ed*/
    {
      v9 = sub_71B280(); /*0x7745ef*/
      v10 = (*(int (__thiscall **)(NiDevImageConverter *, const char *, _DWORD))(*(_DWORD *)v9 + 8))(v9, m_pcName, 0); /*0x7745fd*/
      if ( v10 ) /*0x774601*/
      {
        m_controller = (NiInterpController *)v10; /*0x774603*/
        InterlockedIncrement((volatile LONG *)(v10 + 4)); /*0x774609*/
      }
    }
    else
    {
      v11 = sub_701400((NiSourceTexture *)a2, 0x80000008); /*0x774619*/
      if ( v11 ) /*0x774623*/
      {
        m_controller = (NiInterpController *)v11; /*0x774625*/
        InterlockedIncrement((volatile LONG *)&v11->members); /*0x77462b*/
      }
      v31 = 1; /*0x774631*/
    }
  }
  m_fHiKeyTime = m_controller[1].member.m_fHiKeyTime; /*0x774636*/
  v13 = *(_DWORD *)LODWORD(m_fHiKeyTime); /*0x774639*/
  if ( *(_DWORD *)LODWORD(m_fHiKeyTime) != *(_DWORD *)LODWORD(m_controller[1].member.m_fStartTime) /*0x774650*/
    || !v13
    || ((v13 - 1) & v13) != 0 )
  {
    if ( !v31 ) /*0x774657*/
    {
      v14 = sub_701400((NiSourceTexture *)a2, 0x80000009); /*0x774666*/
      if ( m_controller != (NiInterpController *)v14 ) /*0x77466d*/
      {
        if ( !InterlockedDecrement((volatile LONG *)&m_controller->member) ) /*0x774673*/
          m_controller->vtbl->super.super.super.Destructor((NiRefObject *)m_controller, 1); /*0x774686*/
        m_controller = (NiInterpController *)v14; /*0x77468a*/
        if ( v14 ) /*0x77468c*/
          InterlockedIncrement((volatile LONG *)&v14->members); /*0x774692*/
      }
    }
    v31 = 1; /*0x774698*/
  }
  if ( v31 /*0x7746d1*/
    || (v15 = p_flags,
        v16 = (const void *)sub_773BA0(p_flags, &a2->members.formatPrefs, &a3->member.unk6F4[2].unk00),
        (v33 = v16) == 0)
    || (v17 = *(_DWORD *)(v15 + 4), v17 == 2)
    || v17 == 3 )
  {
    v31 = 1; /*0x7746df*/
    v18 = sub_701400((NiSourceTexture *)a2, 0x80000007); /*0x7746e9*/
    if ( m_controller != (NiInterpController *)v18 ) /*0x7746f0*/
    {
      if ( m_controller ) /*0x7746f4*/
      {
        if ( !InterlockedDecrement((volatile LONG *)&m_controller->member) ) /*0x7746fa*/
          m_controller->vtbl->super.super.super.Destructor((NiRefObject *)m_controller, 1); /*0x77470d*/
      }
      m_controller = (NiInterpController *)v18; /*0x774711*/
      if ( v18 ) /*0x774713*/
        InterlockedIncrement((volatile LONG *)&v18->members); /*0x774719*/
    }
    v19 = a3; /*0x77471f*/
    v16 = (const void *)*(&a3->member.unk6F4[0].unk00 + a3->member.unk874); /*0x774729*/
    v33 = v16; /*0x774730*/
  }
  else
  {
    if ( a2->members.formatPrefs.mipmapFormat == kMipMap_Enabled ) /*0x77473a*/
      goto LABEL_47; /*0x77473a*/
    v19 = a3; /*0x77473c*/
  }
  if ( a2->members.formatPrefs.mipmapFormat != kMipMap_Default /*0x77474f*/
    || !OB_NiSourceTexture_s_defaultGenerateMipmaps_010201A0
    || !v19->member.pad6E8 )
  {
    BYTE1(v6[1].parent) = 0; /*0x77475e*/
    goto LABEL_49; /*0x77475e*/
  }
LABEL_47:
  BYTE1(v6[1].parent) = 1; /*0x774758*/
LABEL_49:
  qmemcpy(&v6->PixelFormat, v16, sizeof(v6->PixelFormat)); /*0x774762*/
  v20 = m_controller[1].member.m_fHiKeyTime; /*0x77476e*/
  v21 = *(_DWORD *)LODWORD(v20); /*0x774771*/
  p_vtbl = 0; /*0x774773*/
  v6->Height = *(_DWORD *)LODWORD(v20); /*0x77477a*/
  v6->Width = v21; /*0x77477d*/
  if ( v31 ) /*0x774780*/
  {
    p_vtbl = &m_controller->vtbl; /*0x774786*/
    InterlockedIncrement((volatile LONG *)&m_controller->member); /*0x774788*/
  }
  else
  {
    v23 = sub_71B280(); /*0x774790*/
    v24 = (*(int (__thiscall **)(NiDevImageConverter *, NiInterpController *, const void *, NiInterpController *, _DWORD))(*(_DWORD *)v23 + 0x10))( /*0x7747a8*/
            v23,
            m_controller,
            v33,
            m_controller,
            BYTE1(v6[1].parent));
    if ( v24 ) /*0x7747ac*/
    {
      p_vtbl = (_DWORD *)v24; /*0x7747ae*/
      InterlockedIncrement((volatile LONG *)(v24 + 4)); /*0x7747b4*/
    }
    else
    {
      v25 = sub_701400((NiSourceTexture *)a2, 0x80000007); /*0x7747c8*/
      if ( v25 ) /*0x7747d2*/
      {
        p_vtbl = &v25->__vftable; /*0x7747d4*/
        InterlockedIncrement((volatile LONG *)&v25->members); /*0x7747da*/
      }
      v31 = 1; /*0x7747e0*/
    }
    v6[1].pRenderer = (NiDX9Renderer *)(p_vtbl[0x1B] * *(_DWORD *)(p_vtbl[0x17] + 4 * p_vtbl[0x18])); /*0x7747f2*/
  }
  if ( v31 ) /*0x7747fa*/
  {
    v26 = *(_DWORD *)p_vtbl[0x15]; /*0x7747ff*/
    v6->Height = v26; /*0x774801*/
    v6->Width = v26; /*0x774804*/
    v6[1].pRenderer = (NiDX9Renderer *)(p_vtbl[0x1B] * *(_DWORD *)(p_vtbl[0x17] + 4 * p_vtbl[0x18])); /*0x774814*/
    LOBYTE(v6[1].parent) = 1; /*0x774817*/
  }
  if ( a3->member.pad6E8 ) /*0x77481f*/
    v27 = p_vtbl[0x18]; /*0x774828*/
  else
    v27 = 1; /*0x77482d*/
  v6->Levels = v27; /*0x774832*/
  v6[1].PixelFormat.ExtraData = p_vtbl[0x1A]; /*0x77483a*/
  if ( sub_774420(v6) && v6->dTexture ) /*0x774846*/
  {
    for ( i = 0; i < 6; ++i ) /*0x77484c*/
      sub_7744D0(v6, p_vtbl, i); /*0x774854*/
    sub_760D70((Ni2DBuffer **)v6, (Ni2DBuffer *)p_vtbl[0x13]); /*0x774867*/
    v29 = InterlockedDecrement; /*0x77486f*/
    v6->parent->members.rendererData = v6; /*0x774879*/
    if ( !v29(p_vtbl + 1) ) /*0x77487c*/
      (*(void (__thiscall **)(_DWORD *, int))*p_vtbl)(p_vtbl, 1); /*0x77488a*/
    if ( !v29((volatile LONG *)&m_controller->member) ) /*0x774890*/
      m_controller->vtbl->super.super.super.Destructor((NiRefObject *)m_controller, 1); /*0x77489f*/
    return v6; /*0x7748a2*/
  }
  else
  {
    (*(void (__thiscall **)(NiDX9TextureData *, int))v6->_vtbl)(v6, 1); /*0x7748b3*/
    v30 = InterlockedDecrement; /*0x7748b5*/
    if ( !InterlockedDecrement(p_vtbl + 1) ) /*0x7748bf*/
      (*(void (__thiscall **)(_DWORD *, int))*p_vtbl)(p_vtbl, 1); /*0x7748cd*/
    if ( !v30((volatile LONG *)&m_controller->member) ) /*0x7748d3*/
      m_controller->vtbl->super.super.super.Destructor((NiRefObject *)m_controller, 1); /*0x7748e2*/
    return 0; /*0x7748e7*/
  }
}
