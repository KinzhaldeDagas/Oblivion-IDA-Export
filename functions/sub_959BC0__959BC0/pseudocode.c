// Verified NiPick context initializer: initializes the record array, pick flags/root pointers, and default query settings used by TESTerrainLODQuad_PickSurfacePoint.
_DWORD *__thiscall NiPickContext_ctor(_DWORD *this)
{
  int v2; // edi

  *(this + 5) = 0; /*0x959bc6*/
  *(this + 6) = &NiTArray<NiPick::Record *>::`vftable'; /*0x959bc9*/
  *((_WORD *)this + 0x10) = 0; /*0x959bd0*/
  *((_WORD *)this + 0x13) = 1; /*0x959bd4*/
  *((_WORD *)this + 0x11) = 0; /*0x959bda*/
  *((_WORD *)this + 0x12) = 0; /*0x959bde*/
  *(this + 7) = 0; /*0x959be2*/
  *this = 0; /*0x959be6*/
  *(this + 1) = 0; /*0x959be8*/
  *(this + 2) = 1; /*0x959beb*/
  *(this + 3) = 1; /*0x959bf2*/
  *((_BYTE *)this + 0x10) = 1; /*0x959bf9*/
  *((_BYTE *)this + 0x11) = 0; /*0x959bfd*/
  v2 = *(this + 5); /*0x959c00*/
  if ( v2 ) /*0x959c05*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v2 + 4)) ) /*0x959c0b*/
      (**(void (__thiscall ***)(int, int))v2)(v2, 1); /*0x959c21*/
    *(this + 5) = 0; /*0x959c23*/
  }
  *((_BYTE *)this + 0x2C) = 0; /*0x959c27*/
  *((_BYTE *)this + 0x2D) = 0; /*0x959c2a*/
  *((_BYTE *)this + 0x2E) = 0; /*0x959c2d*/
  *((_BYTE *)this + 0x2F) = 0; /*0x959c30*/
  *(this + 0xA) = 0; /*0x959c33*/
  return this; /*0x959c26*/
}
