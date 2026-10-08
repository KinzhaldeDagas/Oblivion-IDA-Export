NiDynamicEffectState *__userpurge sub_73CF30@<eax>(NiRenderer *this@<ecx>, size_t Size)
{
  _DWORD *v2; // ebx
  int (__cdecl *v4)(int, NiPropertyState **, int, size_t *, int); // edx
  NiPropertyState **p_propertyState; // ebp
  NiDynamicEffectState *result; // eax
  unsigned int v7; // edi
  bool v8; // zf
  int v9; // [esp-14h] [ebp-24h]
  size_t v10; // [esp-4h] [ebp-14h]

  v2 = (_DWORD *)Size; /*0x73cf31*/
  LODWORD(v10) = Size; /*0x73cf38*/
  sub_721610(this, v10); /*0x73cf3b*/
  v4 = *(int (__cdecl **)(int, NiPropertyState **, int, size_t *, int))(v2[0x87] + 4); /*0x73cf46*/
  p_propertyState = &this->members.propertyState; /*0x73cf52*/
  v9 = v2[0x87]; /*0x73cf56*/
  LODWORD(Size) = 4; /*0x73cf57*/
  result = (NiDynamicEffectState *)v4(v9, &this->members.propertyState, 4, &Size, 1); /*0x73cf5f*/
  if ( this->members.propertyState )
  {
    result = (NiDynamicEffectState *)FormHeapAlloc(
                                       (unsigned __int64)(unsigned int)this->members.propertyState >> 0x1E != 0
                                     ? 0xFFFFFFFF
                                     : 4 * (int)this->members.propertyState);
    v7 = 0; /*0x73cf83*/
    v8 = *p_propertyState == 0; /*0x73cf88*/
    this->members.dynamicEffectState = result; /*0x73cf8b*/
    if ( !v8 ) /*0x73cf8e*/
    {
      do /*0x73cfb4*/
      {
        *((_DWORD *)this->members.dynamicEffectState + v7) = 0; /*0x73cf9a*/
        result = (NiDynamicEffectState *)sub_713620(v2, (int)this->members.dynamicEffectState + 4 * v7++); /*0x73cfa9*/
      }
      while ( v7 < (unsigned int)*p_propertyState ); /*0x73cfb4*/
    }
  }
  else
  {
    this->members.dynamicEffectState = 0; /*0x73cfbd*/
  }
  return result; /*0x73cfb6*/
}
