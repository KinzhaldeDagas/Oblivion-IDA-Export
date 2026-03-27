_DWORD *__thiscall sub_68FBE0(_DWORD *this, char a2)
{
  _DWORD *v2; // ecx
  _DWORD *v3; // esi
  _DWORD *v4; // eax
  _DWORD *v5; // eax

  v2 = this + 0xFFFFFFFE;
  v3 = v2;
  if ( v2 )
    v4 = v2 + 2;
  else
    v4 = 0;
  *v4 = &hkEntityActivationListener::`vftable';
  if ( v2 )
    v5 = v2 + 1;
  else
    v5 = 0;
  *v5 = &hkEntityListener::`vftable';
  *v2 = &hkCollisionListener::`vftable';
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)v2);
  return v3;
}
