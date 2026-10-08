MEF_U32PointerMapEntry32 *__thiscall sub_77E130(_DWORD *this)
{
  unsigned int v2; // ecx
  unsigned int v3; // eax
  _DWORD *v4; // edx
  MEF_U32PointerMapEntry32 *v5; // eax
  _DWORD *v6; // esi
  int v7; // eax
  int v8; // eax
  unsigned int v9; // edx
  unsigned int v10; // eax
  _DWORD *v11; // ecx
  MEF_U32PointerMapEntry32 *result; // eax
  bool v13; // zf
  unsigned int i; // esi
  int v15; // edx
  unsigned int v16; // edi
  unsigned __int16 v17; // ax
  int v18; // eax
  int v19; // eax
  MEF_U32PointerMapEntry32 *position; // [esp+Ch] [ebp-Ch] BYREF
  unsigned int keyOut; // [esp+10h] [ebp-8h] BYREF
  void *valueOut; // [esp+14h] [ebp-4h] BYREF

  v2 = *(this + 4); /*0x77e137*/
  v3 = 0; /*0x77e13e*/
  if ( v2 ) /*0x77e142*/
  {
    v4 = (_DWORD *)*(this + 5); /*0x77e147*/
    while ( !*v4 ) /*0x77e153*/
    {
      ++v3; /*0x77e159*/
      ++v4; /*0x77e15c*/
      if ( v3 >= v2 ) /*0x77e161*/
        goto LABEL_5; /*0x77e161*/
    }
    v5 = *(MEF_U32PointerMapEntry32 **)(*(this + 5) + 4 * v3); /*0x77e2b4*/
  }
  else
  {
LABEL_5:
    v5 = 0; /*0x77e163*/
  }
  position = v5; /*0x77e167*/
  while ( position ) /*0x77e16b*/
  {
    NiTMap_U32Pointer_GetNextEntry((MEF_U32PointerMapLayout32 *)(this + 3), &position, &keyOut, &valueOut); /*0x77e181*/
    NiTMap_RemoveAt(this + 3, keyOut); /*0x77e18d*/
    v6 = valueOut; /*0x77e192*/
    if ( valueOut ) /*0x77e198*/
    {
      v7 = *((_DWORD *)valueOut + 4); /*0x77e19a*/
      if ( v7 ) /*0x77e19f*/
        (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v7 + 8))(*((_DWORD *)valueOut + 4)); /*0x77e1a7*/
      v8 = v6[3]; /*0x77e1a9*/
      if ( v8 ) /*0x77e1ae*/
        (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v8 + 8))(v6[3]); /*0x77e1b6*/
      FormHeapFree((unsigned int)v6); /*0x77e1b9*/
    }
  }
  v9 = *(this + 8); /*0x77e1c8*/
  v10 = 0; /*0x77e1ce*/
  if ( v9 ) /*0x77e1d2*/
  {
    v11 = (_DWORD *)*(this + 9); /*0x77e1d7*/
    while ( !*v11 ) /*0x77e1e3*/
    {
      ++v10; /*0x77e1e9*/
      ++v11; /*0x77e1ec*/
      if ( v10 >= v9 ) /*0x77e1f1*/
        goto LABEL_18; /*0x77e1f1*/
    }
    result = *(MEF_U32PointerMapEntry32 **)(*(this + 9) + 4 * v10); /*0x77e2bc*/
  }
  else
  {
LABEL_18:
    result = 0; /*0x77e1f3*/
  }
  position = result; /*0x77e1f7*/
  if ( result ) /*0x77e1fb*/
  {
    do /*0x77e226*/
    {
      NiTMap_U32Pointer_GetNextEntry((MEF_U32PointerMapLayout32 *)(this + 7), &position, &keyOut, &valueOut); /*0x77e211*/
      v13 = position == 0; /*0x77e216*/
      result = (MEF_U32PointerMapEntry32 *)valueOut; /*0x77e21b*/
      *((_DWORD *)valueOut + 2) = 0; /*0x77e21f*/
    }
    while ( !v13 ); /*0x77e226*/
  }
  for ( i = 0; i < *((unsigned __int16 *)this + 0x1A); *(_DWORD *)(*((_DWORD *)&result->next + i++) + 8) = 0 ) /*0x77e22a*/
  {
    if ( i < *((unsigned __int16 *)this + 0x1B) ) /*0x77e23a*/
    {
      v15 = *(this + 0xC); /*0x77e23c*/
      v16 = *(_DWORD *)(v15 + 4 * i); /*0x77e23f*/
      *(_DWORD *)(v15 + 4 * i) = 0; /*0x77e247*/
      if ( v16 ) /*0x77e24d*/
        --*((_WORD *)this + 0x1C); /*0x77e24f*/
      v17 = *((_WORD *)this + 0x1B); /*0x77e255*/
      if ( i == v17 - 1 ) /*0x77e261*/
        *((_WORD *)this + 0x1B) = v17 - 1; /*0x77e266*/
      if ( v16 ) /*0x77e26c*/
      {
        v18 = *(_DWORD *)(v16 + 0x10); /*0x77e26e*/
        if ( v18 ) /*0x77e273*/
          (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v18 + 8))(*(_DWORD *)(v16 + 0x10)); /*0x77e27b*/
        v19 = *(_DWORD *)(v16 + 0xC); /*0x77e27d*/
        if ( v19 ) /*0x77e282*/
          (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v19 + 8))(*(_DWORD *)(v16 + 0xC)); /*0x77e28a*/
        FormHeapFree(v16); /*0x77e28d*/
      }
    }
    result = (MEF_U32PointerMapEntry32 *)*(this + 0x10); /*0x77e295*/
  }
  return result; /*0x77e2ad*/
}
