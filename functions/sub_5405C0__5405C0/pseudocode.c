char __thiscall sub_5405C0(int **this, int a2, int a3)
{
  int *i; // ecx
  int v4; // eax

  for ( i = *(this + 0x38); i; i = (int *)i[1] ) /*0x5405ca*/
  {
    v4 = *i; /*0x5405d4*/
    if ( !*i ) /*0x5405d4*/
      break; /*0x5405d4*/
    if ( **(_DWORD **)v4 == a2 && *(_DWORD *)(v4 + 4) == a3 ) /*0x5405e3*/
      return 1; /*0x5405f4*/
  }
  return 0; /*0x5405ec*/
}
