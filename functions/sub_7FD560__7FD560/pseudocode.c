// Oblivion Lighting30 vertex-shader loader. SM3013..SM3016 load lighting\3x\SM3SimpleShadow.v.hlsl with macro sets none, VC, SKIN, and SKIN+VC. After observing the native loaders, maps, and declarations, stock Oblivion resource disassembly confirms SM3013==SM3014 and SM3015==SM3016 byte-for-byte; the VC variants do not declare or consume COLOR.
void __thiscall Lighting30Shader__LoadVertexShaders(void *this)
{
  int v1; // edi
  int *v2; // ebx
  NiD3DShaderProgram *VertexShader; // eax
  volatile LONG *v4; // ebp
  NiD3DShaderProgram *v5; // [esp+10h] [ebp-B98h]
  const char *VertexShaderTargetName; // [esp+18h] [ebp-B90h]
  const char *v7; // [esp+1Ch] [ebp-B8Ch]
  int v8[607]; // [esp+20h] [ebp-B88h] BYREF
  char v9[260]; // [esp+99Ch] [ebp-20Ch] BYREF
  char FileName[260]; // [esp+AA0h] [ebp-108h] BYREF

  v7 = "lighting\\3x\\SM3Lighting.v.hlsl"; /*0x7fd58b*/
  memset(v8, 0, 0x48); /*0x7fd58f*/
  v8[0x12] = (int)"lighting\\3x\\SM3Lighting.v.hlsl"; /*0x7fd5ad*/
  v8[0x13] = (int)"SKIN"; /*0x7fd5b4*/
  v8[0x14] = (int)EmptyString; /*0x7fd5bb*/
  memset(&v8[0x15], 0, 0x40); /*0x7fd5c2*/
  v8[0x25] = (int)"lighting\\3x\\SM3Lighting.v.hlsl"; /*0x7fd5d9*/
  v8[0x26] = (int)"VC"; /*0x7fd5e0*/
  v8[0x27] = (int)EmptyString; /*0x7fd5eb*/
  memset(&v8[0x28], 0, 0x40); /*0x7fd5f2*/
  v8[0x38] = (int)"lighting\\3x\\SM3Lighting.v.hlsl"; /*0x7fd609*/
  v8[0x39] = (int)"SKIN"; /*0x7fd610*/
  v8[0x3A] = (int)EmptyString; /*0x7fd617*/
  v8[0x3B] = (int)"VC"; /*0x7fd61e*/
  v8[0x3C] = (int)EmptyString; /*0x7fd629*/
  memset(&v8[0x3D], 0, 0x38); /*0x7fd630*/
  v8[0x4B] = (int)"lighting\\3x\\SM3Lighting.v.hlsl"; /*0x7fd647*/
  v8[0x4C] = (int)"PROJSHADOW";                 // DeferredRendering projection contract: B47288[4] is SM3Lighting.v.hlsl + PROJSHADOW. Native projected primary VS writes shadow projection as TEXCOORD1 and fog as TEXCOORD7 to the pixel shader. /*0x7fd64e*/
  v8[0x4D] = (int)EmptyString; /*0x7fd659*/
  memset(&v8[0x4E], 0, 0x40); /*0x7fd660*/
  v8[0x5E] = (int)"lighting\\3x\\SM3Lighting.v.hlsl"; /*0x7fd677*/
  v8[0x5F] = (int)"SKIN"; /*0x7fd67e*/
  v8[0x60] = (int)EmptyString; /*0x7fd685*/
  v8[0x61] = (int)"PROJSHADOW"; /*0x7fd68c*/
  v8[0x62] = (int)EmptyString; /*0x7fd697*/
  memset(&v8[0x63], 0, 0x38); /*0x7fd69e*/
  v8[0x71] = (int)"lighting\\3x\\SM3Lighting.v.hlsl"; /*0x7fd6b8*/
  v8[0x72] = (int)"VC"; /*0x7fd6bf*/
  v8[0x73] = (int)EmptyString; /*0x7fd6ca*/
  v8[0x74] = (int)"PROJSHADOW"; /*0x7fd6d1*/
  v8[0x75] = (int)EmptyString; /*0x7fd6dc*/
  memset(&v8[0x76], 0, 0x38); /*0x7fd6e3*/
  v8[0x84] = (int)"lighting\\3x\\SM3Lighting.v.hlsl"; /*0x7fd6ef*/
  v8[0x85] = (int)"SKIN"; /*0x7fd6f6*/
  v8[0x86] = (int)EmptyString; /*0x7fd6fd*/
  v8[0x87] = (int)"VC"; /*0x7fd704*/
  v8[0x88] = (int)EmptyString; /*0x7fd71a*/
  v8[0x89] = (int)"PROJSHADOW"; /*0x7fd721*/
  v8[0x8A] = (int)EmptyString; /*0x7fd72c*/
  memset(&v8[0x8B], 0, 0x30); /*0x7fd733*/
  v8[0x97] = (int)"lighting\\2x\\v\\EnvMap.v.hlsl"; /*0x7fd74f*/
  v8[0x98] = (int)"SM3"; /*0x7fd75a*/
  v8[0x99] = (int)EmptyString; /*0x7fd761*/
  v8[0x9A] = (int)"ENVMAP"; /*0x7fd768*/
  memset(&v8[0x9B], 0, 0x3C); /*0x7fd773*/
  v8[0xAA] = (int)"lighting\\2x\\v\\EnvMap.v.hlsl"; /*0x7fd791*/
  v8[0xAB] = (int)"SM3"; /*0x7fd79c*/
  v8[0xAC] = (int)EmptyString; /*0x7fd7a3*/
  v8[0xAD] = (int)"ENVMAP"; /*0x7fd7aa*/
  v8[0xAE] = 0; /*0x7fd7b5*/
  v8[0xAF] = (int)"VC"; /*0x7fd7bc*/
  v8[0xB0] = (int)EmptyString; /*0x7fd7c7*/
  memset(&v8[0xB1], 0, 0x30); /*0x7fd7ce*/
  v8[0xBD] = (int)"lighting\\2x\\v\\EnvMap.v.hlsl"; /*0x7fd7e5*/
  v8[0xBE] = (int)"SM3"; /*0x7fd7f0*/
  v8[0xBF] = (int)EmptyString; /*0x7fd7f7*/
  v8[0xC0] = (int)"ENVMAP"; /*0x7fd7fe*/
  v8[0xC1] = 0; /*0x7fd809*/
  v8[0xC2] = (int)"SKIN"; /*0x7fd810*/
  v8[0xC3] = (int)EmptyString; /*0x7fd817*/
  memset(&v8[0xC4], 0, 0x30); /*0x7fd81e*/
  v8[0xD3] = (int)"ENVMAP"; /*0x7fd838*/
  v8[0xE6] = (int)"ENVMAP"; /*0x7fd83f*/
  v8[0xD0] = (int)"lighting\\2x\\v\\EnvMap.v.hlsl"; /*0x7fd84e*/
  v8[0xD1] = (int)"SM3"; /*0x7fd855*/
  v8[0xD2] = (int)EmptyString; /*0x7fd85c*/
  v8[0xD4] = 0; /*0x7fd863*/
  v8[0xD5] = (int)"SKIN"; /*0x7fd86a*/
  v8[0xD6] = (int)EmptyString; /*0x7fd871*/
  v8[0xD7] = (int)"VC"; /*0x7fd878*/
  v8[0xD8] = (int)EmptyString; /*0x7fd883*/
  memset(&v8[0xD9], 0, 0x28); /*0x7fd88a*/
  v8[0xE3] = (int)"lighting\\2x\\v\\EnvMap.v.hlsl"; /*0x7fd8d0*/
  v8[0xE4] = (int)"SM3"; /*0x7fd8d7*/
  v8[0xE5] = (int)EmptyString; /*0x7fd8de*/
  v8[0xE7] = 0; /*0x7fd8e5*/
  v8[0xE8] = (int)&off_A90BE8; /*0x7fd8ec*/
  memset(&v8[0xE9], 0, 0x34); /*0x7fd8f7*/
  v8[0xF6] = (int)"lighting\\3x\\SM3SimpleShadow.v.hlsl";// Load Oblivion SM3013 SimpleShadow VS (no macros). Stock bytecode hash F61E9AB7...; inputs POSITION/TEXCOORD0. /*0x7fd919*/
  memset(&v8[0xF7], 0, 0x48); /*0x7fd924*/
  v8[0x109] = (int)"lighting\\3x\\SM3SimpleShadow.v.hlsl";// Load Oblivion SM3014 SimpleShadow VS (VC). Stock bytecode is identical to SM3013 and declares no COLOR input. /*0x7fd93b*/
  v8[0x10A] = (int)"VC"; /*0x7fd946*/
  memset(&v8[0x10B], 0, 0x44); /*0x7fd951*/
  v8[0x11C] = (int)"lighting\\3x\\SM3SimpleShadow.v.hlsl";// Load Oblivion SM3015 SimpleShadow VS (SKIN). Stock bytecode hash CC2CA4CC...; inputs POSITION/TEXCOORD0/BLENDWEIGHT/BLENDINDICES. /*0x7fd96f*/
  v8[0x11D] = (int)"SKIN"; /*0x7fd97a*/
  v8[0x11E] = (int)EmptyString; /*0x7fd981*/
  memset(&v8[0x11F], 0, 0x40); /*0x7fd988*/
  v8[0x12F] = (int)"lighting\\3x\\SM3SimpleShadow.v.hlsl";// Load Oblivion SM3016 SimpleShadow VS (SKIN+VC). Stock bytecode is identical to SM3015 and declares no COLOR input. /*0x7fd99f*/
  v8[0x130] = (int)"SKIN"; /*0x7fd9aa*/
  v8[0x131] = (int)EmptyString; /*0x7fd9b1*/
  v8[0x132] = (int)"VC"; /*0x7fd9b8*/
  memset(&v8[0x133], 0, 0x3C); /*0x7fd9c3*/
  v8[0x142] = (int)"lighting\\2x\\v\\Decal.v.hlsl"; /*0x7fd9e1*/
  v8[0x143] = (int)"SM3"; /*0x7fd9ec*/
  v8[0x144] = 0; /*0x7fd9f3*/
  v8[0x145] = (int)"MAXDECALS"; /*0x7fd9fa*/
  v8[0x146] = (int)"8"; /*0x7fda05*/
  memset(&v8[0x147], 0, 0x38); /*0x7fda10*/
  v8[0x155] = (int)"lighting\\3x\\SM3DepthMap.v.hlsl"; /*0x7fda27*/
  memset(&v8[0x156], 0, 0x48); /*0x7fda32*/
  v8[0x168] = (int)"lighting\\3x\\SM3DepthMap.v.hlsl"; /*0x7fda4c*/
  v8[0x169] = (int)"SKIN"; /*0x7fda57*/
  v8[0x16A] = (int)EmptyString; /*0x7fda5e*/
  memset(&v8[0x16B], 0, 0x40); /*0x7fda65*/
  v8[0x17B] = (int)"lighting\\2x\\v\\renderNormals.v.hlsl"; /*0x7fda7c*/
  v8[0x17C] = (int)"SM3"; /*0x7fda87*/
  memset(&v8[0x17D], 0, 0x44); /*0x7fda8e*/
  v8[0x18E] = (int)"lighting\\2x\\v\\renderNormals.v.hlsl"; /*0x7fdaa1*/
  v8[0x18F] = (int)"SM3"; /*0x7fdaac*/
  v8[0x190] = 0; /*0x7fdab3*/
  v8[0x191] = (int)"SKIN"; /*0x7fdaba*/
  v8[0x192] = (int)EmptyString; /*0x7fdac1*/
  memset(&v8[0x193], 0, 0x38); /*0x7fdac8*/
  v8[0x1A1] = (int)"lighting\\2x\\v\\renderNormals.v.hlsl"; /*0x7fdaea*/
  v8[0x1A2] = (int)"SM3"; /*0x7fdaf5*/
  v8[0x1A3] = 0; /*0x7fdafc*/
  v8[0x1A4] = (int)"FIRE"; /*0x7fdb03*/
  v8[0x1A5] = (int)EmptyString; /*0x7fdb0e*/
  memset(&v8[0x1A6], 0, 0x38); /*0x7fdb15*/
  v8[0x1B4] = (int)"lighting\\2x\\v\\renderNormals.v.hlsl"; /*0x7fdb2c*/
  v8[0x1B5] = (int)"SM3"; /*0x7fdb37*/
  v8[0x1B6] = 0; /*0x7fdb3e*/
  v8[0x1B7] = (int)"CLEAR"; /*0x7fdb45*/
  v8[0x1B8] = (int)EmptyString; /*0x7fdb50*/
  memset(&v8[0x1B9], 0, 0x38); /*0x7fdb57*/
  v8[0x1C7] = (int)"lighting\\2x\\v\\renderNormals.v.hlsl"; /*0x7fdb6e*/
  v8[0x1C8] = (int)"SM3"; /*0x7fdb79*/
  v8[0x1C9] = 0; /*0x7fdb80*/
  v8[0x1CA] = (int)"CLEAR"; /*0x7fdb87*/
  v8[0x1CB] = (int)EmptyString; /*0x7fdb92*/
  v8[0x1CC] = (int)"SKIN"; /*0x7fdb99*/
  v8[0x1CD] = (int)EmptyString; /*0x7fdba0*/
  memset(&v8[0x1CE], 0, 0x30); /*0x7fdba7*/
  v8[0x1DA] = (int)"lighting\\2x\\v\\localMap.v.hlsl"; /*0x7fdbc1*/
  v8[0x1DB] = (int)"SM3"; /*0x7fdbcc*/
  memset(&v8[0x1DC], 0, 0x44); /*0x7fdbd3*/
  v8[0x1ED] = (int)"lighting\\2x\\v\\localMap.v.hlsl"; /*0x7fdbf1*/
  v8[0x1EE] = (int)"SM3"; /*0x7fdbfc*/
  v8[0x1EF] = 0; /*0x7fdc03*/
  v8[0x1F0] = (int)"SKIN"; /*0x7fdc0a*/
  v8[0x1F1] = (int)EmptyString; /*0x7fdc11*/
  memset(&v8[0x1F2], 0, 0x38); /*0x7fdc18*/
  v8[0x200] = (int)"lighting\\2x\\v\\localMap.v.hlsl"; /*0x7fdc2f*/
  v8[0x201] = (int)"SM3"; /*0x7fdc3a*/
  v8[0x202] = 0; /*0x7fdc41*/
  v8[0x203] = (int)"CLEAR"; /*0x7fdc48*/
  v8[0x204] = (int)EmptyString; /*0x7fdc53*/
  memset(&v8[0x205], 0, 0x38); /*0x7fdc5a*/
  v8[0x213] = (int)"lighting\\1x\\v\\texEffect.v.hlsl"; /*0x7fdc76*/
  memset(&v8[0x214], 0, 0x48); /*0x7fdc7d*/
  v8[0x226] = (int)"lighting\\1x\\v\\texEffect.v.hlsl"; /*0x7fdc89*/
  v8[0x227] = (int)"SKIN"; /*0x7fdc9b*/
  v8[0x228] = (int)EmptyString; /*0x7fdca2*/
  memset(&v8[0x229], 0, 0x40); /*0x7fdca9*/
  v8[0x239] = (int)"lighting\\3x\\SM3ZOnly.v.hlsl"; /*0x7fdcc5*/
  memset(&v8[0x23A], 0, 0x48); /*0x7fdccc*/
  v8[0x24C] = (int)"lighting\\3x\\SM3ZOnly.v.hlsl"; /*0x7fdce6*/
  v8[0x24D] = (int)"SKIN"; /*0x7fdced*/
  v8[0x24E] = (int)EmptyString; /*0x7fdcf4*/
  memset(&v8[0x24F], 0, 0x40); /*0x7fdcfb*/
  VertexShaderTargetName = BSShaderManager_GetVertexShaderTargetName(); /*0x7fdd0f*/
  v1 = 0; /*0x7fdd13*/
  v2 = v8; /*0x7fdd15*/
  do /*0x7fddba*/
  {
    sub_801030((char *)v2[0xFFFFFFFF], (int)FileName); /*0x7fdd2c*/
    _sprintf(v9, "SM3%03i.vso", v1); /*0x7fdd3f*/
    VertexShader = CreateVertexShader(FileName, v2, VertexShaderTargetName, v9, 0, 0); /*0x7fdd63*/
    v4 = *(volatile LONG **)(4 * v1 + 0xB47288); /*0x7fdd68*/
    v5 = VertexShader; /*0x7fdd71*/
    if ( v4 != (volatile LONG *)VertexShader ) /*0x7fdd75*/
    {
      if ( v4 ) /*0x7fdd79*/
      {
        if ( !InterlockedDecrement(v4 + 1) ) /*0x7fdd7f*/
          (**(void (__thiscall ***)(volatile LONG *, int))v4)(v4, 1); /*0x7fdd96*/
        VertexShader = v5; /*0x7fdd98*/
      }
      *(_DWORD *)(4 * v1 + 0xB47288) = VertexShader; /*0x7fdd9e*/
      if ( VertexShader ) /*0x7fdda5*/
        InterlockedIncrement((volatile LONG *)VertexShader + 1); /*0x7fddab*/
    }
    ++v1; /*0x7fddb1*/
    v2 += 0x13; /*0x7fddb4*/
  }
  while ( v1 < 0x20 ); /*0x7fddba*/
}
