void __thiscall MapShader::~MapShader(BSImageSpaceShader *this)
{
  int v2; // edi
  int v3; // edi
  NiD3DPass *v4; // ecx
  int v6; // edi
  int v7; // edi
  int v8; // edi

  this->__vftable = (BSImageSpaceShaderVtbl *)&MapShader::`vftable'; /*0x7aeddb*/
  v2 = *((_DWORD *)this + 0x26); /*0x7aede1*/
  if ( v2 ) /*0x7aedf3*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v2 + 4)) ) /*0x7aedf9*/
      (**(void (__thiscall ***)(int, int))v2)(v2, 1); /*0x7aee0f*/
    *((_DWORD *)this + 0x26) = 0; /*0x7aee11*/
  }
  v3 = *((_DWORD *)this + 0x27); /*0x7aee17*/
  if ( v3 ) /*0x7aee1f*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v3 + 4)) ) /*0x7aee25*/
      (**(void (__thiscall ***)(int, int))v3)(v3, 1); /*0x7aee3b*/
    *((_DWORD *)this + 0x27) = 0; /*0x7aee3d*/
  }
  v4 = *((NiD3DPass **)this + 0x25); /*0x7aee43*/
  if ( v4 ) /*0x7aee51*/
  {
    if ( v4->RefCount-- == 1 ) /*0x7aee53*/
      NiD3DPass_ReleaseToPool(v4); /*0x7aee59*/
    *((_DWORD *)this + 0x25) = 0; /*0x7aee5e*/
  }
  LOBYTE(this->member.super.Unk078) = 0; /*0x7aee61*/
  *((_DWORD *)this + 0x24) = 0; /*0x7aee64*/
  v6 = unk_B42D44; /*0x7aee6a*/
  if ( unk_B42D44 ) /*0x7aee6a*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v6 + 4)) ) /*0x7aee78*/
    {
      if ( v6 ) /*0x7aee84*/
        (**(void (__thiscall ***)(int, int))v6)(v6, 1); /*0x7aee8e*/
    }
    unk_B42D44 = 0; /*0x7aee90*/
  }
  v7 = *((_DWORD *)this + 0x30); /*0x7aee96*/
  if ( v7 ) /*0x7aee9e*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v7 + 4)) ) /*0x7aeea4*/
      (**(void (__thiscall ***)(int, int))v7)(v7, 1); /*0x7aeeba*/
    *((_DWORD *)this + 0x30) = 0; /*0x7aeebc*/
  }
  v8 = *((_DWORD *)this + 0x30); /*0x7aeec2*/
  if ( v8 ) /*0x7aeecf*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v8 + 4)) ) /*0x7aeed5*/
      (**(void (__thiscall ***)(int, int))v8)(v8, 1); /*0x7aeeeb*/
  }
  _LN21((char *)this + 0x9C, 4u, 1, (void (__thiscall *)(void *))NiPointerSlot_Release); /*0x7aef02*/
  _LN21((char *)this + 0x98, 4u, 1, (void (__thiscall *)(void *))NiPointerSlot_Release); /*0x7aef1c*/
  _LN21((char *)this + 0x94, 4u, 1, (void (__thiscall *)(void *))sub_4027D0); /*0x7aef2f*/
  BSImageSpaceShader::~BSImageSpaceShader(this); /*0x7aef3e*/
}
