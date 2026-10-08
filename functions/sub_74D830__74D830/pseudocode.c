MEF_RefPointerArray16 **__thiscall sub_74D830(int this, MEF_RefPointerArray16 **element, NiObject *a3)
{
  MEF_RefPointerArray16 **result; // eax
  MEF_RefPointerArray16 *v4; // ebx
  unsigned int v5; // edi
  NiObject *v6; // ebp
  NiObject *v7; // eax
  NiObject *v8; // esi

  result = element; /*0x74d834*/
  if ( (unsigned int)element < *(unsigned __int16 *)(this + 0x7E) ) /*0x74d83a*/
  {
    result = (MEF_RefPointerArray16 **)(*(_DWORD *)(this + 0x78) + 4 * (_DWORD)element); /*0x74d843*/
    if ( *result ) /*0x74d83f*/
    {
      v4 = *result; /*0x74d849*/
      v5 = 0; /*0x74d84c*/
      if ( (*result)->capacity ) /*0x74d84e*/
      {
        v6 = a3; /*0x74d855*/
        do /*0x74d8ad*/
        {
          v7 = NiObject_CloneWithPointerMap(v6); /*0x74d862*/
          v8 = v7; /*0x74d867*/
          element = (MEF_RefPointerArray16 **)v7; /*0x74d86b*/
          if ( v7 ) /*0x74d86f*/
            InterlockedIncrement((volatile LONG *)&v7->members); /*0x74d875*/
          result = (MEF_RefPointerArray16 **)NiTObjectArray_SetAt(v4, v5, (void **)&element); /*0x74d883*/
          if ( v8 ) /*0x74d88a*/
          {
            result = (MEF_RefPointerArray16 **)InterlockedDecrement((volatile LONG *)&v8->members); /*0x74d890*/
            if ( !result ) /*0x74d898*/
              result = (MEF_RefPointerArray16 **)((int (__thiscall *)(NiObject *, int))v8->__vftable->super.Destructor)( /*0x74d8a2*/
                                                   v8,
                                                   1);
          }
          ++v5; /*0x74d8a8*/
        }
        while ( v5 < v4->capacity ); /*0x74d8ad*/
      }
    }
  }
  return result; /*0x74d8b3*/
}
