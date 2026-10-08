// Reads four control-basis banks (2x2 traversal), each with an entry count. Each 0x34-byte entry contains a 1 x basisDimensions[bank] float matrix followed by a length-prefixed string. Reads coefficient floats, string length, then string bytes; any failed read returns false. Do not assume these banks are texture-only.
bool __thiscall FaceGen_ReadNamedControlBasisBanks(
        void *this,
        BSFaceGenBinaryFile *file,
        const unsigned int *basisDimensions)
{
  int v3; // edi
  int v4; // esi
  unsigned int v5; // ebp
  int v6; // eax
  unsigned int v7; // ecx
  int v8; // edi
  int v9; // eax
  int v10; // eax
  int v11; // ecx
  int v12; // eax
  int v13; // edi
  int v14; // edi
  int v15; // eax
  int v16; // eax
  int v17; // edi
  unsigned int v18; // edx
  _DWORD *v19; // ecx
  int v20; // eax
  int v21; // ecx
  int v22; // eax
  int v24; // [esp-Ch] [ebp-5Ch]
  int v25; // [esp+4h] [ebp-4Ch]
  unsigned int v26; // [esp+8h] [ebp-48h]
  int v27; // [esp+Ch] [ebp-44h]
  int v28; // [esp+10h] [ebp-40h]
  int v29; // [esp+14h] [ebp-3Ch]
  unsigned int v30; // [esp+18h] [ebp-38h]
  int v31; // [esp+1Ch] [ebp-34h]
  int v32; // [esp+30h] [ebp-20h]
  unsigned int v33; // [esp+34h] [ebp-1Ch] BYREF
  unsigned int i; // [esp+38h] [ebp-18h]
  unsigned int v35; // [esp+3Ch] [ebp-14h]
  int v36; // [esp+40h] [ebp-10h]
  unsigned int v37; // [esp+44h] [ebp-Ch] BYREF
  void *v38; // [esp+48h] [ebp-8h]

  v38 = this; /*0x6ef029*/
  v35 = 0; /*0x6ef02d*/
  while ( 2 )
  {
    for ( i = 0; i < 2; ++i )
    {
      if ( !(*(unsigned __int8 (__thiscall **)(BSFaceGenBinaryFile *, unsigned int *, int, int))(*(_DWORD *)file + 0x10))( /*0x6ef04b*/
              file,
              &v33,
              4,
              1) )
        return 0; /*0x6ef04b*/
      v32 = v33; /*0x6ef063*/
      v3 = v35 + i; /*0x6ef0bb*/
      LOBYTE(v26) = 0; /*0x6ef0d5*/
      v4 = (int)v38 + 0x10 * v35 + 0x10 * i; /*0x6ef0d9*/
      v36 = v35 + i; /*0x6ef0df*/
      sub_6EEEE0((char **)v4, v33, 0, 0, v24, 0, 0, 0, v25, v26, v27, v28, v29, 0, 0xFu); /*0x6ef0e3*/
      v5 = 0; /*0x6ef0e8*/
      if ( v33 )
      {
        v32 = 0; /*0x6ef0f4*/
        while ( 1 )
        {
          v6 = *(_DWORD *)(v4 + 4); /*0x6ef104*/
          if ( !v6 || v5 >= (*(_DWORD *)(v4 + 8) - v6) / 0x34 ) /*0x6ef123*/
            _invalid_parameter_noinfo(0, v3, v4); /*0x6ef125*/
          v7 = basisDimensions[v3]; /*0x6ef130*/
          v8 = v32; /*0x6ef136*/
          v9 = v32 + *(_DWORD *)(v4 + 4); /*0x6ef13b*/
          *(float *)&v31 = 0.0; /*0x6ef13d*/
          *(_DWORD *)(v9 + 4) = v7; /*0x6ef140*/
          v30 = v7; /*0x6ef143*/
          *(_DWORD *)v9 = 1; /*0x6ef147*/
          FaceGenFloatVector_ResizeFill((OB_stVector4_010201A0 *)(v9 + 8), v8, v30, v31); /*0x6ef14d*/
          v10 = *(_DWORD *)(v4 + 4); /*0x6ef152*/
          if ( !v10 || v5 >= (*(_DWORD *)(v4 + 8) - v10) / 0x34 ) /*0x6ef171*/
            _invalid_parameter_noinfo((int)basisDimensions, v8, v4); /*0x6ef173*/
          v11 = *(_DWORD *)(v4 + 4); /*0x6ef178*/
          v12 = *(_DWORD *)(v8 + v11 + 0xC); /*0x6ef17b*/
          v13 = v8 + v11 + 8; /*0x6ef181*/
          if ( !v12 || !((*(_DWORD *)(v13 + 8) - v12) >> 2) ) /*0x6ef18c*/
            _invalid_parameter_noinfo((int)basisDimensions, v13, v4); /*0x6ef191*/
          v14 = *(_DWORD *)(v13 + 4); /*0x6ef1a1*/
          if ( !(*(unsigned __int8 (__thiscall **)(BSFaceGenBinaryFile *, int, int, const unsigned int))(*(_DWORD *)file + 0x10))( /*0x6ef1ad*/
                  file,
                  v14,
                  4,
                  basisDimensions[v36]) )
            return 0; /*0x6ef2c4*/
          if ( !(*(unsigned __int8 (__thiscall **)(BSFaceGenBinaryFile *, unsigned int *, int, int))(*(_DWORD *)file + 0x10))( /*0x6ef1cb*/
                  file,
                  &v37,
                  4,
                  1) )
            return 0; /*0x6ef2c4*/
          v15 = *(_DWORD *)(v4 + 4); /*0x6ef1d5*/
          if ( !v15 || v5 >= (*(_DWORD *)(v4 + 8) - v15) / 0x34 ) /*0x6ef1f4*/
            _invalid_parameter_noinfo((int)file, v14, v4); /*0x6ef1f6*/
          v16 = *(_DWORD *)(v4 + 4); /*0x6ef1fb*/
          v17 = v32; /*0x6ef1fe*/
          v18 = *(_DWORD *)(v32 + v16 + 0x2C); /*0x6ef202*/
          v19 = (_DWORD *)(v32 + v16 + 0x18); /*0x6ef206*/
          if ( v37 > v18 ) /*0x6ef210*/
            sub_6EDAA0(v19, v32, v37 - v18, 0); /*0x6ef221*/
          else
            sub_4134E0(v19, v5, v37, 0xFFFFFFFF); /*0x6ef215*/
          v20 = *(_DWORD *)(v4 + 4); /*0x6ef226*/
          if ( !v20 || v5 >= (*(_DWORD *)(v4 + 8) - v20) / 0x34 ) /*0x6ef245*/
            _invalid_parameter_noinfo((int)file, v17, v4); /*0x6ef247*/
          v21 = *(_DWORD *)(v4 + 4); /*0x6ef24c*/
          v22 = *(_DWORD *)(v17 + v21 + 0x30) < 0x10u ? v17 + v21 + 0x1C : *(_DWORD *)(v17 + v21 + 0x1C);
          if ( !(*(unsigned __int8 (__thiscall **)(BSFaceGenBinaryFile *, int, int, unsigned int))(*(_DWORD *)file + 0x10))( /*0x6ef271*/
                  file,
                  v22,
                  1,
                  v37) )
            return 0; /*0x6ef2c4*/
          ++v5; /*0x6ef277*/
          v32 = v17 + 0x34; /*0x6ef283*/
          if ( v5 >= v33 ) /*0x6ef287*/
            break; /*0x6ef287*/
          v3 = v36; /*0x6ef100*/
        }
      }
    }
    v35 += 2; /*0x6ef2ab*/
    if ( v35 < 4 ) /*0x6ef2af*/
      continue; /*0x6ef2af*/
    break;
  }
  return 1; /*0x6ef2b7*/
}
