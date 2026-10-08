int __thiscall sub_7B06C0(char *this)
{
  char *v1; // ebp
  int result; // eax
  char *v3; // esi
  NiD3DShaderProgram *VertexShader; // eax
  volatile LONG *v5; // esi
  NiD3DShaderProgram *v6; // edi
  char *v7; // eax
  NiD3DShaderProgram *PixelShader; // eax
  int v9; // esi
  NiD3DShaderProgram *v10; // edi
  int v11; // [esp+10h] [ebp-3E0h]
  int i; // [esp+14h] [ebp-3DCh]
  char *FullPath; // [esp+1Ch] [ebp-3D4h]
  int v14[56]; // [esp+20h] [ebp-3D0h] BYREF
  _DWORD v15[57]; // [esp+100h] [ebp-2F0h] BYREF
  char v16[260]; // [esp+1E4h] [ebp-20Ch] BYREF
  char FileName[260]; // [esp+2E8h] [ebp-108h] BYREF

  v15[0] = "imagespace\\1x\\v\\base.v.hlsl"; /*0x7b06f0*/
  memset(&v15[1], 0, 0x48); /*0x7b06f7*/
  v15[0x13] = "imagespace\\1x\\v\\base.v.hlsl"; /*0x7b0721*/
  v15[0x14] = "TEX4"; /*0x7b0728*/
  v15[0x15] = EmptyString; /*0x7b0733*/
  memset(&v15[0x16], 0, 0x40); /*0x7b073a*/
  v15[0x26] = "imagespace\\1x\\v\\base.v.hlsl"; /*0x7b0758*/
  v15[0x27] = "TEX2"; /*0x7b075f*/
  v15[0x28] = EmptyString; /*0x7b076a*/
  memset(&v15[0x29], 0, 0x40); /*0x7b0771*/
  FullPath = "imagespace\\1x\\p\\copy.p.hlsl"; /*0x7b078c*/
  v14[0] = (int)"ALPHAMULT"; /*0x7b0794*/
  v14[1] = (int)EmptyString; /*0x7b079c*/
  memset(&v14[2], 0, 0x40); /*0x7b07a0*/
  v14[0x12] = (int)"imagespace\\1x\\p\\blur.p.hlsl"; /*0x7b07b8*/
  memset(&v14[0x13], 0, 0x48); /*0x7b07c3*/
  v14[0x25] = (int)"imagespace\\1x\\p\\blend.p.hlsl"; /*0x7b07e8*/
  v14[0x26] = (int)"SOURCECONST_DESTCONST"; /*0x7b07f3*/
  v14[0x27] = (int)EmptyString; /*0x7b07fe*/
  memset(&v14[0x28], 0, 0x40); /*0x7b0805*/
  v1 = this + 0xA0; /*0x7b081b*/
  result = 0; /*0x7b0821*/
  v11 = 0; /*0x7b0823*/
  for ( i = 0; i < 0x39; i += 0x13 ) /*0x7b0827*/
  {
    v3 = (char *)v15 + result; /*0x7b0830*/
    if ( *(_DWORD *)((char *)v15 + result) ) /*0x7b0837*/
    {
      sub_801030(*(char **)v3, (int)FileName); /*0x7b084a*/
      _sprintf(v16, "ISBLUR1%03i.vso", v11); /*0x7b0861*/
      VertexShader = CreateVertexShader(FileName, (_DWORD *)v3 + 1, "vs_1_1", v16, 0, 0); /*0x7b0888*/
      v5 = *((volatile LONG **)v1 + 0xFFFFFFFD); /*0x7b088d*/
      v6 = VertexShader; /*0x7b0890*/
      if ( v5 != (volatile LONG *)VertexShader ) /*0x7b0894*/
      {
        if ( v5 ) /*0x7b0898*/
        {
          if ( !InterlockedDecrement(v5 + 1) ) /*0x7b089e*/
            (**(void (__thiscall ***)(volatile LONG *, int))v5)(v5, 1); /*0x7b08b4*/
        }
        *((_DWORD *)v1 + 0xFFFFFFFD) = v6; /*0x7b08b8*/
        if ( v6 ) /*0x7b08bb*/
          InterlockedIncrement((volatile LONG *)v6 + 1); /*0x7b08c1*/
      }
    }
    v7 = (char *)v14[i - 1]; /*0x7b08cb*/
    if ( v7 ) /*0x7b08d1*/
    {
      sub_801030(v7, (int)FileName); /*0x7b08e0*/
      _sprintf(v16, "ISBLUR1%03i.pso", v11); /*0x7b08f7*/
      PixelShader = CreatePixelShader(FileName, &v14[i], "ps_1_3", v16, 0, 0); /*0x7b091f*/
      v9 = *(_DWORD *)v1; /*0x7b0924*/
      v10 = PixelShader; /*0x7b0927*/
      if ( *(NiD3DShaderProgram **)v1 != PixelShader ) /*0x7b092b*/
      {
        if ( v9 ) /*0x7b092f*/
        {
          if ( !InterlockedDecrement((volatile LONG *)(v9 + 4)) ) /*0x7b0935*/
            (**(void (__thiscall ***)(int, int))v9)(v9, 1); /*0x7b094b*/
        }
        *(_DWORD *)v1 = v10; /*0x7b094f*/
        if ( v10 ) /*0x7b0952*/
          InterlockedIncrement((volatile LONG *)v10 + 1); /*0x7b0958*/
      }
    }
    ++v11; /*0x7b0962*/
    result = i * 4 + 0x4C; /*0x7b0967*/
    v1 += 4; /*0x7b096a*/
  }
  return result; /*0x7b097c*/
}
