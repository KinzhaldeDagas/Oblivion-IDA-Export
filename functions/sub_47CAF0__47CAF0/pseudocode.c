int __fastcall sub_47CAF0(int a1, float a2)
{
  int result; // eax
  int v4; // ecx
  double v5; // st7
  int v6; // ebx
  int v7; // esi
  NiRTTI *v8; // eax
  char v9; // al
  double v10; // st7
  float v11; // [esp+4h] [ebp-54h]
  float v12; // [esp+8h] [ebp-50h]
  float v13; // [esp+18h] [ebp-40h]
  float v14; // [esp+18h] [ebp-40h]
  float v15; // [esp+18h] [ebp-40h]
  float v16[6]; // [esp+1Ch] [ebp-3Ch]
  float v17[9]; // [esp+34h] [ebp-24h] BYREF

  result = a1; /*0x47caf9*/
  v16[0] = flt_A3744C; /*0x47cafb*/
  v4 = 2; /*0x47caff*/
  v16[1] = flt_A3D0C8; /*0x47cb0a*/
  v16[2] = 1.0; /*0x47cb10*/
  while ( 1 )
  {
    LODWORD(v16[v4 + 3]) = result; /*0x47cb14*/
    result = *(_DWORD *)(result + 0x1C); /*0x47cb18*/
    if ( !result ) /*0x47cb1d*/
      return result; /*0x47cbc2*/
    if ( --v4 < 0 )
    {
      v5 = 0.0; /*0x47cb28*/
      v13 = 0.0; /*0x47cb2c*/
      v6 = 0; /*0x47cb31*/
      while ( 1 )
      {
        v12 = v5; /*0x47cb3a*/
        v11 = v5; /*0x47cb42*/
        v14 = v16[v6] - v13; /*0x47cb4e*/
        v15 = v14 * a2; /*0x47cb5a*/
        sub_7116A0(v17, v15, v11, v12); /*0x47cb65*/
        result = LODWORD(v16[v6 + 3]); /*0x47cb6a*/
        v7 = *(_DWORD *)(result + 0xA8); /*0x47cb6e*/
        if ( v7 )
        {
          v8 = (NiRTTI *)(*(int (__thiscall **)(int))(*(_DWORD *)v7 + 4))(v7); /*0x47cb7f*/
          if ( v8 ) /*0x47cb83*/
          {
            while ( v8 != &stru_BA7A14 ) /*0x47cb8a*/
            {
              v8 = v8->parent; /*0x47cb8c*/
              if ( !v8 ) /*0x47cb91*/
                goto LABEL_10; /*0x47cb91*/
            }
            v9 = 1; /*0x47cbc8*/
          }
          else
          {
LABEL_10:
            v9 = 0; /*0x47cb93*/
          }
          result = v9 != 0 ? v7 : 0;
          if ( result ) /*0x47cb9b*/
            qmemcpy((void *)(result + 0x28), v17, 0x24u); /*0x47cba9*/
        }
        v10 = v16[v6++]; /*0x47cbab*/
        v13 = v10; /*0x47cbb5*/
        if ( v6 >= 3 ) /*0x47cbb9*/
          return result; /*0x47cbb9*/
        v5 = 0.0; /*0x47cb35*/
      }
    }
  }
}
