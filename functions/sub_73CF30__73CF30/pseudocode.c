NiDynamicEffectState *__userpurge sub_73CF30@<eax>(NiRenderer *this@<ecx>, size_t Size)
{
  _DWORD *v2; // ebx
  int (__cdecl *v4)(int, NiPropertyState **, int, size_t *, int); // edx
  int *p_propertyState; // ebp
  NiDynamicEffectState *result; // eax
  unsigned int v7; // edi
  bool v8; // zf
  int v9; // [esp-14h] [ebp-24h]
  size_t v10; // [esp-4h] [ebp-14h]

  v2 = (_DWORD *)Size;
  LODWORD(v10) = Size;
  sub_721610(this, v10);
  v4 = *(int (__cdecl **)(int, NiPropertyState **, int, size_t *, int))(v2[0x87] + 4);
  p_propertyState = (int *)&this->members.propertyState;
  v9 = v2[0x87];
  LODWORD(Size) = 4;
  result = (NiDynamicEffectState *)v4(v9, &this->members.propertyState, 4, &Size, 1);
  if ( this->members.propertyState )
  {
    result = (NiDynamicEffectState *)FormHeapAlloc(
                                       (unsigned __int64)(unsigned int)this->members.propertyState >> 0x1E != 0
                                     ? 0xFFFFFFFF
                                     : 4 * (int)this->members.propertyState);
    v7 = 0;
    v8 = *p_propertyState == 0;
    this->members.dynamicEffectState = result;
    if ( !v8 )
    {
      do
      {
        *((_DWORD *)this->members.dynamicEffectState + v7) = 0;
        result = (NiDynamicEffectState *)sub_713620(v2, (int)this->members.dynamicEffectState + 4 * v7++);
      }
      while ( v7 < *p_propertyState );
    }
  }
  else
  {
    this->members.dynamicEffectState = 0;
  }
  return result;
}
