char __cdecl sub_50B070(int a1, int a2, void *a3)
{
  char *v3; // eax
  char *v4; // esi
  int v5; // ecx

  if ( !a3 ) /*0x50b076*/
    return 1; /*0x50b0b5*/
  v3 = (char *)OblivionDynamicCast( /*0x50b088*/
                 a3,
                 0,
                 (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                 &Actor `RTTI Type Descriptor',
                 0);
  v4 = v3; /*0x50b08d*/
  if ( v3 ) /*0x50b094*/
  {
    sub_423970((ExtraDataList *)(v3 + 0x44), 0); /*0x50b09b*/
    v5 = *((_DWORD *)v4 + 0x16); /*0x50b0a0*/
    if ( v5 ) /*0x50b0a5*/
      (*(void (__thiscall **)(int))(*(_DWORD *)v5 + 0x4A0))(v5); /*0x50b0af*/
  }
  return 1; /*0x50b0b4*/
}
