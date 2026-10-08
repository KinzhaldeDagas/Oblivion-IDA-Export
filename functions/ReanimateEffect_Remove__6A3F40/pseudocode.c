void __usercall ReanimateEffect_Remove(int a1@<ecx>, double a2@<st1>, double a3@<st0>)
{
  MagicTarget *v4; // ecx
  char *ParentActor; // eax
  Actor *v6; // esi
  MagicCaster *v7; // ecx
  Actor *v8; // eax

  if ( !g_TESDataHandler->activeFileState.unknownAfterActiveFileState[2] ) /*0x6a3f45*/
  {
    v4 = *(MagicTarget **)(a1 + 0x20); /*0x6a3f51*/
    if ( v4 ) /*0x6a3f56*/
    {
      ParentActor = (char *)MagicTarget_GetParentActor(v4); /*0x6a3f59*/
      v6 = (Actor *)ParentActor; /*0x6a3f5e*/
      if ( ParentActor ) /*0x6a3f62*/
      {
        if ( *(int *)(a1 + 0x3C) >= 0x32 ) /*0x6a3f6c*/
        {
          if ( (*(unsigned __int8 (__thiscall **)(char *, _DWORD))(*(_DWORD *)ParentActor + 0x198))(ParentActor, 0) ) /*0x6a3f92*/
            goto LABEL_9; /*0x6a3f96*/
        }
        else
        {
          sub_5E8EC0(ParentActor, 0); /*0x6a3f6e*/
          if ( *(_DWORD *)(a1 + 0x38) ) /*0x6a3f73*/
            (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(a1 + 0x38) + 0x9C))(*(_DWORD *)(a1 + 0x38), 1); /*0x6a3f86*/
        }
        Actor_Kill(v6, 0.0, a2, a3, 0, COERCE_INT(0.0)); /*0x6a3fa2*/
LABEL_9:
        v7 = *(MagicCaster **)(a1 + 0x24); /*0x6a3fa7*/
        if ( v7 ) /*0x6a3fac*/
        {
          v8 = MagicCaster_GetParentActor(v7); /*0x6a3fae*/
          if ( v8 ) /*0x6a3fb5*/
            sub_692660(v6, (int)v8, 0); /*0x6a3fbb*/
        }
      }
    }
  }
}
