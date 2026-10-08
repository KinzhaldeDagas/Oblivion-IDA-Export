void __thiscall sub_5599B0(_DWORD *this)
{
  unsigned int v2; // ebx
  bool v3; // cc
  int *v4; // edi
  unsigned int v5; // ebp
  unsigned int v6; // ebx
  int *v7; // esi
  unsigned int v8; // ebp
  _DWORD v9[2]; // [esp+18h] [ebp-14h] BYREF
  unsigned int v10; // [esp+28h] [ebp-4h]

  v2 = *(this + 3); /*0x5599dd*/
  v3 = *(this + 2) <= v2; /*0x5599e0*/
  v4 = this + 1; /*0x5599e3*/
  v10 = 0; /*0x5599e6*/
  if ( !v3 ) /*0x5599ee*/
    _invalid_parameter_noinfo(); /*0x5599f0*/
  v5 = v4[1]; /*0x5599f5*/
  if ( v5 > v4[2] ) /*0x5599fb*/
    _invalid_parameter_noinfo(); /*0x5599fd*/
  sub_559240(v4, v9, (int)v4, v5, (int)v4, v2); /*0x559a0d*/
  v6 = *(this + 7); /*0x559a12*/
  v7 = this + 5; /*0x559a15*/
  if ( v7[1] > v6 ) /*0x559a1b*/
    _invalid_parameter_noinfo(); /*0x559a1d*/
  v8 = v7[1]; /*0x559a22*/
  if ( v8 > v7[2] ) /*0x559a28*/
    _invalid_parameter_noinfo(); /*0x559a2a*/
  sub_559240(v7, v9, (int)v7, v8, (int)v7, v6); /*0x559a3a*/
  v10 = 0xFFFFFFFF; /*0x559a49*/
  _LN21((char *)v4, 0x10u, 2, (void (__thiscall *)(void *))sub_558570); /*0x559a51*/
}
