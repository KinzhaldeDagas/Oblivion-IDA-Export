ParticleShaderProperty *__thiscall ParticleShaderProperty::ParticleShaderProperty(ParticleShaderProperty *this)
{
  int v2; // edi
  signed int v3; // edi
  int v4; // eax

  BSShaderProperty::BSShaderProperty((BSShaderProperty *)this);
  *(_DWORD *)this = &ParticleShaderProperty::`vftable';
  *((float *)this + 0x2E) = 0.0;
  *((float *)this + 0x2F) = 0.0;
  *((float *)this + 0x30) = 0.0;
  *((float *)this + 0x31) = 0.0;
  *((float *)this + 0x32) = 0.0;
  *((float *)this + 0x33) = 0.0;
  *((float *)this + 0x34) = 0.0;
  *((float *)this + 0x35) = 0.0;
  *((float *)this + 0x36) = 0.0;
  *((float *)this + 0x37) = 0.0;
  *((float *)this + 0x38) = 0.0;
  *((float *)this + 0x39) = 0.0;
  *((_DWORD *)this + 0x43) = 0;
  sub_4B2D30((_WORD *)this + 0x88, 0xAu, 0xA);
  v2 = *((_DWORD *)this + 0x43);
  if ( v2 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v2 + 4)) )
      (**(void (__thiscall ***)(int, int))v2)(v2, 1);
    *((_DWORD *)this + 0x43) = 0;
  }
  *((_DWORD *)this + 0x1F) = 0;
  *((float *)this + 0x20) = 1.0;
  *((_DWORD *)this + 0x1C) = 0;
  *((_BYTE *)this + 0x78) = 1;
  *((float *)this + 0x3E) = 0.0;
  *((float *)this + 0x21) = 0.0;
  *((float *)this + 0x22) = 0.0;
  *((float *)this + 0x23) = 0.0;
  *((float *)this + 0x24) = 0.0;
  *((float *)this + 0x25) = 0.0;
  *((float *)this + 0x26) = 0.0;
  *((float *)this + 0x28) = 0.0;
  *((float *)this + 0x27) = 0.0;
  *((float *)this + 0x29) = 0.0;
  *((float *)this + 0x2E) = 0.0;
  *((float *)this + 0x2A) = 0.0;
  *((float *)this + 0x2F) = 0.0;
  *((float *)this + 0x30) = 0.0;
  *((float *)this + 0x32) = 0.0;
  *((float *)this + 0x31) = 0.0;
  *((float *)this + 0x33) = 0.0;
  *((float *)this + 0x34) = 0.0;
  *((float *)this + 0x49) = 1.0;
  *((float *)this + 0x36) = 0.0;
  *((float *)this + 0x35) = 0.0;
  *((float *)this + 0x37) = 0.0;
  *((float *)this + 0x38) = 0.0;
  *((float *)this + 0x39) = 0.0;
  sub_477EF0((_WORD *)this + 0x88);
  sub_7E48E0();
  *((_DWORD *)this + 0x48) = 0;
  v3 = sub_7E2D60();
  v4 = FormHeapAlloc((unsigned __int64)(unsigned int)v3 >> 0x1B != 0 ? 0xFFFFFFFF : 0x20 * v3);
  *((_DWORD *)this + 0x1B) = v4;
  _memset(v4, 0, 0x20 * v3);
  ++dword_B46048;
  return this;
}
