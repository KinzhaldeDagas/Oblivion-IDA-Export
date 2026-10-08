void __stdcall sub_74DEB0(float a1, int a2)
{
  int v3; // edx
  unsigned __int16 v4; // di
  double v5; // st6
  int v6; // ebx
  int v7; // ecx
  double v8; // st4
  bool v9; // c0
  double v10; // st4
  int v11; // [esp+4h] [ebp-4h]
  float v12; // [esp+10h] [ebp+8h]
  float v13; // [esp+10h] [ebp+8h]

  v3 = *(_DWORD *)(a2 + 0x54); /*0x74deb6*/
  if ( v3 ) /*0x74debb*/
  {
    v4 = 0; /*0x74dec5*/
    v11 = *(_DWORD *)(a2 + 0x60); /*0x74decb*/
    if ( *(_WORD *)(a2 + 0x48) ) /*0x74dec7*/
    {
      v5 = dbl_A3F3E8; /*0x74deda*/
      v6 = unk_B40A78; /*0x74dee0*/
      do /*0x74df82*/
      {
        v7 = 4 * v4; /*0x74deee*/
        v12 = a1 - *(float *)(*(_DWORD *)(a2 + 0x5C) + 0x1C * v4 + 0x14); /*0x74df0c*/
        v13 = v12 * *(float *)(v7 + v11) + *(float *)(v7 + v3); /*0x74df1a*/
        v8 = v13; /*0x74df1e*/
        *(float *)(v7 + v3) = v13; /*0x74df22*/
        if ( (v6 & 1) == 0 ) /*0x74df25*/
        {
          v6 |= 1u; /*0x74df2d*/
          unk_B40A74 = unk_B3F9A4 * v5; /*0x74df32*/
        }
        if ( unk_B40A74 >= v8 ) /*0x74df45*/
        {
          v9 = unk_B3F9A0 < v8; /*0x74df54*/
          v10 = unk_B3F9A0; /*0x74df58*/
          if ( v9 ) /*0x74df5d*/
          {
            do /*0x74df77*/
            {
              *(float *)(v7 + v3) = *(float *)(v7 + v3) - v10; /*0x74df62*/
              v10 = unk_B3F9A0; /*0x74df72*/
            }
            while ( v10 < *(float *)(v7 + v3) ); /*0x74df77*/
          }
        }
        else
        {
          *(float *)(v7 + v3) = 0.0; /*0x74df49*/
        }
        ++v4; /*0x74df7b*/
      }
      while ( v4 < *(_WORD *)(a2 + 0x48) ); /*0x74df82*/
      unk_B40A78 = v6; /*0x74df8d*/
    }
  }
}
