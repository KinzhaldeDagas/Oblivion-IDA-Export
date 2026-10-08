_DWORD *__thiscall sub_4BAF50(TESForm *this, TESForm *a2)
{
  unsigned int v2; // edi
  _DWORD *result; // eax
  _DWORD *v5; // ebx
  unsigned int v6; // ebp
  NiTArray_NiTexturingPropertyMap *v7; // esi
  int i; // eax
  int v9; // ecx

  v2 = 0; /*0x4baf59*/
  result = OblivionDynamicCast( /*0x4baf6e*/
             a2,
             0,
             (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
             &TESObjectTREE `RTTI Type Descriptor',
             0);
  v5 = result; /*0x4baf73*/
  if ( result ) /*0x4baf7a*/
  {
    TESForm_CopyAllComponentsFrom(this, a2); /*0x4baf7f*/
    v6 = *((unsigned __int16 *)v5 + 0x29); /*0x4baf84*/
    v7 = (NiTArray_NiTexturingPropertyMap *)(this + 3); /*0x4baf88*/
    for ( i = 0; (unsigned __int16)i < v7->end; *((_DWORD *)&v7->data->vtbl + v9) = 0 ) /*0x4baf8d*/
      v9 = (unsigned __int16)i++; /*0x4baf96*/
    v7->end = 0; /*0x4bafa7*/
    v7->numObjs = 0; /*0x4bafab*/
    if ( v6 ) /*0x4bafaf*/
    {
      do /*0x4bafc4*/
        sub_4BACA0(v7, (_DWORD *)(v5[0x13] + 4 * v2++)); /*0x4bafba*/
      while ( v2 < v6 ); /*0x4bafc4*/
    }
    qmemcpy((char *)this + 0x58, (const void *)(*(int (__thiscall **)(_DWORD *))(*v5 + 0x12C))(v5), 0x20u); /*0x4bafe0*/
    *((_DWORD *)this + 0x1E) = v5[0x1E]; /*0x4bafe5*/
    result = (_DWORD *)v5[0x1F]; /*0x4bafe8*/
    *((_DWORD *)this + 0x1F) = result; /*0x4bafeb*/
  }
  return result; /*0x4bafee*/
}
