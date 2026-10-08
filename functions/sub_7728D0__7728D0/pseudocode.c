_DWORD *__thiscall sub_7728D0(_DWORD *this, int a2)
{
  void *v3; // eax
  void *v4; // esi

  *(this + 1) = a2; /*0x7728da*/
  *(this + 2) = 0; /*0x7728dd*/
  if ( a2 )
  {
    v3 = (void *)FormHeapAlloc((unsigned __int64)(unsigned int)a2 >> 0x1C != 0 ? 0xFFFFFFFF : 0x10 * a2);
    v4 = v3; /*0x7728ff*/
    if ( v3 ) /*0x772906*/
    {
      sub_401080(v3, 0x10, a2, (void *(__thiscall *)(void *))NiD3DRSEntry_InitializeEmpty); /*0x772911*/
      *this = v4; /*0x772916*/
    }
    else
    {
      *this = 0; /*0x772923*/
    }
    return this; /*0x77291b*/
  }
  else
  {
    *this = 0; /*0x77292f*/
    return this; /*0x772936*/
  }
}
