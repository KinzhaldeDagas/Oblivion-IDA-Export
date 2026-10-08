// TES4 authoritative metadata contains-key helper for the same +0x44/+0x48 0x10-byte entry map.
char __thiscall sub_890A10(_DWORD *this, int a2)
{
  int v2; // ecx
  int v3; // edx
  int v4; // eax
  _DWORD *i; // ecx

  if ( !this ) /*0x890a13*/
    return 0; /*0x890a13*/
  v2 = *(this + 2); /*0x890a15*/
  if ( !v2 ) /*0x890a1a*/
    return 0; /*0x890a1a*/
  v3 = *(_DWORD *)(v2 + 0x48); /*0x890a1c*/
  v4 = 0; /*0x890a1f*/
  if ( v3 <= 0 ) /*0x890a23*/
    return 0; /*0x890a3e*/
  for ( i = *(_DWORD **)(v2 + 0x44); *i != a2; i += 4 ) /*0x890a25*/
  {
    if ( ++v4 >= v3 ) /*0x890a3c*/
      return 0; /*0x890a3c*/
  }
  return 1; /*0x890a4b*/
}
