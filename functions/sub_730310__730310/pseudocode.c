int __userpurge sub_730310@<eax>(NiRenderer *this@<ecx>, unsigned int a2@<edi>, size_t Size)
{
  int v3; // ebp
  void (__cdecl *v5)(int, NiPropertyState **, int, size_t *, int); // edx
  int result; // eax
  int v7; // eax
  int (__cdecl *v8)(int, int, int, size_t *, int); // eax
  int v9; // [esp-1Ch] [ebp-24h]
  int v10; // [esp-18h] [ebp-20h]
  int v11; // [esp-18h] [ebp-20h]
  int v12; // [esp-14h] [ebp-1Ch]

  v3 = Size;
  sub_721610(this, __PAIR64__(a2, Size));
  v5 = *(void (__cdecl **)(int, NiPropertyState **, int, size_t *, int))(*(_DWORD *)(v3 + 0x21C) + 4);
  v10 = *(_DWORD *)(v3 + 0x21C);
  LODWORD(Size) = 4;
  v5(v10, &this->members.propertyState, 4, &Size, 1);
  result = (int)this->members.propertyState;
  if ( result )
  {
    v7 = FormHeapAlloc((unsigned __int64)(unsigned int)result >> 0x1E != 0 ? 0xFFFFFFFF : 4 * result);
    v12 = 4 * (int)this->members.propertyState;
    this->members.dynamicEffectState = (NiDynamicEffectState *)v7;
    v11 = v7;
    v8 = *(int (__cdecl **)(int, int, int, size_t *, int))(*(_DWORD *)(v3 + 0x21C) + 4);
    v9 = *(_DWORD *)(v3 + 0x21C);
    LODWORD(Size) = 4;
    return v8(v9, v11, v12, &Size, 1);
  }
  else
  {
    this->members.dynamicEffectState = 0;
  }
  return result;
}
