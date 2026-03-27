bool __thiscall sub_72CB20(NiTriBasedGeomData *this, int a2)
{
  bool result; // al
  unsigned int v4; // ebx
  unsigned int v5; // edi
  float x; // esi
  int v7; // ebp

  result = sub_700670(this, a2);
  if ( result )
  {
    v4 = *(_DWORD *)&this->members.super.m_usVertices;
    if ( v4 == *(_DWORD *)(a2 + 8) )
    {
      v5 = 0;
      if ( v4 )
      {
        x = this->members.super.m_kBound.Center.x;
        v7 = *(_DWORD *)(a2 + 0xC) - LODWORD(x);
        while ( sub_72C4C0((_WORD *)LODWORD(x), LODWORD(x) + v7) )
        {
          ++v5;
          LODWORD(x) += 0x2C;
          if ( v5 >= v4 )
            return 1;
        }
        return 0;
      }
      else
      {
        return 1;
      }
    }
    else
    {
      return 0;
    }
  }
  return result;
}
