bool __thiscall sub_613440(void **this, float a2, float a3, int a4)
{
  int *v5; // eax
  double v6; // st7
  double v7; // st6
  double v8; // st5
  int v9; // esi
  float v11; // [esp+10h] [ebp+8h]

  v5 = sub_5E0F50(*(this + 0xF));
  v6 = a3;
  if ( (*(char (__thiscall **)(int *))(*v5 + 0x11C))(v5) < 0x64 && *(this + 0x1C) )
  {
    v7 = dbl_A3C770 * v6;
    v8 = dbl_A46970;
    if ( v8 <= v7 )
      v7 = v8;
  }
  else
  {
    v7 = 0.0;
  }
  v9 = (int)*(this + 0x1C);
  v11 = v7;
  if ( v9 == 2 || v9 == 4 )
    v11 = 0.0;
  return a2 <= v6 + v11;
}
