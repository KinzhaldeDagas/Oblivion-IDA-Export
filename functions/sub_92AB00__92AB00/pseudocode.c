_DWORD *__thiscall sub_92AB00(int *this, unsigned int a2, _WORD *a3)
{
  int *v3; // ebx
  _DWORD *v4; // esi
  _DWORD *v5; // ecx
  int v6; // eax
  int v7; // ecx
  int v8; // edx
  _DWORD *v9; // edi
  int v10; // eax
  _OWORD *v11; // eax
  bool v12; // cc
  _DWORD *v14; // eax
  _OWORD *v15; // edi
  _OWORD *v16; // eax
  unsigned int v17; // [esp+Ch] [ebp-224h]
  _OWORD *v18; // [esp+10h] [ebp-220h]
  int v19; // [esp+18h] [ebp-218h]
  _BYTE v21[524]; // [esp+20h] [ebp-210h] BYREF

  v3 = this; /*0x92ab19*/
  if ( a3 ) /*0x92ab26*/
    v4 = sub_950C30(a3, *(this + 6)); /*0x92ab33*/
  else
    v4 = 0; /*0x92ab37*/
  v4[6] = v3[5]; /*0x92ab3f*/
  v5 = (_DWORD *)v3[4]; /*0x92ab42*/
  if ( a2 >= v5[6] ) /*0x92ab48*/
  {
    v4[8] = 1; /*0x92aca4*/
    v14 = (_DWORD *)(*(_DWORD *)(v3[4] + 0x20) + 4 * (a2 - *(_DWORD *)(v3[4] + 0x18))); /*0x92acb4*/
    v4[7] = v14; /*0x92acba*/
    v15 = (_OWORD *)(((unsigned int)a3 + 0x33) & 0xFFFFFFF0); /*0x92acbd*/
    v4[4] = v15; /*0x92acc0*/
    v4[5] = 3; /*0x92acc3*/
    v16 = (_OWORD *)(*(int (__thiscall **)(int, _DWORD, _BYTE *))(*(_DWORD *)v3[5] + 0x28))(v3[5], *v14, v21); /*0x92acdb*/
    *v15 = v16[1]; /*0x92ace2*/
    v15[1] = v16[2]; /*0x92ace9*/
    v15[2] = v16[3]; /*0x92acf1*/
    return v4; /*0x92acf1*/
  }
  v6 = *(_DWORD *)(v5[5] + 4 * a2); /*0x92ab51*/
  v7 = v5[2]; /*0x92ab54*/
  v8 = *(_DWORD *)(v7 + 4 * v6); /*0x92ab57*/
  v9 = (_DWORD *)(v7 + 4 * v6); /*0x92ab5a*/
  v4[7] = v9 + 1; /*0x92ab60*/
  v18 = (_OWORD *)(((unsigned int)a3 + 0x33) & 0xFFFFFFF0); /*0x92ab6c*/
  v4[4] = v18; /*0x92ab70*/
  v10 = 0; /*0x92ab73*/
  v4[8] = v8; /*0x92ab79*/
  v4[5] = 0; /*0x92ab7c*/
  v19 = 0; /*0x92ab7f*/
  if ( v8 <= 0 ) /*0x92ab83*/
    return v4; /*0x92acfc*/
  v17 = 2; /*0x92ab89*/
  while ( 1 ) /*0x92aba8*/
  {
    v11 = (_OWORD *)(*(int (__thiscall **)(int, _DWORD, _BYTE *))(*(_DWORD *)v3[5] + 0x28))( /*0x92aba8*/
                      v3[5],
                      *(_DWORD *)(v4[7] + 4 * v10),
                      v21);
    if ( ((1 << ((v17 - 2) % 0x1F)) & v9[(v17 - 2) / 0x1F + 1 + *v9]) != 0 ) /*0x92abd8*/
    {
      *v18++ = v11[1]; /*0x92abe6*/
      ++v4[5]; /*0x92abf0*/
    }
    if ( ((1 << ((v17 - 1) % 0x1F)) & v9[(v17 - 1) / 0x1F + 1 + *v9]) != 0 ) /*0x92ac18*/
    {
      *v18++ = v11[2]; /*0x92ac26*/
      ++v4[5]; /*0x92ac30*/
    }
    if ( ((1 << (v17 % 0x1F)) & v9[v17 / 0x1F + 1 + *v9]) != 0 ) /*0x92ac57*/
    {
      *v18++ = v11[3]; /*0x92ac65*/
      ++v4[5]; /*0x92ac6f*/
    }
    v10 = v19 + 1; /*0x92ac79*/
    v12 = ++v19 < v4[8]; /*0x92ac7d*/
    v17 += 3; /*0x92ac83*/
    if ( !v12 ) /*0x92ac87*/
      break; /*0x92ac87*/
    v3 = this; /*0x92ab93*/
  }
  return v4; /*0x92ac8f*/
}
