int __thiscall sub_8E13A0(char **this, int a2, int a3, _DWORD *a4)
{
  char *v5; // ecx
  char *v6; // edx
  char *v7; // esi
  char *v8; // edi
  int v9; // eax
  char v10; // dl
  int result; // eax
  int v12; // eax
  char *i; // [esp+Ch] [ebp-4h]

  v5 = *this; /*0x8e13a4*/
  v6 = &v5[4 * (_DWORD)*(this + 1)]; /*0x8e13ab*/
  v7 = v5; /*0x8e13af*/
  v8 = 0; /*0x8e13b1*/
  for ( i = v6; v7 < v6; v7 += 4 ) /*0x8e13b9*/
  {
    v9 = *(_DWORD *)(*a4 + 4 * *((unsigned __int16 *)v7 + 1)); /*0x8e13ca*/
    if ( v9 >= 0 ) /*0x8e13cf*/
    {
      *(_DWORD *)v5 = *(_DWORD *)v7; /*0x8e13d7*/
      v10 = *v5; /*0x8e13db*/
      *((_WORD *)v5 + 1) = v9; /*0x8e13dd*/
      v5 += 4; /*0x8e13e4*/
      *(_WORD *)(*(_DWORD *)(4 * ((v10 & 1) + 2 * a3) + 0xB2FC84) + 0x10 * v9 + a2) = (_WORD)v8; /*0x8e13fa*/
      v6 = i; /*0x8e13fe*/
      ++v8; /*0x8e1402*/
    }
  }
  result = (unsigned int)*(this + 2) & 0x3FFFFFFF; /*0x8e140e*/
  if ( result < (int)v8 ) /*0x8e1415*/
  {
    v12 = 2 * result; /*0x8e1417*/
    if ( (int)v8 >= v12 ) /*0x8e141b*/
      v12 = (int)v8; /*0x8e141d*/
    result = sub_8A6E40((const void **)this, v12, 4); /*0x8e1423*/
  }
  *(this + 1) = v8; /*0x8e142b*/
  return result; /*0x8e142e*/
}
