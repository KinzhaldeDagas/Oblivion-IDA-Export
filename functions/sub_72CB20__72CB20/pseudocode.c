bool __thiscall sub_72CB20(NiTriBasedGeomData *this, int a2)
{
  bool result; // al
  unsigned int v4; // ebx
  unsigned int v5; // edi
  float x; // esi
  int v7; // ebp

  result = sub_700670(this, a2); /*0x72cb29*/
  if ( result ) /*0x72cb30*/
  {
    v4 = *(_DWORD *)&this->members.super.m_usVertices; /*0x72cb38*/
    if ( v4 == *(_DWORD *)(a2 + 8) ) /*0x72cb3e*/
    {
      v5 = 0; /*0x72cb49*/
      if ( v4 ) /*0x72cb4d*/
      {
        x = this->members.super.m_kBound.Center.x; /*0x72cb4f*/
        v7 = *(_DWORD *)(a2 + 0xC) - LODWORD(x); /*0x72cb55*/
        while ( sub_72C4C0((_WORD *)LODWORD(x), LODWORD(x) + v7) ) /*0x72cb64*/
        {
          ++v5; /*0x72cb66*/
          LODWORD(x) += 0x2C; /*0x72cb69*/
          if ( v5 >= v4 ) /*0x72cb6e*/
            return 1; /*0x72cb6e*/
        }
        return 0; /*0x72cb7c*/
      }
      else
      {
        return 1; /*0x72cb70*/
      }
    }
    else
    {
      return 0; /*0x72cb42*/
    }
  }
  return result; /*0x72cb33*/
}
