char sub_509D10()
{
  int v3; // edi
  unsigned __int8 *v4; // esi
  void **v5; // ebp
  int v6; // eax
  const char *v7; // eax
  const char *v9; // [esp-10h] [ebp-14h]
  int v10; // [esp-Ch] [ebp-10h]

  v3 = TESDataHandler + 0x84;
  if ( TESDataHandler != 0xFFFFFF7C )
  {
    do
    {
      v4 = *(unsigned __int8 **)v3;
      if ( !*(_DWORD *)v3 )
        break;
      v3 = *(_DWORD *)(v3 + 4);
      v5 = (void **)&aOn_0;
      if ( (v4[0x3C] & 1) == 0 )
        v5 = &aOff;
      v6 = sub_529750(v4);
      v7 = (const char *)(*(int (__thiscall **)(unsigned __int8 *, void **, int))(*(_DWORD *)v4 + 0xD4))(v4, v5, v6);
      Interface_ConsolePrint("%s (%s) -- Stage %d", v7, v9, v10);
    }
    while ( v3 );
  }
  return 1;
}
