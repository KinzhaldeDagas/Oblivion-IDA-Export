// MoonSugarEffect decode: BlurShader_P20 loads TES4 image-space copy/blur_20/blend_P20 shader programs as ps_2_0/vs_1_1. Use as reference, not direct state ownership.
int __thiscall sub_7EA510(char *this)
{
  char *v1; // ebp
  int result; // eax
  char *v3; // edi
  NiD3DShaderProgram *VertexShader; // eax
  volatile LONG *v5; // edi
  NiD3DShaderProgram *v6; // ebx
  char *v7; // eax
  NiD3DShaderProgram *PixelShader; // eax
  int v9; // edi
  NiD3DShaderProgram *v10; // ebx
  int v11; // [esp+10h] [ebp-510h]
  int i; // [esp+14h] [ebp-50Ch]
  char *FullPath; // [esp+1Ch] [ebp-504h]
  int v14[94]; // [esp+20h] [ebp-500h] BYREF
  _DWORD v15[95]; // [esp+198h] [ebp-388h] BYREF
  char v16[260]; // [esp+314h] [ebp-20Ch] BYREF
  char FileName[260]; // [esp+418h] [ebp-108h] BYREF

  v15[0] = "imagespace\\1x\\v\\base.v.hlsl"; /*0x7ea540*/
  memset(&v15[1], 0, 0x48); /*0x7ea547*/
  v15[0x13] = "imagespace\\1x\\v\\base.v.hlsl"; /*0x7ea56c*/
  memset(&v15[0x14], 0, 0x48); /*0x7ea573*/
  v15[0x26] = "imagespace\\1x\\v\\base.v.hlsl"; /*0x7ea598*/
  memset(&v15[0x27], 0, 0x48); /*0x7ea59f*/
  v15[0x39] = "imagespace\\1x\\v\\base.v.hlsl"; /*0x7ea5c9*/
  v15[0x3A] = "TEX2"; /*0x7ea5d0*/
  v15[0x3B] = EmptyString; /*0x7ea5db*/
  memset(&v15[0x3C], 0, 0x40); /*0x7ea5e2*/
  v15[0x4C] = "imagespace\\1x\\v\\base.v.hlsl"; /*0x7ea600*/
  memset(&v15[0x4D], 0, 0x48); /*0x7ea607*/
  FullPath = "imagespace\\1x\\p\\copy.p.hlsl"; /*0x7ea62e*/
  v14[0] = (int)"ALPHAMULT"; /*0x7ea632*/
  v14[1] = (int)EmptyString; /*0x7ea63a*/
  memset(&v14[2], 0, 0x40); /*0x7ea63e*/
  v14[0x12] = (int)"imagespace\\1x\\p\\copy.p.hlsl"; /*0x7ea656*/
  memset(&v14[0x13], 0, 0x48); /*0x7ea65a*/
  v14[0x25] = (int)"imagespace\\2x\\p\\blur_20.p.hlsl"; /*0x7ea66e*/
  memset(&v14[0x26], 0, 0x48); /*0x7ea679*/
  v14[0x38] = (int)"imagespace\\2x\\p\\blend_P20.p.hlsl"; /*0x7ea6a9*/
  memset(&v14[0x39], 0, 0x48); /*0x7ea6b4*/
  v14[0x4B] = (int)"imagespace\\1x\\p\\copy.p.hlsl"; /*0x7ea6d9*/
  v14[0x4C] = (int)"BLURDEBUG"; /*0x7ea6e0*/
  v14[0x4D] = (int)EmptyString; /*0x7ea6eb*/
  memset(&v14[0x4E], 0, 0x40); /*0x7ea6f2*/
  v1 = this + 0xA8; /*0x7ea708*/
  result = 0; /*0x7ea70e*/
  v11 = 0; /*0x7ea710*/
  for ( i = 0; i < 0x5F; i += 0x13 ) /*0x7ea714*/
  {
    v3 = (char *)v15 + result; /*0x7ea720*/
    if ( *(_DWORD *)((char *)v15 + result) ) /*0x7ea727*/
    {
      sub_801030(*(char **)v3, (int)FileName); /*0x7ea73a*/
      _sprintf(v16, "ISBLUR2%03i.vso", v11); /*0x7ea751*/
      VertexShader = CreateVertexShader(FileName, (_DWORD *)v3 + 1, "vs_1_1", v16, 0, 0); /*0x7ea778*/
      v5 = *((volatile LONG **)v1 + 0xFFFFFFFB); /*0x7ea77d*/
      v6 = VertexShader; /*0x7ea780*/
      if ( v5 != (volatile LONG *)VertexShader ) /*0x7ea784*/
      {
        if ( v5 ) /*0x7ea788*/
        {
          if ( !InterlockedDecrement(v5 + 1) ) /*0x7ea78e*/
            (**(void (__thiscall ***)(volatile LONG *, int))v5)(v5, 1); /*0x7ea7a4*/
        }
        *((_DWORD *)v1 + 0xFFFFFFFB) = v6; /*0x7ea7a8*/
        if ( v6 ) /*0x7ea7ab*/
          InterlockedIncrement((volatile LONG *)v6 + 1); /*0x7ea7b1*/
      }
    }
    v7 = (char *)v14[i - 1]; /*0x7ea7bb*/
    if ( v7 ) /*0x7ea7c1*/
    {
      sub_801030(v7, (int)FileName); /*0x7ea7d0*/
      _sprintf(v16, "ISBLUR2%03i.pso", v11); /*0x7ea7e7*/
      PixelShader = CreatePixelShader(FileName, &v14[i], "ps_2_0", v16, 0, 0); /*0x7ea80f*/
      v9 = *(_DWORD *)v1; /*0x7ea814*/
      v10 = PixelShader; /*0x7ea817*/
      if ( *(NiD3DShaderProgram **)v1 != PixelShader ) /*0x7ea81b*/
      {
        if ( v9 ) /*0x7ea81f*/
        {
          if ( !InterlockedDecrement((volatile LONG *)(v9 + 4)) ) /*0x7ea825*/
            (**(void (__thiscall ***)(int, int))v9)(v9, 1); /*0x7ea83b*/
        }
        *(_DWORD *)v1 = v10; /*0x7ea83f*/
        if ( v10 ) /*0x7ea842*/
          InterlockedIncrement((volatile LONG *)v10 + 1); /*0x7ea848*/
      }
    }
    ++v11; /*0x7ea852*/
    result = i * 4 + 0x4C; /*0x7ea857*/
    v1 += 4; /*0x7ea85a*/
  }
  return result; /*0x7ea86c*/
}
