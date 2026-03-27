unsigned __int8 __thiscall sub_626600(_DWORD *this)
{
  TESForm *v5; // eax
  TESForm *v6; // eax
  TESForm *v7; // eax
  unsigned __int8 result; // al
  _DWORD *v9; // ecx
  int v10; // edi
  __int16 v11; // bx
  __int16 v12; // bp
  _DWORD *v13; // eax
  _DWORD *v14; // ecx

  sub_5660F0(this);
  v5 = TESForm_LookupByFormID(this[0x12]);
  this[0x12] = OblivionDynamicCast(
                 v5,
                 0,
                 (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                 &Actor `RTTI Type Descriptor',
                 0);
  v6 = TESForm_LookupByFormID(this[0x17]);
  this[0x17] = OblivionDynamicCast(
                 v6,
                 0,
                 (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                 &Actor `RTTI Type Descriptor',
                 0);
  v7 = TESForm_LookupByFormID(this[0x18]);
  this[0x18] = OblivionDynamicCast(
                 v7,
                 0,
                 (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                 &Actor `RTTI Type Descriptor',
                 0);
  result = (unsigned __int8)SaveLoad_CurrentSavegame[1].createdObjectList.next;
  if ( result >= 0x20u )
  {
    v9 = (_DWORD *)this[0x14];
    if ( v9 )
      result = sub_6B7B60(v9);
  }
  if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) < 0x20u )
  {
    v10 = this[0x14];
    v11 = *((_WORD *)this + 0x2A);
    v12 = *((_WORD *)this + 0x2C);
    if ( v10 )
    {
      if ( FormHeapAlloc(0x10u) )
        v13 = (_DWORD *)sub_6B7420(this[0x17], this[0x18], this[0x10], v10);
      else
        v13 = 0;
      this[0x14] = v13;
      if ( v11 == (__int16)0xFFFF )
        this[0x15] = 0;
      else
        this[0x15] = sub_6B7560(v13, v11);
      v14 = (_DWORD *)this[0x15];
      if ( !v14 || v12 == (__int16)0xFFFF )
        this[0x16] = 0;
      else
        this[0x16] = sub_6B7CA0(v14, v12);
      sub_6B74F0((_DWORD *)this[0x14], this[0x15]);
      return (unsigned __int8)sub_6B74F0((_DWORD *)this[0x15], this[0x16]);
    }
  }
  return result;
}
