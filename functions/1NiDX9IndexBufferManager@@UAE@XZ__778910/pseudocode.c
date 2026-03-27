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

  v1 = this;
  *(_DWORD *)this = &NiDX9IndexBufferManager::`vftable';
  for ( i = 0; i < 3; ++i )
  {
    if ( i )
    {
      if ( i != 1 )
      {
        v2 = (_DWORD *)((char *)v1 + 0x3C);
        v21 = (char *)v1 + 0x3C;
        goto LABEL_8;
      }
      v21 = (char *)v1 + 0x2C;
    }
    else
    {
      v21 = (char *)v1 + 0x1C;
    }
    v2 = v21;
LABEL_8:
    v3 = v2[1];
    v4 = 0;
    if ( v3 )
    {
      v5 = (_DWORD *)v2[2];
      while ( !*v5 )
      {
        ++v4;
        ++v5;
        if ( v4 >= v3 )
          goto LABEL_12;
      }
      v6 = *(_DWORD **)(v2[2] + 4 * v4);
    }
    else
    {
LABEL_12:
      v6 = 0;
    }
    v7 = v6;
    while ( v7 )
    {
      v23 = v7[2];
      if ( *v7 )
      {
        v7 = (_DWORD *)*v7;
      }
      else
      {
        v8 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v2 + 4))(v2, v7[1]);
        v9 = v2[1];
        v10 = v8 + 1;
        if ( v10 >= v9 )
        {
LABEL_22:
          v7 = 0;
        }
        else
        {
          v11 = (_DWORD *)(v2[2] + 4 * v10);
          while ( !*v11 )
          {
            ++v10;
            ++v11;
            if ( v10 >= v9 )
            {
              v2 = v21;
              goto LABEL_22;
            }
          }
          v7 = (_DWORD *)*v11;
          v2 = v21;
        }
      }
      if ( v23 )
      {
        v12 = (unsigned int *)(v23 + 8);
        v13 = 5;
        do
        {
          v14 = *v12;
          if ( *v12 )
          {
            if ( *(_DWORD *)(v14 + 0x20) )
              (*(void (__stdcall **)(_DWORD))(**(_DWORD **)(v14 + 0x20) + 8))(*(_DWORD *)(v14 + 0x20));
            sub_77D1D0((_DWORD *)v14);
            FormHeapFree(v14);
          }
          ++v12;
          --v13;
        }
        while ( v13 );
        FormHeapFree(v23);
        v1 = this;
        v2 = v21;
      }
    }
  }
  v15 = (_DWORD *)((char *)v1 + 0x1C);
  NiTMap_Clear((_DWORD *)v1 + 7);
  v16 = (_DWORD *)((char *)v1 + 0x2C);
  NiTMap_Clear((_DWORD *)v1 + 0xB);
  v17 = (_DWORD *)((char *)v1 + 0x3C);
  NiTMap_Clear((_DWORD *)v1 + 0xF);
  (*(void (__stdcall **)(_DWORD, _DWORD))(**((_DWORD **)v1 + 2) + 0x1A0))(*((_DWORD *)v1 + 2), 0);
  v18 = *((_DWORD *)v1 + 3);
  if ( v18 )
    (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v18 + 8))(*((_DWORD *)v1 + 3));
  v19 = *((_DWORD *)v1 + 5);
  if ( v19 )
    (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v19 + 8))(*((_DWORD *)v1 + 5));
  v20 = *((_DWORD *)v1 + 2);
  if ( v20 )
  {
    (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v20 + 8))(*((_DWORD *)v1 + 2));
    *((_DWORD *)v1 + 2) = 0;
  }
  *v17 = &NiTPointerMap<unsigned int,NiDX9IndexBufferManager::NiDX9IBInfo *>::`vftable';
  NiTMap_Clear((_DWORD *)v1 + 0xF);
  *v17 = &NiTMapBase<NiTPointerAllocator<unsigned int>,unsigned int,NiDX9IndexBufferManager::NiDX9IBInfo *>::`vftable';
  NiTMap_Clear((_DWORD *)v1 + 0xF);
  FormHeapFree(*((_DWORD *)v1 + 0x11));
  *v16 = &NiTPointerMap<unsigned int,NiDX9IndexBufferManager::NiDX9IBInfo *>::`vftable';
  NiTMap_Clear((_DWORD *)v1 + 0xB);
  *v16 = &NiTMapBase<NiTPointerAllocator<unsigned int>,unsigned int,NiDX9IndexBufferManager::NiDX9IBInfo *>::`vftable';
  NiTMap_Clear((_DWORD *)v1 + 0xB);
  FormHeapFree(*((_DWORD *)v1 + 0xD));
  *v15 = &NiTPointerMap<unsigned int,NiDX9IndexBufferManager::NiDX9IBInfo *>::`vftable';
  NiTMap_Clear((_DWORD *)v1 + 7);
  *v15 = &NiTMapBase<NiTPointerAllocator<unsigned int>,unsigned int,NiDX9IndexBufferManager::NiDX9IBInfo *>::`vftable';
  NiTMap_Clear((_DWORD *)v1 + 7);
  FormHeapFree(*((_DWORD *)v1 + 9));
  *(_DWORD *)v1 = &NiRefObject::`vftable';
  InterlockedDecrement(&NiRefObject_objcount);
}
