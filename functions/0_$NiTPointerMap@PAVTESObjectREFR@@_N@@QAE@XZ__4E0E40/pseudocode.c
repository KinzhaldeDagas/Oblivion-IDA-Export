NiTPointerMap<TESObjectREFR *,bool> *__thiscall NiTPointerMap<TESObjectREFR *,bool>::NiTPointerMap<TESObjectREFR *,bool>(
        NiTPointerMap<TESObjectREFR *,bool> *this)
{
  NiTPointerMap<TESObjectREFR *,bool> *v2; // esi
  ExtraDataList *v3; // ecx
  BSExtraDataVtbl *v4; // eax
  TESForm *v5; // eax
  char v7; // [esp+12h] [ebp-1Eh]
  char v8; // [esp+13h] [ebp-1Dh] BYREF
  unsigned int v9[2]; // [esp+14h] [ebp-1Ch] BYREF
  int v10; // [esp+1Ch] [ebp-14h]
  int v11; // [esp+20h] [ebp-10h]
  unsigned int v12; // [esp+2Ch] [ebp-4h]

  v9[1] = 0x25;
  v7 = 1;
  v11 = 0;
  v10 = FormHeapAlloc(0x94u);
  _memset(v10, 0, 0x94);
  v9[0] = (unsigned int)&NiTPointerMap<TESObjectREFR *,bool>::`vftable';
  v12 = 0;
  v2 = (NiTPointerMap<TESObjectREFR *,bool> *)sub_420260((ExtraDataList *)((char *)this + 0x44));
  if ( v2 )
  {
    while ( v7 )
    {
      if ( v2 == this )
      {
        v7 = 0;
      }
      else
      {
        NiTMap_SetAt(v9, (int)v2, 1);
        v3 = (ExtraDataList *)((char *)v2 + 0x44);
        if ( (*((_DWORD *)v2 + 2) & 8) != 0 )
        {
          v2 = (NiTPointerMap<TESObjectREFR *,bool> *)sub_420260(v3);
        }
        else
        {
          v4 = sub_420260(v3);
          if ( v4 )
          {
            v5 = TESForm_LookupByFormID((UInt32)v4);
            v2 = (NiTPointerMap<TESObjectREFR *,bool> *)OblivionDynamicCast(
                                                          v5,
                                                          0,
                                                          (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                                          (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
                                                          0);
          }
          else
          {
            v2 = 0;
          }
        }
        v8 = 0;
        if ( !v2 || sub_4D6760(v9, (int)v2, &v8) && v8 )
          break;
      }
    }
  }
  v12 = 0xFFFFFFFF;
  NiTPointerMap<TESObjectREFR *,bool>::~NiTPointerMap<TESObjectREFR *,bool>(v9);
  return (NiTPointerMap<TESObjectREFR *,bool> *)v7;
}
