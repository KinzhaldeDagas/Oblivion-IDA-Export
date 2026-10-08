int sub_7F3790()
{
  int result; // eax
  int v1; // esi
  unsigned int v2; // esi
  int v3; // ecx
  int v4; // eax
  double v5; // st6
  double v6; // st5
  float v7; // [esp+0h] [ebp-8h]
  float v8; // [esp+0h] [ebp-8h]
  float v9; // [esp+4h] [ebp-4h]
  float v10; // [esp+4h] [ebp-4h]

  result = unk_B468F8; /*0x7f3790*/
  if ( !unk_B468F8 )
  {
    v1 = unk_B468FC; /*0x7f37a1*/
    if ( !unk_B468FC )
    {
      v1 = *(_DWORD *)OB_RendererGlobalState_010201A0.shaderPackageVersion_le < 2 ? 0x4B : 0xEB;
      unk_B468FC = v1; /*0x7f37c2*/
    }
    v2 = dword_B2DC90 * v1; /*0x7f37c8*/
    result = FormHeapAlloc((unsigned __int64)(4 * v2) >> 0x1E != 0 ? 0xFFFFFFFF : 0x10 * v2);
    v3 = 0; /*0x7f37ef*/
    unk_B468F8 = result; /*0x7f37f3*/
    if ( v2 ) /*0x7f37f8*/
    {
      v4 = result + 8; /*0x7f37fc*/
      do /*0x7f385b*/
      {
        v5 = (double)v3; /*0x7f3807*/
        if ( v3 < 0 ) /*0x7f380b*/
          v5 = v5 + flt_A2FC78; /*0x7f380d*/
        v7 = v5; /*0x7f3813*/
        ++v3; /*0x7f3817*/
        v4 += 0x10; /*0x7f3820*/
        v9 = (float)dword_B2DC90; /*0x7f3825*/
        v6 = v9; /*0x7f3837*/
        v10 = v7 / v9; /*0x7f3839*/
        v8 = (v7 + 1.0) / v6; /*0x7f3843*/
        *(float *)(v4 - 0x18) = v10; /*0x7f384b*/
        *(float *)(v4 - 0x14) = v10; /*0x7f384e*/
        *(float *)(v4 - 0x10) = v8; /*0x7f3855*/
        *(float *)(v4 - 0xC) = v8; /*0x7f3858*/
      }
      while ( v3 < v2 ); /*0x7f385b*/
      return unk_B468F8; /*0x7f385d*/
    }
  }
  return result; /*0x7f3865*/
}
