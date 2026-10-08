unsigned int __thiscall sub_49FF20(const char **this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  unsigned __int16 *v4; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx
  unsigned __int16 *v7; // eax
  unsigned int v8; // edi
  const char *v10; // [esp-8h] [ebp-14h]

  v2 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x49ff22*/
  sub_6CA440(this, a2); /*0x49ff2a*/
  v4 = (unsigned __int16 *)TESOutput_PrintString(*(char **)&MEMORY[0xB33E90][0x13E0]); /*0x49ff35*/
  end = v2->end; /*0x49ff3a*/
  capacity = v2->capacity; /*0x49ff3e*/
  a2 = v4; /*0x49ff47*/
  if ( end >= capacity ) /*0x49ff4b*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x49ff56*/
  NiTArray_SetAt(v2, end, &a2); /*0x49ff63*/
  v7 = (unsigned __int16 *)FormHeapAlloc(0x20u); /*0x49ff6a*/
  v10 = *(this + 0x17); /*0x49ff72*/
  a2 = v7; /*0x49ff79*/
  _sprintf((char *)v7, "AccumRoot = %s", v10); /*0x49ff7d*/
  v8 = v2->end; /*0x49ff82*/
  if ( v8 >= v2->capacity ) /*0x49ff8f*/
    NiTArray_SetSize((unsigned __int16 *)v2, v8 + v2->growSize); /*0x49ff9a*/
  return NiTArray_SetAt(v2, v8, &a2); /*0x49ffac*/
}
