double __userpurge sub_665260@<st0>(TESObjectREFR *this@<ecx>, double result@<st0>, PlayerCharacter *a3)
{
  int *v4; // ecx
  char *v5; // edi
  _DWORD *v6; // ecx
  PlayerCharacter *v7; // eax
  PlayerCharacter *v8; // esi
  int ****ContainerExtraDataForRef; // eax

  if ( a3 == reference ) /*0x66526e*/
  {
    if ( *((_DWORD *)this + 0x18E) ) /*0x665270*/
      result = sub_663D30(this, result); /*0x665279*/
    *((_BYTE *)this + 0x117) = 1; /*0x66527e*/
  }
  v4 = *((int **)this + 0x17D); /*0x665285*/
  if ( v4 ) /*0x66528d*/
  {
    if ( *((_BYTE *)this + 0x117) || (v5 = (char *)this + 0x5F8, !sub_5299B0(v4, (_DWORD *)this + 0x17E)) ) /*0x6652a4*/
    {
      v5 = (char *)this + 0x5F8; /*0x6652b3*/
      result = sub_529A20(*((_DWORD *)this + 0x17D), result, (_DWORD *)this + 0x17E); /*0x6652ba*/
      *((_BYTE *)this + 0x117) = 0; /*0x6652bf*/
    }
    while ( v5 ) /*0x6652c8*/
    {
      v6 = *(_DWORD **)v5; /*0x6652d0*/
      if ( !*(_DWORD *)v5 ) /*0x6652d0*/
        break; /*0x6652d4*/
      if ( *((_BYTE *)this + 0x117) ) /*0x6652d6*/
        break; /*0x6652dd*/
      v5 = *((char **)v5 + 1); /*0x6652df*/
      sub_52B440(v6, 1); /*0x6652e4*/
      v8 = v7; /*0x6652e9*/
      if ( v7 == a3 ) /*0x6652ed*/
        *((_BYTE *)this + 0x117) = 1; /*0x6652ef*/
      if ( v7 ) /*0x6652f8*/
      {
        if ( TESObjectREFR_GetContainer((TESObjectREFR *)v7) ) /*0x6652fc*/
        {
          if ( TESObjectREFR_GetContainer((TESObjectREFR *)v8) ) /*0x665307*/
          {
            ContainerExtraDataForRef = (int ****)ContainerExtraData_GetContainerExtraDataForRef((TESObjectREFR *)v8); /*0x665312*/
            if ( ContainerExtraDataForRef ) /*0x66531c*/
            {
              if ( sub_487820( /*0x665324*/
                     ContainerExtraDataForRef,
                     (bool (__thiscall *)(BSExtraData *, BSExtraData *))v8->super.super.super.super.super.refID) )
              {
                *((_BYTE *)this + 0x117) = 1; /*0x66532d*/
              }
            }
          }
        }
      }
    }
  }
  return result; /*0x66533a*/
}
