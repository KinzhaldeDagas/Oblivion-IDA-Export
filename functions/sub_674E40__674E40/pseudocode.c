TESObjectREFR **__thiscall sub_674E40(ActorProcessManager *this, int a2, TESObjectREFR *a3)
{
  TESObjectREFR **v3; // ebx
  ActorProcessManager *v4; // esi
  int v5; // eax
  Actor *v6; // eax
  Actor *j; // edi
  TESObjectREFR *vtbl; // esi
  TESObjectREFRVtbl *v9; // ecx
  TESObjectREFR **v10; // eax
  TESObjectREFR **v11; // eax
  int i; // [esp+10h] [ebp-8h]

  v3 = 0;
  v4 = this;
  v5 = 0;
  for ( i = 0; ; v5 = i )
  {
    if ( v5 )
    {
      if ( v5 == 1 )
        v6 = sub_673A50(v4, 1);
      else
        v6 = v5 == 2 ? sub_673A50(v4, 2) : sub_673A50(v4, 3);
    }
    else
    {
      v6 = sub_673A50(v4, 0);
    }
    for ( j = sub_7616D0((ActorList *)v6); j; v4 = this )
    {
      if ( !*(_DWORD *)&j->members.super.super.super.type && !j->vtbl )
        break;
      if ( (*((unsigned __int8 (__thiscall **)(ActorVtbl *))j->vtbl->super.super.super.super.InitializeComponent + 0x64))(j->vtbl) )
      {
        vtbl = (TESObjectREFR *)j->vtbl;
        if ( j->vtbl )
        {
          v9 = vtbl[1].vtbl;
          if ( v9 )
            (*((void (__thiscall **)(TESObjectREFRVtbl *, int))v9->super.super.InitializeComponent + 0xCC))(v9, a2);
          if ( sub_5EAE10(vtbl) )
          {
            if ( *(_DWORD *)(sub_5EAE10(vtbl) + 0xC) == a2 && a3 != vtbl )
            {
              if ( !v3 )
              {
                v10 = (TESObjectREFR **)FormHeapAlloc(8u);
                if ( v10 )
                {
                  *v10 = 0;
                  v10[1] = 0;
                }
                else
                {
                  v10 = 0;
                }
                v3 = v10;
              }
              if ( *v3 )
              {
                v11 = (TESObjectREFR **)FormHeapAlloc(8u);
                if ( v11 )
                {
                  *v11 = *v3;
                  v11[1] = 0;
                }
                else
                {
                  v11 = 0;
                }
                v11[1] = v3[1];
                v3[1] = (TESObjectREFR *)v11;
              }
              *v3 = vtbl;
            }
          }
        }
      }
      j = *(Actor **)&j->members.super.super.super.type;
    }
    if ( ++i >= 4 )
      break;
  }
  return v3;
}
