void *__thiscall sub_4BAF50(TESForm *this, TESForm *a2)
{
  unsigned int v2; // edi
  void *result; // eax
  int v5; // ebx
  unsigned int v6; // ebp
  NiTArray_NiTexturingPropertyMap *v7; // esi
  int i; // eax
  int v9; // ecx

  v2 = 0;
  result = OblivionDynamicCast(
             a2,
             0,
             (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
             &TESObjectTREE `RTTI Type Descriptor',
             0);
  v5 = (int)result;
  if ( result )
  {
    TESForm_CopyAllComponentsFrom(this, a2);
    v6 = *(unsigned __int16 *)(v5 + 0x52);
    v7 = (NiTArray_NiTexturingPropertyMap *)(this + 3);
    for ( i = 0; (unsigned __int16)i < v7->end; *((_DWORD *)&v7->data->vtbl + v9) = 0 )
      v9 = (unsigned __int16)i++;
    v7->end = 0;
    v7->numObjs = 0;
    if ( v6 )
    {
      do
        sub_4BACA0(v7, (_DWORD *)(*(_DWORD *)(v5 + 0x4C) + 4 * v2++));
      while ( v2 < v6 );
    }
    qmemcpy((char *)this + 0x58, (const void *)(*(int (__thiscall **)(int))(*(_DWORD *)v5 + 0x12C))(v5), 0x20u);
    *((_DWORD *)this + 0x1E) = *(_DWORD *)(v5 + 0x78);
    result = *(void **)(v5 + 0x7C);
    *((_DWORD *)this + 0x1F) = result;
  }
  return result;
}
