char __thiscall WaterShader::InitPasses_(WaterShader *this)
{
  char v2; // al
  NiD3DVertexShader *v3; // edi
  UInt32 *Unk07C; // edi
  int v5; // ebp
  UInt32 v6; // esi
  NiD3DPass *v7; // ecx
  char v10; // [esp+Fh] [ebp-1h]

  v2 = sub_8025F0(&this->super); /*0x7dc8d6*/
  v3 = this->Vertex[0]; /*0x7dc8db*/
  v10 = v2; /*0x7dc8e3*/
  if ( v3 ) /*0x7dc8e7*/
  {
    if ( !InterlockedDecrement((volatile LONG *)v3 + 1) ) /*0x7dc8ed*/
      (**(void (__thiscall ***)(NiD3DVertexShader *, int))v3)(v3, 1); /*0x7dc903*/
    this->Vertex[0] = 0; /*0x7dc905*/
  }
  Unk07C = this->Unk07C; /*0x7dc90f*/
  v5 = 0x10; /*0x7dc912*/
  do /*0x7dc95e*/
  {
    v6 = Unk07C[0x12]; /*0x7dc917*/
    if ( v6 ) /*0x7dc91c*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v6 + 4)) ) /*0x7dc922*/
        (**(void (__thiscall ***)(UInt32, int))v6)(v6, 1); /*0x7dc938*/
      Unk07C[0x12] = 0; /*0x7dc93a*/
    }
    v7 = (NiD3DPass *)*Unk07C; /*0x7dc941*/
    if ( *Unk07C ) /*0x7dc941*/
    {
      if ( v7->RefCount-- == 1 ) /*0x7dc947*/
        NiD3DPass_ReleaseToPool(v7); /*0x7dc94d*/
      *Unk07C = 0; /*0x7dc952*/
    }
    ++Unk07C; /*0x7dc958*/
    --v5; /*0x7dc95b*/
  }
  while ( v5 ); /*0x7dc95e*/
  return v10; /*0x7dc964*/
}
