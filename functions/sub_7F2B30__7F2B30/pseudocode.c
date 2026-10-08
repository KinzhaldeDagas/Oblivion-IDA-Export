int __thiscall sub_7F2B30(int this, int a2)
{
  int v2; // esi
  int result; // eax
  int v4; // edx
  int v5; // edi

  v2 = *(_DWORD *)(this + 0x14C); /*0x7f2b35*/
  result = a2 / v2; /*0x7f2b3c*/
  v4 = a2 % v2; /*0x7f2b3c*/
  *(_DWORD *)(this + 0x88) -= a2 % v2; /*0x7f2b3f*/
  v5 = *(_DWORD *)(this + 0x88); /*0x7f2b4c*/
  if ( !*(_BYTE *)(this + 0x180) ) /*0x7f2b45*/
    goto LABEL_5; /*0x7f2b45*/
  if ( v5 < 0 ) /*0x7f2b56*/
  {
    *(_DWORD *)(this + 0x84) += v2; /*0x7f2b58*/
    *(_BYTE *)(this + 0x180) = 0; /*0x7f2b5e*/
  }
  if ( *(_BYTE *)(this + 0x180) ) /*0x7f2b65*/
  {
    *(_DWORD *)(this + 0x190) -= v4; /*0x7f2b89*/
  }
  else
  {
LABEL_5:
    result = *(_DWORD *)(this + 0x84); /*0x7f2b6e*/
    *(_DWORD *)(this + 0x190) -= v4; /*0x7f2b74*/
    if ( v5 <= result ) /*0x7f2b7c*/
      *(_DWORD *)(this + 0x88) = result; /*0x7f2b7f*/
  }
  return result; /*0x7f2b7e*/
}
