unsigned int __userpurge sub_730310@<eax>(NiRenderer *this@<ecx>, unsigned int a2@<edi>, size_t Size)
{
  int v3; // ebp
  void (__cdecl *v5)(int, NiPropertyState **, int, size_t *, int); // edx
  unsigned int result; // eax
  NiDynamicEffectState *v7; // eax
  int (__cdecl *v8)(int, NiDynamicEffectState *, int, size_t *, int); // eax
  int v9; // [esp-1Ch] [ebp-24h]
  int v10; // [esp-18h] [ebp-20h]
  NiDynamicEffectState *v11; // [esp-18h] [ebp-20h]
  int v12; // [esp-14h] [ebp-1Ch]

  v3 = Size; /*0x730311*/
  sub_721610(this, __PAIR64__(a2, Size)); /*0x73031a*/
  v5 = *(void (__cdecl **)(int, NiPropertyState **, int, size_t *, int))(*(_DWORD *)(v3 + 0x21C) + 4); /*0x730325*/
  v10 = *(_DWORD *)(v3 + 0x21C); /*0x730335*/
  LODWORD(Size) = 4; /*0x730336*/
  v5(v10, &this->members.propertyState, 4, &Size, 1); /*0x73033e*/
  result = (unsigned int)this->members.propertyState; /*0x730340*/
  if ( result )
  {
    v7 = (NiDynamicEffectState *)FormHeapAlloc((unsigned __int64)result >> 0x1E != 0 ? 0xFFFFFFFF : 4 * result);
    v12 = 4 * (int)this->members.propertyState; /*0x73036c*/
    this->members.dynamicEffectState = v7; /*0x73036d*/
    v11 = v7; /*0x730376*/
    v8 = *(int (__cdecl **)(int, NiDynamicEffectState *, int, size_t *, int))(*(_DWORD *)(v3 + 0x21C) + 4); /*0x730377*/
    v9 = *(_DWORD *)(v3 + 0x21C); /*0x73037a*/
    LODWORD(Size) = 4; /*0x73037b*/
    return v8(v9, v11, v12, &Size, 1); /*0x730383*/
  }
  else
  {
    this->members.dynamicEffectState = 0; /*0x73038f*/
  }
  return result; /*0x730389*/
}
