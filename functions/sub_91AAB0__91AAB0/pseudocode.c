int __userpurge sub_91AAB0@<eax>(int a1@<ecx>, int a2@<ebx>, int a3@<esi>, int a4)
{
  int result; // eax
  int v6; // ecx
  _DWORD **i; // edx
  int v8; // esi
  int v9; // ecx
  int v10; // eax
  _DWORD *v11; // edx
  int v12; // ecx
  int v13; // ecx
  _DWORD *j; // edx
  int v15; // ecx

  result = *(_DWORD *)(a4 + 0x14); /*0x91aab5*/
  if ( result ) /*0x91aabd*/
  {
    v6 = *(_DWORD *)(a1 + 0xC); /*0x91aac3*/
    result = 0; /*0x91aac6*/
    if ( v6 > 0 ) /*0x91aace*/
    {
      for ( i = *(_DWORD ***)(a1 + 8); **i != *(_DWORD *)(a4 + 8); ++i ) /*0x91aad4*/
      {
        if ( ++result >= v6 ) /*0x91aae4*/
          return result; /*0x91aae4*/
      }
      if ( result >= 0 ) /*0x91aaef*/
      {
        v8 = *(_DWORD *)(*(_DWORD *)(a1 + 8) + 4 * result); /*0x91aaf8*/
        (*(void (__thiscall **)(_DWORD, int, int, int, int))(**(_DWORD **)(a1 - 0x10) + 0x10))( /*0x91ab0a*/
          *(_DWORD *)(a1 - 0x10),
          a4 + 0x15,
          unk_BA8420,
          a2,
          a3);
        v9 = *(_DWORD *)(v8 + 8); /*0x91ab0d*/
        v10 = 0; /*0x91ab10*/
        if ( v9 > 0 ) /*0x91ab14*/
        {
          v11 = *(_DWORD **)(v8 + 4); /*0x91ab16*/
          while ( *v11 != a4 + 0x15 ) /*0x91ab22*/
          {
            ++v10; /*0x91ab24*/
            ++v11; /*0x91ab25*/
            if ( v10 >= v9 ) /*0x91ab2a*/
              goto LABEL_15; /*0x91ab2a*/
          }
          if ( v10 >= 0 ) /*0x91ab30*/
          {
            v12 = *(_DWORD *)(v8 + 8) - 1; /*0x91ab35*/
            *(_DWORD *)(v8 + 8) = v12; /*0x91ab36*/
            *(_DWORD *)(*(_DWORD *)(v8 + 4) + 4 * v10) = *(_DWORD *)(*(_DWORD *)(v8 + 4) + 4 * v12); /*0x91ab41*/
          }
        }
LABEL_15:
        (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(a1 - 0x10) + 0x10))( /*0x91ab44*/
          *(_DWORD *)(a1 - 0x10),
          a4 + 0x16,
          unk_BA8420);
        v13 = *(_DWORD *)(v8 + 8); /*0x91ab57*/
        result = 0; /*0x91ab5a*/
        if ( v13 > 0 ) /*0x91ab5e*/
        {
          for ( j = *(_DWORD **)(v8 + 4); *j != a4 + 0x16; ++j ) /*0x91ab60*/
          {
            if ( ++result >= v13 ) /*0x91ab6d*/
              return result; /*0x91ab6d*/
          }
          if ( result >= 0 ) /*0x91ab78*/
          {
            v15 = *(_DWORD *)(v8 + 8) - 1; /*0x91ab7d*/
            *(_DWORD *)(v8 + 8) = v15; /*0x91ab7e*/
            *(_DWORD *)(*(_DWORD *)(v8 + 4) + 4 * result) = *(_DWORD *)(*(_DWORD *)(v8 + 4) + 4 * v15); /*0x91ab87*/
          }
        }
      }
    }
  }
  return result; /*0x91aae8*/
}
