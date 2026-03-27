_BYTE *__thiscall sub_42AE70(_BYTE *this, int a2, int a3, _DWORD *a4, float a5)
{
  _BYTE *result; // eax
  int v6; // ecx
  int v7; // ecx

  result = this;
  v6 = a2;
  result[4] = 0x1E;
  *((_DWORD *)result + 2) = 0;
  *(_DWORD *)result = &ExtraPackageStartLocation::`vftable';
  if ( !a2 )
    v6 = a3;
  *((_DWORD *)result + 3) = v6;
  *((_DWORD *)result + 4) = *a4;
  *((_DWORD *)result + 5) = a4[1];
  v7 = a4[2];
  *((float *)result + 7) = a5;
  *((_DWORD *)result + 6) = v7;
  return result;
}
