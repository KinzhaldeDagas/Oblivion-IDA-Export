_DWORD *__thiscall sub_778EA0(NiGeometryGroupManager *this, int a2)
{
  _DWORD *result; // eax
  _DWORD *v4; // eax
  _DWORD *v5; // edi
  unsigned int v6; // ecx
  void ***v7; // esi
  int v8; // eax
  void **v9; // edx
  int v10; // eax
  unsigned int v11; // eax
  int v12; // eax

  result = 0; /*0x778ea7*/
  if ( a2 ) /*0x778eac*/
  {
    if ( a2 == 1 ) /*0x778eb1*/
    {
      v4 = sub_77DE00(); /*0x778ebf*/
    }
    else
    {
      if ( a2 != 2 ) /*0x778eb6*/
        return result; /*0x778eb6*/
      v4 = sub_77EA10(); /*0x778eb8*/
    }
  }
  else
  {
    v4 = sub_77DD20(); /*0x778ec6*/
  }
  v5 = v4; /*0x778ecb*/
  if ( v4 ) /*0x778ecf*/
  {
    v6 = *((_DWORD *)this + 3); /*0x778ed1*/
    v7 = (void ***)((char *)this + 4); /*0x778ed5*/
    v8 = 0; /*0x778ed8*/
    if ( !v6 ) /*0x778edc*/
      goto LABEL_14; /*0x778edc*/
    v9 = *v7; /*0x778ede*/
    while ( *v9 != v5 ) /*0x778ee2*/
    {
      ++v8; /*0x778ee4*/
      ++v9; /*0x778ee7*/
      if ( v8 >= v6 ) /*0x778eec*/
        goto LABEL_14; /*0x778eec*/
    }
    if ( v8 < 0 ) /*0x778ef2*/
    {
LABEL_14:
      v10 = *((_DWORD *)this + 2); /*0x778ef4*/
      if ( v6 == v10 ) /*0x778ef9*/
      {
        if ( v10 ) /*0x778efd*/
          v11 = 2 * v10; /*0x778eff*/
        else
          v11 = 1; /*0x778f03*/
        sub_6E8CA0((unsigned int *)this + 1, v11); /*0x778f0b*/
      }
      (*v7)[(*((_DWORD *)this + 3))++] = v5; /*0x778f15*/
      v12 = *((_DWORD *)this + 4); /*0x778f1c*/
      v5[2] = v12; /*0x778f1f*/
      (*(void (__stdcall **)(int))(*(_DWORD *)v12 + 4))(v12); /*0x778f28*/
    }
  }
  return v5; /*0x778f2d*/
}
