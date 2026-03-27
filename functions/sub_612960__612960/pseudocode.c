int __thiscall sub_612960(_DWORD **this, char a2)
{
  int (__stdcall *v3)(int); // edx
  int v4; // esi
  int v5; // eax
  int result; // eax
  _BYTE *v7; // eax
  char v8; // al

  v3 = *(int (__stdcall **)(int))(**(this + 0xF) + 0x2B8);
  if ( !a2 )
  {
    result = v3(5);
    if ( result )
      return result;
    v5 = (*(int (__thiscall **)(_DWORD, int))(**(this + 0xF) + 0x2B8))(*(this + 0xF), 4);
LABEL_8:
    v4 = v5;
    if ( !v5 )
      return v4;
    goto LABEL_9;
  }
  v4 = v3(0);
  if ( !v4 )
  {
    v4 = (*(int (__thiscall **)(_DWORD, int))(**(this + 0xF) + 0x2B8))(*(this + 0xF), 1);
    if ( !v4 )
    {
      v4 = (*(int (__thiscall **)(_DWORD, int))(**(this + 0xF) + 0x2B8))(*(this + 0xF), 2);
      if ( !v4 )
      {
        v5 = (*(int (__thiscall **)(_DWORD, int))(**(this + 0xF) + 0x2B8))(*(this + 0xF), 3);
        goto LABEL_8;
      }
    }
  }
LABEL_9:
  if ( a2 )
  {
    v7 = OblivionDynamicCast(
           *(void **)(v4 + 8),
           0,
           (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
           &TESObjectWEAP `RTTI Type Descriptor',
           0);
    if ( v7 )
    {
      v8 = v7[0x90];
      if ( v8 == 4 || v8 == 5 )
        return 0;
    }
  }
  return v4;
}
