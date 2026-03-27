void __thiscall sub_6786A0(_DWORD *this, int *a2, char a3)
{
  int *v6; // edi
  int v8; // esi
  int v9; // eax
  int ProcessLevel; // eax

  v6 = a2;
  while ( v6 )
  {
    if ( !*v6 )
      break;
    v8 = 0;
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)*v6 + 0x188))(*v6) )
      v8 = *v6;
    v6 = (int *)v6[1];
    if ( v8 )
    {
      if ( a3 )
      {
        v9 = *(_DWORD *)(v8 + 8);
        if ( (v9 & 0x20) != 0 || (v9 & 0x800) != 0 )
        {
          if ( *(_DWORD *)(v8 + 0x58) )
          {
            ProcessLevel = Actor::GetProcessLevel((Actor *)v8);
            sub_674550(v8, ProcessLevel);
            sub_659BC0((_DWORD *)v8);
          }
        }
        else if ( (PlayerCharacter *)v8 != TESDataHandler_g_PlayerRef )
        {
          if ( *(_DWORD *)(v8 + 0x58) )
          {
            if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v8 + 0x1C4))(v8) )
              v6 = a2;
          }
        }
      }
      else
      {
        sub_6748B0(this, (MobileObject *)v8);
      }
    }
  }
}
