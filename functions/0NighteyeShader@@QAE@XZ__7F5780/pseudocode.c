// MoonSugarEffect decode: NighteyeShader ctor owns one vertex program, one pixel program, one pass, and uses base source texture +0x7C.
NighteyeShader *__thiscall NighteyeShader::NighteyeShader(NighteyeShader *this)
{
  void **pixel; // ebx
  volatile LONG *v3; // ebp
  volatile LONG *v4; // edi
  NiD3DPass *v5; // ecx

  BSImageSpaceShader::BSImageSpaceShader(&this->super); /*0x7f57ab*/
  this->super.__vftable = (BSImageSpaceShaderVtbl *)&NighteyeShader::`vftable'; /*0x7f57cb*/
  ArrayConstructor( /*0x7f57d1*/
    (char *)this->vertex,
    4u,
    1,
    (void (__thiscall *)(char *))Concurrency::details::_NonReentrantLock::_Release,
    (void (__thiscall *)(void *))NiPointerSlot_Release);
  pixel = this->pixel; /*0x7f57e4*/
  ArrayConstructor( /*0x7f57f0*/
    (char *)this->pixel,
    4u,
    1,
    (void (__thiscall *)(char *))Concurrency::details::_NonReentrantLock::_Release,
    (void (__thiscall *)(void *))NiPointerSlot_Release);
  ArrayConstructor( /*0x7f580f*/
    (char *)&this->Unk90[1],
    4u,
    1,
    (void (__thiscall *)(char *))Concurrency::details::_NonReentrantLock::_Release,
    (void (__thiscall *)(void *))sub_4027D0);
  this->Unk90[0] = 0; /*0x7f5814*/
  v3 = (volatile LONG *)this->vertex[0]; /*0x7f581a*/
  if ( v3 ) /*0x7f5823*/
  {
    if ( !InterlockedDecrement(v3 + 1) ) /*0x7f5829*/
    {
      if ( v3 ) /*0x7f5835*/
        (**(void (__thiscall ***)(void *, int))v3)((void *)v3, 1); /*0x7f5840*/
    }
    this->vertex[0] = 0; /*0x7f5842*/
  }
  v4 = (volatile LONG *)*pixel; /*0x7f5848*/
  if ( *pixel ) /*0x7f5848*/
  {
    if ( !InterlockedDecrement(v4 + 1) ) /*0x7f5852*/
    {
      if ( v4 ) /*0x7f585e*/
        (**(void (__thiscall ***)(void *, int))v4)((void *)v4, 1); /*0x7f5868*/
    }
    *pixel = 0; /*0x7f586a*/
  }
  v5 = (NiD3DPass *)this->Unk90[1]; /*0x7f5870*/
  if ( v5 ) /*0x7f5878*/
  {
    if ( v5->RefCount-- == 1 ) /*0x7f587a*/
      NiD3DPass_ReleaseToPool(v5); /*0x7f5880*/
    this->Unk90[1] = 0; /*0x7f5885*/
  }
  this->super.member.super.super.IsInitialized = 1; /*0x7f5891*/
  return this; /*0x7f5895*/
}
