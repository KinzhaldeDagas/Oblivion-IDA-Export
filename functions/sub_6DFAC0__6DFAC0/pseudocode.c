char __thiscall sub_6DFAC0(NiTriBasedGeomData *this, int a2)
{
  unsigned int v4; // ebp
  _DWORD *v5; // esi
  char *v6; // ebx
  int v7; // ecx
  int v8; // eax

  if ( !sub_89D6F0(this, a2) || LOWORD(this->members.super.m_kBound.Center.x) != *(_WORD *)(a2 + 0xC) ) /*0x6dfae1*/
    return 0; /*0x6dfae1*/
  if ( LODWORD(this->members.super.m_kBound.Center.y) ) /*0x6dfae3*/
  {
    if ( !*(_DWORD *)(a2 + 0x10) /*0x6dfb0e*/
      || *(_DWORD *)(a2 + 0x10)
      && !(*(unsigned __int8 (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)LODWORD(this->members.super.m_kBound.Center.y)
                                                            + 0x2C))(
            LODWORD(this->members.super.m_kBound.Center.y),
            *(_DWORD *)(a2 + 0x10)) )
    {
      return 0; /*0x6dfb12*/
    }
  }
  else if ( *(_DWORD *)(a2 + 0x10) ) /*0x6dfaf4*/
  {
    return 0; /*0x6dfad6*/
  }
  if ( !sub_6CE450(&this->members.super.m_kBound.Radius, (float *)(a2 + 0x18)) ) /*0x6dfb22*/
    return 0; /*0x6dfb22*/
  v4 = 0; /*0x6dfb26*/
  v5 = (_DWORD *)(a2 + 0x38); /*0x6dfb28*/
  v6 = (char *)this - a2; /*0x6dfb2b*/
  while ( 1 ) /*0x6dfb30*/
  {
    v7 = *(_DWORD *)((char *)v5 + (_DWORD)v6); /*0x6dfb30*/
    v8 = *v5; /*0x6dfb35*/
    if ( v7 ) /*0x6dfb37*/
      break; /*0x6dfb37*/
    if ( v8 ) /*0x6dfb5f*/
      return 0; /*0x6dfb5f*/
LABEL_16:
    ++v4; /*0x6dfb49*/
    ++v5; /*0x6dfb4c*/
    if ( v4 >= 3 ) /*0x6dfb52*/
      return 1; /*0x6dfb5a*/
  }
  if ( v8 && (*(unsigned __int8 (__thiscall **)(int, _DWORD))(*(_DWORD *)v7 + 0x2C))(v7, *v5) ) /*0x6dfb43*/
    goto LABEL_16; /*0x6dfb47*/
  return 0; /*0x6dfad2*/
}
