int __fastcall sub_47CAF0(int a1, float a2)
{
  int result; // eax
  int v4; // ecx
  double v5; // st7
  int v6; // ebx
  int v7; // esi
  int v8; // eax
  char v9; // al
  double v10; // st7
  float v11; // [esp+4h] [ebp-54h]
  float v12; // [esp+8h] [ebp-50h]
  float v13; // [esp+18h] [ebp-40h]
  float v14; // [esp+18h] [ebp-40h]
  float v15; // [esp+18h] [ebp-40h]
  float v16[6]; // [esp+1Ch] [ebp-3Ch]
  float v17[9]; // [esp+34h] [ebp-24h] BYREF

  result = a1;
  v16[0] = flt_A3744C;
  v4 = 2;
  v16[1] = flt_A3D0C8;
  v16[2] = 1.0;
  while ( 1 )
  {
    LODWORD(v16[v4 + 3]) = result;
    result = *(_DWORD *)(result + 0x1C);
    if ( !result )
      return result;
    if ( --v4 < 0 )
    {
      v5 = 0.0;
      v13 = 0.0;
      v6 = 0;
      while ( 1 )
      {
        v12 = v5;
        v11 = v5;
        v14 = v16[v6] - v13;
        v15 = v14 * a2;
        sub_7116A0(v17, v15, v11, v12);
        result = LODWORD(v16[v6 + 3]);
        v7 = *(_DWORD *)(result + 0xA8);
        if ( v7 )
        {
          v8 = (*(int (__thiscall **)(int))(*(_DWORD *)v7 + 4))(v7);
          if ( v8 )
          {
            while ( (_UNKNOWN *)v8 != &unk_BA7A14 )
            {
              v8 = *(_DWORD *)(v8 + 4);
              if ( !v8 )
                goto LABEL_10;
            }
            v9 = 1;
          }
          else
          {
LABEL_10:
            v9 = 0;
          }
          result = v9 != 0 ? v7 : 0;
          if ( result )
            qmemcpy((void *)(result + 0x28), v17, 0x24u);
        }
        v10 = v16[v6++];
        v13 = v10;
        if ( v6 >= 3 )
          return result;
        v5 = 0.0;
      }
    }
  }
}
