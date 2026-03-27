_DWORD *__thiscall sub_961450(void *this)
{
  _DWORD *v2; // eax
  _DWORD *v3; // esi

  v2 = (_DWORD *)FormHeapAlloc(0x3Cu);
  v3 = v2;
  if ( !v2 )
    return 0;
  *v2 = &NiCapsuleBV::`vftable';
  sub_960180((int)v2, (int)this);
  return v3;
}
