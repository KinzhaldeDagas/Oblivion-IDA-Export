void __thiscall NiFlipController::~NiFlipController(NiFlipController *this)
{
  int *v2; // eax
  unsigned int v3; // edi

  *(_DWORD *)this = &NiFlipController::`vftable';
  FormHeapFree(*((_DWORD *)this + 0x16));
  *((_DWORD *)this + 0x16) = 0;
  v2 = *((int **)this + 0x11);
  *((_DWORD *)this + 0x10) = &NiTArray<NiPointer<NiTexture>>::`vftable';
  if ( v2 )
  {
    v3 = (unsigned int)(v2 + 0xFFFFFFFF);
    _LN21(v2, 4u, v2[0xFFFFFFFF], (void (__thiscall *)(void *))sub_7016A0);
    FormHeapFree(v3);
  }
  NiPoint3InterpController::~NiPoint3InterpController(this);
}
