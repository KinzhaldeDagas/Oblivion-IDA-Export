char __thiscall WaterShader::InitPasses_(WaterShader *this)
{
  char v2; // al
  NiD3DVertexShader *v3; // edi
  UInt32 *Unk07C; // edi
  int v5; // ebp
  UInt32 v6; // esi
  NiD3DPass *v7; // ecx
  char v10; // [esp+Fh] [ebp-1h]

  v2 = sub_8025F0(&this->super);
  v3 = this->Vertex[0];
  v10 = v2;
  if ( v3 )
  {
    if ( !InterlockedDecrement((volatile LONG *)v3 + 1) )
      (**(void (__thiscall ***)(NiD3DVertexShader *, int))v3)(v3, 1);
    this->Vertex[0] = 0;
  }
  Unk07C = this->Unk07C;
  v5 = 0x10;
  do
  {
    v6 = Unk07C[0x12];
    if ( v6 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v6 + 4)) )
        (**(void (__thiscall ***)(UInt32, int))v6)(v6, 1);
      Unk07C[0x12] = 0;
    }
    v7 = (NiD3DPass *)*Unk07C;
    if ( *Unk07C )
    {
      if ( v7->RefCount-- == 1 )
        sub_7604D0(v7);
      *Unk07C = 0;
    }
    ++Unk07C;
    --v5;
  }
  while ( v5 );
  return v10;
}
