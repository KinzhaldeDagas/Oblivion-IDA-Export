void __thiscall sub_6FE8B0(int *this, int *a2)
{
  int v3; // ebp
  unsigned int v4; // edi
  NiAVObject *v5; // esi
  int v6; // [esp+14h] [ebp-1Ch] BYREF
  NiAVObject *v7; // [esp+18h] [ebp-18h] BYREF
  NiAVObject *element; // [esp+1Ch] [ebp-14h] BYREF
  NiAVObject *v9; // [esp+20h] [ebp-10h] BYREF
  unsigned int v10; // [esp+2Ch] [ebp-4h]

  sub_753180(this, (_DWORD **)a2); /*0x6fe8de*/
  if ( NiTMap_GetAt((_DWORD *)*a2, (int)this, &v6) ) /*0x6fe8eb*/
  {
    v3 = v6; /*0x6fe8f8*/
    v4 = *(unsigned __int16 *)(v6 + 0x62); /*0x6fe8fc*/
    v6 = 0; /*0x6fe902*/
    while ( v4 ) /*0x6fe90a*/
    {
      --v4; /*0x6fe916*/
      if ( NiTMap_GetAt((_DWORD *)*a2, *(_DWORD *)(*(_DWORD *)(v3 + 0x5C) + 4 * v4), &v7) ) /*0x6fe92a*/
      {
        v5 = v7; /*0x6fe933*/
        ++v6; /*0x6fe937*/
        element = v7; /*0x6fe93e*/
        if ( v7 ) /*0x6fe942*/
          InterlockedIncrement((volatile LONG *)&v7->members); /*0x6fe948*/
        v10 = 0; /*0x6fe956*/
        NiTObjectArray_SetAt((MEF_RefPointerArray16 *)(v3 + 0x58), v4, (void **)&element); /*0x6fe95e*/
        v10 = 0xFFFFFFFF; /*0x6fe965*/
        if ( !v5 || InterlockedDecrement((volatile LONG *)&v5->members) ) /*0x6fe973*/
          continue; /*0x6fe97b*/
      }
      else
      {
        sub_6D7F60(v3 + 0x58, &v9, v4); /*0x6fe987*/
        if ( !v9 ) /*0x6fe992*/
          continue; /*0x6fe992*/
        v5 = v9; /*0x6fe994*/
        if ( InterlockedDecrement((volatile LONG *)&v9->members) ) /*0x6fe99a*/
          continue; /*0x6fe9a2*/
      }
      v5->vtbl->super.super.Destructor((NiRefObject *)v5, 1); /*0x6fe9b0*/
    }
    if ( v6 != *(unsigned __int16 *)(v3 + 0x62) ) /*0x6fe9c2*/
      sub_4784A0((_WORD *)(v3 + 0x58)); /*0x6fe9c7*/
  }
}
