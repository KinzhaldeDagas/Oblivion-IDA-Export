NiTPointerMap<TESObjectREFR *,bool> *__thiscall NiTPointerMap<TESObjectREFR *,bool>::NiTPointerMap<TESObjectREFR *,bool>(
        NiTPointerMap<TESObjectREFR *,bool> *this)
{
  NiTPointerMap<TESObjectREFR *,bool> *EnableStateParent; // esi
  ExtraDataList *v3; // ecx
  BSExtraDataVtbl *v4; // eax
  TESForm *v5; // eax
  char v7; // [esp+12h] [ebp-1Eh]
  UInt8 valueOut; // [esp+13h] [ebp-1Dh] BYREF
  unsigned int v9[2]; // [esp+14h] [ebp-1Ch] BYREF
  int v10; // [esp+1Ch] [ebp-14h]
  int v11; // [esp+20h] [ebp-10h]
  unsigned int v12; // [esp+2Ch] [ebp-4h]

  v9[1] = 0x25; /*0x4e0e6f*/
  v7 = 1; /*0x4e0e7f*/
  v11 = 0; /*0x4e0e8c*/
  v10 = FormHeapAlloc(0x94u); /*0x4e0ea8*/
  _memset(v10, 0, 0x94u); /*0x4e0eac*/
  v9[0] = (unsigned int)&NiTPointerMap<TESObjectREFR *,bool>::`vftable'; /*0x4e0eb4*/
  v12 = 0; /*0x4e0ebf*/
  EnableStateParent = (NiTPointerMap<TESObjectREFR *,bool> *)ExtraDataList_GetEnableStateParent((ExtraDataList *)((char *)this + 0x44)); /*0x4e0ec8*/
  if ( EnableStateParent ) /*0x4e0ecc*/
  {
    while ( v7 ) /*0x4e0ed6*/
    {
      if ( EnableStateParent == this ) /*0x4e0eda*/
      {
        v7 = 0; /*0x4e0edc*/
      }
      else
      {
        NiTMap_SetAt(v9, (int)EnableStateParent, 1); /*0x4e0ee9*/
        v3 = (ExtraDataList *)((char *)EnableStateParent + 0x44); /*0x4e0ef6*/
        if ( (*((_DWORD *)EnableStateParent + 2) & 8) != 0 ) /*0x4e0ef9*/
        {
          EnableStateParent = (NiTPointerMap<TESObjectREFR *,bool> *)ExtraDataList_GetEnableStateParent(v3); /*0x4e0f00*/
        }
        else
        {
          v4 = ExtraDataList_GetEnableStateParent(v3); /*0x4e0f04*/
          if ( v4 ) /*0x4e0f0b*/
          {
            v5 = TESForm_LookupByFormID((UInt32)v4); /*0x4e0f1a*/
            EnableStateParent = (NiTPointerMap<TESObjectREFR *,bool> *)OblivionDynamicCast( /*0x4e0f2b*/
                                                                         v5,
                                                                         0,
                                                                         (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                                                         (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
                                                                         0);
          }
          else
          {
            EnableStateParent = 0; /*0x4e0f2f*/
          }
        }
        valueOut = 0; /*0x4e0f33*/
        if ( !EnableStateParent || NiTMap_TryGetAtByteValue(v9, (UInt32)EnableStateParent, &valueOut) && valueOut ) /*0x4e0f50*/
          break; /*0x4e0f50*/
      }
    }
  }
  v12 = 0xFFFFFFFF; /*0x4e0f52*/
  NiTPointerMap<TESObjectREFR *,bool>::~NiTPointerMap<TESObjectREFR *,bool>(v9); /*0x4e0f5e*/
  return (NiTPointerMap<TESObjectREFR *,bool> *)v7; /*0x4e0f67*/
}
