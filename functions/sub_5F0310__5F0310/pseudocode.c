bool __thiscall sub_5F0310(_DWORD *this, char a2)
{
  int v4; // eax
  int v5; // esi
  int *v6; // eax
  int v7; // ecx

  if ( !*(this + 0xF) )
    return 0;
  if ( (a2 & 0x40) != 0 )
  {
    v4 = *(this + 0x2C);
    if ( v4 == 1 || v4 == 2 || v4 == 6 )
      return 1;
    if ( v4 == 4 )
    {
      v5 = (*(int (__thiscall **)(_DWORD *))(*(this + 0x1A) + 8))(this + 0x1A);
      if ( v5 )
      {
        while ( *(_DWORD *)(v5 + 4) || *(_DWORD *)v5 )
        {
          v6 = (int *)OblivionDynamicCast(
                        *(void **)v5,
                        0,
                        (struct _s_RTTICompleteObjectLocator *)&ActiveEffect `RTTI Type Descriptor',
                        &ReanimateEffect `RTTI Type Descriptor',
                        0);
          if ( v6 && v6[0xF] < 0x1E )
            return 1;
          v5 = *(_DWORD *)(v5 + 4);
          if ( !v5 )
            break;
        }
      }
    }
  }
  v7 = *(this + 0x16);
  return v7
      && ((*(int (__thiscall **)(int))(*(_DWORD *)v7 + 0x2E4))(v7) == 1
       || (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 0x16) + 0x2E4))(*(this + 0x16)) == 3
       || (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 0x16) + 0x2E4))(*(this + 0x16)) == 2
       || (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 0x16) + 0x2E4))(*(this + 0x16)) == 4
       || (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 0x16) + 0x2E4))(*(this + 0x16)) == 5);
}
