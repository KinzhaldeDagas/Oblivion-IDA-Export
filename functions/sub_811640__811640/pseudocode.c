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

  v18[0x12] = (int)"tallgrass\\1x\\v\\DistantLOD.v.hlsl"; /*0x811670*/
  memset(v19, 0, 0x48); /*0x811677*/
  v19[0x12] = (int)"tallgrass\\1x\\v\\DistantLOD.v.hlsl"; /*0x81168e*/
  v19[0x13] = (int)"BILLBOARD"; /*0x811695*/
  memset(&v19[0x14], 0, 0x44); /*0x8116a0*/
  v19[0x25] = (int)"tallgrass\\1x\\v\\DistantLOD.v.hlsl"; /*0x8116c3*/
  v20[0] = (int)"VS_2_0"; /*0x8116ca*/
  memset(&v20[1], 0, 0x44); /*0x8116d1*/
  v20[0x12] = (int)"tallgrass\\1x\\v\\DistantLOD.v.hlsl"; /*0x8116ef*/
  v20[0x13] = (int)"VS_2_0"; /*0x8116f6*/
  v20[0x14] = 0; /*0x8116fd*/
  v20[0x15] = (int)"BILLBOARD"; /*0x811704*/
  memset(&v20[0x16], 0, 0x3C); /*0x81170f*/
  memset(v16, 0, sizeof(v16)); /*0x811733*/
  v17 = "tallgrass\\1x\\p\\highDetail.p.hlsl"; /*0x81174f*/
  v18[0] = (int)"PS_2_0"; /*0x811756*/
  memset(&v18[1], 0, 0x44); /*0x811761*/
  if ( MEMORY[0xB42F48] == 1 ) /*0x811785*/
  {
    v1 = 0; /*0x811791*/
    v2 = v19; /*0x811793*/
    v13 = this + 0x8C; /*0x81179a*/
    do /*0x81183a*/
    {
      sub_801030((char *)v2[0xFFFFFFFF], (int)FileName); /*0x8117b2*/
      _sprintf(v22, "DISTLOD1%03i.vso", v1); /*0x8117c5*/
      VertexShader = CreateVertexShader(FileName, v2, "vs_1_1", v22, 0, 0); /*0x8117ec*/
      v4 = *(_DWORD *)v13; /*0x8117f2*/
      if ( *(NiD3DShaderProgram **)v13 != VertexShader ) /*0x8117f6*/
      {
        if ( v4 ) /*0x8117fa*/
        {
          if ( !InterlockedDecrement((volatile LONG *)(v4 + 4)) ) /*0x811800*/
            (**(void (__thiscall ***)(int, int))v4)(v4, 1); /*0x811816*/
        }
        *(_DWORD *)v13 = VertexShader; /*0x81181e*/
        if ( VertexShader ) /*0x811820*/
          InterlockedIncrement((volatile LONG *)VertexShader + 1); /*0x811826*/
      }
      v13 += 4; /*0x81182c*/
      ++v1; /*0x811831*/
      v2 += 0x13; /*0x811834*/
    }
    while ( v1 < 2 ); /*0x81183a*/
    sub_801030("tallgrass\\1x\\p\\highDetail.p.hlsl", (int)FileName); /*0x81184d*/
    _sprintf(v22, "DISTLOD1%03i.pso", 0); /*0x811861*/
    result = CreatePixelShader(FileName, v16, "ps_1_3", v22, 0, 0); /*0x81188d*/
    v6 = *((volatile LONG **)this + 0x27); /*0x811892*/
    v7 = result; /*0x811898*/
    if ( v6 != (volatile LONG *)result ) /*0x81189c*/
    {
      if ( v6 ) /*0x8118a4*/
      {
        result = (NiD3DShaderProgram *)InterlockedDecrement(v6 + 1); /*0x8118aa*/
        if ( !result ) /*0x8118b2*/
          result = (NiD3DShaderProgram *)(**(int (__thiscall ***)(volatile LONG *, int))v6)(v6, 1); /*0x8118c0*/
      }
      *((_DWORD *)this + 0x27) = v7; /*0x8118c2*/
LABEL_28:
      if ( v7 ) /*0x811a0b*/
        return (NiD3DShaderProgram *)InterlockedIncrement((volatile LONG *)v7 + 1); /*0x811a11*/
    }
  }
  else
  {
    v8 = 2; /*0x8118d3*/
    v9 = v20; /*0x8118d8*/
    v14 = this + 0x94; /*0x8118df*/
    do /*0x81197f*/
    {
      sub_801030((char *)v9[0xFFFFFFFF], (int)FileName); /*0x8118f7*/
      _sprintf(v22, "DISTLOD2%03i.vso", v8); /*0x81190a*/
      v10 = CreateVertexShader(FileName, v9, "vs_2_0", v22, 0, 0); /*0x811931*/
      v11 = *(_DWORD *)v14; /*0x811937*/
      if ( *(NiD3DShaderProgram **)v14 != v10 ) /*0x81193b*/
      {
        if ( v11 ) /*0x81193f*/
        {
          if ( !InterlockedDecrement((volatile LONG *)(v11 + 4)) ) /*0x811945*/
            (**(void (__thiscall ***)(int, int))v11)(v11, 1); /*0x81195b*/
        }
        *(_DWORD *)v14 = v10; /*0x811963*/
        if ( v10 ) /*0x811965*/
          InterlockedIncrement((volatile LONG *)v10 + 1); /*0x81196b*/
      }
      v14 += 4; /*0x811971*/
      ++v8; /*0x811976*/
      v9 += 0x13; /*0x811979*/
    }
    while ( v8 < 4 ); /*0x81197f*/
    sub_801030(v17, (int)FileName); /*0x811992*/
    _sprintf(v22, "DISTLOD2%03i.pso", 1); /*0x8119a6*/
    result = CreatePixelShader(FileName, v18, "ps_2_0", v22, 0, 0); /*0x8119d2*/
    v12 = *((volatile LONG **)this + 0x28); /*0x8119d7*/
    v7 = result; /*0x8119dd*/
    if ( v12 != (volatile LONG *)result ) /*0x8119e1*/
    {
      if ( v12 ) /*0x8119e5*/
      {
        result = (NiD3DShaderProgram *)InterlockedDecrement(v12 + 1); /*0x8119eb*/
        if ( !result ) /*0x8119f3*/
          result = (NiD3DShaderProgram *)(**(int (__thiscall ***)(volatile LONG *, int))v12)(v12, 1); /*0x811a01*/
      }
      *((_DWORD *)this + 0x28) = v7; /*0x811a03*/
      goto LABEL_28; /*0x811a03*/
    }
  }
  return result; /*0x811a17*/
}
