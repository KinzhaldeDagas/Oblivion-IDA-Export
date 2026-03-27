double __userpurge sub_665260@<st0>(TESObjectREFR *this@<ecx>, double result@<st0>, PlayerCharacter *a3)
{
  int *v5; // ecx
  char *v6; // edi
  _DWORD *v7; // ecx
  PlayerCharacter *v8; // eax
  PlayerCharacter *v9; // esi
  int ****ContainerExtraDataForRef; // eax

  if ( a3 == TESDataHandler_g_PlayerRef )
  {
    if ( *((_DWORD *)this + 0x18E) )
      result = sub_663D30(this, result);
    *((_BYTE *)this + 0x117) = 1;
  }
  v5 = *((int **)this + 0x17D);
  if ( v5 )
  {
    if ( *((_BYTE *)this + 0x117) || (v6 = (char *)this + 0x5F8, !sub_5299B0(v5, (_DWORD *)this + 0x17E)) )
    {
      v6 = (char *)this + 0x5F8;
      result = sub_529A20(*((_DWORD *)this + 0x17D), result, (_DWORD *)this + 0x17E);
      *((_BYTE *)this + 0x117) = 0;
    }
    while ( v6 )
    {
      v7 = *(_DWORD **)v6;
      if ( !*(_DWORD *)v6 )
        break;
      if ( *((_BYTE *)this + 0x117) )
        break;
      v6 = *((char **)v6 + 1);
      sub_52B440(v7, 1);
      v9 = v8;
      if ( v8 == a3 )
        *((_BYTE *)this + 0x117) = 1;
      if ( v8 )
      {
        if ( TESObjectREFR_GetContainer((TESObjectREFR *)v8) )
        {
          if ( TESObjectREFR_GetContainer((TESObjectREFR *)v9) )
          {
            ContainerExtraDataForRef = (int ****)ContainerExtraData_GetContainerExtraDataForRef((TESObjectREFR *)v9);
            if ( ContainerExtraDataForRef )
            {
              if ( sub_487820(
                     ContainerExtraDataForRef,
                     (bool (__thiscall *)(BSExtraData *, BSExtraData *))v9->super.super.super.super.super.refID) )
              {
                *((_BYTE *)this + 0x117) = 1;
              }
            }
          }
        }
      }
    }
  }
  return result;
}
