void __thiscall HairShader::~HairShader(BSShader *this)
{
  int v2; // ebp
  BSShader *v3; // edi
  BSShaderVtbl *vftable; // esi
  BSShader *v5; // edi
  int v6; // ebp
  BSShaderVtbl *v7; // esi
  BSShader *v8; // edi
  int v9; // ebp
  BSShaderVtbl *v10; // esi
  BSShader *v11; // edi
  int v12; // ebp
  BSShaderVtbl *v13; // esi
  NiD3DPass **v14; // esi
  int v15; // edi
  NiD3DPass *v16; // ecx
  int v18; // esi
  int v19; // esi
  int v20; // esi
  int v21; // esi

  this->__vftable = (BSShaderVtbl *)&HairShader::`vftable'; /*0x80b32b*/
  v2 = 7; /*0x80b331*/
  v3 = (BSShader *)((char *)this + 0xA4); /*0x80b33a*/
  do /*0x80b36e*/
  {
    vftable = v3->__vftable; /*0x80b340*/
    if ( v3->__vftable ) /*0x80b340*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&vftable->super.super.super.GetType) ) /*0x80b34a*/
      {
        if ( vftable ) /*0x80b356*/
          (*(void (__thiscall **)(BSShaderVtbl *, int))vftable->super.super.super.super.Destructor)(vftable, 1); /*0x80b360*/
      }
      v3->__vftable = 0; /*0x80b362*/
    }
    v3 = (BSShader *)((char *)v3 + 4); /*0x80b368*/
    --v2; /*0x80b36b*/
  }
  while ( v2 ); /*0x80b36e*/
  v5 = (BSShader *)((char *)this + 0xCC); /*0x80b370*/
  v6 = 7; /*0x80b376*/
  do /*0x80b3ae*/
  {
    v7 = v5->__vftable; /*0x80b380*/
    if ( v5->__vftable ) /*0x80b380*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&v7->super.super.super.GetType) ) /*0x80b38a*/
      {
        if ( v7 ) /*0x80b396*/
          (*(void (__thiscall **)(BSShaderVtbl *, int))v7->super.super.super.super.Destructor)(v7, 1); /*0x80b3a0*/
      }
      v5->__vftable = 0; /*0x80b3a2*/
    }
    v5 = (BSShader *)((char *)v5 + 4); /*0x80b3a8*/
    --v6; /*0x80b3ab*/
  }
  while ( v6 ); /*0x80b3ae*/
  v8 = (BSShader *)((char *)this + 0xC0); /*0x80b3b0*/
  v9 = 3; /*0x80b3b6*/
  do /*0x80b3ee*/
  {
    v10 = v8->__vftable; /*0x80b3c0*/
    if ( v8->__vftable ) /*0x80b3c0*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&v10->super.super.super.GetType) ) /*0x80b3ca*/
      {
        if ( v10 ) /*0x80b3d6*/
          (*(void (__thiscall **)(BSShaderVtbl *, int))v10->super.super.super.super.Destructor)(v10, 1); /*0x80b3e0*/
      }
      v8->__vftable = 0; /*0x80b3e2*/
    }
    v8 = (BSShader *)((char *)v8 + 4); /*0x80b3e8*/
    --v9; /*0x80b3eb*/
  }
  while ( v9 ); /*0x80b3ee*/
  v11 = (BSShader *)((char *)this + 0xE8); /*0x80b3f0*/
  v12 = 3; /*0x80b3f6*/
  do /*0x80b42e*/
  {
    v13 = v11->__vftable; /*0x80b400*/
    if ( v11->__vftable ) /*0x80b400*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&v13->super.super.super.GetType) ) /*0x80b40a*/
      {
        if ( v13 ) /*0x80b416*/
          (*(void (__thiscall **)(BSShaderVtbl *, int))v13->super.super.super.super.Destructor)(v13, 1); /*0x80b420*/
      }
      v11->__vftable = 0; /*0x80b422*/
    }
    v11 = (BSShader *)((char *)v11 + 4); /*0x80b428*/
    --v12; /*0x80b42b*/
  }
  while ( v12 ); /*0x80b42e*/
  v14 = (NiD3DPass **)((char *)this + 0x9C); /*0x80b436*/
  v15 = 2; /*0x80b438*/
  do /*0x80b45d*/
  {
    v16 = *v14; /*0x80b440*/
    if ( *v14 ) /*0x80b440*/
    {
      if ( v16->RefCount-- == 1 ) /*0x80b446*/
        NiD3DPass_ReleaseToPool(v16); /*0x80b44c*/
      *v14 = 0; /*0x80b451*/
    }
    ++v14; /*0x80b457*/
    --v15; /*0x80b45a*/
  }
  while ( v15 ); /*0x80b45d*/
  LOBYTE(this->member.Unk078) = 0; /*0x80b45f*/
  v18 = *((_DWORD *)this + 0x3D); /*0x80b463*/
  if ( v18 ) /*0x80b46b*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v18 + 4)) ) /*0x80b471*/
      (**(void (__thiscall ***)(int, int))v18)(v18, 1); /*0x80b487*/
    *((_DWORD *)this + 0x3D) = 0; /*0x80b489*/
  }
  v19 = *((_DWORD *)this + 0x3E); /*0x80b493*/
  if ( v19 ) /*0x80b49b*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v19 + 4)) ) /*0x80b4a1*/
      (**(void (__thiscall ***)(int, int))v19)(v19, 1); /*0x80b4b7*/
    *((_DWORD *)this + 0x3E) = 0; /*0x80b4b9*/
  }
  this->member.Unk074 = 0xFFFFFFFF; /*0x80b4c6*/
  v20 = *((_DWORD *)this + 0x3E); /*0x80b4c9*/
  if ( v20 ) /*0x80b4d6*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v20 + 4)) ) /*0x80b4dc*/
      (**(void (__thiscall ***)(int, int))v20)(v20, 1); /*0x80b4f2*/
  }
  v21 = *((_DWORD *)this + 0x3D); /*0x80b4f4*/
  if ( v21 ) /*0x80b501*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v21 + 4)) ) /*0x80b507*/
      (**(void (__thiscall ***)(int, int))v21)(v21, 1); /*0x80b51d*/
  }
  _LN21((char *)this + 0xE8, 4u, 3, (void (__thiscall *)(void *))NiPointerSlot_Release); /*0x80b534*/
  _LN21((char *)this + 0xCC, 4u, 7, (void (__thiscall *)(void *))NiPointerSlot_Release); /*0x80b54e*/
  _LN21((char *)this + 0xC0, 4u, 3, (void (__thiscall *)(void *))NiPointerSlot_Release); /*0x80b568*/
  _LN21((char *)this + 0xA4, 4u, 7, (void (__thiscall *)(void *))NiPointerSlot_Release); /*0x80b582*/
  _LN21((char *)this + 0x9C, 4u, 2, (void (__thiscall *)(void *))sub_4027D0); /*0x80b596*/
  ShadowLightShader::~ShadowLightShader(this); /*0x80b5a1*/
}
