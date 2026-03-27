unsigned __int8 **__thiscall sub_5206B0(unsigned __int8 **this, int a2, _BYTE *a3)
{
  unsigned __int8 **v4; // esi
  int v5; // eax
  UInt32 v6; // ebx
  UInt32 v7; // esi
  TESObjectREFR *v8; // ecx
  void *v9; // eax
  unsigned __int8 **v10; // eax
  unsigned __int8 **result; // eax
  unsigned __int8 **v12; // [esp+8h] [ebp-4h]

  v4 = 0;
  v12 = 0;
  if ( ((unsigned int)*(this + 2) & 0x20) != 0 )
    return 0;
  if ( !sub_56A950(this + 0xC, a2, a3) )
    return v4;
  if ( *((char *)this + 0x38) < 0 || sub_520220(this) )
  {
    v12 = this;
    v4 = this;
  }
  v5 = (int)*(this + 0xF);
  if ( !v5 )
    return v4;
  v6 = *(_DWORD *)(v5 + 0xC);
  if ( !v6 )
    return v4;
  v7 = 0;
  while ( 1 )
  {
    v8 = (TESObjectREFR *)*(this + 0xF);
    if ( v8 )
    {
      v9 = (void *)sub_494ED0(v8, v7);
      v10 = (unsigned __int8 **)OblivionDynamicCast(
                                  v9,
                                  0,
                                  (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                  &TESIdleForm `RTTI Type Descriptor',
                                  0);
      if ( v10 )
      {
        result = sub_5206B0(v10, a2, a3);
        if ( result )
          break;
      }
    }
    if ( ++v7 >= v6 )
      return v12;
  }
  return result;
}
