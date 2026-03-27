void __thiscall sub_776A30(_DWORD **this, int a2)
{
  int v2; // edi
  unsigned int v3; // ebp
  int v5; // edx
  int v6; // [esp+Ch] [ebp-4h] BYREF

  v2 = a2;
  a2 = *(_DWORD *)(a2 + 0x104);
  v3 = a2;
  if ( a2 )
  {
    NiTMap_GetAt(this, v2, &a2);
    (*(void (__stdcall **)(_DWORD, _DWORD, _DWORD))(**(this + 8) + 0xD4))(*(this + 8), *(_DWORD *)(v3 + 0x6C), 0);
    *(_BYTE *)(v3 + 0x71) = 0;
    NiTMap_RemoveAt(this, v2);
    a2 = v2;
    sub_776690((BSTextureManager *)(this + 4), &a2);
    *(_DWORD *)(v2 + 0x104) = 0;
    *(this + (*(_DWORD *)(v3 + 0x6C) >> 5) + 0x10) = (_DWORD *)(~(1 << (*(_DWORD *)(v3 + 0x6C) & 0x1F))
                                                              & (unsigned int)*(this
                                                                              + (*(_DWORD *)(v3 + 0x6C) >> 5)
                                                                              + 0x10));
    FormHeapFree(v3);
  }
  else if ( NiTMap_GetAt(this, v2, &a2) )
  {
    NiTMap_RemoveAt(this, v2);
    v6 = v2;
    sub_776690((BSTextureManager *)(this + 4), &v6);
    v5 = a2;
    *(_DWORD *)(v2 + 0x104) = 0;
    *(this + (*(_DWORD *)(v5 + 0x6C) >> 5) + 0x10) = (_DWORD *)(~(1 << (*(_DWORD *)(v5 + 0x6C) & 0x1F))
                                                              & (unsigned int)*(this
                                                                              + (*(_DWORD *)(v5 + 0x6C) >> 5)
                                                                              + 0x10));
  }
}
