char __thiscall sub_723A60(_DWORD *this, int a2)
{
  char result; // al
  int v4; // ecx

  result = sub_721A50(a2); /*0x723a69*/
  if ( result ) /*0x723a70*/
  {
    v4 = *(this + 0x3F); /*0x723a77*/
    if ( v4 ) /*0x723a7f*/
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v4 + 0x24))(v4, a2); /*0x723a87*/
    return 1; /*0x723a8a*/
  }
  return result; /*0x723a72*/
}
