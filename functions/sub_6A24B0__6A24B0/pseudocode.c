char __userpurge sub_6A24B0@<al>(int a1@<ecx>, int a2@<esi>, double a3@<st0>, int a4, MagicCaster *a5)
{
  int v6; // eax
  ActiveEffect **v7; // ebp
  ActiveEffect **v8; // edi
  ActiveEffect **v9; // ecx
  ActiveEffect *v10; // esi
  int *v11; // eax
  int v13; // [esp-4h] [ebp-14h]

  v6 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 8))(a1);
  v7 = (ActiveEffect **)v6;
  v8 = (ActiveEffect **)v6;
  if ( v6 )
  {
    v13 = a2;
    do
    {
      v9 = (ActiveEffect **)v8[1];
      if ( !v9 && !*v8 )
        return v6;
      v10 = *v8;
      if ( a5 )
        LOBYTE(v6) = a5 == v10->members.caster;
      else
        LOBYTE(v6) = 1;
      if ( v10 && !v10->members.bTerminated )
      {
        if ( v10->members.effectItem->effectCode == a4 && (_BYTE)v6 )
        {
          a3 = ActiveEffect_Base_Remove(v10, (char)v7, a3, 1);
          v11 = (int *)(*(int (__thiscall **)(int, ActiveEffect *))(*(_DWORD *)a1 + 8))(a1, v10);
          BSSimpleList_Remove(v11, v13);
          (*(void (__thiscall **)(int, ActiveEffect *))(*(_DWORD *)a1 + 0x14))(a1, v10);
          LOBYTE(v6) = ((int (__thiscall *)(ActiveEffect *, int))v10->vtbl->noDef)(v10, 1);
          if ( v8 != v7 )
            v8 = (ActiveEffect **)v7[1];
          continue;
        }
        v9 = (ActiveEffect **)v8[1];
      }
      v7 = v8;
      v8 = v9;
    }
    while ( v8 );
  }
  return v6;
}
