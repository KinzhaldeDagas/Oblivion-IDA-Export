bool __thiscall sub_739240(NiTriBasedGeomData *this, int a2)
{
  NiTriBasedGeomData *v2; // esi
  bool result; // al
  unsigned __int16 x_low; // bp
  unsigned __int16 v5; // di
  int v6; // edx
  float y; // esi
  int v8; // ecx
  float z; // esi
  int v10; // ecx
  unsigned __int16 v11; // dx
  int v12; // edi
  int v13; // ecx
  float Radius; // edx
  unsigned __int16 v15; // di
  int v16; // esi
  int v17; // ecx
  unsigned __int16 v18; // ax

  v2 = this;
  result = sub_700670(this, a2);
  if ( result )
  {
    x_low = LOWORD(v2->members.super.m_kBound.Center.x);
    if ( x_low != *(_WORD *)(a2 + 0xC) )
      return 0;
    v5 = 0;
    if ( x_low )
    {
      v6 = *(_DWORD *)(a2 + 0x10);
      y = v2->members.super.m_kBound.Center.y;
      while ( 1 )
      {
        v8 = 0xC * v5;
        if ( *(float *)(v6 + v8) != *(float *)(LODWORD(y) + v8)
          || *(float *)(v6 + v8 + 4) != *(float *)(LODWORD(y) + v8 + 4)
          || *(float *)(v6 + v8 + 8) != *(float *)(LODWORD(y) + v8 + 8) )
        {
          return 0;
        }
        if ( ++v5 >= x_low )
        {
          v2 = this;
          break;
        }
      }
    }
    z = v2->members.super.m_kBound.Center.z;
    v10 = a2;
    if ( z == 0.0 )
    {
      if ( *(_DWORD *)(a2 + 0x14) )
        return 0;
    }
    else
    {
      if ( !*(_DWORD *)(a2 + 0x14) )
        return 0;
      v11 = 0;
      if ( x_low )
      {
        v12 = *(_DWORD *)(a2 + 0x14);
        while ( 1 )
        {
          v13 = 8 * v11;
          if ( *(float *)(v12 + v13) != *(float *)(v13 + LODWORD(z))
            || *(float *)(v12 + v13 + 4) != *(float *)(v13 + LODWORD(z) + 4) )
          {
            return 0;
          }
          if ( ++v11 >= x_low )
          {
            v10 = a2;
            break;
          }
        }
      }
    }
    Radius = this->members.super.m_kBound.Radius;
    if ( Radius == 0.0 )
    {
      if ( !*(_DWORD *)(v10 + 0x18) )
      {
LABEL_35:
        v18 = 0;
        while ( *(_DWORD *)(*(_DWORD *)&this->members.super.m_usVertices + 4 * v18 + 8) == *(_DWORD *)(*(_DWORD *)(v10 + 8) + 4 * v18 + 8) )
        {
          if ( ++v18 >= 0xAu )
            return 1;
        }
      }
    }
    else if ( *(_DWORD *)(v10 + 0x18) )
    {
      v15 = 0;
      if ( x_low )
      {
        v16 = *(_DWORD *)(v10 + 0x18);
        while ( 1 )
        {
          v17 = 0x10 * v15;
          if ( *(float *)(v16 + v17) != *(float *)(v17 + LODWORD(Radius))
            || *(float *)(v16 + v17 + 4) != *(float *)(v17 + LODWORD(Radius) + 4)
            || *(float *)(v16 + v17 + 8) != *(float *)(v17 + LODWORD(Radius) + 8)
            || *(float *)(v16 + v17 + 0xC) != *(float *)(v17 + LODWORD(Radius) + 0xC) )
          {
            return 0;
          }
          if ( ++v15 >= x_low )
          {
            v10 = a2;
            goto LABEL_35;
          }
        }
      }
      goto LABEL_35;
    }
    return 0;
  }
  return result;
}
