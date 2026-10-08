// MoonSugarEffect decode: SkinShader vertex-program loader. Loads 0x14 SKIN2*.vso vs_2_0 variants into this+0x9C from lighting\2x\v ADTS/AD/DiffusePt HLSL with SKIN/FACEGENBLEND/LIGHTS/PROJ_SHADOW defines.
void __thiscall SkinShader_LoadVertexPrograms(char *this)
{
  int *v1; // ebp
  NiD3DShaderProgram *VertexShader; // edi
  int v3; // esi
  char *v4; // [esp+10h] [ebp-808h]
  int v5; // [esp+14h] [ebp-804h]
  const char *v6; // [esp+1Ch] [ebp-7FCh]
  int v7[379]; // [esp+20h] [ebp-7F8h] BYREF
  char FileName[260]; // [esp+60Ch] [ebp-20Ch] BYREF
  char v9[260]; // [esp+710h] [ebp-108h] BYREF

  v6 = "lighting\\2x\\v\\ADTS.v.hlsl"; /*0x80a1b5*/
  v7[0] = (int)"FACEGENBLEND"; /*0x80a1b9*/
  v7[1] = (int)EmptyString; /*0x80a1bd*/
  memset(&v7[2], 0, 0x40); /*0x80a1c1*/
  v7[0x12] = (int)"lighting\\2x\\v\\ADTS.v.hlsl"; /*0x80a1d5*/
  v7[0x13] = (int)"SKIN"; /*0x80a1dc*/
  v7[0x14] = (int)EmptyString; /*0x80a1e7*/
  v7[0x15] = (int)"FACEGENBLEND"; /*0x80a1ee*/
  v7[0x16] = (int)EmptyString; /*0x80a1f5*/
  memset(&v7[0x17], 0, 0x38); /*0x80a1fc*/
  v7[0x25] = (int)"lighting\\2x\\v\\ADTS.v.hlsl"; /*0x80a213*/
  v7[0x26] = (int)"FACEGENBLEND"; /*0x80a21a*/
  v7[0x27] = (int)EmptyString; /*0x80a221*/
  v7[0x28] = (int)"PROJ_SHADOW"; /*0x80a228*/
  v7[0x29] = (int)EmptyString; /*0x80a233*/
  memset(&v7[0x2A], 0, 0x38); /*0x80a23a*/
  v7[0x38] = (int)"lighting\\2x\\v\\ADTS.v.hlsl"; /*0x80a251*/
  v7[0x39] = (int)"SKIN"; /*0x80a258*/
  v7[0x3A] = (int)EmptyString; /*0x80a263*/
  v7[0x3B] = (int)"FACEGENBLEND"; /*0x80a26a*/
  v7[0x3C] = (int)EmptyString; /*0x80a271*/
  v7[0x3D] = (int)"PROJ_SHADOW"; /*0x80a278*/
  v7[0x3E] = (int)EmptyString; /*0x80a283*/
  memset(&v7[0x3F], 0, 0x30); /*0x80a28a*/
  v7[0x4B] = (int)"lighting\\2x\\v\\ADTS.v.hlsl"; /*0x80a298*/
  v7[0x4C] = (int)"LIGHTS"; /*0x80a2ad*/
  v7[0x4D] = (int)"2"; /*0x80a2b4*/
  v7[0x4E] = (int)"FACEGENBLEND"; /*0x80a2bf*/
  v7[0x4F] = (int)EmptyString; /*0x80a2c6*/
  memset(&v7[0x50], 0, 0x38); /*0x80a2cd*/
  v7[0x5E] = (int)"lighting\\2x\\v\\ADTS.v.hlsl"; /*0x80a2e4*/
  v7[0x5F] = (int)"SKIN"; /*0x80a2ef*/
  v7[0x60] = (int)EmptyString; /*0x80a2fa*/
  v7[0x61] = (int)"LIGHTS"; /*0x80a301*/
  v7[0x62] = (int)"2"; /*0x80a308*/
  v7[0x63] = (int)"FACEGENBLEND"; /*0x80a313*/
  v7[0x64] = (int)EmptyString; /*0x80a31a*/
  memset(&v7[0x65], 0, 0x30); /*0x80a321*/
  v7[0x71] = (int)"lighting\\2x\\v\\ADTS.v.hlsl"; /*0x80a330*/
  v7[0x72] = (int)"LIGHTS"; /*0x80a33b*/
  v7[0x73] = (int)"2"; /*0x80a34d*/
  v7[0x74] = (int)"FACEGENBLEND"; /*0x80a358*/
  v7[0x75] = (int)EmptyString; /*0x80a35f*/
  v7[0x76] = (int)"PROJ_SHADOW"; /*0x80a366*/
  v7[0x77] = (int)EmptyString; /*0x80a371*/
  memset(&v7[0x78], 0, 0x30); /*0x80a378*/
  v7[0x88] = (int)"2"; /*0x80a38d*/
  v7[0x99] = (int)"2"; /*0x80a394*/
  v7[0x84] = (int)"lighting\\2x\\v\\ADTS.v.hlsl"; /*0x80a3a4*/
  v7[0x85] = (int)"SKIN"; /*0x80a3af*/
  v7[0x86] = (int)EmptyString; /*0x80a3ba*/
  v7[0x87] = (int)"LIGHTS"; /*0x80a3c1*/
  v7[0x89] = (int)"FACEGENBLEND"; /*0x80a3c8*/
  v7[0x8A] = (int)EmptyString; /*0x80a3cf*/
  v7[0x8B] = (int)"PROJ_SHADOW"; /*0x80a3d6*/
  v7[0x8C] = (int)EmptyString; /*0x80a3e1*/
  memset(&v7[0x8D], 0, 0x28); /*0x80a3e8*/
  v7[0x97] = (int)"lighting\\2x\\v\\AD.v.hlsl"; /*0x80a42e*/
  v7[0x98] = (int)"LIGHTS"; /*0x80a439*/
  v7[0x9A] = (int)"FACEGENBLEND"; /*0x80a440*/
  v7[0x9B] = (int)EmptyString; /*0x80a447*/
  memset(&v7[0x9C], 0, 0x38); /*0x80a44e*/
  v7[0xAA] = (int)"lighting\\2x\\v\\AD.v.hlsl"; /*0x80a465*/
  v7[0xAB] = (int)"SKIN"; /*0x80a470*/
  v7[0xAC] = (int)EmptyString; /*0x80a47b*/
  v7[0xAD] = (int)"LIGHTS"; /*0x80a482*/
  v7[0xAE] = (int)"2"; /*0x80a489*/
  v7[0xAF] = (int)"FACEGENBLEND"; /*0x80a494*/
  v7[0xB0] = (int)EmptyString; /*0x80a49b*/
  memset(&v7[0xB1], 0, 0x30); /*0x80a4a2*/
  v7[0xBD] = (int)"lighting\\2x\\v\\AD.v.hlsl"; /*0x80a4b9*/
  v7[0xBE] = (int)"LIGHTS"; /*0x80a4c4*/
  v7[0xBF] = (int)"2"; /*0x80a4cb*/
  v7[0xC0] = (int)"FACEGENBLEND"; /*0x80a4d6*/
  v7[0xC1] = (int)EmptyString; /*0x80a4dd*/
  v7[0xC2] = (int)"PROJ_SHADOW"; /*0x80a4e4*/
  v7[0xC3] = (int)EmptyString; /*0x80a4ef*/
  memset(&v7[0xC4], 0, 0x30); /*0x80a4f6*/
  v7[0xD0] = (int)"lighting\\2x\\v\\AD.v.hlsl"; /*0x80a507*/
  v7[0xD1] = (int)"SKIN"; /*0x80a50e*/
  v7[0xD2] = (int)EmptyString; /*0x80a519*/
  v7[0xD3] = (int)"LIGHTS"; /*0x80a520*/
  v7[0xD4] = (int)"2"; /*0x80a527*/
  v7[0xD5] = (int)"FACEGENBLEND"; /*0x80a532*/
  v7[0xD6] = (int)EmptyString; /*0x80a539*/
  v7[0xD7] = (int)"PROJ_SHADOW"; /*0x80a540*/
  v7[0xD8] = (int)EmptyString; /*0x80a54b*/
  memset(&v7[0xD9], 0, 0x28); /*0x80a552*/
  v7[0xE3] = (int)"lighting\\2x\\v\\AD.v.hlsl"; /*0x80a55d*/
  v7[0xE4] = (int)"LIGHTS"; /*0x80a5ac*/
  v7[0xE5] = (int)"3"; /*0x80a5b3*/
  v7[0xE6] = (int)"FACEGENBLEND"; /*0x80a5be*/
  v7[0xE7] = (int)EmptyString; /*0x80a5c5*/
  memset(&v7[0xE8], 0, 0x38); /*0x80a5cc*/
  v7[0xF6] = (int)"lighting\\2x\\v\\AD.v.hlsl"; /*0x80a5e3*/
  v7[0xF7] = (int)"SKIN"; /*0x80a5ee*/
  v7[0xF8] = (int)EmptyString; /*0x80a5f9*/
  v7[0xF9] = (int)"LIGHTS"; /*0x80a600*/
  v7[0xFA] = (int)"3"; /*0x80a607*/
  v7[0xFB] = (int)"FACEGENBLEND"; /*0x80a612*/
  v7[0xFC] = (int)EmptyString; /*0x80a619*/
  memset(&v7[0xFD], 0, 0x30); /*0x80a620*/
  v7[0x109] = (int)"lighting\\2x\\v\\AD.v.hlsl"; /*0x80a63a*/
  v7[0x10A] = (int)"LIGHTS"; /*0x80a645*/
  v7[0x10B] = (int)"3"; /*0x80a64c*/
  v7[0x10C] = (int)"FACEGENBLEND"; /*0x80a657*/
  v7[0x10D] = (int)EmptyString; /*0x80a65e*/
  v7[0x10E] = (int)"PROJ_SHADOW"; /*0x80a665*/
  v7[0x10F] = (int)EmptyString; /*0x80a670*/
  memset(&v7[0x110], 0, 0x30); /*0x80a677*/
  v7[0x11C] = (int)"lighting\\2x\\v\\AD.v.hlsl"; /*0x80a690*/
  v7[0x11D] = (int)"SKIN"; /*0x80a69b*/
  v7[0x11E] = (int)EmptyString; /*0x80a6a6*/
  v7[0x11F] = (int)"LIGHTS"; /*0x80a6ad*/
  v7[0x120] = (int)"3"; /*0x80a6b4*/
  v7[0x121] = (int)"FACEGENBLEND"; /*0x80a6bf*/
  v7[0x122] = (int)EmptyString; /*0x80a6c6*/
  v7[0x123] = (int)"PROJ_SHADOW"; /*0x80a6cd*/
  v7[0x124] = (int)EmptyString; /*0x80a6d8*/
  memset(&v7[0x125], 0, 0x28); /*0x80a6df*/
  v7[0x12F] = (int)"lighting\\2x\\v\\DiffusePt.v.hlsl"; /*0x80a725*/
  v7[0x130] = (int)"LIGHTS"; /*0x80a730*/
  v7[0x131] = (int)"2"; /*0x80a737*/
  v7[0x132] = (int)"FACEGENBLEND"; /*0x80a742*/
  v7[0x133] = (int)EmptyString; /*0x80a749*/
  memset(&v7[0x134], 0, 0x38); /*0x80a750*/
  v7[0x142] = (int)"lighting\\2x\\v\\DiffusePt.v.hlsl"; /*0x80a75c*/
  v7[0x143] = (int)"LIGHTS"; /*0x80a767*/
  v7[0x144] = (int)"2"; /*0x80a76e*/
  v7[0x145] = (int)"SKIN"; /*0x80a784*/
  v7[0x146] = (int)EmptyString; /*0x80a78f*/
  v7[0x147] = (int)"FACEGENBLEND"; /*0x80a796*/
  v7[0x148] = (int)EmptyString; /*0x80a79d*/
  memset(&v7[0x149], 0, 0x30); /*0x80a7a4*/
  v7[0x155] = (int)"lighting\\2x\\v\\DiffusePt.v.hlsl"; /*0x80a7bb*/
  v7[0x156] = (int)"LIGHTS"; /*0x80a7c6*/
  v7[0x157] = (int)"3"; /*0x80a7cd*/
  v7[0x158] = (int)"FACEGENBLEND"; /*0x80a7d8*/
  v7[0x159] = (int)EmptyString; /*0x80a7df*/
  memset(&v7[0x15A], 0, 0x38); /*0x80a7e6*/
  v7[0x168] = (int)"lighting\\2x\\v\\DiffusePt.v.hlsl"; /*0x80a7fd*/
  v7[0x169] = (int)"LIGHTS"; /*0x80a808*/
  v7[0x16A] = (int)"3"; /*0x80a80f*/
  v7[0x16B] = (int)"SKIN"; /*0x80a81a*/
  v7[0x16C] = (int)EmptyString; /*0x80a825*/
  v7[0x16D] = (int)"FACEGENBLEND"; /*0x80a82c*/
  v7[0x16E] = (int)EmptyString; /*0x80a833*/
  memset(&v7[0x16F], 0, 0x30); /*0x80a83a*/
  if ( *(int *)&OB_RendererGlobalState_010201A0[0xAF] >= 2 ) /*0x80a850*/
  {
    v5 = 0; /*0x80a860*/
    v1 = v7; /*0x80a864*/
    v4 = this + 0x9C; /*0x80a868*/
    do /*0x80a912*/
    {
      sub_801030((char *)v1[0xFFFFFFFF], (int)FileName); /*0x80a87c*/
      _sprintf(v9, "SKIN2%03i.vso", v5);        // MoonSugarEffect decode: SkinShader vertex loader cache name SKIN2%03i.vso; slot index maps to object+0x9C+(i*4). SKIN macro variants occupy odd slots and reserve vertex constants c42-c95 for Bones. /*0x80a893*/
      VertexShader = CreateVertexShader(FileName, v1, "vs_2_0", v9, 0, 0); /*0x80a8bc*/
      v3 = *(_DWORD *)v4; /*0x80a8c2*/
      if ( *(NiD3DShaderProgram **)v4 != VertexShader ) /*0x80a8c6*/
      {
        if ( v3 ) /*0x80a8ca*/
        {
          if ( !InterlockedDecrement((volatile LONG *)(v3 + 4)) ) /*0x80a8d0*/
            (**(void (__thiscall ***)(int, int))v3)(v3, 1); /*0x80a8e6*/
        }
        *(_DWORD *)v4 = VertexShader; /*0x80a8ee*/
        if ( VertexShader ) /*0x80a8f0*/
          InterlockedIncrement((volatile LONG *)VertexShader + 1); /*0x80a8f6*/
      }
      v4 += 4; /*0x80a900*/
      v1 += 0x13; /*0x80a908*/
      ++v5; /*0x80a90e*/
    }
    while ( v5 < 0x14 ); /*0x80a912*/
  }
}
