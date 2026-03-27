int __userpurge sub_73B220@<eax>(NiRenderer *this@<ecx>, size_t Size)
{
  signed int v2; // edi
  int result; // eax
  void (__cdecl *v5)(int, NiPropertyState **, int, size_t *, int); // eax
  void (__cdecl *v6)(int, NiDynamicEffectState **, int, size_t *, int); // eax
  void (__cdecl *v7)(int, UInt32 *, int, size_t *, int); // eax
  int v8; // edi
  int (__cdecl *v9)(int, UInt32 *, int, size_t *, int); // edx
  int v10; // [esp-40h] [ebp-54h]
  int v11; // [esp-2Ch] [ebp-40h]
  int v12; // [esp-18h] [ebp-2Ch]
  size_t v13; // [esp-4h] [ebp-18h]
  float v14[3]; // [esp+8h] [ebp-Ch] BYREF

  v2 = Size;
  LODWORD(v13) = Size;
  sub_721610(this, v13);
  if ( *(_DWORD *)(v2 + 0xD8) >= 0x500000Eu )
  {
    v12 = *(_DWORD *)(v2 + 0x21C);
    v5 = *(void (__cdecl **)(int, NiPropertyState **, int, size_t *, int))(v12 + 4);
    LODWORD(Size) = 4;
    v5(v12, &this->members.propertyState, 4, &Size, 1);
    v11 = *(_DWORD *)(v2 + 0x21C);
    v6 = *(void (__cdecl **)(int, NiDynamicEffectState **, int, size_t *, int))(v11 + 4);
    LODWORD(Size) = 4;
    v6(v11, &this->members.dynamicEffectState, 4, &Size, 1);
    v10 = *(_DWORD *)(v2 + 0x21C);
    v7 = *(void (__cdecl **)(int, UInt32 *, int, size_t *, int))(v10 + 4);
    LODWORD(Size) = 4;
    v7(v10, this->members.pad014, 4, &Size, 1);
    v8 = *(_DWORD *)(v2 + 0x21C);
    v9 = *(int (__cdecl **)(int, UInt32 *, int, size_t *, int))(v8 + 4);
    LODWORD(Size) = 4;
    return v9(v8, &this->members.pad014[1], 4, &Size, 1);
  }
  else
  {
    result = sub_709430((char *)v14, v2);
    *(float *)&this->members.propertyState = v14[0];
    *(float *)&this->members.dynamicEffectState = v14[1];
    *(float *)this->members.pad014 = v14[2];
    *(float *)&this->members.pad014[1] = 0.0;
  }
  return result;
}
