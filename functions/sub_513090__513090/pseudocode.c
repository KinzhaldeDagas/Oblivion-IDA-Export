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

  *(_DWORD *)v12 = 0;
  result = Script_ExtractArgs(a1, a2, a3, a4, argC, a5, l, v12);
  if ( result )
  {
    if ( *(_DWORD *)v12 )
    {
      LOWORD(v9) = *(_WORD *)(*(_DWORD *)v12 + 0x20);
      if ( (_WORD)v9 == 0xFFFF )
        v9 = strlen(*(const char **)(*(_DWORD *)v12 + 0x1C));
      else
        v9 = (unsigned __int16)v9;
      if ( v9 )
      {
        v10 = ((__int64 (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)(*(_DWORD *)v12 + 0x18) + 0x14))(*(_DWORD *)v12 + 0x18);
        if ( !ModelLoader_IsModelLoaded__(ModelLoaderPtr, SHIDWORD(v10), v10) )
        {
          v11 = (const char *)(*(int (__thiscall **)(int))(*(_DWORD *)(*(_DWORD *)v12 + 0x18) + 0x14))(*(_DWORD *)v12 + 0x18);
          sub_43B420((int *)ModelLoaderPtr, &v13, v11, 5u, 0, 0, 0, 1, 0);
          sub_4BDDC0((int *)&v13);
        }
      }
    }
    return 1;
  }
  return result;
}
