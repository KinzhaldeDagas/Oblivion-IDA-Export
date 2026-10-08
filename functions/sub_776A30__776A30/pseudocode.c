void __thiscall sub_776A30(_DWORD **this, _DWORD *data)
{
  _DWORD *v2; // edi
  unsigned int v3; // ebp
  int v5; // edx
  void *v6; // [esp+Ch] [ebp-4h] BYREF

  v2 = data; /*0x776a34*/
  data = (_DWORD *)data[0x41]; /*0x776a47*/
  v3 = (unsigned int)data; /*0x776a38*/
  if ( data ) /*0x776a4c*/
  {
    NiTMap_GetAt(this, (int)v2, &data); /*0x776a4e*/
    (*(void (__stdcall **)(_DWORD, _DWORD, _DWORD))(**(this + 8) + 0xD4))(*(this + 8), *(_DWORD *)(v3 + 0x6C), 0); /*0x776a65*/
    *(_BYTE *)(v3 + 0x71) = 0; /*0x776a6a*/
    NiTMap_RemoveAt(this, (int)v2); /*0x776a6e*/
    data = v2; /*0x776a7b*/
    NiTPointerList_RemoveByData(this + 4, (void **)&data); /*0x776a7f*/
    v2[0x41] = 0; /*0x776a84*/
    *(this + (*(_DWORD *)(v3 + 0x6C) >> 5) + 0x10) = (_DWORD *)(~(1 << (*(_DWORD *)(v3 + 0x6C) & 0x1F)) /*0x776aa3*/
                                                              & (unsigned int)*(this
                                                                              + (*(_DWORD *)(v3 + 0x6C) >> 5)
                                                                              + 0x10));
    FormHeapFree(v3); /*0x776aa7*/
  }
  else if ( NiTMap_GetAt(this, (int)v2, &data) ) /*0x776ab6*/
  {
    NiTMap_RemoveAt(this, (int)v2); /*0x776ac2*/
    v6 = v2; /*0x776acf*/
    NiTPointerList_RemoveByData(this + 4, &v6); /*0x776ad3*/
    v5 = (int)data; /*0x776ad8*/
    v2[0x41] = 0; /*0x776adc*/
    *(this + (*(_DWORD *)(v5 + 0x6C) >> 5) + 0x10) = (_DWORD *)(~(1 << (*(_DWORD *)(v5 + 0x6C) & 0x1F)) /*0x776afa*/
                                                              & (unsigned int)*(this
                                                                              + (*(_DWORD *)(v5 + 0x6C) >> 5)
                                                                              + 0x10));
  }
}
