int __thiscall sub_6FAFA0(_WORD *this, unsigned int a2, int a3)
{
  bool v4; // al
  float *v5; // ecx
  _DWORD *v6; // esi
  int result; // eax

  if ( (unk_B3F4B0 & 1) == 0 ) /*0x6fafb1*/
  {
    unk_B3F4B0 |= 1u; /*0x6fafb3*/
    unk_B3F4AC = 0; /*0x6fafbb*/
    unk_B3F4AE = 0; /*0x6fafc1*/
  }
  if ( a2 < (unsigned __int16)*(this + 5) ) /*0x6fafd9*/
  {
    v4 = sub_6FAE60((float *)a3, (int)&unk_B3F4A0); /*0x6faff5*/
    v5 = (float *)(*((_DWORD *)this + 1) + 0x10 * a2); /*0x6fafff*/
    if ( v4 ) /*0x6fb009*/
    {
      if ( sub_6FAE10(v5, (int)&unk_B3F4A0) ) /*0x6fb00b*/
        ++*(this + 6); /*0x6fb014*/
    }
    else if ( sub_6FAE60(v5, (int)&unk_B3F4A0) ) /*0x6fb01a*/
    {
      --*(this + 6); /*0x6fb023*/
    }
  }
  else
  {
    *(this + 5) = a2 + 1; /*0x6fafde*/
    if ( sub_6FAE60((float *)a3, (int)&unk_B3F4A0) ) /*0x6fafe4*/
      ++*(this + 6); /*0x6fafed*/
  }
  v6 = (_DWORD *)(*((_DWORD *)this + 1) + 0x10 * a2); /*0x6fb02f*/
  *v6 = *(_DWORD *)a3; /*0x6fb033*/
  result = *(_DWORD *)(a3 + 4); /*0x6fb035*/
  v6[1] = result; /*0x6fb038*/
  v6[2] = *(_DWORD *)(a3 + 8); /*0x6fb03e*/
  v6[3] = *(_DWORD *)(a3 + 0xC); /*0x6fb044*/
  return result; /*0x6fb032*/
}
