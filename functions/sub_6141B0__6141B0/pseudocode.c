double __thiscall sub_6141B0(float *this)
{
  _DWORD *v2; // edi
  int v3; // ecx
  _DWORD *v4; // eax
  int v5; // ecx
  int v6; // eax
  int v7; // esi
  int v8; // ebp
  unsigned int v9; // eax
  float v11; // [esp+8h] [ebp-8h]
  float v12; // [esp+Ch] [ebp-4h]

  v2 = this + 0x57;
  if ( this == (float *)0xFFFFFEA4 )
    return 0.0;
  if ( !*((_DWORD *)this + 0x58) && !*v2 )
    return 0.0;
  v3 = 0;
  v4 = v2;
  do
  {
    if ( *v4 )
      ++v3;
    v4 = (_DWORD *)v4[1];
  }
  while ( v4 );
  v12 = dbl_A56CA0 / (double)v3;
  if ( *(this + 0x33) >= 0.0 )
    return 0.0;
  v11 = 0.0;
  do
  {
    v5 = *v2;
    if ( !*v2 )
      break;
    v2 = (_DWORD *)v2[1];
    v6 = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 0x330))(v5);
    v7 = v6;
    if ( v6 )
    {
      v8 = sub_6135F0(v6);
      if ( v8 == sub_6135F0((int)this) )
      {
        v9 = *(_DWORD *)(v7 + 0x70);
        if ( v9 < 2 || v9 == 3 )
        {
          v11 = v11 + v12;
          *(float *)(v7 + 0xCC) = v11 * dbl_A31C78;
        }
      }
    }
  }
  while ( v2 );
  return 0.0;
}
