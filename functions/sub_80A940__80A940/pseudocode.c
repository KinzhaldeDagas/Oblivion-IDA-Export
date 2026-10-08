// MoonSugarEffect decode: SkinShader pixel-program loader. Loads 0x0A SKIN2*.pso ps_2_0 variants into this+0xEC from lighting\2x\p ADTS/AD/DiffusePt HLSL with FACEGENBLEND/LIGHTS/PROJ_SHADOW defines.
void __thiscall SkinShader_LoadPixelPrograms(char *this)
{
  int *v1; // ebx
  NiD3DShaderProgram *PixelShader; // eax
  int v3; // esi
  NiD3DShaderProgram *v4; // edi
  char *v5; // [esp+10h] [ebp-510h]
  int v6; // [esp+14h] [ebp-50Ch]
  const char *v7; // [esp+1Ch] [ebp-504h]
  int v8[189]; // [esp+20h] [ebp-500h] BYREF
  char FileName[260]; // [esp+314h] [ebp-20Ch] BYREF
  char v10[260]; // [esp+418h] [ebp-108h] BYREF

  v7 = "lighting\\2x\\p\\ADTS.p.hlsl"; /*0x80a975*/
  v8[0] = (int)"FACEGENBLEND"; /*0x80a979*/
  v8[1] = (int)EmptyString; /*0x80a97d*/
  memset(&v8[2], 0, 0x40); /*0x80a981*/
  v8[0x12] = (int)"lighting\\2x\\p\\ADTS.p.hlsl"; /*0x80a995*/
  v8[0x13] = (int)"FACEGENBLEND"; /*0x80a99c*/
  v8[0x14] = (int)EmptyString; /*0x80a9a3*/
  v8[0x15] = (int)"PROJ_SHADOW"; /*0x80a9aa*/
  v8[0x16] = (int)EmptyString; /*0x80a9b5*/
  memset(&v8[0x17], 0, 0x38); /*0x80a9bc*/
  v8[0x25] = (int)"lighting\\2x\\p\\ADTS.p.hlsl"; /*0x80a9ca*/
  v8[0x26] = (int)"LIGHTS"; /*0x80a9df*/
  v8[0x27] = (int)"2"; /*0x80a9e6*/
  v8[0x28] = (int)"FACEGENBLEND"; /*0x80a9f1*/
  v8[0x29] = (int)EmptyString; /*0x80a9f8*/
  memset(&v8[0x2A], 0, 0x38); /*0x80a9ff*/
  v8[0x38] = (int)"lighting\\2x\\p\\ADTS.p.hlsl"; /*0x80aa16*/
  v8[0x39] = (int)"LIGHTS"; /*0x80aa21*/
  v8[0x3A] = (int)"2"; /*0x80aa28*/
  v8[0x3B] = (int)"FACEGENBLEND"; /*0x80aa33*/
  v8[0x3C] = (int)EmptyString; /*0x80aa3a*/
  v8[0x3D] = (int)"PROJ_SHADOW"; /*0x80aa41*/
  v8[0x3E] = (int)EmptyString; /*0x80aa4c*/
  memset(&v8[0x3F], 0, 0x30); /*0x80aa53*/
  v8[0x4B] = (int)"lighting\\2x\\p\\AD.p.hlsl"; /*0x80aa6a*/
  v8[0x4C] = (int)"LIGHTS"; /*0x80aa75*/
  v8[0x4D] = (int)"2"; /*0x80aa7c*/
  v8[0x4E] = (int)"FACEGENBLEND"; /*0x80aa87*/
  v8[0x4F] = (int)EmptyString; /*0x80aa8e*/
  memset(&v8[0x50], 0, 0x38); /*0x80aa95*/
  v8[0x5E] = (int)"lighting\\2x\\p\\AD.p.hlsl"; /*0x80aaac*/
  v8[0x5F] = (int)"LIGHTS"; /*0x80aab7*/
  v8[0x60] = (int)"2"; /*0x80aabe*/
  v8[0x61] = (int)"FACEGENBLEND"; /*0x80aac9*/
  v8[0x62] = (int)EmptyString; /*0x80aad0*/
  v8[0x63] = (int)"PROJ_SHADOW"; /*0x80aad7*/
  v8[0x64] = (int)EmptyString; /*0x80aae2*/
  memset(&v8[0x65], 0, 0x30); /*0x80aae9*/
  v8[0x71] = (int)"lighting\\2x\\p\\AD.p.hlsl"; /*0x80aaf8*/
  v8[0x72] = (int)"LIGHTS"; /*0x80ab03*/
  v8[0x73] = (int)"3"; /*0x80ab15*/
  v8[0x74] = (int)"FACEGENBLEND"; /*0x80ab20*/
  v8[0x75] = (int)EmptyString; /*0x80ab27*/
  memset(&v8[0x76], 0, 0x38); /*0x80ab2e*/
  v8[0x84] = (int)"lighting\\2x\\p\\AD.p.hlsl"; /*0x80ab45*/
  v8[0x85] = (int)"LIGHTS"; /*0x80ab50*/
  v8[0x86] = (int)"3"; /*0x80ab57*/
  v8[0x87] = (int)"FACEGENBLEND"; /*0x80ab62*/
  v8[0x88] = (int)EmptyString; /*0x80ab69*/
  v8[0x89] = (int)"PROJ_SHADOW"; /*0x80ab70*/
  v8[0x8A] = (int)EmptyString; /*0x80ab7b*/
  memset(&v8[0x8B], 0, 0x30); /*0x80ab82*/
  v8[0x97] = (int)"lighting\\2x\\p\\DiffusePt.p.hlsl"; /*0x80ab99*/
  v8[0x98] = (int)"LIGHTS"; /*0x80aba4*/
  v8[0x99] = (int)"2"; /*0x80abab*/
  v8[0x9A] = (int)"FACEGENBLEND"; /*0x80abb6*/
  v8[0x9B] = (int)EmptyString; /*0x80abbd*/
  memset(&v8[0x9C], 0, 0x38); /*0x80abc4*/
  v8[0xAA] = (int)"lighting\\2x\\p\\DiffusePt.p.hlsl"; /*0x80abdb*/
  v8[0xAB] = (int)"LIGHTS"; /*0x80abe6*/
  v8[0xAC] = (int)"3"; /*0x80abed*/
  v8[0xAD] = (int)"FACEGENBLEND"; /*0x80abf8*/
  v8[0xAE] = (int)EmptyString; /*0x80abff*/
  memset(&v8[0xAF], 0, 0x38); /*0x80ac06*/
  if ( *(int *)&OB_RendererGlobalState_010201A0[0xAF] >= 2 ) /*0x80ac1c*/
  {
    v6 = 0; /*0x80ac2c*/
    v1 = v8; /*0x80ac30*/
    v5 = this + 0xEC; /*0x80ac34*/
    do /*0x80ace2*/
    {
      sub_801030((char *)v1[0xFFFFFFFF], (int)FileName); /*0x80ac4c*/
      _sprintf(v10, "SKIN2%03i.pso", v6); /*0x80ac63*/
      PixelShader = CreatePixelShader(FileName, v1, "ps_2_0", v10, 0, 0); /*0x80ac87*/
      v3 = *(_DWORD *)v5; /*0x80ac90*/
      v4 = PixelShader; /*0x80ac92*/
      if ( *(NiD3DShaderProgram **)v5 != PixelShader ) /*0x80ac96*/
      {
        if ( v3 ) /*0x80ac9a*/
        {
          if ( !InterlockedDecrement((volatile LONG *)(v3 + 4)) ) /*0x80aca0*/
            (**(void (__thiscall ***)(int, int))v3)(v3, 1); /*0x80acb6*/
        }
        *(_DWORD *)v5 = v4; /*0x80acbe*/
        if ( v4 ) /*0x80acc0*/
          InterlockedIncrement((volatile LONG *)v4 + 1); /*0x80acc6*/
      }
      v5 += 4; /*0x80acd0*/
      v1 += 0x13; /*0x80acd8*/
      ++v6; /*0x80acde*/
    }
    while ( v6 < 0xA ); /*0x80ace2*/
  }
}
