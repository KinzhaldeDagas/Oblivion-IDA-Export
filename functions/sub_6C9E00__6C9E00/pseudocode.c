char __thiscall sub_6C9E00(float *this, NiD3DPass *a2, float a3, char a4, float a5, UInt32 a6)
{
  NiD3DPass *v7; // esi
  char v8; // bl
  bool v9; // zf
  char *PixelShaderTarget; // ecx
  unsigned int *v11; // ecx
  int v12; // ecx

  sub_6C9CB0((int)this, 0.0, 1);
  v7 = a2;
  v8 = a4;
  if ( !sub_6C9BA0(this, a4, 0, a5, a3, (int)a2, (NiD3DPass *)1) || v7->PixelShader )
    return 0;
  v7->VertexShader = 0;
  sub_6C6A50(v7, v8);
  v7->TexturesPerPass = a6;
  if ( a3 <= 0.0 )
  {
    v9 = v7->PixelShader == 0;
    v7->PixelShader = (NiD3DPixelShader *)1;
    if ( v9 )
    {
      v11 = (unsigned int *)(v7->PixelShaderTarget + 0x4C);
      a3 = *(float *)&v7;
      sub_73A5E0(v11, (NiD3DPass **)&a3);
    }
  }
  else
  {
    v9 = v7->PixelShader == 0;
    v7->PixelShader = (NiD3DPixelShader *)5;
    if ( v9 )
    {
      PixelShaderTarget = v7->PixelShaderTarget;
      a2 = v7;
      sub_73A5E0((unsigned int *)PixelShaderTarget + 0x13, &a2);
    }
    *(float *)&v7->VertexShaderProgramFile = -flt_A7DEB4;
    *(float *)&v7->VertexShaderEntryPoint = a3;
  }
  *(float *)&v7->VertexConstantMap = -flt_A7DEB4;
  v9 = *((_DWORD *)this + 0x11) == 0;
  *((_DWORD *)this + 0x11) = 6;
  if ( v9 )
  {
    v12 = *((_DWORD *)this + 0x10);
    a3 = *(float *)&this;
    sub_73A5E0((unsigned int *)(v12 + 0x4C), (NiD3DPass **)&a3);
  }
  return 1;
}
