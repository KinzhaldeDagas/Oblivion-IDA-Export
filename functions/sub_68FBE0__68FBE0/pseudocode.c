_DWORD *__thiscall sub_68FBE0(_DWORD *this, char a2)
{
  _DWORD *v2; // ecx
  _DWORD *v3; // esi
  _DWORD *v4; // eax
  _DWORD *v5; // eax

  v2 = this + 0xFFFFFFFE; /*0x68fbe0*/
  v3 = v2; /*0x68fbf1*/
  if ( v2 ) /*0x68fbf5*/
    v4 = v2 + 2; /*0x68fbf7*/
  else
    v4 = 0; /*0x68fbfc*/
  *v4 = &hkEntityActivationListener::`vftable'; /*0x68fc00*/
  if ( v2 ) /*0x68fc06*/
    v5 = v2 + 1; /*0x68fc08*/
  else
    v5 = 0; /*0x68fc0d*/
  *v5 = &hkEntityListener::`vftable'; /*0x68fc14*/
  *v2 = &hkCollisionListener::`vftable'; /*0x68fc1a*/
  if ( (a2 & 1) != 0 ) /*0x68fc20*/
    FormHeapFree((unsigned int)v2); /*0x68fc23*/
  return v3; /*0x68fc2e*/
}
