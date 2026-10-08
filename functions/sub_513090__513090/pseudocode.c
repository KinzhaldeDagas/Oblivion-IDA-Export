bool __cdecl sub_513090(
        ParamInfo *a1,
        UInt8 *a2,
        TESObjectREFR *a4,
        TESObjectREFR *argC,
        Script *a5,
        ScriptEventList *l,
        int a7,
        UInt32 *a3)
{
  bool result; // al
  unsigned int v9; // eax
  __int64 v10; // rax
  const char *v11; // eax
  UInt16 v12[2]; // [esp+0h] [ebp-8h] BYREF
  IOTask *v13; // [esp+4h] [ebp-4h] BYREF

  *(_DWORD *)v12 = 0; /*0x5130ba*/
  result = Script_ExtractArgs(a1, a2, a3, a4, argC, a5, l, v12); /*0x5130c2*/
  if ( result ) /*0x5130cc*/
  {
    if ( *(_DWORD *)v12 ) /*0x5130d7*/
    {
      LOWORD(v9) = *(_WORD *)(*(_DWORD *)v12 + 0x20); /*0x5130d9*/
      if ( (_WORD)v9 == 0xFFFF ) /*0x5130e1*/
        v9 = strlen(*(const char **)(*(_DWORD *)v12 + 0x1C)); /*0x5130e7*/
      else
        v9 = (unsigned __int16)v9; /*0x5130fe*/
      if ( v9 ) /*0x513103*/
      {
        v10 = ((__int64 (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)(*(_DWORD *)v12 + 0x18) + 0x14))(*(_DWORD *)v12 + 0x18); /*0x51310d*/
        if ( !ModelLoader_IsModelLoaded__(MEMORY[0xB33A1C], SHIDWORD(v10), v10) ) /*0x513116*/
        {
          v11 = (const char *)(*(int (__thiscall **)(int))(*(_DWORD *)(*(_DWORD *)v12 + 0x18) + 0x14))(*(_DWORD *)v12 + 0x18); /*0x513133*/
          sub_43B420((int *)MEMORY[0xB33A1C], &v13, v11, 5u, 0, 0, 0, 1, 0); /*0x513141*/
          sub_4BDDC0((int *)&v13); /*0x51314a*/
        }
      }
    }
    return 1; /*0x51314f*/
  }
  return result; /*0x5130ce*/
}
