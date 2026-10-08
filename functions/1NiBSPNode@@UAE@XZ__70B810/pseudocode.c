void __thiscall NiBSPNode::~NiBSPNode(NiBSPNode *this)
{
  unsigned int i; // edi
  void (__thiscall ***v3)(_DWORD, int); // esi
  char *v4; // esi
  _DWORD *v5; // edi
  _DWORD *v6; // eax
  char *v7; // eax
  unsigned int v8; // esi
  _DWORD v9[2]; // [esp+14h] [ebp-14h] BYREF
  int v10; // [esp+24h] [ebp-4h]

  v9[1] = this; /*0x70b839*/
  *(_DWORD *)this = &NiNode::`vftable'; /*0x70b83d*/
  v10 = 2; /*0x70b844*/
  sub_708B80(this); /*0x70b84c*/
  for ( i = 0; i < *((unsigned __int16 *)this + 0x5B); ++i ) /*0x70b855*/
  {
    NiNode::RemoveObjectAt((int)this, v9, i); /*0x70b868*/
    v3 = (void (__thiscall ***)(_DWORD, int))v9[0]; /*0x70b86d*/
    if ( v9[0] ) /*0x70b873*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v9[0] + 4)) ) /*0x70b879*/
        (**v3)(v3, 1); /*0x70b88b*/
    }
  }
  v4 = (char *)this + 0xBC; /*0x70b89b*/
  v9[0] = (char *)this + 0xBC; /*0x70b8a1*/
  *((_DWORD *)this + 0x2F) = &NiTPointerListBase<NiTPointerAllocator<unsigned int>,NiDynamicEffect *>::`vftable'; /*0x70b8a5*/
  v5 = *((_DWORD **)this + 0x30); /*0x70b8ab*/
  LOBYTE(v10) = 3; /*0x70b8b0*/
  while ( v5 ) /*0x70b8b5*/
  {
    v6 = v5; /*0x70b8b9*/
    v5 = (_DWORD *)*v5; /*0x70b8bb*/
    (*(void (__thiscall **)(char *, _DWORD *))(*(_DWORD *)v4 + 8))((char *)this + 0xBC, v6); /*0x70b8c3*/
  }
  *((_DWORD *)this + 0x32) = 0; /*0x70b8c9*/
  *((_DWORD *)this + 0x30) = 0; /*0x70b8cc*/
  *((_DWORD *)this + 0x31) = 0; /*0x70b8cf*/
  *(_DWORD *)v4 = &NiTListBase<NiTPointerAllocator<unsigned int>,NiDynamicEffect *>::`vftable'; /*0x70b8d2*/
  v7 = *((char **)this + 0x2C); /*0x70b8d8*/
  LOBYTE(v10) = 0; /*0x70b8e0*/
  *((_DWORD *)this + 0x2B) = &NiTArray<NiPointer<NiAVObject>>::`vftable'; /*0x70b8e4*/
  if ( v7 ) /*0x70b8ee*/
  {
    v8 = (unsigned int)(v7 + 0xFFFFFFFC); /*0x70b8f3*/
    _LN21(v7, 4u, *((_DWORD *)v7 + 0xFFFFFFFF), (void (__thiscall *)(void *))NiPointerSlot_Release); /*0x70b8ff*/
    FormHeapFree(v8); /*0x70b905*/
  }
  v10 = 0xFFFFFFFF; /*0x70b90f*/
  NiAVObject::~NiAVObject((NiAVObject *)this); /*0x70b917*/
}
