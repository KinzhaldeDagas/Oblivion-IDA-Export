signed int __thiscall sub_958AD0(float *this, float a2, __m128 *a3, _DWORD *a4, _DWORD *a5)
{
  signed int v5; // ebp
  int v7; // ebx
  int v8; // esi
  signed int v9; // eax
  bool v10; // cc
  int v12; // [esp+10h] [ebp-8h]
  int v13; // [esp+14h] [ebp-4h]

  v5 = 0; /*0x958ad9*/
  v13 = 0; /*0x958ae2*/
  v12 = LODWORD(a2) + 0x1C; /*0x958ae6*/
  while ( 1 ) /*0x958af4*/
  {
    v7 = *(_DWORD *)v12; /*0x958af4*/
    v8 = *(_DWORD *)(*(_DWORD *)v12 + 0xC); /*0x958af6*/
    if ( !*(_DWORD *)(v8 + 0x44) ) /*0x958af9*/
    {
      v9 = sub_958A30(v8, a3, this, this + 1); /*0x958b0c*/
      *(_DWORD *)(v8 + 0x44) = v9; /*0x958b14*/
      if ( v9 == 1 ) /*0x958b17*/
      {
        v5 = sub_958AD0(this, *(float *)&v8, a3, a4, a5); /*0x958b30*/
        if ( v5 == 2 ) /*0x958b35*/
          goto LABEL_12; /*0x958b35*/
        goto LABEL_7; /*0x958b35*/
      }
      if ( v9 == 4 ) /*0x958b3c*/
        break; /*0x958b3c*/
    }
LABEL_7:
    if ( *(_DWORD *)(v8 + 0x44) == 2 ) /*0x958b42*/
    {
      *(_DWORD *)(*(_DWORD *)v7 + 0x30) = v7; /*0x958b4e*/
      ++*a4; /*0x958b51*/
      *a5 = v7; /*0x958b53*/
    }
    v10 = ++v13 < 3; /*0x958b61*/
    v12 += 0x10; /*0x958b68*/
    if ( !v10 ) /*0x958b6c*/
      goto LABEL_12; /*0x958b6c*/
  }
  v5 = 2; /*0x958b70*/
LABEL_12:
  *(_DWORD *)(LODWORD(a2) + 0x10) = 0x7F7FFFFF; /*0x958b75*/
  *(this + (*((_DWORD *)this + 3))++ + 0x378) = a2; /*0x958b83*/
  return v5; /*0x958b8d*/
}
