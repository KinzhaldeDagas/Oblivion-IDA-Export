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

  result = dword_B468F8;
  if ( !dword_B468F8 )
  {
    v1 = dword_B468FC;
    if ( !dword_B468FC )
    {
      v1 = ShaderPackage < 2 ? 0x4B : 0xEB;
      dword_B468FC = v1;
    }
    v2 = dword_B2DC90 * v1;
    result = FormHeapAlloc((unsigned __int64)(4 * v2) >> 0x1E != 0 ? 0xFFFFFFFF : 0x10 * v2);
    v3 = 0;
    dword_B468F8 = result;
    if ( v2 )
    {
      v4 = result + 8;
      do
      {
        v5 = (double)v3;
        if ( v3 < 0 )
          v5 = v5 + flt_A2FC78;
        v7 = v5;
        ++v3;
        v4 += 0x10;
        v9 = (float)dword_B2DC90;
        v6 = v9;
        v10 = v7 / v9;
        v8 = (v7 + 1.0) / v6;
        *(float *)(v4 - 0x18) = v10;
        *(float *)(v4 - 0x14) = v10;
        *(float *)(v4 - 0x10) = v8;
        *(float *)(v4 - 0xC) = v8;
      }
      while ( v3 < v2 );
      return dword_B468F8;
    }
  }
  return result;
}
