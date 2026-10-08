_BYTE *__thiscall sub_42AE70(_BYTE *this, int a2, int a3, _DWORD *a4, float a5)
{
  _BYTE *result; // eax
  int v6; // ecx
  int v7; // ecx

  result = this; /*0x42ae70*/
  v6 = a2; /*0x42ae72*/
  result[4] = 0x1E; /*0x42ae78*/
  *((_DWORD *)result + 2) = 0; /*0x42ae7c*/
  *(_DWORD *)result = &ExtraPackageStartLocation::`vftable'; /*0x42ae83*/
  if ( !a2 ) /*0x42ae89*/
    v6 = a3; /*0x42ae8b*/
  *((_DWORD *)result + 3) = v6; /*0x42ae93*/
  *((_DWORD *)result + 4) = *a4; /*0x42ae9c*/
  *((_DWORD *)result + 5) = a4[1]; /*0x42aea2*/
  v7 = a4[2]; /*0x42aea5*/
  *((float *)result + 7) = a5;                  // Constructor stores fifth XPSL dword as runtime rotZ at +0x1C. Repeated XPSL does not update it, and the plugin writer does not read it. /*0x42aea8*/
  *((_DWORD *)result + 6) = v7; /*0x42aeab*/
  return result; /*0x42aeae*/
}
