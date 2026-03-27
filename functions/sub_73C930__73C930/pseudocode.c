int __userpurge sub_73C930@<eax>(NiRenderer *this@<ecx>, unsigned int a2@<edi>, size_t Size)
{
  _DWORD *v3; // ebp
  void (__cdecl *v5)(int, NiPropertyState **, int, size_t *, int); // edx
  int *p_propertyState; // edi
  unsigned int v7; // ebx
  int v8; // eax
  bool v9; // zf
  int v10; // ebp
  int (__cdecl *v11)(int, UInt32 *, int, size_t *, int); // eax
  int v13; // [esp-18h] [ebp-24h]

  v3 = (_DWORD *)Size;
  sub_721610(this, __PAIR64__(a2, Size));
  v5 = *(void (__cdecl **)(int, NiPropertyState **, int, size_t *, int))(v3[0x87] + 4);
  p_propertyState = (int *)&this->members.propertyState;
  v13 = v3[0x87];
  LODWORD(Size) = 4;
  v5(v13, &this->members.propertyState, 4, &Size, 1);
  v7 = 0;
  if ( this->members.propertyState )
  {
    v8 = FormHeapAlloc((unsigned __int64)(unsigned int)*p_propertyState >> 0x1E != 0 ? 0xFFFFFFFF : 4 * *p_propertyState);
    v9 = *p_propertyState == 0;
    this->members.dynamicEffectState = (NiDynamicEffectState *)v8;
    if ( !v9 )
    {
      do
        sub_713620(v3, (int)this->members.dynamicEffectState + 4 * v7++);
      while ( v7 < *p_propertyState );
    }
  }
  else
  {
    this->members.dynamicEffectState = 0;
  }
  v10 = v3[0x87];
  v11 = *(int (__cdecl **)(int, UInt32 *, int, size_t *, int))(v10 + 4);
  LODWORD(Size) = 4;
  return v11(v10, this->members.pad014, 4, &Size, 1);
}
