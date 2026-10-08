bool __thiscall sub_71FDE0(NiTriBasedGeomData *this, int a2)
{
  int v4; // eax
  _DWORD *v5; // ecx
  _DWORD *v6; // edx
  unsigned int v7; // eax
  int v8; // esi
  unsigned int v9; // eax
  unsigned __int8 *v10; // ecx
  unsigned __int8 *v11; // edx
  unsigned int v12; // eax
  unsigned __int8 *v13; // ecx
  unsigned __int8 *v14; // edx
  unsigned __int8 *v15; // ecx
  unsigned __int8 *v16; // edx
  int v17; // eax

  if ( !sub_732E10(this, a2) ) /*0x71fde9*/
    return 0; /*0x71fde9*/
  v4 = *((_DWORD *)this + 0x11); /*0x71fdf9*/
  if ( v4 != *(_DWORD *)(a2 + 0x44) ) /*0x71fdff*/
    return 0; /*0x71fdf6*/
  v5 = *(_DWORD **)(a2 + 0x48); /*0x71fe01*/
  v6 = *((_DWORD **)this + 0x12); /*0x71fe04*/
  v7 = 2 * v4; /*0x71fe07*/
  if ( v7 < 4 ) /*0x71fe0c*/
  {
LABEL_7:
    if ( !v7 ) /*0x71fe26*/
    {
LABEL_17:
      v17 = 0; /*0x71fe8d*/
      return v17 == 0; /*0x71fe8d*/
    }
  }
  else
  {
    while ( *v6 == *v5 ) /*0x71fe14*/
    {
      v7 -= 4; /*0x71fe16*/
      ++v5; /*0x71fe19*/
      ++v6; /*0x71fe1c*/
      if ( v7 < 4 ) /*0x71fe22*/
        goto LABEL_7; /*0x71fe22*/
    }
  }
  v8 = *(unsigned __int8 *)v6 - *(unsigned __int8 *)v5; /*0x71fe2e*/
  if ( !v8 ) /*0x71fe30*/
  {
    v9 = v7 - 1; /*0x71fe32*/
    v10 = (unsigned __int8 *)v5 + 1; /*0x71fe35*/
    v11 = (unsigned __int8 *)v6 + 1; /*0x71fe38*/
    if ( !v9 ) /*0x71fe3d*/
      goto LABEL_17; /*0x71fe3d*/
    v8 = *v11 - *v10; /*0x71fe45*/
    if ( !v8 ) /*0x71fe47*/
    {
      v12 = v9 - 1; /*0x71fe49*/
      v13 = v10 + 1; /*0x71fe4c*/
      v14 = v11 + 1; /*0x71fe4f*/
      if ( !v12 ) /*0x71fe54*/
        goto LABEL_17; /*0x71fe54*/
      v8 = *v14 - *v13; /*0x71fe5c*/
      if ( !v8 ) /*0x71fe5e*/
      {
        v15 = v13 + 1; /*0x71fe63*/
        v16 = v14 + 1; /*0x71fe66*/
        if ( v12 == 1 ) /*0x71fe6b*/
          goto LABEL_17; /*0x71fe6b*/
        v8 = *v16 - *v15; /*0x71fe73*/
        if ( !v8 ) /*0x71fe75*/
          goto LABEL_17; /*0x71fe75*/
      }
    }
  }
  v17 = 1; /*0x71fe79*/
  if ( v8 <= 0 ) /*0x71fe7e*/
    return 0; /*0x71fe8a*/
  return v17 == 0; /*0x71fdf2*/
}
