void __thiscall sub_7F56E0(RefractionShader *this)
{
  NiD3DVertexShader *v2; // ebp
  NiD3DVertexShader **v3; // esi
  NiD3DVertexShader *v4; // edi
  NiD3DPixelShader *v5; // edi
  UInt32 v6; // ebx
  volatile LONG *v7; // esi
  NiD3DPixelShader **v8; // ebx

  v2 = this->Vertex[0];
  v3 = (NiD3DVertexShader **)(this->Unk90[1] + 0x58);
  v4 = *v3;
  if ( *v3 != v2 )
  {
    if ( v4 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v4 + 1) )
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v4)(v4, 1);
    }
    *v3 = v2;
    if ( v2 )
      InterlockedIncrement((volatile LONG *)v2 + 1);
  }
  v5 = this->Pixel[0];
  v6 = this->Unk90[1];
  v7 = *(volatile LONG **)(v6 + 0x44);
  v8 = (NiD3DPixelShader **)(v6 + 0x44);
  if ( v7 != (volatile LONG *)v5 )
  {
    if ( v7 )
    {
      if ( !InterlockedDecrement(v7 + 1) )
        (**(void (__thiscall ***)(volatile LONG *, int))v7)(v7, 1);
    }
    *v8 = v5;
    if ( v5 )
      InterlockedIncrement((volatile LONG *)v5 + 1);
  }
}
