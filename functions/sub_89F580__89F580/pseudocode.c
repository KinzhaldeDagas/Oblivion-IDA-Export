int __thiscall sub_89F580(_DWORD *this, int a2)
{
  int v2; // eax
  int v3; // eax
  int v4; // ecx
  int result; // eax

  if ( this ) /*0x89f586*/
  {
    v2 = *(this + 2); /*0x89f588*/
    if ( v2 ) /*0x89f58d*/
    {
      v3 = v2 + 0x14; /*0x89f58f*/
      if ( v3 ) /*0x89f592*/
      {
        *(_DWORD *)(a2 + 4) = *(_DWORD *)v3; /*0x89f597*/
        *(_BYTE *)(a2 + 8) = *(_BYTE *)(v3 + 0x18); /*0x89f59d*/
      }
    }
  }
  *(_DWORD *)(a2 + 0x10) = 0; /*0x89f5a3*/
  if ( this && (v4 = *(this + 2)) != 0 && v4 != 0xFFFFFFEC ) /*0x89f5b8*/
  {
    result = *(_DWORD *)(v4 + 0x30); /*0x89f5ba*/
    *(_DWORD *)a2 = result; /*0x89f5bd*/
  }
  else
  {
    *(_DWORD *)a2 = 0; /*0x89f5c4*/
    return 0; /*0x89f5c2*/
  }
  return result; /*0x89f5bf*/
}
