// MoonSugarEffect decode: CopyShader dtor releases program arrays, destructs array slots, then calls BSImageSpaceShader dtor.
void __thiscall CopyShader::~CopyShader(BSImageSpaceShader *this)
{
  BSImageSpaceShader *v2; // edi
  int v3; // ebp
  BSImageSpaceShaderVtbl *vftable; // esi
  char *v5; // ebx
  char *v6; // edi
  int v7; // ebp
  int v8; // esi

  this->__vftable = (BSImageSpaceShaderVtbl *)&CopyShader::`vftable'; /*0x803bab*/
  v2 = this + 1; /*0x803bb9*/
  v3 = 3; /*0x803bbf*/
  do /*0x803bf2*/
  {
    vftable = v2->__vftable; /*0x803bc4*/
    if ( v2->__vftable ) /*0x803bc4*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&vftable->super.super.super.super.GetType) ) /*0x803bce*/
      {
        if ( vftable ) /*0x803bda*/
          (*(void (__thiscall **)(BSImageSpaceShaderVtbl *, int))vftable->super.super.super.super.super.Destructor)( /*0x803be4*/
            vftable,
            1);
      }
      v2->__vftable = 0; /*0x803be6*/
    }
    v2 = (BSImageSpaceShader *)((char *)v2 + 4); /*0x803bec*/
    --v3; /*0x803bef*/
  }
  while ( v3 ); /*0x803bf2*/
  v5 = (char *)this + 0x98; /*0x803bf4*/
  v6 = v5; /*0x803bfa*/
  v7 = 3; /*0x803bfc*/
  do /*0x803c2f*/
  {
    v8 = *(_DWORD *)v6; /*0x803c01*/
    if ( *(_DWORD *)v6 ) /*0x803c01*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v8 + 4)) ) /*0x803c0b*/
      {
        if ( v8 ) /*0x803c17*/
          (**(void (__thiscall ***)(int, int))v8)(v8, 1); /*0x803c21*/
      }
      *(_DWORD *)v6 = 0; /*0x803c23*/
    }
    v6 += 4; /*0x803c29*/
    --v7; /*0x803c2c*/
  }
  while ( v7 ); /*0x803c2f*/
  _LN21(v5, 4u, 3, (void (__thiscall *)(void *))NiPointerSlot_Release); /*0x803c40*/
  _LN21((char *)this + 0x90, 4u, 2, (void (__thiscall *)(void *))NiPointerSlot_Release); /*0x803c5d*/
  BSImageSpaceShader::~BSImageSpaceShader(this); /*0x803c6e*/
}
