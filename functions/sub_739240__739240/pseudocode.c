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

  v2 = this; /*0x739247*/
  result = sub_700670(this, a2); /*0x73924e*/
  if ( result ) /*0x739255*/
  {
    x_low = LOWORD(v2->members.super.m_kBound.Center.x); /*0x73925e*/
    if ( x_low != *(_WORD *)(a2 + 0xC) ) /*0x739266*/
      return 0; /*0x73926e*/
    v5 = 0; /*0x739275*/
    if ( x_low ) /*0x73927a*/
    {
      v6 = *(_DWORD *)(a2 + 0x10); /*0x739280*/
      y = v2->members.super.m_kBound.Center.y; /*0x739283*/
      while ( 1 ) /*0x73928e*/
      {
        v8 = 0xC * v5; /*0x73928e*/
        if ( *(float *)(v6 + v8) != *(float *)(LODWORD(y) + v8) /*0x7392c7*/
          || *(float *)(v6 + v8 + 4) != *(float *)(LODWORD(y) + v8 + 4)
          || *(float *)(v6 + v8 + 8) != *(float *)(LODWORD(y) + v8 + 8) )
        {
          return 0; /*0x7392c7*/
        }
        if ( ++v5 >= x_low ) /*0x7392d3*/
        {
          v2 = this; /*0x7392d5*/
          break; /*0x7392d5*/
        }
      }
    }
    z = v2->members.super.m_kBound.Center.z; /*0x7392d9*/
    v10 = a2; /*0x7392de*/
    if ( z == 0.0 ) /*0x7392e2*/
    {
      if ( *(_DWORD *)(a2 + 0x14) ) /*0x7392f2*/
        return 0; /*0x7392f6*/
    }
    else
    {
      if ( !*(_DWORD *)(a2 + 0x14) ) /*0x7392e8*/
        return 0; /*0x7392e8*/
      v11 = 0; /*0x739303*/
      if ( x_low ) /*0x739308*/
      {
        v12 = *(_DWORD *)(a2 + 0x14); /*0x73930a*/
        while ( 1 ) /*0x739317*/
        {
          v13 = 8 * v11; /*0x739317*/
          if ( *(float *)(v12 + v13) != *(float *)(v13 + LODWORD(z)) /*0x73933b*/
            || *(float *)(v12 + v13 + 4) != *(float *)(v13 + LODWORD(z) + 4) )
          {
            return 0; /*0x73933b*/
          }
          if ( ++v11 >= x_low ) /*0x739347*/
          {
            v10 = a2; /*0x739349*/
            break; /*0x739349*/
          }
        }
      }
    }
    Radius = this->members.super.m_kBound.Radius; /*0x73934d*/
    if ( Radius == 0.0 ) /*0x739356*/
    {
      if ( !*(_DWORD *)(v10 + 0x18) ) /*0x739366*/
      {
LABEL_35:
        v18 = 0; /*0x7393d5*/
        while ( *(_DWORD *)(*(_DWORD *)&this->members.super.m_usVertices + 4 * v18 + 8) == *(_DWORD *)(*(_DWORD *)(v10 + 8) + 4 * v18 + 8) ) /*0x7393f3*/
        {
          if ( ++v18 >= 0xAu ) /*0x7393fc*/
            return 1; /*0x739405*/
        }
      }
    }
    else if ( *(_DWORD *)(v10 + 0x18) ) /*0x739358*/
    {
      v15 = 0; /*0x739377*/
      if ( x_low ) /*0x73937c*/
      {
        v16 = *(_DWORD *)(v10 + 0x18); /*0x73937e*/
        while ( 1 ) /*0x739384*/
        {
          v17 = 0x10 * v15; /*0x739384*/
          if ( *(float *)(v16 + v17) != *(float *)(v17 + LODWORD(Radius)) /*0x7393c7*/
            || *(float *)(v16 + v17 + 4) != *(float *)(v17 + LODWORD(Radius) + 4)
            || *(float *)(v16 + v17 + 8) != *(float *)(v17 + LODWORD(Radius) + 8)
            || *(float *)(v16 + v17 + 0xC) != *(float *)(v17 + LODWORD(Radius) + 0xC) )
          {
            return 0; /*0x7393c7*/
          }
          if ( ++v15 >= x_low ) /*0x7393cf*/
          {
            v10 = a2; /*0x7393d1*/
            goto LABEL_35; /*0x7393d1*/
          }
        }
      }
      goto LABEL_35; /*0x73937c*/
    }
    return 0; /*0x739408*/
  }
  return result; /*0x739257*/
}
