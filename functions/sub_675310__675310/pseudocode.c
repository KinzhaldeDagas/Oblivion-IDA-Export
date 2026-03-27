void __usercall sub_675310(ActorList *a1@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>)
{
  ActorList *v4; // ebp
  Actor *v5; // edi
  Actor *v6; // ebx
  int vtbl; // esi

  v4 = a1 + 2;
  v5 = sub_7616D0(a1 + 2);
  v6 = 0;
  while ( v5 )
  {
    if ( !*(_DWORD *)&v5->members.super.super.super.type && !v5->vtbl )
      return;
    if ( (*((unsigned __int8 (__thiscall **)(ActorVtbl *))v5->vtbl->super.super.super.super.InitializeComponent + 0x64))(v5->vtbl) )
    {
      vtbl = (int)v5->vtbl;
      if ( v5->vtbl )
      {
        sub_4F9EC0(a4, a2, a3, vtbl, (ExtraDataList *)(vtbl + 0x44));
        if ( (*(_DWORD *)(vtbl + 8) & 0x20) != 0
          || !(*(int (__thiscall **)(int))(*(_DWORD *)vtbl + 0x170))(vtbl)
          || (*(int (__thiscall **)(int, int))(*(_DWORD *)vtbl + 0x284))(vtbl, 8) <= 0 )
        {
          if ( (*(_DWORD *)(vtbl + 8) & 0x20) == 0 )
          {
            if ( (*(int (__thiscall **)(int))(*(_DWORD *)vtbl + 0x170))(vtbl) )
            {
              if ( (*(int (__thiscall **)(int, int))(*(_DWORD *)vtbl + 0x284))(vtbl, 8) <= 0 )
                Actor_HandleDeathSTate____((Actor *)vtbl, 2u);
            }
          }
          if ( *(_DWORD *)(vtbl + 0x58) )
          {
            sub_67B320(v4, (_DWORD *)vtbl, v6);
            if ( v6 )
              v5 = *(Actor **)&v6->members.super.super.super.type;
            else
              v5 = sub_7616D0(v4);
            continue;
          }
        }
        else
        {
          a4 = sub_5ED860((int *)vtbl, *(float *)&v6, (int)v4, (int)v5, a2, a3, a4);
        }
        v6 = v5;
        v5 = *(Actor **)&v5->members.super.super.super.type;
      }
    }
  }
}
