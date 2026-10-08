int *__thiscall sub_557250(int *this, int a2)
{
  int v4; // eax
  int v5; // eax
  int v6; // edi
  int v7; // eax
  unsigned int v8; // edi
  bool v9; // cc
  int v10; // ecx
  int v12; // [esp+0h] [ebp-24h] BYREF
  OB_stVector4_010201A0 *v13; // [esp+10h] [ebp-14h]
  int *v14; // [esp+14h] [ebp-10h]
  int v15; // [esp+20h] [ebp-4h]
  unsigned int v16; // [esp+2Ch] [ebp+8h]

  v14 = &v12; /*0x557278*/
  v13 = (OB_stVector4_010201A0 *)this; /*0x55727d*/
  v4 = *(_DWORD *)(a2 + 4); /*0x557283*/
  if ( v4 ) /*0x55728a*/
    v5 = (*(_DWORD *)(a2 + 8) - v4) / 6; /*0x5572a1*/
  else
    v5 = 0; /*0x55728c*/
  *(this + 1) = 0; /*0x5572a5*/
  *(this + 2) = 0; /*0x5572a8*/
  *(this + 3) = 0; /*0x5572ab*/
  if ( v5 ) /*0x5572ae*/
  {
    v6 = 6 * v5; /*0x5572bd*/
    v7 = FormHeapAlloc(6 * v5); /*0x5572c0*/
    *(this + 1) = v7; /*0x5572c7*/
    *(this + 2) = v7; /*0x5572ca*/
    *(this + 3) = v7 + v6; /*0x5572cd*/
    v8 = *(_DWORD *)(a2 + 8); /*0x5572d0*/
    v9 = *(_DWORD *)(a2 + 4) <= v8; /*0x5572d6*/
    v15 = 0; /*0x5572d9*/
    if ( !v9 ) /*0x5572e0*/
      _invalid_parameter_noinfo(); /*0x5572e2*/
    v16 = *(_DWORD *)(a2 + 4); /*0x5572ed*/
    v10 = v16; /*0x5572e7*/
    if ( v16 > *(_DWORD *)(a2 + 8) ) /*0x5572f0*/
    {
      _invalid_parameter_noinfo(); /*0x5572f2*/
      v10 = v16; /*0x5572f7*/
    }
    *(this + 2) = sub_5567D0(v10, v8, *(this + 1)); /*0x557315*/
  }
  return this; /*0x55731a*/
}
