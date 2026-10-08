int __thiscall sub_683500(NiTMap_TESCELL *this)
{
  unsigned int v2; // ecx
  unsigned int v3; // eax
  _DWORD *v4; // edx
  MEF_U32PointerMapEntry32 *v5; // eax
  _DWORD *v6; // esi
  int v7; // ecx
  void (__thiscall ***v8)(_DWORD, int); // ecx
  unsigned int v9; // ecx
  unsigned int v10; // eax
  _DWORD *v11; // edx
  MEF_U32PointerMapEntry32 *v12; // eax
  _DWORD *v13; // esi
  int v14; // ecx
  void (__thiscall ***v15)(_DWORD, int); // ecx
  unsigned int v16; // ecx
  unsigned int v17; // eax
  _DWORD *v18; // edx
  MEF_U32PointerMapEntry32 *v19; // eax
  _DWORD *v20; // esi
  int v21; // ecx
  void (__thiscall ***v22)(_DWORD, int); // ecx
  MEF_U32PointerMapEntry32 *position; // [esp+18h] [ebp-Ch] BYREF
  void *valueOut; // [esp+1Ch] [ebp-8h] BYREF
  unsigned int keyOut; // [esp+20h] [ebp-4h] BYREF

  if ( *((_DWORD *)this + 0x10) ) /*0x683509*/
  {
    sub_683490((LONG *)this); /*0x683510*/
    *((_DWORD *)this + 0x10) = 0; /*0x683515*/
  }
  v2 = *((_DWORD *)this + 9); /*0x683518*/
  v3 = 0; /*0x68351e*/
  if ( v2 ) /*0x683522*/
  {
    v4 = *((_DWORD **)this + 0xA); /*0x683527*/
    while ( !*v4 ) /*0x683532*/
    {
      ++v3; /*0x683538*/
      ++v4; /*0x68353b*/
      if ( v3 >= v2 ) /*0x683540*/
        goto LABEL_7; /*0x683540*/
    }
    v5 = *(MEF_U32PointerMapEntry32 **)(*((_DWORD *)this + 0xA) + 4 * v3); /*0x6836be*/
  }
  else
  {
LABEL_7:
    v5 = 0; /*0x683542*/
  }
  position = v5; /*0x683546*/
  while ( position ) /*0x68354a*/
  {
    valueOut = 0; /*0x683561*/
    NiTMap_U32Pointer_GetNextEntry((MEF_U32PointerMapLayout32 *)this + 2, &position, &keyOut, &valueOut); /*0x683565*/
    v6 = valueOut; /*0x68356a*/
    if ( valueOut ) /*0x683570*/
    {
      v7 = *((_DWORD *)valueOut + 1); /*0x683572*/
      if ( v7 ) /*0x683577*/
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v7 + 0x10))(v7, 1); /*0x683580*/
      v8 = (void (__thiscall ***)(_DWORD, int))v6[2]; /*0x683582*/
      if ( v8 ) /*0x683587*/
        (**v8)(v8, 1); /*0x68358f*/
      FormHeapFree((unsigned int)v6); /*0x683592*/
    }
  }
  NiTMap_Clear((_DWORD *)this + 8); /*0x6835a2*/
  v9 = *((_DWORD *)this + 5); /*0x6835a7*/
  v10 = 0; /*0x6835ad*/
  if ( v9 ) /*0x6835b1*/
  {
    v11 = *((_DWORD **)this + 6); /*0x6835b6*/
    while ( !*v11 ) /*0x6835ba*/
    {
      ++v10; /*0x6835c0*/
      ++v11; /*0x6835c3*/
      if ( v10 >= v9 ) /*0x6835c8*/
        goto LABEL_20; /*0x6835c8*/
    }
    v12 = *(MEF_U32PointerMapEntry32 **)(*((_DWORD *)this + 6) + 4 * v10); /*0x6836c6*/
  }
  else
  {
LABEL_20:
    v12 = 0; /*0x6835ca*/
  }
  position = v12; /*0x6835ce*/
  while ( position ) /*0x6835d2*/
  {
    valueOut = 0; /*0x6835e5*/
    NiTMap_U32Pointer_GetNextEntry((MEF_U32PointerMapLayout32 *)this + 1, &position, &keyOut, &valueOut); /*0x6835e9*/
    v13 = valueOut; /*0x6835ee*/
    if ( valueOut ) /*0x6835f4*/
    {
      v14 = *((_DWORD *)valueOut + 1); /*0x6835f6*/
      if ( v14 ) /*0x6835fb*/
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v14 + 0x10))(v14, 1); /*0x683604*/
      v15 = (void (__thiscall ***)(_DWORD, int))v13[2]; /*0x683606*/
      if ( v15 ) /*0x68360b*/
        (**v15)(v15, 1); /*0x683613*/
      FormHeapFree((unsigned int)v13); /*0x683616*/
    }
  }
  NiTMap_Clear((_DWORD *)this + 4); /*0x683626*/
  v16 = *((_DWORD *)this + 0xD); /*0x68362b*/
  v17 = 0; /*0x683631*/
  if ( v16 ) /*0x683635*/
  {
    v18 = *((_DWORD **)this + 0xE); /*0x68363a*/
    while ( !*v18 ) /*0x683642*/
    {
      ++v17; /*0x683648*/
      ++v18; /*0x68364b*/
      if ( v17 >= v16 ) /*0x683650*/
        goto LABEL_33; /*0x683650*/
    }
    v19 = *(MEF_U32PointerMapEntry32 **)(*((_DWORD *)this + 0xE) + 4 * v17); /*0x6836ce*/
  }
  else
  {
LABEL_33:
    v19 = 0; /*0x683652*/
  }
  position = v19; /*0x683656*/
  while ( position ) /*0x68365a*/
  {
    valueOut = 0; /*0x683671*/
    NiTMap_U32Pointer_GetNextEntry((MEF_U32PointerMapLayout32 *)this + 3, &position, &keyOut, &valueOut); /*0x683675*/
    v20 = valueOut; /*0x68367a*/
    if ( valueOut ) /*0x683680*/
    {
      v21 = *((_DWORD *)valueOut + 1); /*0x683682*/
      if ( v21 ) /*0x683687*/
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v21 + 0x10))(v21, 1); /*0x683690*/
      v22 = (void (__thiscall ***)(_DWORD, int))v20[2]; /*0x683692*/
      if ( v22 ) /*0x683697*/
        (**v22)(v22, 1); /*0x68369f*/
      FormHeapFree((unsigned int)v20); /*0x6836a2*/
    }
  }
  return NiTMap_Clear((_DWORD *)this + 0xC); /*0x6836b2*/
}
