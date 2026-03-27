void __cdecl sub_46D940(void *a1, Data *a2)
{
  _DWORD *v2; // eax
  const char *v3; // [esp-8h] [ebp-Ch]

  if ( a1 )
  {
    if ( a2 )
    {
      v3 = (const char *)(*(int (__thiscall **)(void *))(*(_DWORD *)a1 + 0x14))(a1);
      v2 = OblivionDynamicCast(
             a1,
             0,
             (struct _s_RTTICompleteObjectLocator *)&TESModel `RTTI Type Descriptor',
             (struct TypeDescriptor *)&TESForm `RTTI Type Descriptor',
             0);
      sub_46D750((_BYTE *)a1 + 0x10, a2, v2, v3);
    }
  }
}
