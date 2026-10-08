void __thiscall MenuBGShader::~MenuBGShader(BSImageSpaceShader *this)
{
  int v2; // edi
  int v3; // edi
  NiD3DPass *v4; // ecx
  int v6; // edi
  int v7; // edi

  this->__vftable = (BSImageSpaceShaderVtbl *)&MenuBGShader::`vftable'; /*0x7b122b*/
  v2 = *((_DWORD *)this + 0x26); /*0x7b1231*/
  if ( v2 ) /*0x7b1241*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v2 + 4)) ) /*0x7b1247*/
      (**(void (__thiscall ***)(int, int))v2)(v2, 1); /*0x7b125d*/
    *((_DWORD *)this + 0x26) = 0; /*0x7b125f*/
  }
  v3 = *((_DWORD *)this + 0x27); /*0x7b1269*/
  if ( v3 ) /*0x7b1277*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v3 + 4)) ) /*0x7b127d*/
      (**(void (__thiscall ***)(int, int))v3)(v3, 1); /*0x7b1293*/
    *((_DWORD *)this + 0x27) = 0; /*0x7b1295*/
  }
  v4 = *((NiD3DPass **)this + 0x25); /*0x7b129b*/
  if ( v4 ) /*0x7b12a9*/
  {
    if ( v4->RefCount-- == 1 ) /*0x7b12ab*/
      NiD3DPass_ReleaseToPool(v4); /*0x7b12b1*/
    *((_DWORD *)this + 0x25) = 0; /*0x7b12b6*/
  }
  LOBYTE(this->member.super.Unk078) = 0; /*0x7b12bd*/
  *((_DWORD *)this + 0x24) = 0; /*0x7b12c1*/
  *((_BYTE *)this + 0xB0) = 0; /*0x7b12cb*/
  v6 = *((_DWORD *)this + 0x2D); /*0x7b12d2*/
  if ( v6 ) /*0x7b12da*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v6 + 4)) ) /*0x7b12e0*/
      (**(void (__thiscall ***)(int, int))v6)(v6, 1); /*0x7b12f6*/
    *((_DWORD *)this + 0x2D) = 0; /*0x7b12f8*/
  }
  v7 = *((_DWORD *)this + 0x2D); /*0x7b1302*/
  if ( v7 ) /*0x7b130f*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v7 + 4)) ) /*0x7b1315*/
      (**(void (__thiscall ***)(int, int))v7)(v7, 1); /*0x7b132b*/
  }
  _LN21((char *)this + 0x9C, 4u, 1, (void (__thiscall *)(void *))NiPointerSlot_Release); /*0x7b133c*/
  _LN21((char *)this + 0x98, 4u, 1, (void (__thiscall *)(void *))NiPointerSlot_Release); /*0x7b1356*/
  _LN21((char *)this + 0x94, 4u, 1, (void (__thiscall *)(void *))sub_4027D0); /*0x7b136a*/
  BSImageSpaceShader::~BSImageSpaceShader(this); /*0x7b1379*/
}
