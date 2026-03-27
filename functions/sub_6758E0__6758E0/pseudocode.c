Actor **__thiscall sub_6758E0(ActorProcessManager *this, TESObjectREFR *a2, int a3, char a4)
{
  Actor **v4; // ebp
  ActorProcessManager *v5; // esi
  int v6; // edi
  Actor *v7; // eax
  Actor *vtbl; // esi
  int v9; // eax
  _DWORD *v10; // ecx
  Actor **v11; // eax
  Actor **v12; // eax
  TESPackage *v13; // edi
  Actor **v14; // eax
  Actor **v15; // eax
  Actor *v17; // [esp+10h] [ebp-Ch]
  int v18; // [esp+14h] [ebp-8h]

  v4 = 0;
  v5 = this;
  v6 = 0;
  v18 = 0;
  do
  {
    if ( v6 )
    {
      switch ( v6 )
      {
        case 1:
          v7 = sub_673A50(v5, 1);
          break;
        case 2:
          v7 = sub_673A50(v5, 2);
          break;
        case 3:
          v7 = sub_673A50(v5, 3);
          break;
        default:
          goto LABEL_62;
      }
    }
    else
    {
      v7 = sub_673A50(v5, 0);
    }
    v17 = sub_7616D0((ActorList *)v7);
    if ( v17 )
    {
      while ( 1 )
      {
        vtbl = (Actor *)v17->vtbl;
        if ( !v17->vtbl || a4 && v6 )
        {
LABEL_61:
          v5 = this;
          break;
        }
        if ( vtbl->vtbl->super.super.IsActor((TESObjectREFR *)v17->vtbl) )
        {
          if ( !vtbl->vtbl->IsInCombat(vtbl, 1) || a3 != 0xC )
          {
            v13 = sub_5E0380(vtbl);
            if ( v13 )
            {
              if ( (sub_5E6C60(vtbl) || a3 != 0xF)
                && vtbl->members.super.process->GetUnk02C(vtbl->members.super.process) == a2
                && (char)v13->members.type == a3 )
              {
                if ( !v4 )
                {
                  v14 = (Actor **)FormHeapAlloc(8u);
                  if ( v14 )
                  {
                    *v14 = 0;
                    v14[1] = 0;
                  }
                  else
                  {
                    v14 = 0;
                  }
                  v4 = v14;
                }
                if ( *v4 )
                {
                  v15 = (Actor **)FormHeapAlloc(8u);
                  if ( v15 )
                  {
                    *v15 = *v4;
                    v15[1] = 0;
                  }
                  else
                  {
                    v15 = 0;
                  }
                  v15[1] = v4[1];
                  v4[1] = (Actor *)v15;
                }
                *v4 = vtbl;
              }
            }
            v6 = v18;
            goto LABEL_60;
          }
          v9 = sub_5E03A0(vtbl);
          v10 = 0;
          if ( *(_BYTE *)(v9 + 0x20) == 0xC )
            v10 = (_DWORD *)v9;
          if ( a4 )
          {
            if ( !v10 || (TESObjectREFR *)sub_6135F0((int)v10) != a2 )
              goto LABEL_60;
            if ( !v4 )
            {
              v11 = (Actor **)FormHeapAlloc(8u);
              if ( v11 )
              {
                *v11 = 0;
                v11[1] = 0;
              }
              else
              {
                v11 = 0;
              }
              v4 = v11;
            }
            if ( v6 != 2 || !Actor_IsCreature(vtbl) && TESObjectREFR_IsPersistent_((TESObjectREFR *)vtbl) )
            {
LABEL_42:
              BSSimpleList_PushFront(v4, (int)vtbl);
              goto LABEL_60;
            }
          }
          else
          {
            if ( !v10 || !sub_613670(v10, (int)a2) )
              goto LABEL_60;
            if ( !v4 )
            {
              v12 = (Actor **)FormHeapAlloc(8u);
              if ( v12 )
              {
                *v12 = 0;
                v12[1] = 0;
              }
              else
              {
                v12 = 0;
              }
              v4 = v12;
            }
            if ( v6 != 2 || !Actor_IsCreature(vtbl) && TESObjectREFR_IsPersistent_((TESObjectREFR *)vtbl) )
              goto LABEL_42;
          }
          ((void (__thiscall *)(Actor *, _DWORD))vtbl->vtbl->Unk_D0)(vtbl, 0);
        }
LABEL_60:
        v17 = *(Actor **)&v17->members.super.super.super.type;
        if ( !v17 )
          goto LABEL_61;
      }
    }
LABEL_62:
    v18 = ++v6;
  }
  while ( v6 < 4 );
  return v4;
}
