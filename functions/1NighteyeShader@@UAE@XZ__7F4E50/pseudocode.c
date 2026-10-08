void __thiscall NighteyeShader::~NighteyeShader(NighteyeShader *this)
{
  volatile LONG *v2; // edi
  char *vertex; // ebp
  volatile LONG *v4; // edi
  NiD3DPass *v5; // ecx

  this->super.__vftable = (BSImageSpaceShaderVtbl *)&NighteyeShader::`vftable'; /*0x7f4e7b*/
  v2 = (volatile LONG *)this->vertex[0]; /*0x7f4e81*/
  vertex = (char *)this->vertex; /*0x7f4e89*/
  if ( v2 ) /*0x7f4e97*/
  {
    if ( !InterlockedDecrement(v2 + 1) ) /*0x7f4e9d*/
      (**(void (__thiscall ***)(void *, int))v2)((void *)v2, 1); /*0x7f4eb3*/
    *(_DWORD *)vertex = 0; /*0x7f4eb5*/
  }
  v4 = (volatile LONG *)this->pixel[0]; /*0x7f4ebc*/
  if ( v4 ) /*0x7f4eca*/
  {
    if ( !InterlockedDecrement(v4 + 1) ) /*0x7f4ed0*/
      (**(void (__thiscall ***)(void *, int))v4)((void *)v4, 1); /*0x7f4ee6*/
    this->pixel[0] = 0; /*0x7f4ee8*/
  }
  v5 = (NiD3DPass *)this->Unk90[1]; /*0x7f4eee*/
  if ( v5 ) /*0x7f4efc*/
  {
    if ( v5->RefCount-- == 1 ) /*0x7f4efe*/
      NiD3DPass_ReleaseToPool(v5); /*0x7f4f04*/
    this->Unk90[1] = 0; /*0x7f4f09*/
  }
  _LN21((char *)&this->Unk90[1], 4u, 1, (void (__thiscall *)(void *))sub_4027D0); /*0x7f4f1e*/
  _LN21((char *)this->pixel, 4u, 1, (void (__thiscall *)(void *))NiPointerSlot_Release); /*0x7f4f32*/
  _LN21(vertex, 4u, 1, (void (__thiscall *)(void *))NiPointerSlot_Release); /*0x7f4f46*/
  BSImageSpaceShader::~BSImageSpaceShader(&this->super); /*0x7f4f55*/
}
