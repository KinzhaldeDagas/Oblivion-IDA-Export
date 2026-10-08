int __thiscall sub_612960(_DWORD **this, char a2)
{
  int (__stdcall *v3)(int); // edx
  int v4; // esi
  int v5; // eax
  int result; // eax
  _BYTE *v7; // eax
  char v8; // al

  v3 = *(int (__stdcall **)(int))(**(this + 0xF) + 0x2B8); /*0x612970*/
  if ( !a2 ) /*0x612976*/
  {
    result = v3(5); /*0x6129b2*/
    if ( result ) /*0x6129b6*/
      return result; /*0x6129b6*/
    v5 = (*(int (__thiscall **)(_DWORD, int))(**(this + 0xF) + 0x2B8))(*(this + 0xF), 4); /*0x6129c5*/
LABEL_8:
    v4 = v5; /*0x6129c7*/
    if ( !v5 ) /*0x6129cb*/
      return v4; /*0x6129cb*/
    goto LABEL_9; /*0x6129cb*/
  }
  v4 = v3(0); /*0x61297c*/
  if ( !v4 ) /*0x612980*/
  {
    v4 = (*(int (__thiscall **)(_DWORD, int))(**(this + 0xF) + 0x2B8))(*(this + 0xF), 1); /*0x612991*/
    if ( !v4 ) /*0x612995*/
    {
      v4 = (*(int (__thiscall **)(_DWORD, int))(**(this + 0xF) + 0x2B8))(*(this + 0xF), 2); /*0x6129a6*/
      if ( !v4 ) /*0x6129aa*/
      {
        v5 = (*(int (__thiscall **)(_DWORD, int))(**(this + 0xF) + 0x2B8))(*(this + 0xF), 3); /*0x6129ae*/
        goto LABEL_8; /*0x6129ae*/
      }
    }
  }
LABEL_9:
  if ( a2 ) /*0x6129cf*/
  {
    v7 = OblivionDynamicCast( /*0x6129e3*/
           *(void **)(v4 + 8),
           0,
           (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
           &TESObjectWEAP `RTTI Type Descriptor',
           0);
    if ( v7 ) /*0x6129ed*/
    {
      v8 = v7[0x90]; /*0x6129ef*/
      if ( v8 == 4 || v8 == 5 ) /*0x6129fb*/
        return 0; /*0x612a02*/
    }
  }
  return v4; /*0x6129fd*/
}
