int __thiscall sub_91BE50(int *this, int *a2)
{
  int result; // eax
  int v4; // ecx
  _DWORD **i; // edx
  int v6; // esi
  int *v7; // ebx
  int v8; // ecx
  int **j; // edx
  int v10; // ecx

  result = a2[5]; /*0x91be55*/
  if ( result ) /*0x91be5d*/
  {
    v4 = *(this + 3); /*0x91be63*/
    result = 0; /*0x91be66*/
    if ( v4 > 0 ) /*0x91be6e*/
    {
      for ( i = (_DWORD **)*(this + 2); **i != a2[2]; ++i ) /*0x91be70*/
      {
        if ( ++result >= v4 ) /*0x91be81*/
          return result; /*0x91be81*/
      }
      if ( result >= 0 ) /*0x91be8c*/
      {
        v6 = *(_DWORD *)(*(this + 2) + 4 * result); /*0x91be91*/
        v7 = sub_91BA70(a2); /*0x91be9f*/
        (*(void (__thiscall **)(_DWORD, int *, int))(*(_DWORD *)*(this + 0xFFFFFFFC) + 0x10))( /*0x91beab*/
          *(this + 0xFFFFFFFC),
          v7,
          unk_BA8438);
        v8 = *(_DWORD *)(v6 + 8); /*0x91beae*/
        result = 0; /*0x91beb1*/
        if ( v8 > 0 ) /*0x91beb5*/
        {
          for ( j = *(int ***)(v6 + 4); *j != v7; ++j ) /*0x91beb7*/
          {
            if ( ++result >= v8 ) /*0x91beca*/
              return result; /*0x91beca*/
          }
          if ( result >= 0 ) /*0x91bed5*/
          {
            v10 = *(_DWORD *)(v6 + 8) - 1; /*0x91beda*/
            *(_DWORD *)(v6 + 8) = v10; /*0x91bedb*/
            *(_DWORD *)(*(_DWORD *)(v6 + 4) + 4 * result) = *(_DWORD *)(*(_DWORD *)(v6 + 4) + 4 * v10); /*0x91bee4*/
          }
        }
      }
    }
  }
  return result; /*0x91be85*/
}
