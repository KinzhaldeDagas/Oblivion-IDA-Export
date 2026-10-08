unsigned int __thiscall sub_9A2290(NiRenderTargetGroup *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  unsigned __int16 *v3; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx

  v2 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x9a2291*/
  sub_7009A0(this, a2); /*0x9a2297*/
  v3 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_BAA888.name); /*0x9a22a2*/
  end = v2->end; /*0x9a22a7*/
  capacity = v2->capacity; /*0x9a22ab*/
  a2 = v3; /*0x9a22b4*/
  if ( end >= capacity ) /*0x9a22b8*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x9a22c3*/
  return NiTArray_SetAt(v2, end, &a2); /*0x9a22d5*/
}
