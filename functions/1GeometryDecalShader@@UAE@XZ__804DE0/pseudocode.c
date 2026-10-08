void __thiscall GeometryDecalShader::~GeometryDecalShader(BSShader *this)
{
  int v2; // esi
  LONG (__stdcall *v3)(volatile LONG *); // edi
  int v4; // esi
  int v5; // esi
  BSShader *v6; // edi
  int v7; // ebx
  NiD3DPass *Unk074; // ecx
  BSShaderVtbl *vftable; // esi
  char *Name; // esi
  float v12; // esi
  LONG (__stdcall *v13)(volatile LONG *); // edi
  float v14; // esi
  int v15; // esi
  int v16; // esi
  int v17; // esi

  this->__vftable = (BSShaderVtbl *)&GeometryDecalShader::`vftable'; /*0x804e0b*/
  v2 = *((_DWORD *)this + 0x25); /*0x804e12*/
  v3 = InterlockedDecrement; /*0x804e18*/
  if ( v2 ) /*0x804e2a*/
  {
    if ( !v3((volatile LONG *)(v2 + 4)) ) /*0x804e30*/
      (**(void (__thiscall ***)(int, int))v2)(v2, 1); /*0x804e42*/
    *((_DWORD *)this + 0x25) = 0; /*0x804e44*/
  }
  v4 = *((_DWORD *)this + 0x26); /*0x804e4a*/
  if ( v4 ) /*0x804e52*/
  {
    if ( !v3((volatile LONG *)(v4 + 4)) ) /*0x804e58*/
      (**(void (__thiscall ***)(int, int))v4)(v4, 1); /*0x804e6a*/
    *((_DWORD *)this + 0x26) = 0; /*0x804e6c*/
  }
  v5 = *((_DWORD *)this + 0x27); /*0x804e72*/
  if ( v5 ) /*0x804e7a*/
  {
    if ( !v3((volatile LONG *)(v5 + 4)) ) /*0x804e80*/
      (**(void (__thiscall ***)(int, int))v5)(v5, 1); /*0x804e92*/
    *((_DWORD *)this + 0x27) = 0; /*0x804e94*/
  }
  v6 = (BSShader *)((char *)this + 0x84); /*0x804e9a*/
  v7 = 2; /*0x804ea0*/
  do /*0x804f16*/
  {
    Unk074 = (NiD3DPass *)v6[0xFFFFFFFF].member.Unk074; /*0x804ea5*/
    if ( Unk074 ) /*0x804eaa*/
    {
      if ( Unk074->RefCount-- == 1 ) /*0x804eac*/
        NiD3DPass_ReleaseToPool(Unk074); /*0x804eb2*/
      v6[0xFFFFFFFF].member.Unk074 = 0; /*0x804eb7*/
    }
    vftable = v6->__vftable; /*0x804ebe*/
    if ( v6->__vftable ) /*0x804ebe*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&vftable->super.super.super.GetType) ) /*0x804ec8*/
      {
        if ( vftable ) /*0x804ed4*/
          (*(void (__thiscall **)(BSShaderVtbl *, int))vftable->super.super.super.super.Destructor)(vftable, 1); /*0x804ede*/
      }
      v6->__vftable = 0; /*0x804ee0*/
    }
    Name = v6->member.super.super.super.Name; /*0x804ee6*/
    if ( Name ) /*0x804eeb*/
    {
      if ( !InterlockedDecrement((volatile LONG *)Name + 1) ) /*0x804ef1*/
        (**(void (__thiscall ***)(char *, int))Name)(Name, 1); /*0x804f07*/
      v6->member.super.super.super.Name = 0; /*0x804f09*/
    }
    v6 = (BSShader *)((char *)v6 + 4); /*0x804f10*/
    --v7; /*0x804f13*/
  }
  while ( v7 ); /*0x804f16*/
  v12 = OB_ShaderConstantStorage_010201A0[0x5FC]; /*0x804f18*/
  v13 = InterlockedDecrement; /*0x804f20*/
  if ( LODWORD(OB_ShaderConstantStorage_010201A0[0x5FC]) ) /*0x804f18*/
  {
    if ( !v13((volatile LONG *)(LODWORD(v12) + 4)) && v12 != 0.0 ) /*0x804f34*/
      (**(void (__thiscall ***)(float, int))LODWORD(v12))(COERCE_FLOAT(LODWORD(v12)), 1); /*0x804f3e*/
    OB_ShaderConstantStorage_010201A0[0x5FC] = 0.0; /*0x804f40*/
  }
  v14 = OB_ShaderConstantStorage_010201A0[0x5FD]; /*0x804f4a*/
  if ( LODWORD(OB_ShaderConstantStorage_010201A0[0x5FD]) ) /*0x804f4a*/
  {
    if ( !v13((volatile LONG *)(LODWORD(v14) + 4)) && v14 != 0.0 ) /*0x804f60*/
      (**(void (__thiscall ***)(float, int))LODWORD(v14))(COERCE_FLOAT(LODWORD(v14)), 1); /*0x804f6a*/
    OB_ShaderConstantStorage_010201A0[0x5FD] = 0.0; /*0x804f6c*/
  }
  v15 = *((_DWORD *)this + 0x27); /*0x804f76*/
  if ( v15 ) /*0x804f83*/
  {
    if ( !v13((volatile LONG *)(v15 + 4)) ) /*0x804f89*/
      (**(void (__thiscall ***)(int, int))v15)(v15, 1); /*0x804f9b*/
  }
  v16 = *((_DWORD *)this + 0x26); /*0x804f9d*/
  if ( v16 ) /*0x804faa*/
  {
    if ( !v13((volatile LONG *)(v16 + 4)) ) /*0x804fb0*/
      (**(void (__thiscall ***)(int, int))v16)(v16, 1); /*0x804fc2*/
  }
  v17 = *((_DWORD *)this + 0x25); /*0x804fc4*/
  if ( v17 ) /*0x804fd1*/
  {
    if ( !v13((volatile LONG *)(v17 + 4)) ) /*0x804fd7*/
      (**(void (__thiscall ***)(int, int))v17)(v17, 1); /*0x804fe9*/
  }
  _LN21((char *)this + 0x8C, 4u, 2, (void (__thiscall *)(void *))NiPointerSlot_Release); /*0x805000*/
  _LN21((char *)this + 0x84, 4u, 2, (void (__thiscall *)(void *))NiPointerSlot_Release); /*0x80501a*/
  _LN21((char *)this + 0x7C, 4u, 2, (void (__thiscall *)(void *))sub_4027D0); /*0x805031*/
  BSShader::~BSShader(this); /*0x805040*/
}
