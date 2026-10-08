bool __thiscall sub_725EF0(unsigned int *this, int a2)
{
  unsigned int v2; // eax
  _DWORD *v4; // edx
  _DWORD *v5; // ecx
  int v6; // esi
  unsigned int v7; // eax
  unsigned __int8 *v8; // edx
  unsigned __int8 *v9; // ecx
  unsigned int v10; // eax
  unsigned __int8 *v11; // edx
  unsigned __int8 *v12; // ecx
  unsigned __int8 *v13; // edx
  unsigned __int8 *v14; // ecx
  int v15; // eax

  v2 = *(this + 1); /*0x725ef0*/
  if ( v2 != *(_DWORD *)(a2 + 4) ) /*0x725efa*/
    return 0; /*0x725efe*/
  v4 = *(_DWORD **)(a2 + 8); /*0x725f04*/
  v5 = (_DWORD *)*(this + 2); /*0x725f07*/
  if ( v2 < 4 ) /*0x725f0c*/
  {
LABEL_6:
    if ( !v2 ) /*0x725f26*/
    {
LABEL_16:
      v15 = 0; /*0x725f8d*/
      return v15 == 0; /*0x725f8d*/
    }
  }
  else
  {
    while ( *v5 == *v4 ) /*0x725f14*/
    {
      v2 -= 4; /*0x725f16*/
      ++v4; /*0x725f19*/
      ++v5; /*0x725f1c*/
      if ( v2 < 4 ) /*0x725f22*/
        goto LABEL_6; /*0x725f22*/
    }
  }
  v6 = *(unsigned __int8 *)v5 - *(unsigned __int8 *)v4; /*0x725f2e*/
  if ( !v6 ) /*0x725f30*/
  {
    v7 = v2 - 1; /*0x725f32*/
    v8 = (unsigned __int8 *)v4 + 1; /*0x725f35*/
    v9 = (unsigned __int8 *)v5 + 1; /*0x725f38*/
    if ( !v7 ) /*0x725f3d*/
      goto LABEL_16; /*0x725f3d*/
    v6 = *v9 - *v8; /*0x725f45*/
    if ( !v6 ) /*0x725f47*/
    {
      v10 = v7 - 1; /*0x725f49*/
      v11 = v8 + 1; /*0x725f4c*/
      v12 = v9 + 1; /*0x725f4f*/
      if ( !v10 ) /*0x725f54*/
        goto LABEL_16; /*0x725f54*/
      v6 = *v12 - *v11; /*0x725f5c*/
      if ( !v6 ) /*0x725f5e*/
      {
        v13 = v11 + 1; /*0x725f63*/
        v14 = v12 + 1; /*0x725f66*/
        if ( v10 == 1 ) /*0x725f6b*/
          goto LABEL_16; /*0x725f6b*/
        v6 = *v14 - *v13; /*0x725f73*/
        if ( !v6 ) /*0x725f75*/
          goto LABEL_16; /*0x725f75*/
      }
    }
  }
  v15 = 1; /*0x725f79*/
  if ( v6 <= 0 ) /*0x725f7e*/
    return 0; /*0x725f8a*/
  return v15 == 0; /*0x725efe*/
}
