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
  int v12; // esi
  LONG (__stdcall *v13)(volatile LONG *); // edi
  int v14; // esi
  int v15; // esi
  int v16; // esi
  int v17; // esi

  this->__vftable = (BSShaderVtbl *)&GeometryDecalShader::`vftable';
  v2 = *((_DWORD *)this + 0x25);
  v3 = InterlockedDecrement;
  if ( v2 )
  {
    if ( !v3((volatile LONG *)(v2 + 4)) )
      (**(void (__thiscall ***)(int, int))v2)(v2, 1);
    *((_DWORD *)this + 0x25) = 0;
  }
  v4 = *((_DWORD *)this + 0x26);
  if ( v4 )
  {
    if ( !v3((volatile LONG *)(v4 + 4)) )
      (**(void (__thiscall ***)(int, int))v4)(v4, 1);
    *((_DWORD *)this + 0x26) = 0;
  }
  v5 = *((_DWORD *)this + 0x27);
  if ( v5 )
  {
    if ( !v3((volatile LONG *)(v5 + 4)) )
      (**(void (__thiscall ***)(int, int))v5)(v5, 1);
    *((_DWORD *)this + 0x27) = 0;
  }
  v6 = (BSShader *)((char *)this + 0x84);
  v7 = 2;
  do
  {
    Unk074 = (NiD3DPass *)v6[0xFFFFFFFF].member.Unk074;
    if ( Unk074 )
    {
      if ( Unk074->RefCount-- == 1 )
        sub_7604D0(Unk074);
      v6[0xFFFFFFFF].member.Unk074 = 0;
    }
    vftable = v6->__vftable;
    if ( v6->__vftable )
    {
      if ( !InterlockedDecrement((volatile LONG *)&vftable->super.super.super.GetType) )
      {
        if ( vftable )
          (*(void (__thiscall **)(BSShaderVtbl *, int))vftable->super.super.super.super.Destructor)(vftable, 1);
      }
      v6->__vftable = 0;
    }
    Name = v6->member.super.super.super.Name;
    if ( Name )
    {
      if ( !InterlockedDecrement((volatile LONG *)Name + 1) )
        (**(void (__thiscall ***)(char *, int))Name)(Name, 1);
      v6->member.super.super.super.Name = 0;
    }
    v6 = (BSShader *)((char *)v6 + 4);
    --v7;
  }
  while ( v7 );
  v12 = dword_B47604;
  v13 = InterlockedDecrement;
  if ( dword_B47604 )
  {
    if ( !v13((volatile LONG *)(v12 + 4)) )
    {
      if ( v12 )
        (**(void (__thiscall ***)(int, int))v12)(v12, 1);
    }
    dword_B47604 = 0;
  }
  v14 = dword_B47608;
  if ( dword_B47608 )
  {
    if ( !v13((volatile LONG *)(v14 + 4)) )
    {
      if ( v14 )
        (**(void (__thiscall ***)(int, int))v14)(v14, 1);
    }
    dword_B47608 = 0;
  }
  v15 = *((_DWORD *)this + 0x27);
  if ( v15 )
  {
    if ( !v13((volatile LONG *)(v15 + 4)) )
      (**(void (__thiscall ***)(int, int))v15)(v15, 1);
  }
  v16 = *((_DWORD *)this + 0x26);
  if ( v16 )
  {
    if ( !v13((volatile LONG *)(v16 + 4)) )
      (**(void (__thiscall ***)(int, int))v16)(v16, 1);
  }
  v17 = *((_DWORD *)this + 0x25);
  if ( v17 )
  {
    if ( !v13((volatile LONG *)(v17 + 4)) )
      (**(void (__thiscall ***)(int, int))v17)(v17, 1);
  }
  _LN21((char *)this + 0x8C, 4u, 2, (void (__thiscall *)(void *))sub_7016A0);
  _LN21((char *)this + 0x84, 4u, 2, (void (__thiscall *)(void *))sub_7016A0);
  _LN21(this + 1, 4u, 2, (void (__thiscall *)(void *))sub_4027D0);
  BSShader::~BSShader(this);
}
