void __thiscall NighteyeShader::~NighteyeShader(NighteyeShader *this)
{
  volatile LONG *v2; // edi
  void **vertex; // ebp
  volatile LONG *v4; // edi
  NiD3DPass *v5; // ecx

  this->super.__vftable = (BSImageSpaceShaderVtbl *)&NighteyeShader::`vftable';
  v2 = (volatile LONG *)this->vertex[0];
  vertex = this->vertex;
  if ( v2 )
  {
    if ( !InterlockedDecrement(v2 + 1) )
      (**(void (__thiscall ***)(void *, int))v2)((void *)v2, 1);
    *vertex = 0;
  }
  v4 = (volatile LONG *)this->pixel[0];
  if ( v4 )
  {
    if ( !InterlockedDecrement(v4 + 1) )
      (**(void (__thiscall ***)(void *, int))v4)((void *)v4, 1);
    this->pixel[0] = 0;
  }
  v5 = (NiD3DPass *)this->Unk90[1];
  if ( v5 )
  {
    if ( v5->RefCount-- == 1 )
      sub_7604D0(v5);
    this->Unk90[1] = 0;
  }
  _LN21(&this->Unk90[1], 4u, 1, (void (__thiscall *)(void *))sub_4027D0);
  _LN21(this->pixel, 4u, 1, (void (__thiscall *)(void *))sub_7016A0);
  _LN21(vertex, 4u, 1, (void (__thiscall *)(void *))sub_7016A0);
  BSImageSpaceShader::~BSImageSpaceShader(&this->super);
}
