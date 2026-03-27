NiD3DShaderProgram *__thiscall sub_811640(char *this)
{
  int v1; // ebp
  int *v2; // ebx
  NiD3DShaderProgram *VertexShader; // edi
  int v4; // esi
  NiD3DShaderProgram *result; // eax
  volatile LONG *v6; // esi
  NiD3DShaderProgram *v7; // edi
  int v8; // ebp
  int *v9; // ebx
  NiD3DShaderProgram *v10; // edi
  int v11; // esi
  volatile LONG *v12; // esi
  char *v13; // [esp+10h] [ebp-3DCh]
  char *v14; // [esp+10h] [ebp-3DCh]
  int v16[18]; // [esp+1Ch] [ebp-3D0h] BYREF
  char *v17; // [esp+64h] [ebp-388h]
  int v18[19]; // [esp+68h] [ebp-384h] BYREF
  int v19[38]; // [esp+B4h] [ebp-338h] BYREF
  int v20[37]; // [esp+14Ch] [ebp-2A0h] BYREF
  char FileName[260]; // [esp+1E0h] [ebp-20Ch] BYREF
  char v22[260]; // [esp+2E4h] [ebp-108h] BYREF

  v18[0x12] = (int)"tallgrass\\1x\\v\\DistantLOD.v.hlsl";
  memset(v19, 0, 0x48);
  v19[0x12] = (int)"tallgrass\\1x\\v\\DistantLOD.v.hlsl";
  v19[0x13] = (int)"BILLBOARD";
  memset(&v19[0x14], 0, 0x44);
  v19[0x25] = (int)"tallgrass\\1x\\v\\DistantLOD.v.hlsl";
  v20[0] = (int)"VS_2_0";
  memset(&v20[1], 0, 0x44);
  v20[0x12] = (int)"tallgrass\\1x\\v\\DistantLOD.v.hlsl";
  v20[0x13] = (int)"VS_2_0";
  v20[0x14] = 0;
  v20[0x15] = (int)"BILLBOARD";
  memset(&v20[0x16], 0, 0x3C);
  memset(v16, 0, sizeof(v16));
  v17 = "tallgrass\\1x\\p\\highDetail.p.hlsl";
  v18[0] = (int)"PS_2_0";
  memset(&v18[1], 0, 0x44);
  if ( ShaderPackage == 1 )
  {
    v1 = 0;
    v2 = v19;
    v13 = this + 0x8C;
    do
    {
      sub_801030((char *)v2[0xFFFFFFFF], (int)FileName);
      _sprintf(v22, "DISTLOD1%03i.vso", v1);
      VertexShader = CreateVertexShader(FileName, v2, "vs_1_1", v22, 0, 0);
      v4 = *(_DWORD *)v13;
      if ( *(NiD3DShaderProgram **)v13 != VertexShader )
      {
        if ( v4 )
        {
          if ( !InterlockedDecrement((volatile LONG *)(v4 + 4)) )
            (**(void (__thiscall ***)(int, int))v4)(v4, 1);
        }
        *(_DWORD *)v13 = VertexShader;
        if ( VertexShader )
          InterlockedIncrement((volatile LONG *)VertexShader + 1);
      }
      v13 += 4;
      ++v1;
      v2 += 0x13;
    }
    while ( v1 < 2 );
    sub_801030("tallgrass\\1x\\p\\highDetail.p.hlsl", (int)FileName);
    _sprintf(v22, "DISTLOD1%03i.pso", 0);
    result = CreatePixelShader(FileName, v16, "ps_1_3", v22, 0, 0);
    v6 = *((volatile LONG **)this + 0x27);
    v7 = result;
    if ( v6 != (volatile LONG *)result )
    {
      if ( v6 )
      {
        result = (NiD3DShaderProgram *)InterlockedDecrement(v6 + 1);
        if ( !result )
          result = (NiD3DShaderProgram *)(**(int (__thiscall ***)(volatile LONG *, int))v6)(v6, 1);
      }
      *((_DWORD *)this + 0x27) = v7;
LABEL_28:
      if ( v7 )
        return (NiD3DShaderProgram *)InterlockedIncrement((volatile LONG *)v7 + 1);
    }
  }
  else
  {
    v8 = 2;
    v9 = v20;
    v14 = this + 0x94;
    do
    {
      sub_801030((char *)v9[0xFFFFFFFF], (int)FileName);
      _sprintf(v22, "DISTLOD2%03i.vso", v8);
      v10 = CreateVertexShader(FileName, v9, "vs_2_0", v22, 0, 0);
      v11 = *(_DWORD *)v14;
      if ( *(NiD3DShaderProgram **)v14 != v10 )
      {
        if ( v11 )
        {
          if ( !InterlockedDecrement((volatile LONG *)(v11 + 4)) )
            (**(void (__thiscall ***)(int, int))v11)(v11, 1);
        }
        *(_DWORD *)v14 = v10;
        if ( v10 )
          InterlockedIncrement((volatile LONG *)v10 + 1);
      }
      v14 += 4;
      ++v8;
      v9 += 0x13;
    }
    while ( v8 < 4 );
    sub_801030(v17, (int)FileName);
    _sprintf(v22, "DISTLOD2%03i.pso", 1);
    result = CreatePixelShader(FileName, v18, "ps_2_0", v22, 0, 0);
    v12 = *((volatile LONG **)this + 0x28);
    v7 = result;
    if ( v12 != (volatile LONG *)result )
    {
      if ( v12 )
      {
        result = (NiD3DShaderProgram *)InterlockedDecrement(v12 + 1);
        if ( !result )
          result = (NiD3DShaderProgram *)(**(int (__thiscall ***)(volatile LONG *, int))v12)(v12, 1);
      }
      *((_DWORD *)this + 0x28) = v7;
      goto LABEL_28;
    }
  }
  return result;
}
