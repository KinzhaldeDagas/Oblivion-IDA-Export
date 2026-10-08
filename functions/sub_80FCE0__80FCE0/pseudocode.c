// SpeedTreeBranchShader 1x/2x vertex program loader: fills +0x9C..+0xC3 with ten STB1 vs_1_1 programs and, for ShaderPackage>=2, +0xC4..+0x10B with eighteen STB2 vs_2_0 programs.
NiD3DShaderProgram *__thiscall sub_80FCE0(char *this)
{
  int v1; // ebp
  NiD3DShaderProgram **v2; // esi
  NiD3DShaderProgram **v3; // edi
  NiD3DShaderProgram *result; // eax
  NiD3DShaderProgram *v5; // esi
  NiD3DShaderProgram *v6; // ebp
  NiD3DShaderProgram *v7; // esi
  bool v8; // cc
  int *v9; // ebp
  NiD3DShaderProgram *VertexShader; // eax
  int v11; // esi
  NiD3DShaderProgram *v12; // edi
  _DWORD *v13; // [esp+10h] [ebp-A68h]
  char *v14; // [esp+10h] [ebp-A68h]
  int v15; // [esp+14h] [ebp-A64h]
  int v16; // [esp+14h] [ebp-A64h]
  const char *v18; // [esp+1Ch] [ebp-A5Ch]
  int v19[341]; // [esp+20h] [ebp-A58h] BYREF
  _DWORD v20[190]; // [esp+574h] [ebp-504h] BYREF
  char v21[260]; // [esp+86Ch] [ebp-20Ch] BYREF
  char FileName[260]; // [esp+970h] [ebp-108h] BYREF

  v20[0] = "lighting\\1x\\v\\base.v.hlsl"; /*0x80fd13*/
  v20[1] = "TREE"; /*0x80fd1e*/
  v20[2] = EmptyString; /*0x80fd25*/
  memset(&v20[3], 0, 0x40); /*0x80fd2c*/
  v20[0x13] = "lighting\\1x\\v\\ambDiffuseDirTexture.v.hlsl"; /*0x80fd48*/
  v20[0x14] = "TREE"; /*0x80fd53*/
  v20[0x15] = EmptyString; /*0x80fd5a*/
  v20[0x16] = "VC"; /*0x80fd61*/
  v20[0x17] = EmptyString; /*0x80fd68*/
  memset(&v20[0x18], 0, 0x38); /*0x80fd6f*/
  v20[0x26] = "lighting\\1x\\v\\ambDiffuseDirTexture.v.hlsl"; /*0x80fd86*/
  v20[0x27] = "TREE"; /*0x80fd91*/
  v20[0x28] = EmptyString; /*0x80fd98*/
  v20[0x29] = "VC"; /*0x80fd9f*/
  v20[0x2A] = EmptyString; /*0x80fda6*/
  memset(&v20[0x2B], 0, 0x38); /*0x80fdad*/
  v20[0x39] = "lighting\\1x\\v\\ambDiffuseDirAndPt.v.hlsl"; /*0x80fdc4*/
  v20[0x3A] = "TREE"; /*0x80fdcf*/
  v20[0x3B] = EmptyString; /*0x80fdd6*/
  memset(&v20[0x3C], 0, 0x40); /*0x80fddd*/
  v20[0x4C] = "lighting\\1x\\v\\diffuseDir.v.hlsl"; /*0x80fdf4*/
  v20[0x4D] = "TREE"; /*0x80fdff*/
  v20[0x4E] = EmptyString; /*0x80fe06*/
  memset(&v20[0x4F], 0, 0x40); /*0x80fe0d*/
  v20[0x5F] = "lighting\\1x\\v\\diffusePt.v.hlsl"; /*0x80fe24*/
  v20[0x60] = "TREE"; /*0x80fe2f*/
  v20[0x61] = EmptyString; /*0x80fe36*/
  memset(&v20[0x62], 0, 0x40); /*0x80fe3d*/
  v20[0x72] = "lighting\\1x\\v\\base.v.hlsl"; /*0x80fe57*/
  v20[0x73] = "TREE"; /*0x80fe62*/
  v20[0x74] = EmptyString; /*0x80fe69*/
  v20[0x75] = "VC"; /*0x80fe70*/
  v20[0x76] = EmptyString; /*0x80fe77*/
  memset(&v20[0x77], 0, 0x38); /*0x80fe7e*/
  v20[0x85] = "lighting\\1x\\v\\specularDir.v.hlsl"; /*0x80fe8a*/
  v20[0x86] = "TREE"; /*0x80fe95*/
  v20[0x87] = EmptyString; /*0x80fea7*/
  memset(&v20[0x88], 0, 0x40); /*0x80feae*/
  v20[0x98] = "lighting\\1x\\v\\specularPt.v.hlsl"; /*0x80fec5*/
  v20[0x99] = "TREE"; /*0x80fed0*/
  v20[0x9A] = EmptyString; /*0x80fed7*/
  memset(&v20[0x9B], 0, 0x40); /*0x80fede*/
  v20[0xAB] = "lighting\\1x\\v\\base.v.hlsl"; /*0x80fef5*/
  v20[0xAC] = "TREE"; /*0x80ff00*/
  v20[0xAD] = EmptyString; /*0x80ff07*/
  v20[0xAE] = &off_A90D88; /*0x80ff0e*/
  v20[0xAF] = EmptyString; /*0x80ff19*/
  memset(&v20[0xB0], 0, 0x38); /*0x80ff20*/
  v18 = "lighting\\2x\\v\\AD.v.hlsl"; /*0x80ff39*/
  v19[0] = (int)"LIGHTS"; /*0x80ff41*/
  v19[1] = (int)"2"; /*0x80ff45*/
  v19[2] = (int)"TREE"; /*0x80ff4d*/
  v19[3] = (int)EmptyString; /*0x80ff51*/
  memset(&v19[4], 0, 0x38); /*0x80ff55*/
  v19[0x12] = (int)"lighting\\2x\\v\\AD.v.hlsl"; /*0x80ff69*/
  v19[0x13] = (int)"LIGHTS"; /*0x80ff74*/
  v19[0x14] = (int)"2"; /*0x80ff7b*/
  v19[0x15] = (int)"PROJ_SHADOW"; /*0x80ff86*/
  v19[0x16] = (int)EmptyString; /*0x80ff91*/
  v19[0x17] = (int)"TREE"; /*0x80ff98*/
  v19[0x18] = (int)EmptyString; /*0x80ff9f*/
  memset(&v19[0x19], 0, 0x30); /*0x80ffa6*/
  v19[0x25] = (int)"lighting\\2x\\v\\AD.v.hlsl"; /*0x80ffc0*/
  v19[0x26] = (int)"LIGHTS"; /*0x80ffcb*/
  v19[0x27] = (int)"3"; /*0x80ffd2*/
  v19[0x28] = (int)"TREE"; /*0x80ffdd*/
  v19[0x29] = (int)EmptyString; /*0x80ffe4*/
  memset(&v19[0x2A], 0, 0x38); /*0x80ffeb*/
  v19[0x38] = (int)"lighting\\2x\\v\\AD.v.hlsl"; /*0x810002*/
  v19[0x39] = (int)"LIGHTS"; /*0x81000d*/
  v19[0x3A] = (int)"3"; /*0x810014*/
  v19[0x3B] = (int)"PROJ_SHADOW"; /*0x81001f*/
  v19[0x3C] = (int)EmptyString; /*0x81002a*/
  v19[0x3D] = (int)"TREE"; /*0x810031*/
  v19[0x3E] = (int)EmptyString; /*0x810038*/
  memset(&v19[0x3F], 0, 0x30); /*0x81003f*/
  v19[0x4B] = (int)"lighting\\2x\\v\\ADTS.v.hlsl"; /*0x81004b*/
  v19[0x4C] = (int)"TREE"; /*0x810056*/
  v19[0x4D] = (int)EmptyString; /*0x81005d*/
  memset(&v19[0x4E], 0, 0x40); /*0x810064*/
  v19[0x5E] = (int)"lighting\\2x\\v\\ADTS.v.hlsl"; /*0x810086*/
  v19[0x5F] = (int)"PROJ_SHADOW"; /*0x810091*/
  v19[0x60] = (int)EmptyString; /*0x81009c*/
  v19[0x61] = (int)"TREE"; /*0x8100a3*/
  v19[0x62] = (int)EmptyString; /*0x8100aa*/
  memset(&v19[0x63], 0, 0x38); /*0x8100b1*/
  v19[0x71] = (int)"lighting\\2x\\v\\ADTS.v.hlsl"; /*0x8100c8*/
  v19[0x72] = (int)"LIGHTS"; /*0x8100d3*/
  v19[0x73] = (int)"2"; /*0x8100da*/
  v19[0x74] = (int)"TREE"; /*0x8100e5*/
  v19[0x75] = (int)EmptyString; /*0x8100ec*/
  memset(&v19[0x76], 0, 0x38); /*0x8100f3*/
  v19[0x84] = (int)"lighting\\2x\\v\\ADTS.v.hlsl"; /*0x81010a*/
  v19[0x85] = (int)"LIGHTS"; /*0x810115*/
  v19[0x86] = (int)"2"; /*0x81011c*/
  v19[0x87] = (int)"PROJ_SHADOW"; /*0x810127*/
  v19[0x88] = (int)EmptyString; /*0x810132*/
  v19[0x89] = (int)"TREE"; /*0x810139*/
  v19[0x8A] = (int)EmptyString; /*0x810140*/
  memset(&v19[0x8B], 0, 0x30); /*0x810147*/
  v19[0x97] = (int)"lighting\\2x\\v\\ADTS.v.hlsl"; /*0x810161*/
  v19[0x98] = (int)"SPECULAR"; /*0x81016c*/
  v19[0x99] = (int)EmptyString; /*0x810177*/
  v19[0x9A] = (int)"TREE"; /*0x81017e*/
  v19[0x9B] = (int)EmptyString; /*0x810185*/
  memset(&v19[0x9C], 0, 0x38); /*0x81018c*/
  v19[0xAA] = (int)"lighting\\2x\\v\\ADTS.v.hlsl"; /*0x8101a3*/
  v19[0xAB] = (int)"SPECULAR"; /*0x8101ae*/
  v19[0xAC] = (int)EmptyString; /*0x8101b9*/
  v19[0xAD] = (int)"PROJ_SHADOW"; /*0x8101c0*/
  v19[0xAE] = (int)EmptyString; /*0x8101cb*/
  v19[0xAF] = (int)"TREE"; /*0x8101d2*/
  v19[0xB0] = (int)EmptyString; /*0x8101d9*/
  memset(&v19[0xB1], 0, 0x30); /*0x8101e0*/
  v19[0xBD] = (int)"lighting\\2x\\v\\ADTS.v.hlsl"; /*0x8101f7*/
  v19[0xBE] = (int)"SPECULAR"; /*0x810202*/
  v19[0xBF] = (int)EmptyString; /*0x81020d*/
  v19[0xC0] = (int)"LIGHTS"; /*0x810214*/
  v19[0xC1] = (int)"2"; /*0x81021b*/
  v19[0xC2] = (int)"TREE"; /*0x810226*/
  v19[0xC3] = (int)EmptyString; /*0x81022d*/
  memset(&v19[0xC4], 0, 0x30); /*0x810234*/
  v19[0xD0] = (int)"lighting\\2x\\v\\ADTS.v.hlsl"; /*0x810240*/
  v19[0xD1] = (int)"SPECULAR"; /*0x81024b*/
  v19[0xD2] = (int)EmptyString; /*0x810256*/
  v19[0xD3] = (int)"LIGHTS"; /*0x8102ae*/
  v19[0xD4] = (int)"2"; /*0x8102b5*/
  v19[0xD5] = (int)"PROJ_SHADOW"; /*0x8102bc*/
  v19[0xD6] = (int)EmptyString; /*0x8102c7*/
  v19[0xD7] = (int)"TREE"; /*0x8102ce*/
  v19[0xD8] = (int)EmptyString; /*0x8102d5*/
  memset(&v19[0xD9], 0, 0x28); /*0x8102dc*/
  v19[0xE3] = (int)"lighting\\2x\\v\\DiffusePt.v.hlsl"; /*0x8102e3*/
  v19[0xE4] = (int)"LIGHTS"; /*0x8102ee*/
  v19[0xE5] = (int)"2"; /*0x8102f5*/
  v19[0xE6] = (int)"TREE"; /*0x8102fc*/
  v19[0xE7] = (int)EmptyString; /*0x810303*/
  memset(&v19[0xE8], 0, 0x38); /*0x81030a*/
  v19[0xF6] = (int)"lighting\\2x\\v\\DiffusePt.v.hlsl"; /*0x810321*/
  v19[0xF7] = (int)"LIGHTS"; /*0x81032c*/
  v19[0xF8] = (int)"3"; /*0x810333*/
  v19[0xF9] = (int)"TREE"; /*0x81033e*/
  v19[0xFA] = (int)EmptyString; /*0x810345*/
  memset(&v19[0xFB], 0, 0x38); /*0x81034c*/
  v19[0x109] = (int)"lighting\\2x\\v\\Specular.v.hlsl"; /*0x810368*/
  v19[0x10A] = (int)"TREE"; /*0x81036f*/
  v19[0x10B] = (int)EmptyString; /*0x810376*/
  memset(&v19[0x10C], 0, 0x40); /*0x81037d*/
  v19[0x11C] = (int)"lighting\\2x\\v\\Specular.v.hlsl"; /*0x810397*/
  v19[0x11D] = (int)"PROJ_SHADOW"; /*0x81039e*/
  v19[0x11E] = (int)EmptyString; /*0x8103a9*/
  v19[0x11F] = (int)"TREE"; /*0x8103b0*/
  v19[0x120] = (int)EmptyString; /*0x8103b7*/
  memset(&v19[0x121], 0, 0x38); /*0x8103be*/
  v19[0x12F] = (int)"lighting\\2x\\v\\Specular.v.hlsl"; /*0x8103d5*/
  v19[0x130] = (int)"POINT"; /*0x8103dc*/
  v19[0x131] = (int)EmptyString; /*0x8103e7*/
  v19[0x132] = (int)"TREE"; /*0x8103ee*/
  v19[0x133] = (int)EmptyString; /*0x8103f5*/
  memset(&v19[0x134], 0, 0x38); /*0x8103fc*/
  v19[0x142] = (int)"lighting\\2x\\v\\SimpleShadow.v.hlsl"; /*0x81040a*/
  v19[0x143] = (int)"SHADOWMAP"; /*0x810415*/
  v19[0x144] = (int)EmptyString; /*0x810420*/
  v19[0x145] = (int)"TREE"; /*0x810427*/
  v19[0x146] = (int)EmptyString; /*0x81042e*/
  memset(&v19[0x147], 0, 0x38); /*0x810435*/
  v1 = 0; /*0x81044e*/
  v2 = (NiD3DShaderProgram **)v20; /*0x810450*/
  v15 = 0; /*0x81045a*/
  v13 = v20; /*0x81045e*/
  v3 = (NiD3DShaderProgram **)(this + 0x9C); /*0x810462*/
  do /*0x81053c*/
  {
    result = *v2; /*0x810470*/
    if ( *v2 ) /*0x810470*/
    {
      sub_801030((char *)result, (int)FileName); /*0x810483*/
      _sprintf(v21, "STB1%03i.vso", v1); /*0x810496*/
      result = CreateVertexShader(FileName, v2 + 1, "vs_1_1", v21, 0, 0); /*0x8104bd*/
      v5 = *v3; /*0x8104c2*/
      v6 = result; /*0x8104c4*/
      if ( *v3 != result ) /*0x8104c8*/
      {
        if ( v5 ) /*0x8104cc*/
        {
          result = (NiD3DShaderProgram *)InterlockedDecrement((volatile LONG *)v5 + 1); /*0x8104d2*/
          if ( !result ) /*0x8104da*/
            result = (NiD3DShaderProgram *)(**(int (__thiscall ***)(NiD3DShaderProgram *, int))v5)(v5, 1); /*0x8104e8*/
        }
        *v3 = v6; /*0x8104ec*/
        if ( v6 ) /*0x8104ee*/
          result = (NiD3DShaderProgram *)InterlockedIncrement((volatile LONG *)v6 + 1); /*0x8104f4*/
      }
    }
    else
    {
      v7 = *v3; /*0x8104fc*/
      if ( *v3 ) /*0x8104fc*/
      {
        result = (NiD3DShaderProgram *)InterlockedDecrement((volatile LONG *)v7 + 1); /*0x810506*/
        if ( !result ) /*0x81050e*/
        {
          if ( v7 ) /*0x810512*/
            result = (NiD3DShaderProgram *)(**(int (__thiscall ***)(NiD3DShaderProgram *, int))v7)(v7, 1); /*0x81051c*/
        }
        *v3 = 0; /*0x81051e*/
      }
    }
    v1 = v15 + 1; /*0x810528*/
    v2 = (NiD3DShaderProgram **)(v13 + 0x13); /*0x81052b*/
    ++v3; /*0x81052e*/
    v8 = ++v15 < 0xA; /*0x810531*/
    v13 += 0x13; /*0x810538*/
  }
  while ( v8 ); /*0x81053c*/
  if ( *(int *)&OB_RendererGlobalState_010201A0[0xAF] >= 2 ) /*0x810549*/
  {
    v16 = 0; /*0x810559*/
    v9 = v19; /*0x81055d*/
    v14 = this + 0xC4; /*0x810561*/
    do /*0x810607*/
    {
      sub_801030((char *)v9[0xFFFFFFFF], (int)FileName); /*0x810571*/
      _sprintf(v21, "STB2%03i.vso", v16); /*0x810588*/
      VertexShader = CreateVertexShader(FileName, v9, "vs_2_0", v21, 0, 0); /*0x8105ac*/
      v11 = *(_DWORD *)v14; /*0x8105b5*/
      v12 = VertexShader; /*0x8105b7*/
      if ( *(NiD3DShaderProgram **)v14 != VertexShader ) /*0x8105bb*/
      {
        if ( v11 ) /*0x8105bf*/
        {
          if ( !InterlockedDecrement((volatile LONG *)(v11 + 4)) ) /*0x8105c5*/
            (**(void (__thiscall ***)(int, int))v11)(v11, 1); /*0x8105db*/
        }
        *(_DWORD *)v14 = v12; /*0x8105e3*/
        if ( v12 ) /*0x8105e5*/
          InterlockedIncrement((volatile LONG *)v12 + 1); /*0x8105eb*/
      }
      v14 += 4; /*0x8105f5*/
      result = (NiD3DShaderProgram *)(v16 + 1); /*0x8105fa*/
      v9 += 0x13; /*0x8105fd*/
      ++v16; /*0x810603*/
    }
    while ( v16 < 0x12 ); /*0x810607*/
  }
  return result; /*0x81060d*/
}
