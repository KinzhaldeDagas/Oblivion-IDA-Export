void __thiscall sub_4A61E0(_DWORD *this, float a2, int a3, float a4)
{
  double v4; // st6
  double v6; // st5
  double v7; // rt0
  double v8; // st5
  double v9; // st6
  double v10; // st6
  _DWORD *v11; // esi
  int v12; // eax
  float v13; // [esp+8h] [ebp+4h]
  float v14; // [esp+10h] [ebp+Ch]

  v4 = a2;
  v6 = fCostant_100;
  if ( a2 > 1.0 )
    v4 = v4 / v6;
  v7 = v6;
  v8 = v4;
  v9 = v7;
  v13 = v8;
  if ( a4 <= 1.0 )
    v10 = a4;
  else
    v10 = a4 / v9;
  v14 = v10;
  if ( a3 )
  {
    if ( v13 >= 0.0 && v13 <= 1.0 && v14 >= 0.0 && v14 <= 1.0 )
    {
      v11 = (_DWORD *)(a3 + 4);
      if ( a3 != 0xFFFFFFFC )
      {
        do
        {
          if ( !*v11 )
            break;
          if ( (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*v11 + 4))(*v11) )
          {
            v12 = (*(int (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)*v11 + 0x14))(*v11, 0);
            sub_4A60E0(this, v12);
          }
          v11 = (_DWORD *)v11[1];
        }
        while ( v11 );
      }
    }
  }
}
