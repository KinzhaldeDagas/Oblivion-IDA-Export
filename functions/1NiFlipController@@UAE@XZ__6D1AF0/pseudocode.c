void __thiscall NiFlipController::~NiFlipController(NiFlipController *this)
{
  char *v2; // eax
  unsigned int v3; // edi

  *(_DWORD *)this = &NiFlipController::`vftable'; /*0x6d1b19*/
  FormHeapFree(*((_DWORD *)this + 0x16)); /*0x6d1b29*/
  *((_DWORD *)this + 0x16) = 0; /*0x6d1b2e*/
  v2 = *((char **)this + 0x11); /*0x6d1b31*/
  *((_DWORD *)this + 0x10) = &NiTArray<NiPointer<NiTexture>>::`vftable'; /*0x6d1b39*/
  if ( v2 ) /*0x6d1b40*/
  {
    v3 = (unsigned int)(v2 + 0xFFFFFFFC); /*0x6d1b45*/
    _LN21(v2, 4u, *((_DWORD *)v2 + 0xFFFFFFFF), (void (__thiscall *)(void *))NiPointerSlot_Release); /*0x6d1b51*/
    FormHeapFree(v3); /*0x6d1b57*/
  }
  NiPoint3InterpController::~NiPoint3InterpController(this); /*0x6d1b69*/
}
