_DWORD *__thiscall sub_74D8C0(int this, _DWORD *a2, unsigned int index, NiAVObject *element)
{
  int v5; // esi
  int v6; // edi
  LONG (__stdcall *v7)(volatile LONG *); // ebx
  int v9; // edi

  if ( index >= *(unsigned __int16 *)(this + 0x22) ) /*0x74d8d0*/
  {
    v9 = (int)element; /*0x74d95b*/
    if ( element ) /*0x74d965*/
      InterlockedIncrement((volatile LONG *)&element->members); /*0x74d96b*/
    if ( index >= *(unsigned __int16 *)(this + 0x20) ) /*0x74d97a*/
      NiTObjectArray_Resize16((MEF_RefPointerArray16 *)(this + 0x18), index + *(unsigned __int16 *)(this + 0x26)); /*0x74d985*/
    NiTObjectArray_SetAt((MEF_RefPointerArray16 *)(this + 0x18), index, (void **)&element); /*0x74d992*/
    if ( v9 ) /*0x74d999*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v9 + 4)) ) /*0x74d99f*/
        (**(void (__thiscall ***)(int, int))v9)(v9, 1); /*0x74d9b1*/
    }
    *a2 = 0; /*0x74d9ba*/
    return a2; /*0x74d9b3*/
  }
  else
  {
    v5 = *(_DWORD *)(*(_DWORD *)(this + 0x1C) + 4 * index); /*0x74d8d9*/
    if ( v5 ) /*0x74d8de*/
      InterlockedIncrement((volatile LONG *)(v5 + 4)); /*0x74d8e4*/
    v6 = (int)element; /*0x74d8ea*/
    if ( element ) /*0x74d8f4*/
      InterlockedIncrement((volatile LONG *)&element->members); /*0x74d8fa*/
    NiTObjectArray_SetAt((MEF_RefPointerArray16 *)(this + 0x18), index, (void **)&element); /*0x74d909*/
    v7 = InterlockedDecrement; /*0x74d910*/
    if ( v6 ) /*0x74d916*/
    {
      if ( !v7((volatile LONG *)(v6 + 4)) ) /*0x74d91c*/
        (**(void (__thiscall ***)(int, int))v6)(v6, 1); /*0x74d92a*/
    }
    *a2 = v5; /*0x74d932*/
    if ( v5 ) /*0x74d935*/
    {
      InterlockedIncrement((volatile LONG *)(v5 + 4)); /*0x74d93b*/
      if ( !v7((volatile LONG *)(v5 + 4)) ) /*0x74d942*/
        (**(void (__thiscall ***)(int, int))v5)(v5, 1); /*0x74d950*/
    }
    return a2; /*0x74d954*/
  }
}
