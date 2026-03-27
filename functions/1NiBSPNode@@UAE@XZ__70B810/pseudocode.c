void __thiscall NiBSPNode::~NiBSPNode(NiBSPNode *this)
{
  unsigned int i; // edi
  void (__thiscall ***v3)(_DWORD, int); // esi
  char *v4; // esi
  _DWORD *v5; // edi
  _DWORD *v6; // eax
  int *v7; // eax
  unsigned int v8; // esi
  _DWORD v9[2]; // [esp+14h] [ebp-14h] BYREF
  int v10; // [esp+24h] [ebp-4h]

  v9[1] = this;
  *(_DWORD *)this = &NiNode::`vftable';
  v10 = 2;
  sub_708B80(this);
  for ( i = 0; i < *((unsigned __int16 *)this + 0x5B); ++i )
  {
    NiNode::RemoveObjectAt((int)this, v9, i);
    v3 = (void (__thiscall ***)(_DWORD, int))v9[0];
    if ( v9[0] )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v9[0] + 4)) )
        (**v3)(v3, 1);
    }
  }
  v4 = (char *)this + 0xBC;
  v9[0] = (char *)this + 0xBC;
  *((_DWORD *)this + 0x2F) = &NiTPointerListBase<NiTPointerAllocator<unsigned int>,NiDynamicEffect *>::`vftable';
  v5 = *((_DWORD **)this + 0x30);
  LOBYTE(v10) = 3;
  while ( v5 )
  {
    v6 = v5;
    v5 = (_DWORD *)*v5;
    (*(void (__thiscall **)(char *, _DWORD *))(*(_DWORD *)v4 + 8))((char *)this + 0xBC, v6);
  }
  *((_DWORD *)this + 0x32) = 0;
  *((_DWORD *)this + 0x30) = 0;
  *((_DWORD *)this + 0x31) = 0;
  *(_DWORD *)v4 = &NiTListBase<NiTPointerAllocator<unsigned int>,NiDynamicEffect *>::`vftable';
  v7 = *((int **)this + 0x2C);
  LOBYTE(v10) = 0;
  *((_DWORD *)this + 0x2B) = &NiTArray<NiPointer<NiAVObject>>::`vftable';
  if ( v7 )
  {
    v8 = (unsigned int)(v7 + 0xFFFFFFFF);
    _LN21(v7, 4u, v7[0xFFFFFFFF], (void (__thiscall *)(void *))sub_7016A0);
    FormHeapFree(v8);
  }
  v10 = 0xFFFFFFFF;
  NiAVObject::~NiAVObject((NiAVObject *)this);
}
