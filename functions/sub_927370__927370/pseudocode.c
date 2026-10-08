bool *__thiscall sub_927370(int *this, bool *a2, int a3, int a4)
{
  unsigned int v4; // eax
  int v5; // ebx
  int v6; // edi
  int v7; // esi
  _DWORD *v8; // ecx

  v4 = a3 + *(_DWORD *)(a3 + 0x10); /*0x92737d*/
  if ( v4 <= a4 + *(_DWORD *)(a4 + 0x10) ) /*0x927387*/
  {
    v5 = a4 + *(_DWORD *)(a4 + 0x10); /*0x92738f*/
  }
  else
  {
    v5 = a3 + *(_DWORD *)(a3 + 0x10); /*0x927389*/
    v4 = a4 + *(_DWORD *)(a4 + 0x10); /*0x92738b*/
  }
  v6 = *(this + 6); /*0x927391*/
  v7 = 0; /*0x927394*/
  if ( v6 <= 0 ) /*0x927398*/
  {
LABEL_9:
    v7 = 0xFFFFFFFF; /*0x9273b1*/
  }
  else
  {
    v8 = (_DWORD *)*(this + 5); /*0x92739a*/
    while ( *v8 != v5 || v8[1] != v4 ) /*0x9273a7*/
    {
      ++v7; /*0x9273a9*/
      v8 += 2; /*0x9273aa*/
      if ( v7 >= v6 ) /*0x9273af*/
        goto LABEL_9; /*0x9273af*/
    }
  }
  *a2 = v7 < 0; /*0x9273bf*/
  return a2; /*0x9273ba*/
}
