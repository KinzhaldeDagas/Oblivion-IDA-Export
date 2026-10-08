// MoonSugarEffect decode: ParallaxShader vertex-program loader. IDA initially split this at 0x808000; vtable +0xAC points here. Loads 0x24 PAR2*.vso vs_2_0 variants into this+0x9C from lighting\2x\v ADTS/AD/DiffusePt/Texture/Specular HLSL with PARALLAX/SKIN/LIGHTS/PROJ_SHADOW defines.
int __thiscall sub_807450(NiD3DShaderProgram **this)
{
  int result; // eax
  _DWORD *v2; // ebp
  NiD3DShaderProgram *VertexShader; // edi
  NiD3DShaderProgram *v4; // esi
  NiD3DShaderProgram **v5; // [esp+10h] [ebp-CC8h]
  int v6; // [esp+14h] [ebp-CC4h]
  const char *v8; // [esp+1Ch] [ebp-CBCh]
  _DWORD v9[683]; // [esp+20h] [ebp-CB8h] BYREF
  char v10[260]; // [esp+ACCh] [ebp-20Ch] BYREF
  char v11[260]; // [esp+BD0h] [ebp-108h] BYREF

  v8 = "lighting\\2x\\v\\ADTS.v.hlsl"; /*0x807485*/
  v9[0] = "PARALLAX"; /*0x807489*/
  v9[1] = EmptyString; /*0x80748d*/
  memset(&v9[2], 0, 0x40); /*0x807491*/
  v9[0x12] = "lighting\\2x\\v\\ADTS.v.hlsl"; /*0x8074a5*/
  v9[0x13] = "SKIN"; /*0x8074ac*/
  v9[0x14] = EmptyString; /*0x8074b7*/
  v9[0x15] = "PARALLAX"; /*0x8074be*/
  v9[0x16] = EmptyString; /*0x8074c5*/
  memset(&v9[0x17], 0, 0x38); /*0x8074cc*/
  v9[0x25] = "lighting\\2x\\v\\ADTS.v.hlsl"; /*0x8074e3*/
  v9[0x26] = "PARALLAX"; /*0x8074ea*/
  v9[0x27] = EmptyString; /*0x8074f1*/
  v9[0x28] = "PROJ_SHADOW"; /*0x8074f8*/
  v9[0x29] = EmptyString; /*0x807503*/
  memset(&v9[0x2A], 0, 0x38); /*0x80750a*/
  v9[0x38] = "lighting\\2x\\v\\ADTS.v.hlsl"; /*0x807521*/
  v9[0x39] = "SKIN"; /*0x807528*/
  v9[0x3A] = EmptyString; /*0x807533*/
  v9[0x3B] = "PARALLAX"; /*0x80753a*/
  v9[0x3C] = EmptyString; /*0x807541*/
  v9[0x3D] = "PROJ_SHADOW"; /*0x807548*/
  v9[0x3E] = EmptyString; /*0x807553*/
  memset(&v9[0x3F], 0, 0x30); /*0x80755a*/
  v9[0x4B] = "lighting\\2x\\v\\ADTS.v.hlsl"; /*0x807568*/
  v9[0x4C] = "LIGHTS"; /*0x80757d*/
  v9[0x4D] = "2"; /*0x807584*/
  v9[0x4E] = "PARALLAX"; /*0x80758f*/
  v9[0x4F] = EmptyString; /*0x807596*/
  memset(&v9[0x50], 0, 0x38); /*0x80759d*/
  v9[0x5E] = "lighting\\2x\\v\\ADTS.v.hlsl"; /*0x8075b4*/
  v9[0x5F] = "SKIN"; /*0x8075bf*/
  v9[0x60] = EmptyString; /*0x8075ca*/
  v9[0x61] = "LIGHTS"; /*0x8075d1*/
  v9[0x62] = "2"; /*0x8075d8*/
  v9[0x63] = "PARALLAX"; /*0x8075e3*/
  v9[0x64] = EmptyString; /*0x8075ea*/
  memset(&v9[0x65], 0, 0x30); /*0x8075f1*/
  v9[0x71] = "lighting\\2x\\v\\ADTS.v.hlsl"; /*0x807600*/
  v9[0x72] = "LIGHTS"; /*0x80760b*/
  v9[0x73] = "2"; /*0x80761d*/
  v9[0x74] = "PARALLAX"; /*0x807628*/
  v9[0x75] = EmptyString; /*0x80762f*/
  v9[0x76] = "PROJ_SHADOW"; /*0x807636*/
  v9[0x77] = EmptyString; /*0x807641*/
  memset(&v9[0x78], 0, 0x30); /*0x807648*/
  v9[0x84] = "lighting\\2x\\v\\ADTS.v.hlsl"; /*0x80765d*/
  v9[0x97] = "lighting\\2x\\v\\ADTS.v.hlsl"; /*0x807664*/
  v9[0x85] = "SKIN"; /*0x807674*/
  v9[0x86] = EmptyString; /*0x80767f*/
  v9[0x87] = "LIGHTS"; /*0x807686*/
  v9[0x88] = "2"; /*0x80768d*/
  v9[0x89] = "PARALLAX"; /*0x807698*/
  v9[0x8A] = EmptyString; /*0x80769f*/
  v9[0x8B] = "PROJ_SHADOW"; /*0x8076a6*/
  v9[0x8C] = EmptyString; /*0x8076b1*/
  memset(&v9[0x8D], 0, 0x28); /*0x8076b8*/
  v9[0x98] = "SPECULAR"; /*0x8076fe*/
  v9[0x99] = EmptyString; /*0x807709*/
  v9[0x9A] = "PARALLAX"; /*0x807710*/
  v9[0x9B] = EmptyString; /*0x807717*/
  memset(&v9[0x9C], 0, 0x38); /*0x80771e*/
  v9[0xAA] = "lighting\\2x\\v\\ADTS.v.hlsl"; /*0x807735*/
  v9[0xAB] = "SPECULAR"; /*0x807740*/
  v9[0xAC] = EmptyString; /*0x80774b*/
  v9[0xAD] = "SKIN"; /*0x807752*/
  v9[0xAE] = EmptyString; /*0x80775d*/
  v9[0xAF] = "PARALLAX"; /*0x807764*/
  v9[0xB0] = EmptyString; /*0x80776b*/
  memset(&v9[0xB1], 0, 0x30); /*0x807772*/
  v9[0xBD] = "lighting\\2x\\v\\ADTS.v.hlsl"; /*0x807789*/
  v9[0xBE] = "SPECULAR"; /*0x807794*/
  v9[0xBF] = EmptyString; /*0x80779f*/
  v9[0xC0] = "PARALLAX"; /*0x8077a6*/
  v9[0xC1] = EmptyString; /*0x8077ad*/
  v9[0xC2] = "PROJ_SHADOW"; /*0x8077b4*/
  v9[0xC3] = EmptyString; /*0x8077bf*/
  memset(&v9[0xC4], 0, 0x30); /*0x8077c6*/
  v9[0xD0] = "lighting\\2x\\v\\ADTS.v.hlsl"; /*0x8077dc*/
  v9[0xD1] = "SPECULAR"; /*0x8077e3*/
  v9[0xD2] = EmptyString; /*0x8077ea*/
  v9[0xD3] = "SKIN"; /*0x8077f1*/
  v9[0xD4] = EmptyString; /*0x8077fc*/
  v9[0xD5] = "PARALLAX"; /*0x807803*/
  v9[0xD6] = EmptyString; /*0x80780a*/
  v9[0xD7] = "PROJ_SHADOW"; /*0x807811*/
  v9[0xD8] = EmptyString; /*0x80781c*/
  memset(&v9[0xD9], 0, 0x28); /*0x807823*/
  v9[0xE4] = "SPECULAR"; /*0x80782e*/
  v9[0xE3] = "lighting\\2x\\v\\ADTS.v.hlsl"; /*0x80787d*/
  v9[0xE5] = EmptyString; /*0x807884*/
  v9[0xE6] = "LIGHTS"; /*0x80788b*/
  v9[0xE7] = "2"; /*0x807892*/
  v9[0xE8] = "PARALLAX"; /*0x80789d*/
  v9[0xE9] = EmptyString; /*0x8078a4*/
  memset(&v9[0xEA], 0, 0x30); /*0x8078ab*/
  v9[0xF6] = "lighting\\2x\\v\\ADTS.v.hlsl"; /*0x8078c3*/
  v9[0xF7] = "SPECULAR"; /*0x8078ce*/
  v9[0xF8] = EmptyString; /*0x8078d5*/
  v9[0xF9] = "SKIN"; /*0x8078dc*/
  v9[0xFA] = EmptyString; /*0x8078e7*/
  v9[0xFB] = "LIGHTS"; /*0x8078ee*/
  v9[0xFC] = "2"; /*0x8078f5*/
  v9[0xFD] = "PARALLAX"; /*0x8078fc*/
  v9[0xFE] = EmptyString; /*0x807903*/
  memset(&v9[0xFF], 0, 0x28); /*0x80790a*/
  v9[0x109] = "lighting\\2x\\v\\ADTS.v.hlsl"; /*0x807950*/
  v9[0x10A] = "SPECULAR"; /*0x80795b*/
  v9[0x10B] = EmptyString; /*0x807962*/
  v9[0x10C] = "LIGHTS"; /*0x807969*/
  v9[0x10D] = "2"; /*0x807970*/
  v9[0x10E] = "PARALLAX"; /*0x807977*/
  v9[0x10F] = EmptyString; /*0x80797e*/
  v9[0x110] = "PROJ_SHADOW"; /*0x807985*/
  v9[0x111] = EmptyString; /*0x807990*/
  memset(&v9[0x112], 0, 0x28); /*0x807997*/
  v9[0x11C] = "lighting\\2x\\v\\ADTS.v.hlsl"; /*0x8079dd*/
  v9[0x11D] = "SPECULAR"; /*0x8079e8*/
  v9[0x11E] = EmptyString; /*0x8079ef*/
  v9[0x11F] = "SKIN"; /*0x8079f6*/
  v9[0x120] = EmptyString; /*0x807a01*/
  v9[0x121] = "LIGHTS"; /*0x807a08*/
  v9[0x122] = "2"; /*0x807a0f*/
  v9[0x123] = "PARALLAX"; /*0x807a16*/
  v9[0x124] = EmptyString; /*0x807a1d*/
  v9[0x125] = "PROJ_SHADOW"; /*0x807a24*/
  v9[0x126] = EmptyString; /*0x807a2f*/
  memset(&v9[0x127], 0, 0x20); /*0x807a36*/
  v9[0x12F] = "lighting\\2x\\v\\AD.v.hlsl"; /*0x807a79*/
  v9[0x130] = "LIGHTS"; /*0x807a84*/
  v9[0x131] = "2"; /*0x807a8b*/
  v9[0x132] = "PARALLAX"; /*0x807a92*/
  v9[0x133] = EmptyString; /*0x807a99*/
  memset(&v9[0x134], 0, 0x38); /*0x807aa0*/
  v9[0x142] = "lighting\\2x\\v\\AD.v.hlsl"; /*0x807aba*/
  v9[0x143] = "SKIN"; /*0x807ac5*/
  v9[0x144] = EmptyString; /*0x807ad0*/
  v9[0x145] = "LIGHTS"; /*0x807ad7*/
  v9[0x146] = "2"; /*0x807ade*/
  v9[0x147] = "PARALLAX"; /*0x807ae9*/
  v9[0x148] = EmptyString; /*0x807af0*/
  memset(&v9[0x149], 0, 0x30); /*0x807af7*/
  v9[0x155] = "lighting\\2x\\v\\AD.v.hlsl"; /*0x807b0e*/
  v9[0x156] = "LIGHTS"; /*0x807b19*/
  v9[0x157] = "2"; /*0x807b20*/
  v9[0x158] = "PARALLAX"; /*0x807b2b*/
  v9[0x159] = EmptyString; /*0x807b32*/
  v9[0x15A] = "PROJ_SHADOW"; /*0x807b39*/
  v9[0x15B] = EmptyString; /*0x807b44*/
  memset(&v9[0x15C], 0, 0x30); /*0x807b4b*/
  v9[0x168] = "lighting\\2x\\v\\AD.v.hlsl"; /*0x807b69*/
  v9[0x169] = "SKIN"; /*0x807b70*/
  v9[0x16A] = EmptyString; /*0x807b7b*/
  v9[0x16B] = "LIGHTS"; /*0x807b82*/
  v9[0x16C] = "2"; /*0x807b89*/
  v9[0x16D] = "PARALLAX"; /*0x807b94*/
  v9[0x16E] = EmptyString; /*0x807b9b*/
  v9[0x16F] = "PROJ_SHADOW"; /*0x807ba2*/
  v9[0x170] = EmptyString; /*0x807bad*/
  memset(&v9[0x171], 0, 0x28); /*0x807bb4*/
  v9[0x17B] = "lighting\\2x\\v\\AD.v.hlsl"; /*0x807bfa*/
  v9[0x17C] = "LIGHTS"; /*0x807c01*/
  v9[0x17D] = "3"; /*0x807c08*/
  v9[0x17E] = "PARALLAX"; /*0x807c13*/
  v9[0x17F] = EmptyString; /*0x807c1a*/
  memset(&v9[0x180], 0, 0x38); /*0x807c21*/
  v9[0x18E] = "lighting\\2x\\v\\AD.v.hlsl"; /*0x807c2d*/
  v9[0x18F] = "SKIN"; /*0x807c38*/
  v9[0x190] = EmptyString; /*0x807c43*/
  v9[0x191] = "LIGHTS"; /*0x807c4a*/
  v9[0x192] = "3"; /*0x807c51*/
  v9[0x193] = "PARALLAX"; /*0x807c5c*/
  v9[0x194] = EmptyString; /*0x807c63*/
  memset(&v9[0x195], 0, 0x30); /*0x807c6a*/
  v9[0x1A1] = "lighting\\2x\\v\\AD.v.hlsl"; /*0x807c8c*/
  v9[0x1A2] = "LIGHTS"; /*0x807c97*/
  v9[0x1A3] = "3"; /*0x807c9e*/
  v9[0x1A4] = "PARALLAX"; /*0x807ca9*/
  v9[0x1A5] = EmptyString; /*0x807cb0*/
  v9[0x1A6] = "PROJ_SHADOW"; /*0x807cb7*/
  v9[0x1A7] = EmptyString; /*0x807cc2*/
  memset(&v9[0x1A8], 0, 0x30); /*0x807cc9*/
  v9[0x1B4] = "lighting\\2x\\v\\AD.v.hlsl"; /*0x807ce2*/
  v9[0x1B5] = "SKIN"; /*0x807ced*/
  v9[0x1B6] = EmptyString; /*0x807cf8*/
  v9[0x1B7] = "LIGHTS"; /*0x807cff*/
  v9[0x1B8] = "3"; /*0x807d06*/
  v9[0x1B9] = "PARALLAX"; /*0x807d11*/
  v9[0x1BA] = EmptyString; /*0x807d18*/
  v9[0x1BB] = "PROJ_SHADOW"; /*0x807d1f*/
  v9[0x1BC] = EmptyString; /*0x807d2a*/
  memset(&v9[0x1BD], 0, 0x28); /*0x807d31*/
  v9[0x1C7] = "lighting\\2x\\v\\DiffusePt.v.hlsl"; /*0x807d77*/
  v9[0x1C8] = "LIGHTS"; /*0x807d82*/
  v9[0x1C9] = "2"; /*0x807d89*/
  v9[0x1CA] = "PARALLAX"; /*0x807d94*/
  v9[0x1CB] = EmptyString; /*0x807d9b*/
  memset(&v9[0x1CC], 0, 0x38); /*0x807da2*/
  v9[0x1DA] = "lighting\\2x\\v\\DiffusePt.v.hlsl"; /*0x807dbc*/
  v9[0x1DB] = "SKIN"; /*0x807dc7*/
  v9[0x1DC] = EmptyString; /*0x807dd2*/
  v9[0x1DD] = "LIGHTS"; /*0x807dd9*/
  v9[0x1DE] = "2"; /*0x807de0*/
  v9[0x1DF] = "PARALLAX"; /*0x807deb*/
  v9[0x1E0] = EmptyString; /*0x807df2*/
  memset(&v9[0x1E1], 0, 0x30); /*0x807df9*/
  v9[0x1ED] = "lighting\\2x\\v\\DiffusePt.v.hlsl"; /*0x807e10*/
  v9[0x1EE] = "LIGHTS"; /*0x807e1b*/
  v9[0x1EF] = "3"; /*0x807e22*/
  v9[0x1F0] = "PARALLAX"; /*0x807e2d*/
  v9[0x1F1] = EmptyString; /*0x807e34*/
  memset(&v9[0x1F2], 0, 0x38); /*0x807e3b*/
  v9[0x200] = "lighting\\2x\\v\\DiffusePt.v.hlsl"; /*0x807e47*/
  v9[0x201] = "SKIN"; /*0x807e52*/
  v9[0x202] = EmptyString; /*0x807e5d*/
  v9[0x203] = "LIGHTS"; /*0x807e64*/
  v9[0x204] = "2"; /*0x807e6b*/
  v9[0x205] = "PARALLAX"; /*0x807e76*/
  v9[0x206] = EmptyString; /*0x807e7d*/
  memset(&v9[0x207], 0, 0x30); /*0x807e84*/
  v9[0x213] = "lighting\\2x\\v\\Texture.v.hlsl"; /*0x807eab*/
  v9[0x214] = "PARALLAX"; /*0x807eb2*/
  v9[0x215] = EmptyString; /*0x807eb9*/
  memset(&v9[0x216], 0, 0x40); /*0x807ec0*/
  v9[0x226] = "lighting\\2x\\v\\Texture.v.hlsl"; /*0x807ed7*/
  v9[0x227] = "SKIN"; /*0x807ede*/
  v9[0x228] = EmptyString; /*0x807ee9*/
  v9[0x229] = "PARALLAX"; /*0x807ef0*/
  v9[0x22A] = EmptyString; /*0x807ef7*/
  memset(&v9[0x22B], 0, 0x38); /*0x807efe*/
  v9[0x239] = "lighting\\2x\\v\\Specular.v.hlsl"; /*0x807f1a*/
  v9[0x23A] = "PARALLAX"; /*0x807f21*/
  v9[0x23B] = EmptyString; /*0x807f28*/
  memset(&v9[0x23C], 0, 0x40); /*0x807f2f*/
  v9[0x24C] = "lighting\\2x\\v\\Specular.v.hlsl"; /*0x807f49*/
  v9[0x24D] = "SKIN"; /*0x807f50*/
  v9[0x24E] = EmptyString; /*0x807f5b*/
  v9[0x24F] = "PARALLAX"; /*0x807f62*/
  v9[0x250] = EmptyString; /*0x807f69*/
  memset(&v9[0x251], 0, 0x38); /*0x807f70*/
  v9[0x25F] = "lighting\\2x\\v\\Specular.v.hlsl"; /*0x807f87*/
  v9[0x260] = "PARALLAX"; /*0x807f8e*/
  v9[0x261] = EmptyString; /*0x807f95*/
  v9[0x262] = "PROJ_SHADOW"; /*0x807f9c*/
  v9[0x263] = EmptyString; /*0x807fa7*/
  memset(&v9[0x264], 0, 0x38); /*0x807fae*/
  v9[0x272] = "lighting\\2x\\v\\Specular.v.hlsl"; /*0x807fc5*/
  v9[0x273] = "SKIN"; /*0x807fcc*/
  v9[0x274] = EmptyString; /*0x807fd7*/
  v9[0x275] = "PARALLAX"; /*0x807fde*/
  v9[0x276] = EmptyString; /*0x807fe5*/
  v9[0x277] = "PROJ_SHADOW"; /*0x807fec*/
  v9[0x278] = EmptyString; /*0x807ff7*/
  memset(&v9[0x279], 0, 0x30); /*0x807ffe*/
  v9[0x285] = "lighting\\2x\\v\\Specular.v.hlsl"; /*0x80800c*/
  v9[0x286] = "POINT"; /*0x808013*/
  v9[0x287] = EmptyString; /*0x80801e*/
  v9[0x288] = "PARALLAX"; /*0x808025*/
  v9[0x289] = EmptyString; /*0x80802c*/
  memset(&v9[0x28A], 0, 0x38); /*0x808033*/
  v9[0x298] = "lighting\\2x\\v\\Specular.v.hlsl"; /*0x808053*/
  v9[0x299] = "POINT"; /*0x80805a*/
  v9[0x29A] = EmptyString; /*0x808065*/
  v9[0x29B] = "SKIN"; /*0x80806c*/
  v9[0x29C] = EmptyString; /*0x808077*/
  v9[0x29D] = "PARALLAX"; /*0x80807e*/
  v9[0x29E] = EmptyString; /*0x808085*/
  v9[0x29F] = 0; /*0x80808c*/
  result = _memset((int)&v9[0x2A0], 0, 0x2Cu); /*0x808093*/
  if ( *(int *)OB_RendererGlobalState_010201A0.shaderPackageVersion_le >= 2 ) /*0x8080a2*/
  {
    v6 = 0; /*0x8080b2*/
    v2 = v9; /*0x8080b6*/
    v5 = this + 0x27;                           // MoonSugarEffect decode: Parallax vertex loader writes retained wrappers starting at object+0x9C; slot index 0x10 becomes object+0xDC / this[0x37] and loads PAR2016.vso. /*0x8080ba*/
    do /*0x808162*/
    {
      sub_801030((char *)v2[0xFFFFFFFF], (int)v10); /*0x8080cc*/
      _sprintf(v11, "PAR2%03i.vso", v6); /*0x8080e3*/
      VertexShader = CreateVertexShader(v10, v2, "vs_2_0", v11, 0, 0); /*0x80810c*/
      v4 = *v5; /*0x808112*/
      if ( *v5 != VertexShader ) /*0x808116*/
      {
        if ( v4 ) /*0x80811a*/
        {
          if ( !InterlockedDecrement((volatile LONG *)v4 + 1) ) /*0x808120*/
            (**(void (__thiscall ***)(NiD3DShaderProgram *, int))v4)(v4, 1); /*0x808136*/
        }
        *v5 = VertexShader; /*0x80813e*/
        if ( VertexShader ) /*0x808140*/
          InterlockedIncrement((volatile LONG *)VertexShader + 1); /*0x808146*/
      }
      ++v5; /*0x808150*/
      result = v6 + 1; /*0x808155*/
      v2 += 0x13; /*0x808158*/
      ++v6; /*0x80815e*/
    }
    while ( v6 < 0x24 ); /*0x808162*/
  }
  return result; /*0x808168*/
}
