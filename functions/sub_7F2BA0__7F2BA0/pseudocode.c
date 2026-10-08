int __thiscall sub_7F2BA0(int this, int a2)
{
  int v2; // esi
  int result; // eax

  v2 = *(_DWORD *)(this + 0x14C); /*0x7f2ba6*/
  *(_DWORD *)(this + 0x84) += a2 % v2; /*0x7f2bae*/
  result = *(_DWORD *)(this + 0x84); /*0x7f2bbb*/
  if ( *(_BYTE *)(this + 0x180) ) /*0x7f2bb4*/
  {
    if ( result >= v2 ) /*0x7f2bc5*/
    {
      result -= v2; /*0x7f2bc7*/
      *(_DWORD *)(this + 0x84) = result; /*0x7f2bc9*/
      *(_BYTE *)(this + 0x180) = 0; /*0x7f2bcf*/
    }
  }
  *(_DWORD *)(this + 0x190) -= a2 % v2; /*0x7f2bd6*/
  if ( !*(_BYTE *)(this + 0x180) ) /*0x7f2bdc*/
  {
    result = *(_DWORD *)(this + 0x88); /*0x7f2be6*/
    if ( *(_DWORD *)(this + 0x84) >= result ) /*0x7f2bf2*/
      *(_DWORD *)(this + 0x84) = result; /*0x7f2bf4*/
  }
  return result; /*0x7f2be3*/
}
