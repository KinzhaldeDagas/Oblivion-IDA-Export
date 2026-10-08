int __thiscall sub_9263E0(_DWORD *this, _DWORD *a2)
{
  int v3; // ebx
  int v4; // ecx
  int v5; // edi
  unsigned int v6; // eax
  unsigned int i; // ecx
  int v8; // eax
  int v9; // edx
  int v10; // eax
  int v11; // ecx
  int v12; // edi
  int v13; // ebp
  _DWORD *v14; // ecx
  _DWORD *v15; // ecx
  int result; // eax
  int v17; // [esp+8h] [ebp-8h]
  int v18; // [esp+Ch] [ebp-4h]

  v3 = *(this + 4); /*0x9263e7*/
  if ( *(this + 2) == v3 )
  {
    v4 = *(this + 1) != *this ? 0 : *(this + 1);
    v5 = v4; /*0x926404*/
    if ( v3 ) /*0x926406*/
    {
      v6 = 0xC * (v4 + 2 * v3); /*0x926412*/
      for ( i = 1; v6 > i; i *= 2 ) /*0x92641c*/
        ; /*0x926420*/
      sub_926320(this, i / 0xC); /*0x926433*/
    }
    else
    {
      sub_926320(this, 8); /*0x92640a*/
    }
    v8 = 0; /*0x926438*/
    if ( v5 > 0 ) /*0x92643c*/
    {
      v9 = 0; /*0x926445*/
      v10 = 0xC * v3; /*0x926447*/
      v17 = v5; /*0x92644a*/
      v18 = v5; /*0x92644e*/
      do /*0x926479*/
      {
        v11 = *(this + 3); /*0x926452*/
        v12 = v9 + v11; /*0x926455*/
        v13 = *(_DWORD *)(v9 + v11); /*0x926458*/
        v14 = (_DWORD *)(v10 + v11); /*0x92645a*/
        *v14 = v13; /*0x92645c*/
        v14[1] = *(_DWORD *)(v12 + 4); /*0x926461*/
        v14[2] = *(_DWORD *)(v12 + 8); /*0x926467*/
        v9 += 0xC; /*0x92646e*/
        v10 += 0xC; /*0x926471*/
        --v17; /*0x926475*/
      }
      while ( v17 ); /*0x926479*/
      v8 = v18; /*0x92647b*/
    }
    *(this + 1) = v3 + v8; /*0x926482*/
  }
  else if ( *(this + 1) == v3 ) /*0x92648b*/
  {
    *(this + 1) = 0; /*0x92648d*/
  }
  v15 = (_DWORD *)(*(this + 3) + 0xC * *(this + 1)); /*0x92649d*/
  *v15 = *a2; /*0x9264a6*/
  v15[1] = a2[1]; /*0x9264ab*/
  v15[2] = a2[2]; /*0x9264b1*/
  result = *(this + 2) + 1; /*0x9264bb*/
  ++*(this + 1); /*0x9264bc*/
  *(this + 2) = result; /*0x9264bf*/
  return result; /*0x9264c2*/
}
