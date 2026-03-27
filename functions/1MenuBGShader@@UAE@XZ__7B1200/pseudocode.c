void __thiscall MenuBGShader::~MenuBGShader(BSImageSpaceShader *this)
{
  int v2; // edi
  int v3; // edi
  NiD3DPass *v4; // ecx
  int v6; // edi
  int v7; // edi

  this->__vftable = (BSImageSpaceShaderVtbl *)&MenuBGShader::`vftable';
  v2 = *((_DWORD *)this + 0x26);
  if ( v2 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v2 + 4)) )
      (**(void (__thiscall ***)(int, int))v2)(v2, 1);
    *((_DWORD *)this + 0x26) = 0;
  }
  v3 = *((_DWORD *)this + 0x27);
  if ( v3 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v3 + 4)) )
      (**(void (__thiscall ***)(int, int))v3)(v3, 1);
    *((_DWORD *)this + 0x27) = 0;
  }
  v4 = *((NiD3DPass **)this + 0x25);
  if ( v4 )
  {
    if ( v4->RefCount-- == 1 )
      sub_7604D0(v4);
    *((_DWORD *)this + 0x25) = 0;
  }
  LOBYTE(this->member.super.Unk078) = 0;
  *((_DWORD *)this + 0x24) = 0;
  *((_BYTE *)this + 0xB0) = 0;
  v6 = *((_DWORD *)this + 0x2D);
  if ( v6 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v6 + 4)) )
      (**(void (__thiscall ***)(int, int))v6)(v6, 1);
    *((_DWORD *)this + 0x2D) = 0;
  }
  v7 = *((_DWORD *)this + 0x2D);
  if ( v7 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v7 + 4)) )
      (**(void (__thiscall ***)(int, int))v7)(v7, 1);
  }
  _LN21((char *)this + 0x9C, 4u, 1, (void (__thiscall *)(void *))sub_7016A0);
  _LN21((char *)this + 0x98, 4u, 1, (void (__thiscall *)(void *))sub_7016A0);
  _LN21((char *)this + 0x94, 4u, 1, (void (__thiscall *)(void *))sub_4027D0);
  BSImageSpaceShader::~BSImageSpaceShader(this);
}
