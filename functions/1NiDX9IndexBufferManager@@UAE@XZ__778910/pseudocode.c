void __thiscall NiDX9IndexBufferManager::~NiDX9IndexBufferManager(NiDX9IndexBufferManager *this)
{
  NiDX9IndexBufferManager *v1; // ebp
  _DWORD *v2; // esi
  unsigned int v3; // edx
  unsigned int v4; // eax
  _DWORD *v5; // ecx
  _DWORD *v6; // eax
  _DWORD *v7; // ebx
  int v8; // eax
  unsigned int v9; // edx
  unsigned int v10; // eax
  _DWORD *v11; // ecx
  unsigned int *v12; // edi
  int v13; // ebp
  unsigned int v14; // esi
  _DWORD *v15; // esi
  _DWORD *v16; // edi
  _DWORD *v17; // ebx
  int v18; // eax
  int v19; // eax
  int v20; // eax
  char *v21; // [esp+10h] [ebp-10h]
  unsigned int i; // [esp+14h] [ebp-Ch]
  unsigned int v23; // [esp+18h] [ebp-8h]

  v1 = this; /*0x778915*/
  *(_DWORD *)this = &NiDX9IndexBufferManager::`vftable'; /*0x77891d*/
  for ( i = 0; i < 3; ++i ) /*0x778924*/
  {
    if ( i ) /*0x778937*/
    {
      if ( i != 1 ) /*0x77893c*/
      {
        v2 = (_DWORD *)((char *)v1 + 0x3C); /*0x778943*/
        v21 = (char *)v1 + 0x3C; /*0x778946*/
        goto LABEL_8; /*0x77894a*/
      }
      v21 = (char *)v1 + 0x2C; /*0x77894f*/
    }
    else
    {
      v21 = (char *)v1 + 0x1C; /*0x778958*/
    }
    v2 = v21; /*0x77895c*/
LABEL_8:
    v3 = v2[1]; /*0x778960*/
    v4 = 0; /*0x778963*/
    if ( v3 ) /*0x778967*/
    {
      v5 = (_DWORD *)v2[2]; /*0x77896c*/
      while ( !*v5 ) /*0x778973*/
      {
        ++v4; /*0x778975*/
        ++v5; /*0x778978*/
        if ( v4 >= v3 ) /*0x77897d*/
          goto LABEL_12; /*0x77897d*/
      }
      v6 = *(_DWORD **)(v2[2] + 4 * v4); /*0x7789a1*/
    }
    else
    {
LABEL_12:
      v6 = 0; /*0x77897f*/
    }
    v7 = v6; /*0x778983*/
    while ( v7 ) /*0x778985*/
    {
      v23 = v7[2]; /*0x778997*/
      if ( *v7 ) /*0x778990*/
      {
        v7 = (_DWORD *)*v7; /*0x77899d*/
      }
      else
      {
        v8 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v2 + 4))(v2, v7[1]); /*0x7789b1*/
        v9 = v2[1]; /*0x7789b3*/
        v10 = v8 + 1; /*0x7789b6*/
        if ( v10 >= v9 ) /*0x7789bb*/
        {
LABEL_22:
          v7 = 0; /*0x7789db*/
        }
        else
        {
          v11 = (_DWORD *)(v2[2] + 4 * v10); /*0x7789c0*/
          while ( !*v11 ) /*0x7789c7*/
          {
            ++v10; /*0x7789cd*/
            ++v11; /*0x7789d0*/
            if ( v10 >= v9 ) /*0x7789d5*/
            {
              v2 = v21; /*0x7789d7*/
              goto LABEL_22; /*0x7789d7*/
            }
          }
          v7 = (_DWORD *)*v11; /*0x778b3e*/
          v2 = v21; /*0x778b40*/
        }
      }
      if ( v23 ) /*0x7789e3*/
      {
        v12 = (unsigned int *)(v23 + 8); /*0x7789e5*/
        v13 = 5; /*0x7789e8*/
        do /*0x778a1d*/
        {
          v14 = *v12; /*0x7789f0*/
          if ( *v12 ) /*0x7789f0*/
          {
            if ( *(_DWORD *)(v14 + 0x20) ) /*0x7789f6*/
              (*(void (__stdcall **)(_DWORD))(**(_DWORD **)(v14 + 0x20) + 8))(*(_DWORD *)(v14 + 0x20)); /*0x778a05*/
            sub_77D1D0((_DWORD *)v14); /*0x778a09*/
            FormHeapFree(v14); /*0x778a0f*/
          }
          ++v12; /*0x778a17*/
          --v13; /*0x778a1a*/
        }
        while ( v13 ); /*0x778a1d*/
        FormHeapFree(v23); /*0x778a24*/
        v1 = this; /*0x778a29*/
        v2 = v21; /*0x778a2d*/
      }
    }
  }
  v15 = (_DWORD *)((char *)v1 + 0x1C); /*0x778a50*/
  NiTMap_Clear((_DWORD *)v1 + 7); /*0x778a55*/
  v16 = (_DWORD *)((char *)v1 + 0x2C); /*0x778a5a*/
  NiTMap_Clear((_DWORD *)v1 + 0xB); /*0x778a5f*/
  v17 = (_DWORD *)((char *)v1 + 0x3C); /*0x778a64*/
  NiTMap_Clear((_DWORD *)v1 + 0xF); /*0x778a69*/
  (*(void (__stdcall **)(_DWORD, _DWORD))(**((_DWORD **)v1 + 2) + 0x1A0))(*((_DWORD *)v1 + 2), 0); /*0x778a7c*/
  v18 = *((_DWORD *)v1 + 3); /*0x778a7e*/
  if ( v18 ) /*0x778a83*/
    (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v18 + 8))(*((_DWORD *)v1 + 3)); /*0x778a8b*/
  v19 = *((_DWORD *)v1 + 5); /*0x778a8d*/
  if ( v19 ) /*0x778a92*/
    (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v19 + 8))(*((_DWORD *)v1 + 5)); /*0x778a9a*/
  v20 = *((_DWORD *)v1 + 2); /*0x778a9c*/
  if ( v20 ) /*0x778aa1*/
  {
    (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v20 + 8))(*((_DWORD *)v1 + 2)); /*0x778aa9*/
    *((_DWORD *)v1 + 2) = 0; /*0x778aab*/
  }
  *v17 = &NiTPointerMap<unsigned int,NiDX9IndexBufferManager::NiDX9IBInfo *>::`vftable'; /*0x778ab4*/
  NiTMap_Clear((_DWORD *)v1 + 0xF); /*0x778aba*/
  *v17 = &NiTMapBase<NiTPointerAllocator<unsigned int>,unsigned int,NiDX9IndexBufferManager::NiDX9IBInfo *>::`vftable'; /*0x778ac1*/
  NiTMap_Clear((_DWORD *)v1 + 0xF); /*0x778ac7*/
  FormHeapFree(*((_DWORD *)v1 + 0x11)); /*0x778ad0*/
  *v16 = &NiTPointerMap<unsigned int,NiDX9IndexBufferManager::NiDX9IBInfo *>::`vftable'; /*0x778ada*/
  NiTMap_Clear((_DWORD *)v1 + 0xB); /*0x778ae0*/
  *v16 = &NiTMapBase<NiTPointerAllocator<unsigned int>,unsigned int,NiDX9IndexBufferManager::NiDX9IBInfo *>::`vftable'; /*0x778ae7*/
  NiTMap_Clear((_DWORD *)v1 + 0xB); /*0x778aed*/
  FormHeapFree(*((_DWORD *)v1 + 0xD)); /*0x778af6*/
  *v15 = &NiTPointerMap<unsigned int,NiDX9IndexBufferManager::NiDX9IBInfo *>::`vftable'; /*0x778b00*/
  NiTMap_Clear((_DWORD *)v1 + 7); /*0x778b06*/
  *v15 = &NiTMapBase<NiTPointerAllocator<unsigned int>,unsigned int,NiDX9IndexBufferManager::NiDX9IBInfo *>::`vftable'; /*0x778b0d*/
  NiTMap_Clear((_DWORD *)v1 + 7); /*0x778b13*/
  FormHeapFree(*((_DWORD *)v1 + 9)); /*0x778b1c*/
  *(_DWORD *)v1 = &NiRefObject::`vftable'; /*0x778b29*/
  InterlockedDecrement(&MEMORY[0xB3FD64]); /*0x778b30*/
}
