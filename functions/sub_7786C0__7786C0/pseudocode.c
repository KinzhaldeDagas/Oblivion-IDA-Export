int __thiscall sub_7786C0(_DWORD *this)
{
  _DWORD *v1; // edi
  unsigned int v2; // ecx
  unsigned int v3; // eax
  _DWORD *v4; // edx
  MEF_U32PointerMapEntry32 *v5; // eax
  void *v6; // ebp
  unsigned int *v7; // edi
  int v8; // ebx
  unsigned int v9; // esi
  int v10; // eax
  int result; // eax
  MEF_U32PointerMapEntry32 *position; // [esp+8h] [ebp-10h] BYREF
  void *valueOut; // [esp+Ch] [ebp-Ch] BYREF
  _DWORD *v14; // [esp+10h] [ebp-8h]
  unsigned int keyOut; // [esp+14h] [ebp-4h] BYREF

  v1 = this; /*0x7786c5*/
  v2 = *(this + 8); /*0x7786c7*/
  v3 = 0; /*0x7786ca*/
  v14 = v1; /*0x7786ce*/
  if ( v2 ) /*0x7786d2*/
  {
    v4 = (_DWORD *)v1[9]; /*0x7786d7*/
    while ( !*v4 ) /*0x7786e3*/
    {
      ++v3; /*0x7786e9*/
      ++v4; /*0x7786ec*/
      if ( v3 >= v2 ) /*0x7786f1*/
        goto LABEL_5; /*0x7786f1*/
    }
    v5 = *(MEF_U32PointerMapEntry32 **)(v1[9] + 4 * v3); /*0x7787a6*/
  }
  else
  {
LABEL_5:
    v5 = 0; /*0x7786f3*/
  }
  position = v5; /*0x7786f7*/
  while ( position ) /*0x7786fb*/
  {
    NiTMap_U32Pointer_GetNextEntry((MEF_U32PointerMapLayout32 *)(v1 + 7), &position, &keyOut, &valueOut); /*0x778712*/
    v6 = valueOut; /*0x778717*/
    if ( valueOut ) /*0x77871d*/
    {
      v7 = (unsigned int *)((char *)valueOut + 8); /*0x77871f*/
      v8 = 5; /*0x778722*/
      do /*0x778754*/
      {
        v9 = *v7; /*0x778727*/
        if ( *v7 ) /*0x778727*/
        {
          if ( *(_DWORD *)(v9 + 0x20) ) /*0x77872d*/
            (*(void (__stdcall **)(_DWORD))(**(_DWORD **)(v9 + 0x20) + 8))(*(_DWORD *)(v9 + 0x20)); /*0x77873c*/
          sub_77D1D0((_DWORD *)v9); /*0x778740*/
          FormHeapFree(v9); /*0x778746*/
        }
        ++v7; /*0x77874e*/
        --v8; /*0x778751*/
      }
      while ( v8 ); /*0x778754*/
      FormHeapFree((unsigned int)v6); /*0x778757*/
      v1 = v14; /*0x77875c*/
    }
  }
  NiTMap_Clear(v1 + 7); /*0x77876f*/
  v10 = v1[3]; /*0x778774*/
  if ( v10 ) /*0x778779*/
  {
    (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v10 + 8))(v1[3]); /*0x778781*/
    v1[3] = 0; /*0x778783*/
  }
  result = v1[5]; /*0x77878a*/
  if ( result ) /*0x77878f*/
  {
    result = (*(int (__stdcall **)(_DWORD))(*(_DWORD *)result + 8))(v1[5]); /*0x778797*/
    v1[5] = 0; /*0x778799*/
  }
  return result; /*0x7787a0*/
}
