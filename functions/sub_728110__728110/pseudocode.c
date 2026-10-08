NiDynamicEffectState *__userpurge sub_728110@<eax>(NiRenderer *this@<ecx>, size_t Size)
{
  int v2; // ebx
  void (__cdecl *v4)(int, NiDynamicEffectState **, int, size_t *, int); // edx
  unsigned int *p_dynamicEffectState; // edi
  NiDynamicEffectState *result; // eax
  NiPropertyState *v7; // eax
  NiDynamicEffectState *(__cdecl *v8)(int, NiPropertyState *, unsigned int, size_t *, int); // eax
  int v9; // [esp-18h] [ebp-24h]
  int v10; // [esp-14h] [ebp-20h]
  NiPropertyState *v11; // [esp-14h] [ebp-20h]
  unsigned int v12; // [esp-10h] [ebp-1Ch]
  size_t v13; // [esp-4h] [ebp-10h]

  v2 = Size; /*0x728111*/
  LODWORD(v13) = Size; /*0x728117*/
  sub_721610(this, v13); /*0x72811a*/
  v4 = *(void (__cdecl **)(int, NiDynamicEffectState **, int, size_t *, int))(*(_DWORD *)(v2 + 0x21C) + 4); /*0x728125*/
  p_dynamicEffectState = (unsigned int *)&this->members.dynamicEffectState; /*0x728131*/
  v10 = *(_DWORD *)(v2 + 0x21C); /*0x728135*/
  LODWORD(Size) = 4; /*0x728136*/
  v4(v10, &this->members.dynamicEffectState, 4, &Size, 1); /*0x72813e*/
  result = this->members.dynamicEffectState; /*0x728140*/
  if ( result ) /*0x728147*/
  {
    v7 = (NiPropertyState *)FormHeapAlloc(*p_dynamicEffectState); /*0x72814a*/
    v12 = *p_dynamicEffectState; /*0x728158*/
    this->members.propertyState = v7; /*0x728159*/
    v11 = v7; /*0x728162*/
    v8 = *(NiDynamicEffectState *(__cdecl **)(int, NiPropertyState *, unsigned int, size_t *, int))(*(_DWORD *)(v2 + 0x21C) /*0x728163*/
                                                                                                  + 4);
    v9 = *(_DWORD *)(v2 + 0x21C); /*0x728166*/
    LODWORD(Size) = 1; /*0x728167*/
    return v8(v9, v11, v12, &Size, 1); /*0x72816f*/
  }
  return result; /*0x728174*/
}
