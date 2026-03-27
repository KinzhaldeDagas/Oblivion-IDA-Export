char sub_507740()
{
  _DWORD *v4; // esi
  int v5; // edi
  int v6; // ecx
  _DWORD *v7; // eax

  v4 = (_DWORD *)(TESDataHandler + 0x2C);
  v5 = 0;
  if ( TESDataHandler != 0xFFFFFFD4 )
  {
    do
    {
      v6 = 0;
      v7 = v4;
      if ( !v4 )
        break;
      do
      {
        if ( *v7 )
          ++v6;
        v7 = (_DWORD *)v7[1];
      }
      while ( v7 );
      if ( !v6 )
        break;
      if ( *v4 )
      {
        if ( !(*(int (__thiscall **)(int))(*(_DWORD *)(*v4 + 0x18) + 0x18))(*v4 + 0x18)
          || (*(int (__thiscall **)(int))(*(_DWORD *)(*v4 + 0x18) + 0x18))(*v4 + 0x18) == 2
          || (*(int (__thiscall **)(int))(*(_DWORD *)(*v4 + 0x18) + 0x18))(*v4 + 0x18) == 3 )
        {
          if ( ((unsigned __int8 (__thiscall *)(PlayerCharacter *, _DWORD))TESDataHandler_g_PlayerRef->vtbl->super.Unk_B7)(
                 TESDataHandler_g_PlayerRef,
                 *v4) )
          {
            ++v5;
          }
        }
      }
      v4 = (_DWORD *)v4[1];
    }
    while ( v4 );
  }
  Interface_ConsolePrint("%d spells added to Player Character", v5);
  return 1;
}
