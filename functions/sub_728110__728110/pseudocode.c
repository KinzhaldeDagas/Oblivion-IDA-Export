NiDynamicEffectState *__userpurge sub_728110@<eax>(NiRenderer *this@<ecx>, size_t Size)
{
  int v2; // ebx
  void (__cdecl *v4)(int, NiDynamicEffectState **, int, size_t *, int); // edx
  unsigned int *p_dynamicEffectState; // edi
  NiDynamicEffectState *result; // eax
  int v7; // eax
  int (__cdecl *v8)(int, int, unsigned int, size_t *, int); // eax
  int v9; // [esp-18h] [ebp-24h]
  int v10; // [esp-14h] [ebp-20h]
  int v11; // [esp-14h] [ebp-20h]
  unsigned int v12; // [esp-10h] [ebp-1Ch]
  size_t v13; // [esp-4h] [ebp-10h]

  v2 = Size;
  LODWORD(v13) = Size;
  sub_721610(this, v13);
  v4 = *(void (__cdecl **)(int, NiDynamicEffectState **, int, size_t *, int))(*(_DWORD *)(v2 + 0x21C) + 4);
  p_dynamicEffectState = (unsigned int *)&this->members.dynamicEffectState;
  v10 = *(_DWORD *)(v2 + 0x21C);
  LODWORD(Size) = 4;
  v4(v10, &this->members.dynamicEffectState, 4, &Size, 1);
  result = this->members.dynamicEffectState;
  if ( result )
  {
    v7 = FormHeapAlloc(*p_dynamicEffectState);
    v12 = *p_dynamicEffectState;
    this->members.propertyState = (NiPropertyState *)v7;
    v11 = v7;
    v8 = *(int (__cdecl **)(int, int, unsigned int, size_t *, int))(*(_DWORD *)(v2 + 0x21C) + 4);
    v9 = *(_DWORD *)(v2 + 0x21C);
    LODWORD(Size) = 1;
    return (NiDynamicEffectState *)v8(v9, v11, v12, &Size, 1);
  }
  return result;
}
