bool __thiscall sub_5F0310(_DWORD *this, char a2)
{
  int v4; // eax
  int v5; // esi
  int *v6; // eax
  int v7; // ecx

  if ( !*(this + 0xF) ) /*0x5f0313*/
    return 0; /*0x5f031c*/
  if ( (a2 & 0x40) != 0 ) /*0x5f0325*/
  {
    v4 = *(this + 0x2C); /*0x5f0327*/
    if ( v4 == 1 || v4 == 2 || v4 == 6 ) /*0x5f0342*/
      return 1; /*0x5f0342*/
    if ( v4 == 4 ) /*0x5f034b*/
    {
      v5 = (*(int (__thiscall **)(_DWORD *))(*(this + 0x1A) + 8))(this + 0x1A); /*0x5f0358*/
      if ( v5 ) /*0x5f035c*/
      {
        while ( *(_DWORD *)(v5 + 4) || *(_DWORD *)v5 ) /*0x5f0369*/
        {
          v6 = (int *)OblivionDynamicCast( /*0x5f037c*/
                        *(void **)v5,
                        0,
                        (struct _s_RTTICompleteObjectLocator *)&ActiveEffect `RTTI Type Descriptor',
                        &ReanimateEffect `RTTI Type Descriptor',
                        0);
          if ( v6 && v6[0xF] < 0x1E ) /*0x5f038c*/
            return 1; /*0x5f038c*/
          v5 = *(_DWORD *)(v5 + 4); /*0x5f038e*/
          if ( !v5 ) /*0x5f0393*/
            break; /*0x5f0393*/
        }
      }
    }
  }
  v7 = *(this + 0x16); /*0x5f0395*/
  return v7 /*0x5f031b*/
      && ((*(int (__thiscall **)(int))(*(_DWORD *)v7 + 0x2E4))(v7) == 1
       || (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 0x16) + 0x2E4))(*(this + 0x16)) == 3
       || (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 0x16) + 0x2E4))(*(this + 0x16)) == 2
       || (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 0x16) + 0x2E4))(*(this + 0x16)) == 4
       || (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 0x16) + 0x2E4))(*(this + 0x16)) == 5);
}
