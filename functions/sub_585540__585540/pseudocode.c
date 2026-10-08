void *__thiscall sub_585540(_DWORD *this)
{
  void *v2; // eax
  void *result; // eax

  v2 = (void *)FormHeapAlloc(1u); /*0x585566*/
  if ( v2 ) /*0x58557c*/
  {
    result = sub_4FCCE0(v2); /*0x585580*/
    *this = result; /*0x585585*/
  }
  else
  {
    *this = 0; /*0x58559a*/
    return 0; /*0x585598*/
  }
  return result; /*0x585587*/
}
