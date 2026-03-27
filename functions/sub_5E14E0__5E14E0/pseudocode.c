_BYTE *__thiscall sub_5E14E0(int this, _BYTE *a2)
{
  _BYTE *result; // eax

  result = a2;
  *(_BYTE *)(this + 0x61) = *a2;
  if ( !*a2 )
    *(_DWORD *)(this + 0x64) = 0;
  return result;
}
