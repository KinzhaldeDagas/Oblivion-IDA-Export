// MoonSugarEffect decode: ParallaxShader pixel-program loader. Loads 0x1A base PAR2*.pso variants into this+0x12C and, for ShaderPackage >=5, 4 extra variants into this+0x194.
int __thiscall sub_808190(char *this)
{
  int result; // eax
  bool v2; // cc
  int *v3; // ebp
  NiD3DShaderProgram *PixelShader; // edi
  int v5; // esi
  int *v6; // ebp
  NiD3DShaderProgram *v7; // edi
  int v8; // esi
  char *v9; // [esp+10h] [ebp-B04h]
  char *v10; // [esp+10h] [ebp-B04h]
  int v11; // [esp+14h] [ebp-B00h]
  int v12; // [esp+14h] [ebp-B00h]
  int v14; // [esp+1Ch] [ebp-AF8h]
  const char *v15; // [esp+20h] [ebp-AF4h]
  int v16[494]; // [esp+24h] [ebp-AF0h] BYREF
  int v17[75]; // [esp+7DCh] [ebp-338h] BYREF
  char FileName[260]; // [esp+908h] [ebp-20Ch] BYREF
  char v19[260]; // [esp+A0Ch] [ebp-108h] BYREF

  v15 = "lighting\\2x\\p\\ADTS.p.hlsl"; /*0x8081c5*/
  v16[0] = (int)"PARALLAX"; /*0x8081c9*/
  v16[1] = (int)EmptyString; /*0x8081cd*/
  memset(&v16[2], 0, 0x40); /*0x8081d1*/
  v16[0x12] = (int)"lighting\\2x\\p\\ADTS.p.hlsl"; /*0x8081e5*/
  v16[0x13] = (int)"PARALLAX"; /*0x8081ec*/
  v16[0x14] = (int)EmptyString; /*0x8081f3*/
  v16[0x15] = (int)"SI"; /*0x8081fa*/
  v16[0x16] = (int)EmptyString; /*0x808205*/
  memset(&v16[0x17], 0, 0x38); /*0x80820c*/
  v16[0x25] = (int)"lighting\\2x\\p\\ADTS.p.hlsl"; /*0x808223*/
  v16[0x26] = (int)"PARALLAX"; /*0x80822a*/
  v16[0x27] = (int)EmptyString; /*0x808231*/
  v16[0x28] = (int)"PROJ_SHADOW"; /*0x808238*/
  v16[0x29] = (int)EmptyString; /*0x808243*/
  memset(&v16[0x2A], 0, 0x38); /*0x80824a*/
  v16[0x38] = (int)"lighting\\2x\\p\\ADTS.p.hlsl"; /*0x808261*/
  v16[0x39] = (int)"PARALLAX"; /*0x808268*/
  v16[0x3A] = (int)EmptyString; /*0x80826f*/
  v16[0x3B] = (int)"SI"; /*0x808276*/
  v16[0x3C] = (int)EmptyString; /*0x808281*/
  v16[0x3D] = (int)"PROJ_SHADOW"; /*0x808288*/
  v16[0x3E] = (int)EmptyString; /*0x808293*/
  memset(&v16[0x3F], 0, 0x30); /*0x80829a*/
  v16[0x4B] = (int)"lighting\\2x\\p\\ADTS.p.hlsl"; /*0x8082a8*/
  v16[0x4C] = (int)"LIGHTS"; /*0x8082bd*/
  v16[0x4D] = (int)"2"; /*0x8082c4*/
  v16[0x4E] = (int)"PARALLAX"; /*0x8082cf*/
  v16[0x4F] = (int)EmptyString; /*0x8082d6*/
  memset(&v16[0x50], 0, 0x38); /*0x8082dd*/
  v16[0x5E] = (int)"lighting\\2x\\p\\ADTS.p.hlsl"; /*0x8082f4*/
  v16[0x5F] = (int)"LIGHTS"; /*0x8082ff*/
  v16[0x60] = (int)"2"; /*0x808306*/
  v16[0x61] = (int)"PARALLAX"; /*0x808311*/
  v16[0x62] = (int)EmptyString; /*0x808318*/
  v16[0x63] = (int)"SI"; /*0x80831f*/
  v16[0x64] = (int)EmptyString; /*0x80832a*/
  memset(&v16[0x65], 0, 0x30); /*0x808331*/
  v16[0x71] = (int)"lighting\\2x\\p\\ADTS.p.hlsl"; /*0x808340*/
  v16[0x72] = (int)"LIGHTS"; /*0x80834b*/
  v16[0x73] = (int)"2"; /*0x80835d*/
  v16[0x74] = (int)"PARALLAX"; /*0x808368*/
  v16[0x75] = (int)EmptyString; /*0x80836f*/
  v16[0x76] = (int)"PROJ_SHADOW"; /*0x808376*/
  v16[0x77] = (int)EmptyString; /*0x808381*/
  memset(&v16[0x78], 0, 0x30); /*0x808388*/
  v16[0x84] = (int)"lighting\\2x\\p\\ADTS.p.hlsl"; /*0x80839d*/
  v16[0x97] = (int)"lighting\\2x\\p\\ADTS.p.hlsl"; /*0x8083a4*/
  v16[0x85] = (int)"LIGHTS"; /*0x8083b4*/
  v16[0x86] = (int)"2"; /*0x8083bb*/
  v16[0x87] = (int)"PARALLAX"; /*0x8083c6*/
  v16[0x88] = (int)EmptyString; /*0x8083cd*/
  v16[0x89] = (int)"SI"; /*0x8083d4*/
  v16[0x8A] = (int)EmptyString; /*0x8083df*/
  v16[0x8B] = (int)"PROJ_SHADOW"; /*0x8083e6*/
  v16[0x8C] = (int)EmptyString; /*0x8083f1*/
  memset(&v16[0x8D], 0, 0x28); /*0x8083f8*/
  v16[0x98] = (int)"SPECULAR"; /*0x80843e*/
  v16[0x99] = (int)EmptyString; /*0x808449*/
  v16[0x9A] = (int)"PARALLAX"; /*0x808450*/
  v16[0x9B] = (int)EmptyString; /*0x808457*/
  memset(&v16[0x9C], 0, 0x38); /*0x80845e*/
  v16[0xAA] = (int)"lighting\\2x\\p\\ADTS.p.hlsl"; /*0x808475*/
  v16[0xAB] = (int)"SPECULAR"; /*0x808480*/
  v16[0xAC] = (int)EmptyString; /*0x80848b*/
  v16[0xAD] = (int)"PARALLAX"; /*0x808492*/
  v16[0xAE] = (int)EmptyString; /*0x808499*/
  v16[0xAF] = (int)"SI"; /*0x8084a0*/
  v16[0xB0] = (int)EmptyString; /*0x8084ab*/
  memset(&v16[0xB1], 0, 0x30); /*0x8084b2*/
  v16[0xBD] = (int)"lighting\\2x\\p\\ADTS.p.hlsl"; /*0x8084c9*/
  v16[0xBE] = (int)"SPECULAR"; /*0x8084d4*/
  v16[0xBF] = (int)EmptyString; /*0x8084df*/
  v16[0xC0] = (int)"PARALLAX"; /*0x8084e6*/
  v16[0xC1] = (int)EmptyString; /*0x8084ed*/
  v16[0xC2] = (int)"PROJ_SHADOW"; /*0x8084f4*/
  v16[0xC3] = (int)EmptyString; /*0x8084ff*/
  memset(&v16[0xC4], 0, 0x30); /*0x808506*/
  v16[0xD0] = (int)"lighting\\2x\\p\\ADTS.p.hlsl"; /*0x808514*/
  v16[0xD1] = (int)"SPECULAR"; /*0x80851f*/
  v16[0xD2] = (int)EmptyString; /*0x80852a*/
  v16[0xD3] = (int)"PARALLAX"; /*0x808531*/
  v16[0xD4] = (int)EmptyString; /*0x808538*/
  v16[0xD5] = (int)"SI"; /*0x80853f*/
  v16[0xD6] = (int)EmptyString; /*0x80854a*/
  v16[0xD7] = (int)"PROJ_SHADOW"; /*0x808551*/
  v16[0xD8] = (int)EmptyString; /*0x80855c*/
  memset(&v16[0xD9], 0, 0x28); /*0x808563*/
  v16[0xE3] = (int)"lighting\\2x\\p\\AD.p.hlsl"; /*0x8085b4*/
  v16[0xE4] = (int)"LIGHTS"; /*0x8085bf*/
  v16[0xE5] = (int)"2"; /*0x8085c6*/
  v16[0xE6] = (int)"PARALLAX"; /*0x8085d1*/
  v16[0xE7] = (int)EmptyString; /*0x8085d8*/
  memset(&v16[0xE8], 0, 0x38); /*0x8085df*/
  v16[0xF6] = (int)"lighting\\2x\\p\\AD.p.hlsl"; /*0x8085f6*/
  v16[0xF7] = (int)"LIGHTS"; /*0x808601*/
  v16[0xF8] = (int)"2"; /*0x808608*/
  v16[0xF9] = (int)"PARALLAX"; /*0x808613*/
  v16[0xFA] = (int)EmptyString; /*0x80861a*/
  v16[0xFB] = (int)"SI"; /*0x808621*/
  v16[0xFC] = (int)EmptyString; /*0x80862c*/
  memset(&v16[0xFD], 0, 0x30); /*0x808633*/
  v16[0x109] = (int)"lighting\\2x\\p\\AD.p.hlsl"; /*0x80864d*/
  v16[0x10A] = (int)"LIGHTS"; /*0x808658*/
  v16[0x10B] = (int)"2"; /*0x80865f*/
  v16[0x10C] = (int)"PARALLAX"; /*0x80866a*/
  v16[0x10D] = (int)EmptyString; /*0x808671*/
  v16[0x10E] = (int)"PROJ_SHADOW"; /*0x808678*/
  v16[0x10F] = (int)EmptyString; /*0x808683*/
  memset(&v16[0x110], 0, 0x30); /*0x80868a*/
  v16[0x11C] = (int)"lighting\\2x\\p\\AD.p.hlsl"; /*0x80869f*/
  v16[0x12F] = (int)"lighting\\2x\\p\\AD.p.hlsl"; /*0x8086a6*/
  v16[0x11D] = (int)"LIGHTS"; /*0x8086b6*/
  v16[0x11E] = (int)"2"; /*0x8086bd*/
  v16[0x11F] = (int)"PARALLAX"; /*0x8086c8*/
  v16[0x120] = (int)EmptyString; /*0x8086cf*/
  v16[0x121] = (int)"SI"; /*0x8086d6*/
  v16[0x122] = (int)EmptyString; /*0x8086e1*/
  v16[0x123] = (int)"PROJ_SHADOW"; /*0x8086e8*/
  v16[0x124] = (int)EmptyString; /*0x8086f3*/
  memset(&v16[0x125], 0, 0x28); /*0x8086fa*/
  v16[0x130] = (int)"LIGHTS"; /*0x808740*/
  v16[0x131] = (int)"3"; /*0x808747*/
  v16[0x132] = (int)"PARALLAX"; /*0x808752*/
  v16[0x133] = (int)EmptyString; /*0x808759*/
  memset(&v16[0x134], 0, 0x38); /*0x808760*/
  v16[0x142] = (int)"lighting\\2x\\p\\AD.p.hlsl"; /*0x80876c*/
  v16[0x143] = (int)"LIGHTS"; /*0x808777*/
  v16[0x144] = (int)"3"; /*0x80877e*/
  v16[0x145] = (int)"PARALLAX"; /*0x808794*/
  v16[0x146] = (int)EmptyString; /*0x80879b*/
  v16[0x147] = (int)"SI"; /*0x8087a2*/
  v16[0x148] = (int)EmptyString; /*0x8087ad*/
  memset(&v16[0x149], 0, 0x30); /*0x8087b4*/
  v16[0x155] = (int)"lighting\\2x\\p\\AD.p.hlsl"; /*0x8087cb*/
  v16[0x156] = (int)"LIGHTS"; /*0x8087d6*/
  v16[0x157] = (int)"3"; /*0x8087dd*/
  v16[0x158] = (int)"PARALLAX"; /*0x8087e8*/
  v16[0x159] = (int)EmptyString; /*0x8087ef*/
  v16[0x15A] = (int)"PROJ_SHADOW"; /*0x8087f6*/
  v16[0x15B] = (int)EmptyString; /*0x808801*/
  memset(&v16[0x15C], 0, 0x30); /*0x808808*/
  v16[0x168] = (int)"lighting\\2x\\p\\AD.p.hlsl"; /*0x808821*/
  v16[0x169] = (int)"LIGHTS"; /*0x80882c*/
  v16[0x16A] = (int)"3"; /*0x808833*/
  v16[0x16B] = (int)"PARALLAX"; /*0x80883e*/
  v16[0x16C] = (int)EmptyString; /*0x808845*/
  v16[0x16D] = (int)"SI"; /*0x80884c*/
  v16[0x16E] = (int)EmptyString; /*0x808857*/
  v16[0x16F] = (int)"PROJ_SHADOW"; /*0x80885e*/
  v16[0x170] = (int)EmptyString; /*0x808869*/
  memset(&v16[0x171], 0, 0x28); /*0x808870*/
  v16[0x17B] = (int)"lighting\\2x\\p\\DiffusePt.p.hlsl"; /*0x8088b6*/
  v16[0x17C] = (int)"LIGHTS"; /*0x8088c1*/
  v16[0x17D] = (int)"2"; /*0x8088c8*/
  v16[0x17E] = (int)"PARALLAX"; /*0x8088d3*/
  v16[0x17F] = (int)EmptyString; /*0x8088da*/
  memset(&v16[0x180], 0, 0x38); /*0x8088e1*/
  v16[0x18E] = (int)"lighting\\2x\\p\\DiffusePt.p.hlsl"; /*0x8088f8*/
  v16[0x18F] = (int)"LIGHTS"; /*0x808903*/
  v16[0x190] = (int)"3"; /*0x80890a*/
  v16[0x191] = (int)"PARALLAX"; /*0x808915*/
  v16[0x192] = (int)EmptyString; /*0x80891c*/
  memset(&v16[0x193], 0, 0x38); /*0x808923*/
  v16[0x1A1] = (int)"lighting\\2x\\p\\Texture.p.hlsl"; /*0x80893d*/
  v16[0x1A2] = (int)"PARALLAX"; /*0x808948*/
  v16[0x1A3] = (int)EmptyString; /*0x80894f*/
  memset(&v16[0x1A4], 0, 0x40); /*0x808956*/
  v16[0x1B4] = (int)"lighting\\2x\\p\\Specular.p.hlsl"; /*0x808964*/
  v16[0x1B5] = (int)"PARALLAX"; /*0x80896f*/
  v16[0x1B6] = (int)EmptyString; /*0x808976*/
  memset(&v16[0x1B7], 0, 0x40); /*0x80897d*/
  v16[0x1C7] = (int)"lighting\\2x\\p\\Specular.p.hlsl"; /*0x80899d*/
  v16[0x1C8] = (int)"PARALLAX"; /*0x8089a8*/
  v16[0x1C9] = (int)EmptyString; /*0x8089af*/
  v16[0x1CA] = (int)"PROJ_SHADOW"; /*0x8089b6*/
  v16[0x1CB] = (int)EmptyString; /*0x8089c1*/
  memset(&v16[0x1CC], 0, 0x38); /*0x8089c8*/
  v16[0x1DA] = (int)"lighting\\2x\\p\\Specular.p.hlsl"; /*0x8089df*/
  v16[0x1DB] = (int)"POINT"; /*0x8089ea*/
  v16[0x1DC] = (int)EmptyString; /*0x8089f5*/
  v16[0x1DD] = (int)"PARALLAX"; /*0x8089fc*/
  v16[0x1DE] = (int)EmptyString; /*0x808a03*/
  memset(&v16[0x1DF], 0, 0x38); /*0x808a0a*/
  v16[0x1ED] = (int)"lighting\\2x\\p\\ADTS.p.hlsl"; /*0x808a21*/
  v17[0] = (int)"SPECULAR"; /*0x808a2c*/
  v17[1] = (int)EmptyString; /*0x808a37*/
  v17[2] = (int)"LIGHTS"; /*0x808a3e*/
  v17[3] = (int)"2"; /*0x808a45*/
  v17[4] = (int)"PARALLAX"; /*0x808a50*/
  v17[5] = (int)EmptyString; /*0x808a57*/
  memset(&v17[6], 0, 0x30); /*0x808a5e*/
  v17[0x12] = (int)"lighting\\2x\\p\\ADTS.p.hlsl"; /*0x808a79*/
  v17[0x13] = (int)"SPECULAR"; /*0x808a84*/
  v17[0x14] = (int)EmptyString; /*0x808a8b*/
  v17[0x15] = (int)"LIGHTS"; /*0x808a92*/
  v17[0x16] = (int)"2"; /*0x808a99*/
  v17[0x17] = (int)"PARALLAX"; /*0x808aa0*/
  v17[0x18] = (int)EmptyString; /*0x808aa7*/
  v17[0x19] = (int)"SI"; /*0x808aae*/
  v17[0x1A] = (int)EmptyString; /*0x808ab9*/
  memset(&v17[0x1B], 0, 0x28); /*0x808ac0*/
  v17[0x25] = (int)"lighting\\2x\\p\\ADTS.p.hlsl"; /*0x808b06*/
  v17[0x26] = (int)"SPECULAR"; /*0x808b11*/
  v17[0x27] = (int)EmptyString; /*0x808b18*/
  v17[0x28] = (int)"LIGHTS"; /*0x808b1f*/
  v17[0x29] = (int)"2"; /*0x808b26*/
  v17[0x2A] = (int)"PARALLAX"; /*0x808b2d*/
  v17[0x2B] = (int)EmptyString; /*0x808b34*/
  v17[0x2C] = (int)"PROJ_SHADOW"; /*0x808b3b*/
  v17[0x2D] = (int)EmptyString; /*0x808b46*/
  memset(&v17[0x2E], 0, 0x28); /*0x808b4d*/
  v17[0x38] = (int)"lighting\\2x\\p\\ADTS.p.hlsl"; /*0x808b93*/
  result = *(_DWORD *)OB_RendererGlobalState_010201A0.shaderPackageVersion_le; /*0x808b9e*/
  v2 = *(_DWORD *)OB_RendererGlobalState_010201A0.shaderPackageVersion_le < 2; /*0x808ba3*/
  v17[0x39] = (int)"SPECULAR"; /*0x808ba6*/
  v17[0x3A] = (int)EmptyString; /*0x808bad*/
  v17[0x3B] = (int)"LIGHTS"; /*0x808bb4*/
  v17[0x3C] = (int)"2"; /*0x808bbb*/
  v17[0x3D] = (int)"PARALLAX"; /*0x808bc2*/
  v17[0x3E] = (int)EmptyString; /*0x808bc9*/
  v17[0x3F] = (int)"SI"; /*0x808bd0*/
  v17[0x40] = (int)EmptyString; /*0x808bdb*/
  v17[0x41] = (int)"PROJ_SHADOW"; /*0x808be2*/
  v17[0x42] = (int)EmptyString; /*0x808bed*/
  memset(&v17[0x43], 0, 0x20); /*0x808bf4*/
  v14 = result; /*0x808c2c*/
  if ( !v2 ) /*0x808c30*/
  {
    v11 = 0; /*0x808c40*/
    v3 = v16; /*0x808c44*/
    v9 = this + 0x12C; /*0x808c48*/
    do /*0x808cf2*/
    {
      sub_801030((char *)v3[0xFFFFFFFF], (int)FileName); /*0x808c5c*/
      _sprintf(v19, "PAR2%03i.pso", v11); /*0x808c73*/
      PixelShader = CreatePixelShader(FileName, v3, "ps_2_0", v19, 0, 0); /*0x808c9c*/
      v5 = *(_DWORD *)v9; /*0x808ca2*/
      if ( *(NiD3DShaderProgram **)v9 != PixelShader ) /*0x808ca6*/
      {
        if ( v5 ) /*0x808caa*/
        {
          if ( !InterlockedDecrement((volatile LONG *)(v5 + 4)) ) /*0x808cb0*/
            (**(void (__thiscall ***)(int, int))v5)(v5, 1); /*0x808cc6*/
        }
        *(_DWORD *)v9 = PixelShader; /*0x808cce*/
        if ( PixelShader ) /*0x808cd0*/
          InterlockedIncrement((volatile LONG *)PixelShader + 1); /*0x808cd6*/
      }
      v9 += 4; /*0x808ce0*/
      result = v11 + 1; /*0x808ce5*/
      v3 += 0x13; /*0x808ce8*/
      ++v11; /*0x808cee*/
    }
    while ( v11 < 0x1A ); /*0x808cf2*/
    if ( v14 >= 5 ) /*0x808cfd*/
    {
      v12 = 0x1A; /*0x808d0d*/
      v6 = v17; /*0x808d15*/
      v10 = this + 0x194; /*0x808d1c*/
      do /*0x808dc2*/
      {
        sub_801030((char *)v6[0xFFFFFFFF], (int)FileName); /*0x808d2c*/
        _sprintf(v19, "PAR2%03i.pso", v12); /*0x808d43*/
        v7 = CreatePixelShader(FileName, v6, "ps_2_0", v19, 0, 0); /*0x808d6c*/
        v8 = *(_DWORD *)v10; /*0x808d72*/
        if ( *(NiD3DShaderProgram **)v10 != v7 ) /*0x808d76*/
        {
          if ( v8 ) /*0x808d7a*/
          {
            if ( !InterlockedDecrement((volatile LONG *)(v8 + 4)) ) /*0x808d80*/
              (**(void (__thiscall ***)(int, int))v8)(v8, 1); /*0x808d96*/
          }
          *(_DWORD *)v10 = v7; /*0x808d9e*/
          if ( v7 ) /*0x808da0*/
            InterlockedIncrement((volatile LONG *)v7 + 1); /*0x808da6*/
        }
        v10 += 4; /*0x808db0*/
        result = v12 + 1; /*0x808db5*/
        v6 += 0x13; /*0x808db8*/
        ++v12; /*0x808dbe*/
      }
      while ( v12 < 0x1E ); /*0x808dc2*/
    }
  }
  return result; /*0x808dc8*/
}
