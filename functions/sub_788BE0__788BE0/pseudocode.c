// Transforms stock compact collision objects through the optional Compute transform.
int __thiscall CSpeedTreeRT__SCollisionObjects_TransformAll(unsigned int *this, float *transform4x4)
{
  int v2; // ebx
  unsigned int v4; // esi
  int result; // eax
  unsigned int v6; // ebp
  float v7; // [esp+10h] [ebp-18h]
  float v8; // [esp+14h] [ebp-14h]
  float v9; // [esp+18h] [ebp-10h]
  float v10; // [esp+1Ch] [ebp-Ch]
  float v11; // [esp+20h] [ebp-8h]
  float v12; // [esp+24h] [ebp-4h]

  v4 = *(this + 1); /*0x788be9*/
  if ( v4 > *(this + 2) ) /*0x788bef*/
    result = _invalid_parameter_noinfo(v2, (int)this, v4); /*0x788bf1*/
  while ( 1 ) /*0x788c00*/
  {
    v6 = *(this + 2); /*0x788c00*/
    if ( *(this + 1) > v6 ) /*0x788c06*/
      result = _invalid_parameter_noinfo((int)transform4x4, (int)this, v4); /*0x788c08*/
    if ( v4 == v6 ) /*0x788c0f*/
      break; /*0x788c0f*/
    if ( v4 >= *(this + 2) ) /*0x788c18*/
    {
      result = _invalid_parameter_noinfo((int)transform4x4, (int)this, v4); /*0x788c1a*/
      if ( v4 >= *(this + 2) ) /*0x788c22*/
      {
        result = _invalid_parameter_noinfo((int)transform4x4, (int)this, v4); /*0x788c24*/
        if ( v4 >= *(this + 2) ) /*0x788c2c*/
          result = _invalid_parameter_noinfo((int)transform4x4, (int)this, v4); /*0x788c2e*/
      }
    }
    v7 = *(float *)(v4 + 4); /*0x788c39*/
    v8 = *(float *)(v4 + 8); /*0x788c40*/
    v9 = *(float *)(v4 + 0xC); /*0x788c47*/
    v10 = transform4x4[8] * v9 + *transform4x4 * v7 + transform4x4[4] * v8 + transform4x4[0xC]; /*0x788c76*/
    v11 = transform4x4[1] * v7 + transform4x4[5] * v8 + transform4x4[9] * v9 + transform4x4[0xD]; /*0x788c90*/
    v12 = v7 * transform4x4[2] + v8 * transform4x4[6] + v9 * transform4x4[0xA] + transform4x4[0xE]; /*0x788caa*/
    if ( v4 >= *(this + 2) ) /*0x788cae*/
      result = _invalid_parameter_noinfo((int)transform4x4, (int)this, v4); /*0x788cb0*/
    *(float *)(v4 + 4) = v10; /*0x788cb9*/
    if ( v4 >= *(this + 2) ) /*0x788cbf*/
      result = _invalid_parameter_noinfo((int)transform4x4, (int)this, v4); /*0x788cc1*/
    *(float *)(v4 + 8) = v11; /*0x788cca*/
    if ( v4 >= *(this + 2) ) /*0x788cd0*/
      result = _invalid_parameter_noinfo((int)transform4x4, (int)this, v4); /*0x788cd2*/
    *(float *)(v4 + 0xC) = v12; /*0x788cdb*/
    if ( v4 >= *(this + 2) ) /*0x788ce1*/
      result = _invalid_parameter_noinfo((int)transform4x4, (int)this, v4); /*0x788ce3*/
    if ( *(_DWORD *)v4 ) /*0x788ce8*/
    {
      if ( v4 >= *(this + 2) ) /*0x788d04*/
        result = _invalid_parameter_noinfo((int)transform4x4, (int)this, v4); /*0x788d06*/
      if ( *(_DWORD *)v4 == 1 ) /*0x788d0e*/
      {
        if ( v4 >= *(this + 2) ) /*0x788d13*/
          result = _invalid_parameter_noinfo((int)transform4x4, (int)this, v4); /*0x788d15*/
        *(float *)(v4 + 0x10) = *(float *)(v4 + 0x10) * *transform4x4; /*0x788d1f*/
        if ( v4 >= *(this + 2) ) /*0x788d25*/
          result = _invalid_parameter_noinfo((int)transform4x4, (int)this, v4); /*0x788d27*/
        *(float *)(v4 + 0x14) = *(float *)(v4 + 0x14) * *transform4x4; /*0x788d31*/
      }
      else
      {
        if ( v4 >= *(this + 2) ) /*0x788d39*/
          result = _invalid_parameter_noinfo((int)transform4x4, (int)this, v4); /*0x788d3b*/
        if ( *(_DWORD *)v4 == 2 ) /*0x788d43*/
        {
          if ( v4 >= *(this + 2) ) /*0x788d48*/
            result = _invalid_parameter_noinfo((int)transform4x4, (int)this, v4); /*0x788d4a*/
          *(float *)(v4 + 0x10) = *(float *)(v4 + 0x10) * *transform4x4; /*0x788d54*/
          if ( v4 >= *(this + 2) ) /*0x788d5a*/
            result = _invalid_parameter_noinfo((int)transform4x4, (int)this, v4); /*0x788d5c*/
          *(float *)(v4 + 0x14) = *(float *)(v4 + 0x14) * transform4x4[5]; /*0x788d67*/
          if ( v4 >= *(this + 2) ) /*0x788d6d*/
            result = _invalid_parameter_noinfo((int)transform4x4, (int)this, v4); /*0x788d6f*/
          *(float *)(v4 + 0x18) = transform4x4[0xA] * *(float *)(v4 + 0x18); /*0x788d7a*/
        }
      }
    }
    else
    {
      if ( v4 >= *(this + 2) ) /*0x788cf0*/
        result = _invalid_parameter_noinfo((int)transform4x4, (int)this, v4); /*0x788cf2*/
      *(float *)(v4 + 0x10) = *(float *)(v4 + 0x10) * *transform4x4; /*0x788cfc*/
    }
    if ( v4 >= *(this + 2) ) /*0x788d80*/
      result = _invalid_parameter_noinfo((int)transform4x4, (int)this, v4); /*0x788d82*/
    v4 += 0x1C; /*0x788d87*/
  }
  return result; /*0x788d8f*/
}
