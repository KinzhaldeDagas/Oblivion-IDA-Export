void __thiscall sub_477C40(int *this, int a2)
{
  int *v6; // edi
  const char *v7; // eax
  int v8; // eax
  int v9; // esi
  int v10; // ebx
  int v11; // eax
  int v12; // ecx
  int v13; // eax
  ActorAnimData *v14; // eax
  ActorAnimData *v15; // esi
  AnimSequenceSingle *v16; // eax
  TESObjectREFR *v17; // [esp-14h] [ebp-1Ch]
  int v18; // [esp+4h] [ebp-4h]

  this[2] = a2;
  if ( !a2 )
  {
    *this = 0;
    return;
  }
  v6 = this + 7;
  v18 = 2;
  do
  {
    if ( v6[0xFFFFFFFE] )
    {
      if ( this[0xA] )
      {
        v17 = (TESObjectREFR *)this[0xA];
        v7 = (const char *)(*(int (__thiscall **)(int))(*(_DWORD *)(v6[0xFFFFFFFE] + 0x18) + 0x14))(v6[0xFFFFFFFE] + 0x18);
        v8 = sub_479450(v7, 0xFFFFFFFF, v17, 0);
        v9 = *v6;
        v10 = v8;
        if ( *v6 != v8 )
        {
          if ( v9 )
          {
            if ( !InterlockedDecrement((volatile LONG *)(v9 + 4)) )
              (**(void (__thiscall ***)(int, int))v9)(v9, 1);
          }
          *v6 = v10;
          if ( v10 )
            InterlockedIncrement((volatile LONG *)(v10 + 4));
        }
        v11 = (*(int (__thiscall **)(int))(*(_DWORD *)this[0xA] + 0x164))(this[0xA]);
        sub_7165B0((_DWORD *)*v6, *(_DWORD *)(*(_DWORD *)(v11 + 0x98) + 0x7C));
      }
    }
    ++v6;
    --v18;
  }
  while ( v18 );
  InterlockedIncrement((volatile LONG *)(a2 + 0xC));
  v12 = this[0xA];
  *this = 1;
  if ( v12 )
  {
    v13 = this[1];
    if ( v13 == 2 || v13 == 3 )
    {
      v14 = (ActorAnimData *)(*(int (__thiscall **)(int))(*(_DWORD *)v12 + 0x164))(v12);
      v15 = v14;
      if ( v14 )
      {
        if ( sub_476380(v14) )
        {
          if ( this[1] == 3 )
            HighPRocess_DoAction_____((PlayerCharacter *)this[0xA], 0xB, this[4]);
        }
        else
        {
          sub_475440(v15, 1, 0);
        }
        return;
      }
    }
    else
    {
      if ( this[1] )
        return;
      v16 = (AnimSequenceSingle *)(*(int (__thiscall **)(int))(*(_DWORD *)v12 + 0x164))(v12);
      if ( v16 )
      {
        sub_4753F0(v16);
        return;
      }
    }
    sub_4729F0(this);
    FormHeapFree((unsigned int)this);
  }
}
