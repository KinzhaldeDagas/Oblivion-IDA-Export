BSFaceGenNiNode *__thiscall BSFaceGenNiNode::BSFaceGenNiNode(BSFaceGenNiNode *this)
{
  int v2; // esi

  NiNode::NiNode((NiNode *)this, 0); /*0x55cd9e*/
  *(_DWORD *)this = &BSFaceGenNiNode::`vftable'; /*0x55cda3*/
  *((_DWORD *)this + 0x37) = 0; /*0x55cdae*/
  *((float *)this + 0x43) = kTerrainLODQuadRayDirectionZ; /*0x55cdba*/
  *((_BYTE *)this + 0x105) = 0; /*0x55cdc0*/
  *((_BYTE *)this + 0x104) = 0; /*0x55cdc6*/
  *((_BYTE *)this + 0x106) = 1; /*0x55cdcc*/
  *((_BYTE *)this + 0x107) = 1; /*0x55cdd3*/
  *((_BYTE *)this + 0x108) = 0; /*0x55cdda*/
  *((_BYTE *)this + 0x110) = 0; /*0x55cde0*/
  *((_BYTE *)this + 0x111) = 0; /*0x55cde6*/
  v2 = *((_DWORD *)this + 0x37); /*0x55cdec*/
  if ( v2 ) /*0x55cdf9*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v2 + 4)) ) /*0x55cdff*/
      (**(void (__thiscall ***)(int, int))v2)(v2, 1); /*0x55ce15*/
    *((_DWORD *)this + 0x37) = 0; /*0x55ce17*/
  }
  qmemcpy((char *)this + 0xE0, &stru_B26AF0[0xA].unk2C, 0x24u); /*0x55ce2d*/
  *((_BYTE *)this + 0x112) = 0; /*0x55ce2f*/
  *((_DWORD *)this + 0x45) = 0; /*0x55ce35*/
  return this; /*0x55ce3d*/
}
