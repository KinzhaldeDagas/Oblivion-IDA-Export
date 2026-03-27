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

  v13 = this;
  v12 = 0;
  v4 = sub_6A5510(this, (int *)&v12, a2, a3);
  v5 = v4;
  if ( v4 <= 0 )
    return 0;
  v6 = v12;
  if ( !v12 )
    return 0;
  v11 = v12;
  dword_B3C0E4 = (int)a2;
  unknown_libname_60(v11, v4, 0xC, sub_6A5C00);
  v7 = 0;
  if ( v5 <= 0 )
    goto LABEL_7;
  v8 = (float *)v6;
  while ( !sub_6A5EF0(v13, a3, v8) )
  {
    ++v7;
    v8 += 3;
    if ( v7 >= v5 )
      goto LABEL_7;
  }
  if ( v7 >= v5 )
  {
LABEL_7:
    FormHeapFree(v6);
    return 0;
  }
  else
  {
    v10 = (_DWORD *)(v6 + 0xC * v7);
    *a4 = *v10;
    a4[1] = v10[1];
    a4[2] = v10[2];
    FormHeapFree(v6);
    return 1;
  }
}
