void __usercall ReanimateEffect_Remove(int a1@<ecx>, double a2@<st1>, double a3@<st0>)
{
  MagicTarget *v5; // ecx
  char *ParentActor; // eax
  Actor *v7; // esi
  MagicCaster *v8; // ecx
  Actor *v9; // eax

  if ( !*(_BYTE *)(TESDataHandler + 0xCD4) )
  {
    v5 = *(MagicTarget **)(a1 + 0x20);
    if ( v5 )
    {
      ParentActor = (char *)MagicTarget_GetParentActor(v5);
      v7 = (Actor *)ParentActor;
      if ( ParentActor )
      {
        if ( *(int *)(a1 + 0x3C) >= 0x32 )
        {
          if ( (*(unsigned __int8 (__thiscall **)(char *, _DWORD))(*(_DWORD *)ParentActor + 0x198))(ParentActor, 0) )
            goto LABEL_9;
        }
        else
        {
          sub_5E8EC0(ParentActor, 0);
          if ( *(_DWORD *)(a1 + 0x38) )
            (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(a1 + 0x38) + 0x9C))(*(_DWORD *)(a1 + 0x38), 1);
        }
        Actor_Kill(v7, 0.0, a2, a3, 0, COERCE_INT(0.0));
LABEL_9:
        v8 = *(MagicCaster **)(a1 + 0x24);
        if ( v8 )
        {
          v9 = MagicCaster_GetParentActor(v8);
          if ( v9 )
            sub_692660(v7, (int)v9, 0);
        }
      }
    }
  }
}
