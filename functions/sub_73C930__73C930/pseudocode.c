int __userpurge sub_73C930@<eax>(NiRenderer *this@<ecx>, unsigned int a2@<edi>, size_t Size)
{
  _DWORD *v3; // ebp
  void (__cdecl *v5)(int, NiPropertyState **, int, size_t *, int); // edx
  NiPropertyState **p_propertyState; // edi
  unsigned int v7; // ebx
  NiDynamicEffectState *v8; // eax
  bool v9; // zf
  int v10; // ebp
  int (__cdecl *v11)(int, UInt32 *, int, size_t *, int); // eax
  int v13; // [esp-18h] [ebp-24h]

  v3 = (_DWORD *)Size; /*0x73c932*/
  sub_721610(this, __PAIR64__(a2, Size)); /*0x73c93b*/
  v5 = *(void (__cdecl **)(int, NiPropertyState **, int, size_t *, int))(v3[0x87] + 4); /*0x73c946*/
  p_propertyState = &this->members.propertyState; /*0x73c952*/
  v13 = v3[0x87]; /*0x73c956*/
  LODWORD(Size) = 4; /*0x73c957*/
  v5(v13, &this->members.propertyState, 4, &Size, 1); /*0x73c95f*/
  v7 = 0; /*0x73c963*/
  if ( this->members.propertyState )
  {
    v8 = (NiDynamicEffectState *)FormHeapAlloc(
                                   (unsigned __int64)(unsigned int)*p_propertyState >> 0x1E != 0
                                 ? 0xFFFFFFFF
                                 : 4 * (_DWORD)*p_propertyState);
    v9 = *p_propertyState == 0; /*0x73c985*/
    this->members.dynamicEffectState = v8; /*0x73c987*/
    if ( !v9 ) /*0x73c98a*/
    {
      do /*0x73c9a3*/
        sub_713620(v3, (int)this->members.dynamicEffectState + 4 * v7++); /*0x73c999*/
      while ( v7 < (unsigned int)*p_propertyState ); /*0x73c9a3*/
    }
  }
  else
  {
    this->members.dynamicEffectState = 0; /*0x73c9a7*/
  }
  v10 = v3[0x87]; /*0x73c9aa*/
  v11 = *(int (__cdecl **)(int, UInt32 *, int, size_t *, int))(v10 + 4); /*0x73c9b0*/
  LODWORD(Size) = 4; /*0x73c9c1*/
  return v11(v10, this->members.pad014, 4, &Size, 1); /*0x73c9cf*/
}
