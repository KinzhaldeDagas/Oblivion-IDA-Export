void __thiscall sub_54E860(unsigned int *this, unsigned int a2, char a3)
{
  void *v4; // eax
  unsigned int v5; // eax
  unsigned int v6; // [esp-Ch] [ebp-18h]

  if ( a2 != *(this + 4) )
  {
    if ( *(this + 3) ) /*0x54e872*/
    {
      FormHeapFree(*(this + 3)); /*0x54e87a*/
      *(this + 3) = 0; /*0x54e882*/
    }
    *(this + 4) = a2; /*0x54e88b*/
    if ( a2 )
    {
      v4 = (void *)FormHeapAlloc((unsigned __int64)a2 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * a2);
      v6 = *(this + 4); /*0x54e8ac*/
      *(this + 3) = (unsigned int)v4; /*0x54e8ae*/
      sub_54F630(v4, v6, a3); /*0x54e8b1*/
    }
  }
  v5 = *(this + 4); /*0x54e8b9*/
  if ( v5 ) /*0x54e8be*/
    sub_54F630((void *)*(this + 3), v5, a3); /*0x54e8c6*/
}
