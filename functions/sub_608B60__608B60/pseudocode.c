int __usercall sub_608B60@<eax>(_DWORD *a1@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>)
{
  _DWORD *v5; // ecx
  int v6; // eax
  int v7; // ecx
  int v8; // eax
  int v9; // eax
  int v10; // ecx
  __int128 v12; // [esp+14h] [ebp-30h] BYREF
  unsigned int v13; // [esp+40h] [ebp-4h]
  int savedregs; // [esp+44h] [ebp+0h] BYREF

  *a1 = &ArrowProjectile::`vftable'{for `ArrowProjectile'};
  a1[6] = &ArrowProjectile::`vftable'{for `TESChildCell'};
  --dword_B3B7D0;
  v13 = 0;
  BSSimpleList_Remove(ActorProcessManager_ptr.unk4C, (int)a1);
  if ( a1[0xF] )
  {
    v5 = (_DWORD *)a1[0x17];
    if ( v5 )
    {
      if ( *v5 == 1 )
      {
        v6 = sub_480340(a1[0xF]);
        if ( v6 )
        {
          v7 = *(_DWORD *)(v6 + 0x10);
          if ( v7 )
          {
            (*(void (__thiscall **)(int, __int128 *))(*(_DWORD *)v7 + 0xA8))(v7, &v12);
            sub_535DD0(&v12, *(_DWORD *)(a1[0x17] + 0x2C));
          }
        }
      }
    }
  }
  if ( !*((_BYTE *)a1 + 0x94) )
  {
    v8 = a1[0x17];
    if ( v8 )
    {
      if ( !*(_DWORD *)v8 )
      {
        if ( *(_DWORD *)(v8 + 0x28) )
        {
          if ( (*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(v8 + 0x28) + 0x190))(*(_DWORD *)(v8 + 0x28)) )
          {
            v9 = *(_DWORD *)(a1[0x17] + 0x28);
            if ( v9 )
            {
              v10 = *(_DWORD *)(v9 + 0x58);
              if ( v10 )
                (*(void (__thiscall **)(int, _DWORD *))(*(_DWORD *)v10 + 0x4FC))(v10, a1);
            }
          }
        }
      }
    }
  }
  FormHeapFree(a1[0x17]);
  TESObjectREFR_Set3D((TESObjectREFR *)a1, a2, a3, a4, 0);
  if ( !*(_BYTE *)(TESDataHandler + 0xCD4) )
    sub_65A050(a1, 0);
  v13 = 0xFFFFFFFF;
  return MobileObject_destr((TESForm *)a1, (char)&savedregs, a2, a3, a4);
}
