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

  v1 = this; /*0x777c95*/
  *(_DWORD *)this = &NiDX9VertexBufferManager::`vftable'; /*0x777c9d*/
  for ( i = 0; i < 3; ++i ) /*0x777ca4*/
  {
    if ( i ) /*0x777cb7*/
    {
      if ( i != 1 ) /*0x777cbc*/
      {
        v2 = (_DWORD *)((char *)v1 + 0x2C); /*0x777cc3*/
        v16 = (char *)v1 + 0x2C; /*0x777cc6*/
        goto LABEL_8; /*0x777cca*/
      }
      v16 = (char *)v1 + 0x1C; /*0x777ccf*/
    }
    else
    {
      v16 = (char *)v1 + 0xC; /*0x777cd8*/
    }
    v2 = v16; /*0x777cdc*/
LABEL_8:
    v3 = v2[1]; /*0x777ce0*/
    v4 = 0; /*0x777ce3*/
    if ( v3 ) /*0x777ce7*/
    {
      v5 = (_DWORD *)v2[2]; /*0x777cec*/
      while ( !*v5 ) /*0x777cf3*/
      {
        ++v4; /*0x777cf5*/
        ++v5; /*0x777cf8*/
        if ( v4 >= v3 ) /*0x777cfd*/
          goto LABEL_12; /*0x777cfd*/
      }
      v6 = *(_DWORD **)(v2[2] + 4 * v4); /*0x777d21*/
    }
    else
    {
LABEL_12:
      v6 = 0; /*0x777cff*/
    }
    v7 = v6; /*0x777d03*/
    while ( v7 ) /*0x777d05*/
    {
      v18 = v7[2]; /*0x777d17*/
      if ( *v7 ) /*0x777d10*/
      {
        v7 = (_DWORD *)*v7; /*0x777d1d*/
      }
      else
      {
        v8 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v2 + 4))(v2, v7[1]); /*0x777d31*/
        v9 = v2[1]; /*0x777d33*/
        v10 = v8 + 1; /*0x777d36*/
        if ( v10 >= v9 ) /*0x777d3b*/
        {
LABEL_22:
          v7 = 0; /*0x777d5b*/
        }
        else
        {
          v11 = (_DWORD *)(v2[2] + 4 * v10); /*0x777d40*/
          while ( !*v11 ) /*0x777d47*/
          {
            ++v10; /*0x777d4d*/
            ++v11; /*0x777d50*/
            if ( v10 >= v9 ) /*0x777d55*/
            {
              v2 = v16; /*0x777d57*/
              goto LABEL_22; /*0x777d57*/
            }
          }
          v7 = (_DWORD *)*v11; /*0x777ea5*/
          v2 = v16; /*0x777ea7*/
        }
      }
      if ( v18 ) /*0x777d63*/
      {
        v12 = (unsigned int *)(v18 + 8); /*0x777d65*/
        v13 = 5; /*0x777d68*/
        do /*0x777d9d*/
        {
          v14 = *v12; /*0x777d70*/
          if ( *v12 ) /*0x777d70*/
          {
            if ( *(_DWORD *)(v14 + 0x20) ) /*0x777d76*/
              (*(void (__stdcall **)(_DWORD))(**(_DWORD **)(v14 + 0x20) + 8))(*(_DWORD *)(v14 + 0x20)); /*0x777d85*/
            sub_77D1D0((_DWORD *)v14); /*0x777d89*/
            FormHeapFree(v14); /*0x777d8f*/
          }
          ++v12; /*0x777d97*/
          --v13; /*0x777d9a*/
        }
        while ( v13 ); /*0x777d9d*/
        FormHeapFree(v18); /*0x777da4*/
        v2 = v16; /*0x777da9*/
        v1 = this; /*0x777dad*/
      }
    }
  }
  NiTMap_Clear((_DWORD *)v1 + 3); /*0x777dd5*/
  NiTMap_Clear((_DWORD *)v1 + 7); /*0x777ddf*/
  NiTMap_Clear((_DWORD *)v1 + 0xB); /*0x777de9*/
  (*(void (__stdcall **)(_DWORD))(**((_DWORD **)v1 + 2) + 8))(*((_DWORD *)v1 + 2)); /*0x777df7*/
  v15 = *((_DWORD *)v1 + 0x10); /*0x777dfc*/
  *((_DWORD *)v1 + 2) = 0; /*0x777dfd*/
  FormHeapFree(v15); /*0x777e04*/
  DeleteCriticalSection((LPCRITICAL_SECTION)v1 + 4); /*0x777e13*/
  *((_DWORD *)v1 + 0xB) = &NiTPointerMap<unsigned int,NiDX9VertexBufferManager::NiDX9VBInfo *>::`vftable'; /*0x777e1b*/
  NiTMap_Clear((_DWORD *)v1 + 0xB); /*0x777e21*/
  *((_DWORD *)v1 + 0xB) = &NiTMapBase<NiTPointerAllocator<unsigned int>,unsigned int,NiDX9VertexBufferManager::NiDX9VBInfo *>::`vftable'; /*0x777e28*/
  NiTMap_Clear((_DWORD *)v1 + 0xB); /*0x777e2e*/
  FormHeapFree(*((_DWORD *)v1 + 0xD)); /*0x777e37*/
  *((_DWORD *)v1 + 7) = &NiTPointerMap<unsigned int,NiDX9VertexBufferManager::NiDX9VBInfo *>::`vftable'; /*0x777e41*/
  NiTMap_Clear((_DWORD *)v1 + 7); /*0x777e47*/
  *((_DWORD *)v1 + 7) = &NiTMapBase<NiTPointerAllocator<unsigned int>,unsigned int,NiDX9VertexBufferManager::NiDX9VBInfo *>::`vftable'; /*0x777e4e*/
  NiTMap_Clear((_DWORD *)v1 + 7); /*0x777e54*/
  FormHeapFree(*((_DWORD *)v1 + 9)); /*0x777e5d*/
  *((_DWORD *)v1 + 3) = &NiTPointerMap<unsigned int,NiDX9VertexBufferManager::NiDX9VBInfo *>::`vftable'; /*0x777e67*/
  NiTMap_Clear((_DWORD *)v1 + 3); /*0x777e6d*/
  *((_DWORD *)v1 + 3) = &NiTMapBase<NiTPointerAllocator<unsigned int>,unsigned int,NiDX9VertexBufferManager::NiDX9VBInfo *>::`vftable'; /*0x777e74*/
  NiTMap_Clear((_DWORD *)v1 + 3); /*0x777e7a*/
  FormHeapFree(*((_DWORD *)v1 + 5)); /*0x777e83*/
  *(_DWORD *)v1 = &NiRefObject::`vftable'; /*0x777e90*/
  InterlockedDecrement(&MEMORY[0xB3FD64]); /*0x777e97*/
}
