void __thiscall ParticleShaderProperty::~ParticleShaderProperty(ParticleShaderProperty *this)
{
  int v2; // edi
  int *v4; // edi
  int v5; // edi

  *(_DWORD *)this = &ParticleShaderProperty::`vftable';
  v2 = *((_DWORD *)this + 0x43);
  if ( v2 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v2 + 4)) )
      (**(void (__thiscall ***)(int, int))v2)(v2, 1);
    *((_DWORD *)this + 0x43) = 0;
  }
  sub_477EF0((_WORD *)this + 0x88);
  FormHeapFree(*((_DWORD *)this + 0x1B));
  if ( dword_B46048-- == 1 )
  {
    FormHeapFree(dword_B46044);
    dword_B46044 = 0;
  }
  *((_DWORD *)this + 0x44) = &NiTArray<NiPointer<NiAVObject>>::`vftable';
  v4 = *((int **)this + 0x45);
  if ( v4 )
  {
    _LN21(v4, 4u, v4[0xFFFFFFFF], (void (__thiscall *)(void *))sub_7016A0);
    FormHeapFree((unsigned int)(v4 + 0xFFFFFFFF));
  }
  v5 = *((_DWORD *)this + 0x43);
  if ( v5 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v5 + 4)) )
      (**(void (__thiscall ***)(int, int))v5)(v5, 1);
  }
  BSShaderProperty::~BSShaderProperty((BSShaderProperty *)this);
}
