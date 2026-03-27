int __thiscall sub_788BE0(unsigned int *this, float *a2)
{
  unsigned int v3; // esi
  int result; // eax
  unsigned int v5; // ebp
  float v6; // [esp+10h] [ebp-18h]
  float v7; // [esp+14h] [ebp-14h]
  float v8; // [esp+18h] [ebp-10h]
  float v9; // [esp+1Ch] [ebp-Ch]
  float v10; // [esp+20h] [ebp-8h]
  float v11; // [esp+24h] [ebp-4h]

  v3 = *(this + 1);
  if ( v3 > *(this + 2) )
    result = _invalid_parameter_noinfo();
  while ( 1 )
  {
    v5 = *(this + 2);
    if ( *(this + 1) > v5 )
      result = _invalid_parameter_noinfo();
    if ( v3 == v5 )
      break;
    if ( v3 >= *(this + 2) )
    {
      result = _invalid_parameter_noinfo();
      if ( v3 >= *(this + 2) )
      {
        result = _invalid_parameter_noinfo();
        if ( v3 >= *(this + 2) )
          result = _invalid_parameter_noinfo();
      }
    }
    v6 = *(float *)(v3 + 4);
    v7 = *(float *)(v3 + 8);
    v8 = *(float *)(v3 + 0xC);
    v9 = a2[8] * v8 + *a2 * v6 + a2[4] * v7 + a2[0xC];
    v10 = a2[1] * v6 + a2[5] * v7 + a2[9] * v8 + a2[0xD];
    v11 = v6 * a2[2] + v7 * a2[6] + v8 * a2[0xA] + a2[0xE];
    if ( v3 >= *(this + 2) )
      result = _invalid_parameter_noinfo();
    *(float *)(v3 + 4) = v9;
    if ( v3 >= *(this + 2) )
      result = _invalid_parameter_noinfo();
    *(float *)(v3 + 8) = v10;
    if ( v3 >= *(this + 2) )
      result = _invalid_parameter_noinfo();
    *(float *)(v3 + 0xC) = v11;
    if ( v3 >= *(this + 2) )
      result = _invalid_parameter_noinfo();
    if ( *(_DWORD *)v3 )
    {
      if ( v3 >= *(this + 2) )
        result = _invalid_parameter_noinfo();
      if ( *(_DWORD *)v3 == 1 )
      {
        if ( v3 >= *(this + 2) )
          result = _invalid_parameter_noinfo();
        *(float *)(v3 + 0x10) = *(float *)(v3 + 0x10) * *a2;
        if ( v3 >= *(this + 2) )
          result = _invalid_parameter_noinfo();
        *(float *)(v3 + 0x14) = *(float *)(v3 + 0x14) * *a2;
      }
      else
      {
        if ( v3 >= *(this + 2) )
          result = _invalid_parameter_noinfo();
        if ( *(_DWORD *)v3 == 2 )
        {
          if ( v3 >= *(this + 2) )
            result = _invalid_parameter_noinfo();
          *(float *)(v3 + 0x10) = *(float *)(v3 + 0x10) * *a2;
          if ( v3 >= *(this + 2) )
            result = _invalid_parameter_noinfo();
          *(float *)(v3 + 0x14) = *(float *)(v3 + 0x14) * a2[5];
          if ( v3 >= *(this + 2) )
            result = _invalid_parameter_noinfo();
          *(float *)(v3 + 0x18) = a2[0xA] * *(float *)(v3 + 0x18);
        }
      }
    }
    else
    {
      if ( v3 >= *(this + 2) )
        result = _invalid_parameter_noinfo();
      *(float *)(v3 + 0x10) = *(float *)(v3 + 0x10) * *a2;
    }
    if ( v3 >= *(this + 2) )
      result = _invalid_parameter_noinfo();
    v3 += 0x1C;
  }
  return result;
}
