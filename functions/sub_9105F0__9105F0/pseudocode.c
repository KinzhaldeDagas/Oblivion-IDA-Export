int __thiscall sub_9105F0(_DWORD **this, int a2, int *a3)
{
  int v3; // ebx
  int v5; // edi
  long double v6; // st7
  int v7; // edx
  unsigned int v8; // ecx
  int v9; // eax
  double v10; // st6
  double v11; // st6
  void (__thiscall ***v12)(_DWORD, int *); // ecx
  int v13; // eax
  int result; // eax
  _DWORD **v15; // [esp-8h] [ebp-24h]
  int v16; // [esp+10h] [ebp-Ch] BYREF
  float v17; // [esp+14h] [ebp-8h]
  char v18; // [esp+18h] [ebp-4h]

  v3 = *(_DWORD *)(a2 + 0x28); /*0x9105f9*/
  v15 = this; /*0x910603*/
  LOBYTE(v15) = 1; /*0x910608*/
  (*(void (__thiscall **)(_DWORD, _DWORD **, int *))(**(this + 3) + 0x10))(*(this + 3), v15, &v16); /*0x910610*/
  v5 = LODWORD(v17); /*0x910618*/
  if ( *((_BYTE *)this + 0x18) ) /*0x910613*/
    goto LABEL_12; /*0x910613*/
  v6 = *(float *)&SrcStr; /*0x910622*/
  v7 = 0; /*0x910628*/
  if ( SLODWORD(v17) >= 4 ) /*0x91062d*/
  {
    v8 = ((unsigned int)(LODWORD(v17) - 4) >> 2) + 1; /*0x910635*/
    v9 = v3 + 0x10; /*0x910636*/
    v7 = 4 * v8; /*0x910639*/
    do /*0x910670*/
    {
      v10 = *(float *)(v9 - 0x10); /*0x910640*/
      v9 += 0x20; /*0x910643*/
      --v8; /*0x910646*/
      v6 = v6 /*0x91066c*/
         + v10 * v10
         + *(float *)(v9 - 0x28) * *(float *)(v9 - 0x28)
         + *(float *)(v9 - 0x20) * *(float *)(v9 - 0x20)
         + *(float *)(v9 - 0x18) * *(float *)(v9 - 0x18);
    }
    while ( v8 ); /*0x910670*/
  }
  for ( ; v7 < SLODWORD(v17); v6 = v6 + v11 * v11 ) /*0x910674*/
    v11 = *(float *)(v3 + 8 * v7++); /*0x910676*/
  if ( v6 > *((float *)this + 5) * *((float *)this + 5) ) /*0x910698*/
  {
    *((_BYTE *)this + 0x18) = 1; /*0x91069a*/
    v12 = (void (__thiscall ***)(_DWORD, int *))*(this + 7); /*0x91069e*/
    if ( v12 ) /*0x9106a3*/
    {
      v13 = *(_DWORD *)(a2 + 0x24); /*0x9106aa*/
      v18 = *((_BYTE *)this + 0x19); /*0x9106ad*/
      v16 = v13; /*0x9106b5*/
      v17 = sqrt(v6); /*0x9106ba*/
      (**v12)(v12, &v16); /*0x9106c0*/
    }
  }
  if ( *((_BYTE *)this + 0x18) ) /*0x9106c6*/
  {
LABEL_12:
    sub_8F0F70(a2, a3, 0, 8); /*0x9106e9*/
    if ( *((_BYTE *)this + 0x19) ) /*0x9106ee*/
    {
      (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(*(_DWORD *)(a2 + 0x24) + 8) + 8))( /*0x910701*/
        *(_DWORD *)(*(_DWORD *)(a2 + 0x24) + 8),
        *(_DWORD *)(a2 + 0x24));
      *((_BYTE *)this + 0x18) = *((_BYTE *)this + 0x1A); /*0x910707*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_DWORD, int, int *))(**(this + 3) + 0x1C))(*(this + 3), a2, a3); /*0x9106da*/
  }
  for ( result = 0; result < v5; ++result ) /*0x91070e*/
    *(_DWORD *)(v3 + 8 * result) = 0; /*0x910710*/
  return result; /*0x91071c*/
}
