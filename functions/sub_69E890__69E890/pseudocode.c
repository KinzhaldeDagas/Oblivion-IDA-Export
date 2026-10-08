char __thiscall sub_69E890(void *this)
{
  char v2; // bl
  TESForm *v3; // eax
  void *v4; // eax
  void *v5; // edi
  void (__thiscall *v6)(void *, _DWORD, int, int, int); // edx
  int v8; // [esp-Ch] [ebp-20h]
  int v9; // [esp-8h] [ebp-1Ch]
  int v10; // [esp-4h] [ebp-18h]
  unsigned __int8 v11; // [esp+7h] [ebp-Dh] BYREF
  int a1; // [esp+8h] [ebp-Ch]
  unsigned int destination; // [esp+10h] [ebp-4h] BYREF

  v2 = 1; /*0x69e8a5*/
  SaveLoad_LoadFormID(g_TESSaveLoadGame, &destination, 4u); /*0x69e8a7*/
  v3 = TESForm_LookupByFormID(a1); /*0x69e8bf*/
  v4 = OblivionDynamicCast( /*0x69e8c8*/
         v3,
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
         (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
         0);
  *((_DWORD *)this + 7) = v4; /*0x69e8d2*/
  if ( !v4 || !Shared_GetDwordAtOffset40(v4) || *(_BYTE *)(Shared_GetDwordAtOffset40(*((void **)this + 7)) + 0x26) != 6 ) /*0x69e8ee*/
    v2 = 0; /*0x69e8f0*/
  SaveLoad_LoadData(g_TESSaveLoadGame, &v11, 1u); /*0x69e8ff*/
  v5 = (void *)FormHeapAlloc(v11 + 1); /*0x69e91b*/
  _memset((int)v5, 0, v11 + 1); /*0x69e920*/
  SaveLoad_LoadData(g_TESSaveLoadGame, v5, v11); /*0x69e935*/
  v6 = *(void (__thiscall **)(void *, _DWORD, int, int, int))(*(_DWORD *)this + 0x7C); /*0x69e93f*/
  v8 = *((_DWORD *)this + 7); /*0x69e942*/
  *((_BYTE *)this + 0x28) = 1; /*0x69e947*/
  v6(this, 0, v8, v9, v10); /*0x69e94b*/
  if ( v2 ) /*0x69e94f*/
  {
    (*(void (__thiscall **)(void *, _DWORD, _DWORD))(*(_DWORD *)this + 0x80))(this, 0, *((_DWORD *)this + 7)); /*0x69e961*/
    (*(void (__thiscall **)(void *, _DWORD, _DWORD, void *))(*(_DWORD *)this + 0x84))( /*0x69e974*/
      this,
      0,
      *((_DWORD *)this + 7),
      v5);
  }
  return v2; /*0x69e976*/
}
