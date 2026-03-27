int *__thiscall sub_8A3E00(int *this, _OWORD *a2)
{
  int *result; // eax
  int v3; // ecx
  __int128 v4; // xmm0
  double v5; // st6
  float v6[7]; // [esp+8h] [ebp-20h]

  result = this;
  if ( this && (result = (int *)*(this + 2)) != 0 && (result += 5) != 0 )
    v3 = *result;
  else
    v3 = 0;
  if ( v3 )
    return (*(int *(__stdcall **)(__int128 *, float, _OWORD *))(*(_DWORD *)v3 + 0xC))(xmmword_B2F090, flt_A37080, a2);
  v6[0] = flt_A57CB0;
  v6[1] = v6[0];
  v6[2] = v6[0];
  v6[3] = 0.0;
  v4 = *(_OWORD *)v6;
  v5 = flt_A37080;
  v6[0] = flt_A37080;
  *a2 = v4;
  v6[1] = v5;
  v6[2] = v5;
  v6[3] = 0.0;
  a2[1] = *(_OWORD *)v6;
  return result;
}
