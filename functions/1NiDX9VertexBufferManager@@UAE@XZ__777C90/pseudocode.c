void __thiscall NiDX9VertexBufferManager::~NiDX9VertexBufferManager(NiDX9VertexBufferManager *this)
{
  NiDX9VertexBufferManager *v1; // ebp
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
  unsigned int v15; // [esp-4h] [ebp-24h]
  char *v16; // [esp+10h] [ebp-10h]
  unsigned int i; // [esp+14h] [ebp-Ch]
  unsigned int v18; // [esp+18h] [ebp-8h]

  v1 = this;
  *(_DWORD *)this = &NiDX9VertexBufferManager::`vftable';
  for ( i = 0; i < 3; ++i )
  {
    if ( i )
    {
      if ( i != 1 )
      {
        v2 = (_DWORD *)((char *)v1 + 0x2C);
        v16 = (char *)v1 + 0x2C;
        goto LABEL_8;
      }
      v16 = (char *)v1 + 0x1C;
    }
    else
    {
      v16 = (char *)v1 + 0xC;
    }
    v2 = v16;
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
      v18 = v7[2];
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
              v2 = v16;
              goto LABEL_22;
            }
          }
          v7 = (_DWORD *)*v11;
          v2 = v16;
        }
      }
      if ( v18 )
      {
        v12 = (unsigned int *)(v18 + 8);
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
        FormHeapFree(v18);
        v2 = v16;
        v1 = this;
      }
    }
  }
  NiTMap_Clear((_DWORD *)v1 + 3);
  NiTMap_Clear((_DWORD *)v1 + 7);
  NiTMap_Clear((_DWORD *)v1 + 0xB);
  (*(void (__stdcall **)(_DWORD))(**((_DWORD **)v1 + 2) + 8))(*((_DWORD *)v1 + 2));
  v15 = *((_DWORD *)v1 + 0x10);
  *((_DWORD *)v1 + 2) = 0;
  FormHeapFree(v15);
  DeleteCriticalSection((LPCRITICAL_SECTION)v1 + 4);
  *((_DWORD *)v1 + 0xB) = &NiTPointerMap<unsigned int,NiDX9VertexBufferManager::NiDX9VBInfo *>::`vftable';
  NiTMap_Clear((_DWORD *)v1 + 0xB);
  *((_DWORD *)v1 + 0xB) = &NiTMapBase<NiTPointerAllocator<unsigned int>,unsigned int,NiDX9VertexBufferManager::NiDX9VBInfo *>::`vftable';
  NiTMap_Clear((_DWORD *)v1 + 0xB);
  FormHeapFree(*((_DWORD *)v1 + 0xD));
  *((_DWORD *)v1 + 7) = &NiTPointerMap<unsigned int,NiDX9VertexBufferManager::NiDX9VBInfo *>::`vftable';
  NiTMap_Clear((_DWORD *)v1 + 7);
  *((_DWORD *)v1 + 7) = &NiTMapBase<NiTPointerAllocator<unsigned int>,unsigned int,NiDX9VertexBufferManager::NiDX9VBInfo *>::`vftable';
  NiTMap_Clear((_DWORD *)v1 + 7);
  FormHeapFree(*((_DWORD *)v1 + 9));
  *((_DWORD *)v1 + 3) = &NiTPointerMap<unsigned int,NiDX9VertexBufferManager::NiDX9VBInfo *>::`vftable';
  NiTMap_Clear((_DWORD *)v1 + 3);
  *((_DWORD *)v1 + 3) = &NiTMapBase<NiTPointerAllocator<unsigned int>,unsigned int,NiDX9VertexBufferManager::NiDX9VBInfo *>::`vftable';
  NiTMap_Clear((_DWORD *)v1 + 3);
  FormHeapFree(*((_DWORD *)v1 + 5));
  *(_DWORD *)v1 = &NiRefObject::`vftable';
  InterlockedDecrement(&NiRefObject_objcount);
}
