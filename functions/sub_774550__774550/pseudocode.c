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

  v2 = &a3->member.unk6F4[2];
  v3 = 0;
  while ( !*(&v2->unk00 + v3) )
  {
    if ( *(&v2->unk04 + v3) )
    {
      ++v3;
      break;
    }
    v3 += 2;
    if ( v3 >= 0x16 )
      break;
  }
  if ( v3 == 0x16 )
  {
    TESTexture::ClearComponentReferences(v2);
    return 0;
  }
  v5 = (NiDX9TextureData *)FormHeapAlloc(0x80u);
  v6 = v5;
  if ( v5 )
  {
    sub_760BF0(v5, a2, a3);
    v6->_vtbl = &NiDX9SourceCubeMapData::`vftable';
    v6[1].PixelFormat.ExtraData = 0;
    v6[1]._vtbl = 0;
  }
  else
  {
    v6 = 0;
  }
  m_controller = a2[1].members.super.m_controller;
  if ( m_controller )
    InterlockedIncrement((volatile LONG *)&m_controller->member);
  p_flags = (unsigned int)&m_controller->member.flags;
  v31 = 0;
  if ( !m_controller )
  {
    m_pcName = a2[1].members.super.m_pcName;
    if ( m_pcName )
    {
      v9 = sub_71B280();
      v10 = (*(int (__thiscall **)(NiDevImageConverter *, const char *, _DWORD))(*(_DWORD *)v9 + 8))(v9, m_pcName, 0);
      if ( v10 )
      {
        m_controller = (NiInterpController *)v10;
        InterlockedIncrement((volatile LONG *)(v10 + 4));
      }
    }
    else
    {
      v11 = sub_701400((NiSourceTexture *)a2, 0x80000008);
      if ( v11 )
      {
        m_controller = (NiInterpController *)v11;
        InterlockedIncrement((volatile LONG *)&v11->members);
      }
      v31 = 1;
    }
  }
  m_fHiKeyTime = m_controller[1].member.m_fHiKeyTime;
  v13 = *(_DWORD *)LODWORD(m_fHiKeyTime);
  if ( *(_DWORD *)LODWORD(m_fHiKeyTime) != *(_DWORD *)LODWORD(m_controller[1].member.m_fStartTime)
    || !v13
    || ((v13 - 1) & v13) != 0 )
  {
    if ( !v31 )
    {
      v14 = sub_701400((NiSourceTexture *)a2, 0x80000009);
      if ( m_controller != (NiInterpController *)v14 )
      {
        if ( !InterlockedDecrement((volatile LONG *)&m_controller->member) )
          m_controller->vtbl->super.super.super.Destructor((NiRefObject *)m_controller, 1);
        m_controller = (NiInterpController *)v14;
        if ( v14 )
          InterlockedIncrement((volatile LONG *)&v14->members);
      }
    }
    v31 = 1;
  }
  if ( v31
    || (v15 = p_flags,
        v16 = (const void *)sub_773BA0(p_flags, &a2->members.formatPrefs, &a3->member.unk6F4[2].unk00),
        (v33 = v16) == 0)
    || (v17 = *(_DWORD *)(v15 + 4), v17 == 2)
    || v17 == 3 )
  {
    v31 = 1;
    v18 = sub_701400((NiSourceTexture *)a2, 0x80000007);
    if ( m_controller != (NiInterpController *)v18 )
    {
      if ( m_controller )
      {
        if ( !InterlockedDecrement((volatile LONG *)&m_controller->member) )
          m_controller->vtbl->super.super.super.Destructor((NiRefObject *)m_controller, 1);
      }
      m_controller = (NiInterpController *)v18;
      if ( v18 )
        InterlockedIncrement((volatile LONG *)&v18->members);
    }
    v19 = a3;
    v16 = (const void *)*(&a3->member.unk6F4[0].unk00 + a3->member.unk874);
    v33 = v16;
  }
  else
  {
    if ( a2->members.formatPrefs.mipmapFormat == kMipMap_Enabled )
      goto LABEL_47;
    v19 = a3;
  }
  if ( a2->members.formatPrefs.mipmapFormat != kMipMap_Default || !byte_B3F708 || !v19->member.pad6E8 )
  {
    BYTE1(v6[1].parent) = 0;
    goto LABEL_49;
  }
LABEL_47:
  BYTE1(v6[1].parent) = 1;
LABEL_49:
  qmemcpy(&v6->PixelFormat, v16, sizeof(v6->PixelFormat));
  v20 = m_controller[1].member.m_fHiKeyTime;
  v21 = *(_DWORD *)LODWORD(v20);
  p_vtbl = 0;
  v6->Height = *(_DWORD *)LODWORD(v20);
  v6->Width = v21;
  if ( v31 )
  {
    p_vtbl = &m_controller->vtbl;
    InterlockedIncrement((volatile LONG *)&m_controller->member);
  }
  else
  {
    v23 = sub_71B280();
    v24 = (*(int (__thiscall **)(NiDevImageConverter *, NiInterpController *, const void *, NiInterpController *, _DWORD))(*(_DWORD *)v23 + 0x10))(
            v23,
            m_controller,
            v33,
            m_controller,
            BYTE1(v6[1].parent));
    if ( v24 )
    {
      p_vtbl = (_DWORD *)v24;
      InterlockedIncrement((volatile LONG *)(v24 + 4));
    }
    else
    {
      v25 = sub_701400((NiSourceTexture *)a2, 0x80000007);
      if ( v25 )
      {
        p_vtbl = &v25->__vftable;
        InterlockedIncrement((volatile LONG *)&v25->members);
      }
      v31 = 1;
    }
    v6[1].pRenderer = (NiDX9Renderer *)(p_vtbl[0x1B] * *(_DWORD *)(p_vtbl[0x17] + 4 * p_vtbl[0x18]));
  }
  if ( v31 )
  {
    v26 = *(_DWORD *)p_vtbl[0x15];
    v6->Height = v26;
    v6->Width = v26;
    v6[1].pRenderer = (NiDX9Renderer *)(p_vtbl[0x1B] * *(_DWORD *)(p_vtbl[0x17] + 4 * p_vtbl[0x18]));
    LOBYTE(v6[1].parent) = 1;
  }
  if ( a3->member.pad6E8 )
    v27 = p_vtbl[0x18];
  else
    v27 = 1;
  v6->Levels = v27;
  v6[1].PixelFormat.ExtraData = p_vtbl[0x1A];
  if ( sub_774420(v6) && v6->dTexture )
  {
    for ( i = 0; i < 6; ++i )
      sub_7744D0(v6, p_vtbl, i);
    sub_760D70((Ni2DBuffer **)v6, (Ni2DBuffer *)p_vtbl[0x13]);
    v29 = InterlockedDecrement;
    v6->parent->members.rendererData = v6;
    if ( !v29(p_vtbl + 1) )
      (*(void (__thiscall **)(_DWORD *, int))*p_vtbl)(p_vtbl, 1);
    if ( !v29((volatile LONG *)&m_controller->member) )
      m_controller->vtbl->super.super.super.Destructor((NiRefObject *)m_controller, 1);
    return v6;
  }
  else
  {
    (*(void (__thiscall **)(NiDX9TextureData *, int))v6->_vtbl)(v6, 1);
    v30 = InterlockedDecrement;
    if ( !InterlockedDecrement(p_vtbl + 1) )
      (*(void (__thiscall **)(_DWORD *, int))*p_vtbl)(p_vtbl, 1);
    if ( !v30((volatile LONG *)&m_controller->member) )
      m_controller->vtbl->super.super.super.Destructor((NiRefObject *)m_controller, 1);
    return 0;
  }
}
