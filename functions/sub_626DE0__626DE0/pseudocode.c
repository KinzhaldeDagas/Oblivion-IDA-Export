void __thiscall sub_626DE0(char *this)
{
  char *v1; // ebx
  char *v2; // esi
  int v3; // edi
  _DWORD *v4; // eax

  v1 = this + 0x54;
  v2 = this + 0x54;
  if ( this != (char *)0xFFFFFFAC )
  {
    do
    {
      v3 = *(_DWORD *)v2;
      if ( !*(_DWORD *)v2 )
        break;
      if ( (*(unsigned __int8 (__thiscall **)(int, _DWORD))(*(_DWORD *)v3 + 0x198))(v3, 0)
        || !(*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)v3 + 0x334))(v3, 1)
        && (PlayerCharacter *)v3 != TESDataHandler_g_PlayerRef
        || (*(_DWORD *)(v3 + 8) & 0x20) != 0 )
      {
        v4 = *((_DWORD **)v2 + 1);
        if ( v4 )
        {
          *((_DWORD *)v2 + 1) = v4[1];
          *(_DWORD *)v2 = *v4;
          FormHeapFree((unsigned int)v4);
        }
        else
        {
          *(_DWORD *)v2 = 0;
        }
        v2 = v1;
      }
      else
      {
        v2 = *((char **)v2 + 1);
      }
    }
    while ( v2 );
  }
}
