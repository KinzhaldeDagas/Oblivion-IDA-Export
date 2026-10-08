int *__thiscall sub_8A3E00(int *this, _OWORD *a2)
{
  int *result; // eax
  int v3; // ecx
  __int128 v4; // xmm0
  double v5; // st6
  __int128 v6; // [esp+8h] [ebp-20h]

  result = this; /*0x8a3e17*/
  if ( this && (result = (int *)*(this + 2)) != 0 && (result += 5) != 0 ) /*0x8a3e27*/
    v3 = *result; /*0x8a3e29*/
  else
    v3 = 0; /*0x8a3e2d*/
  if ( v3 ) /*0x8a3e31*/
    return (*(int *(__stdcall **)(__int128 *, float, _OWORD *))(*(_DWORD *)v3 + 0xC))(xmmword_B2F090, flt_A37080, a2); /*0x8a3e48*/
  *(float *)&v6 = flt_A57CB0; /*0x8a3e65*/
  *((float *)&v6 + 1) = *(float *)&v6; /*0x8a3e6a*/
  *((float *)&v6 + 2) = *(float *)&v6; /*0x8a3e6e*/
  *((float *)&v6 + 3) = 0.0; /*0x8a3e74*/
  v4 = v6; /*0x8a3e78*/
  v5 = flt_A37080; /*0x8a3e7c*/
  *(float *)&v6 = flt_A37080; /*0x8a3e82*/
  *a2 = v4; /*0x8a3e85*/
  *((float *)&v6 + 1) = v5; /*0x8a3e88*/
  *((float *)&v6 + 2) = v5; /*0x8a3e8c*/
  *((float *)&v6 + 3) = 0.0; /*0x8a3e90*/
  a2[1] = v6; /*0x8a3e98*/
  return result; /*0x8a3e4a*/
}
