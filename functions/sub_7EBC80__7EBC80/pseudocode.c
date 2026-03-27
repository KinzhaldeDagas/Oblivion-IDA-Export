NiD3DShaderProgram *__thiscall sub_7EBC80(GethitShader *this)
{
  int v1; // ebp
  NiD3DPixelShader **Pixel; // ebx
  char *v3; // eax
  NiD3DShaderProgram *VertexShader; // eax
  volatile LONG *v5; // esi
  volatile LONG *v6; // edi
  NiD3DShaderProgram *result; // eax
  NiD3DShaderProgram *v8; // esi
  NiD3DShaderProgram *v9; // edi
  int v10; // [esp+10h] [ebp-3DCh]
  char *FullPath; // [esp+18h] [ebp-3D4h]
  int v12[56]; // [esp+1Ch] [ebp-3D0h] BYREF
  char *v13; // [esp+FCh] [ebp-2F0h]
  int v14[56]; // [esp+100h] [ebp-2ECh] BYREF
  char v15[260]; // [esp+1E0h] [ebp-20Ch] BYREF
  char FileName[260]; // [esp+2E4h] [ebp-108h] BYREF

  v1 = 0;
  FullPath = "imagespace\\1x\\v\\base.v.hlsl";
  memset(v12, 0, 0x48);
  v12[0x12] = (int)"imagespace\\1x\\v\\base.v.hlsl";
  memset(&v12[0x13], 0, 0x48);
  v12[0x25] = (int)"imagespace\\1x\\v\\base.v.hlsl";
  v12[0x26] = (int)"TEX2";
  v12[0x27] = (int)EmptyString;
  memset(&v12[0x28], 0, 0x40);
  v13 = "imagespace\\1x\\p\\copy.p.hlsl";
  memset(v14, 0, 0x48);
  v14[0x12] = (int)"imagespace\\2x\\p\\blur_20.p.hlsl";
  memset(&v14[0x13], 0, 0x48);
  v14[0x25] = (int)"imagespace\\2x\\p\\doublevis_P20.p.hlsl";
  memset(&v14[0x26], 0, 0x48);
  v10 = 0;
  Pixel = this->Pixel;
  do
  {
    v3 = (char *)v12[v1 - 1];
    if ( v3 )
    {
      sub_801030(v3, (int)FileName);
      _sprintf(v15, "ISHIT2%03i.vso", v10);
      VertexShader = CreateVertexShader(FileName, &v12[v1], "vs_1_1", v15, 0, 0);
      v5 = (volatile LONG *)Pixel[0xFFFFFFFD];
      v6 = (volatile LONG *)VertexShader;
      if ( v5 != (volatile LONG *)VertexShader )
      {
        if ( v5 )
        {
          if ( !InterlockedDecrement(v5 + 1) )
            (**(void (__thiscall ***)(volatile LONG *, int))v5)(v5, 1);
        }
        *(Pixel - 3) = (NiD3DPixelShader *)v6;
        if ( v6 )
          InterlockedIncrement(v6 + 1);
      }
    }
    result = (NiD3DShaderProgram *)v14[v1 - 1];
    if ( result )
    {
      sub_801030((char *)result, (int)FileName);
      _sprintf(v15, "ISHIT2%03i.pso", v10);
      result = CreatePixelShader(FileName, &v14[v1], "ps_2_0", v15, 0, 0);
      v8 = *Pixel;
      v9 = result;
      if ( *Pixel != result )
      {
        if ( v8 )
        {
          result = (NiD3DShaderProgram *)InterlockedDecrement((volatile LONG *)v8 + 1);
          if ( !result )
            result = (NiD3DShaderProgram *)(**(int (__thiscall ***)(NiD3DShaderProgram *, int))v8)(v8, 1);
        }
        *Pixel = v9;
        if ( v9 )
          result = (NiD3DShaderProgram *)InterlockedIncrement((volatile LONG *)v9 + 1);
      }
    }
    ++v10;
    v1 += 0x13;
    ++Pixel;
  }
  while ( v1 < 0x39 );
  return result;
}
