BSFaceGenNiNode *__thiscall BSFaceGenNiNode::BSFaceGenNiNode(BSFaceGenNiNode *this)
{
  int v2; // esi

  NiNode::NiNode((NiNode *)this, 0);
  *(_DWORD *)this = &BSFaceGenNiNode::`vftable';
  *((_DWORD *)this + 0x37) = 0;
  *((float *)this + 0x43) = flt_A30634;
  *((_BYTE *)this + 0x105) = 0;
  *((_BYTE *)this + 0x104) = 0;
  *((_BYTE *)this + 0x106) = 1;
  *((_BYTE *)this + 0x107) = 1;
  *((_BYTE *)this + 0x108) = 0;
  *((_BYTE *)this + 0x110) = 0;
  *((_BYTE *)this + 0x111) = 0;
  v2 = *((_DWORD *)this + 0x37);
  if ( v2 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v2 + 4)) )
      (**(void (__thiscall ***)(int, int))v2)(v2, 1);
    *((_DWORD *)this + 0x37) = 0;
  }
  qmemcpy((char *)this + 0xE0, &stru_B26AF0[0xA].unk2C, 0x24u);
  *((_BYTE *)this + 0x112) = 0;
  *((_DWORD *)this + 0x45) = 0;
  return this;
}
