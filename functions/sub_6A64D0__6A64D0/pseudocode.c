char __thiscall sub_6A64D0(MagicTarget **this, TESObjectREFR *a2, int a3, _DWORD *a4)
{
  int v4; // eax
  int v5; // edi
  unsigned int v6; // ebp
  int v7; // esi
  float *v8; // ebx
  _DWORD *v10; // eax
  int v11; // [esp-14h] [ebp-28h]
  unsigned int v12; // [esp+Ch] [ebp-8h] BYREF
  MagicTarget **v13; // [esp+10h] [ebp-4h]

  v13 = this; /*0x6a64e5*/
  v12 = 0; /*0x6a64e9*/
  v4 = sub_6A5510(this, (int *)&v12, a2, a3); /*0x6a64f1*/
  v5 = v4; /*0x6a64f6*/
  if ( v4 <= 0 ) /*0x6a64fa*/
    return 0; /*0x6a64fa*/
  v6 = v12; /*0x6a6500*/
  if ( !v12 ) /*0x6a6506*/
    return 0; /*0x6a659a*/
  v11 = v12; /*0x6a6515*/
  unk_B3C0E4 = (int)a2; /*0x6a6516*/
  unknown_libname_60(v4, v11, v4, 0xC, (int)sub_6A5C00); /*0x6a651c*/
  v7 = 0; /*0x6a6524*/
  if ( v5 <= 0 ) /*0x6a6528*/
    goto LABEL_7; /*0x6a6528*/
  v8 = (float *)v6; /*0x6a652a*/
  while ( !sub_6A5EF0(v13, a3, v8) ) /*0x6a6541*/
  {
    ++v7; /*0x6a6543*/
    v8 += 3; /*0x6a6546*/
    if ( v7 >= v5 ) /*0x6a654b*/
      goto LABEL_7; /*0x6a654b*/
  }
  if ( v7 >= v5 ) /*0x6a6564*/
  {
LABEL_7:
    FormHeapFree(v6); /*0x6a654d*/
    return 0; /*0x6a6559*/
  }
  else
  {
    v10 = (_DWORD *)(v6 + 0xC * v7); /*0x6a656d*/
    *a4 = *v10; /*0x6a6575*/
    a4[1] = v10[1]; /*0x6a657a*/
    a4[2] = v10[2]; /*0x6a6581*/
    FormHeapFree(v6); /*0x6a6584*/
    return 1; /*0x6a658f*/
  }
}
