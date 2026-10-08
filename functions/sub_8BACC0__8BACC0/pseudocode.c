BOOL __thiscall sub_8BACC0(_DWORD *this)
{
  int v2; // ecx
  HANDLE *v3; // esi
  int v4; // edi

  v2 = *this; /*0x8bacc3*/
  if ( *(_WORD *)(v2 + 4) ) /*0x8bacc5*/
  {
    if ( !--*(_WORD *)(v2 + 6) ) /*0x8bacd2*/
      (**(void (__thiscall ***)(int, int))v2)(v2, 1); /*0x8bacdd*/
  }
  sub_8BABF0((char *)this); /*0x8bace1*/
  v3 = (HANDLE *)(this + 0x45); /*0x8bace6*/
  v4 = 6; /*0x8bacec*/
  do /*0x8bacfc*/
  {
    v3 += 0xFFFFFFF6; /*0x8bacf1*/
    sub_8F5890(v3); /*0x8bacf6*/
    --v4; /*0x8bacfb*/
  }
  while ( v4 ); /*0x8bacfc*/
  return sub_8F5890((HANDLE *)this + 3); /*0x8bacfe*/
}
