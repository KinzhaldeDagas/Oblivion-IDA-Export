int __thiscall sub_77D2E0(_DWORD *this, int a2)
{
  int result; // eax
  int v3; // edx
  int v4; // edx

  result = *(this + 0xB); /*0x77d2e0*/
  if ( result ) /*0x77d2e5*/
  {
    while ( result != a2 ) /*0x77d2f2*/
    {
      result = *(_DWORD *)(result + 0x3C); /*0x77d2f4*/
      if ( !result ) /*0x77d2f9*/
        return result; /*0x77d2f9*/
    }
    v3 = *(_DWORD *)(result + 0x3C); /*0x77d2fe*/
    if ( v3 ) /*0x77d304*/
      *(_DWORD *)(v3 + 0x40) = *(_DWORD *)(result + 0x40); /*0x77d309*/
    v4 = *(_DWORD *)(result + 0x40); /*0x77d30c*/
    if ( v4 ) /*0x77d311*/
      *(_DWORD *)(v4 + 0x3C) = *(_DWORD *)(result + 0x3C); /*0x77d316*/
    if ( result == *(this + 0xB) ) /*0x77d31d*/
    {
      result = *(_DWORD *)(result + 0x3C); /*0x77d31f*/
      *(this + 0xB) = result; /*0x77d322*/
    }
  }
  return result; /*0x77d2fb*/
}
