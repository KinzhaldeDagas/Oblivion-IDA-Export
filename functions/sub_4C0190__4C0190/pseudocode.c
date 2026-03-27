int __thiscall sub_4C0190(_DWORD *this, float a2, unsigned __int16 a3)
{
  unsigned __int8 v3; // bl
  int result; // eax
  unsigned __int16 v5; // bp
  unsigned int v6; // edx
  int v7; // eax
  bool v8; // zf
  _DWORD *v9; // eax
  double v10; // st7
  int v11; // ecx
  _DWORD *v12; // ecx
  int v13; // ecx
  float v14; // [esp+8h] [ebp-8h]
  float v15; // [esp+Ch] [ebp-4h]
  float v16; // [esp+14h] [ebp+4h]
  float v17; // [esp+14h] [ebp+4h]

  v3 = LOBYTE(a2);
  result = 0;
  if ( LOBYTE(a2) < 4u && a3 < 0x121u )
  {
    v16 = flt_A3B888;
    v5 = 0;
    v6 = 0;
    v14 = 0.0;
    do
    {
      v15 = 0.0;
      v7 = *(this + 9);
      if ( v7 )
      {
        v8 = *(_DWORD *)(v7 + 4 * v3 + 0x40) == 0;
        v9 = (_DWORD *)(v7 + 4 * v3 + 0x40);
        if ( !v8 )
          v15 = *(float *)(*(_DWORD *)(*v9 + 4 * a3) + 4 * (unsigned __int16)v6);
      }
      if ( v16 < (double)v15 )
      {
        v16 = v15;
        v5 = v6;
      }
      ++v6;
      v14 = v15 + v14;
    }
    while ( v6 < 8 );
    v10 = v16;
    v17 = 1.0 - v14;
    if ( v17 >= v10 )
    {
      v13 = *(this + 9);
      result = 0;
      if ( v13 )
        return *(_DWORD *)(v13 + 4 * v3 + 0x20);
    }
    else
    {
      result = 0;
      v11 = *(this + 9);
      if ( v11 )
      {
        v8 = *(_DWORD *)(v11 + 4 * v3 + 0x30) == 0;
        v12 = (_DWORD *)(v11 + 4 * v3 + 0x30);
        if ( !v8 )
          return *(_DWORD *)(*v12 + 4 * v5);
      }
    }
  }
  return result;
}
