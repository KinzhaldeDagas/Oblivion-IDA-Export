Actor **__thiscall sub_675740(ActorProcessManager *this, int a2, char a3)
{
  Actor **v3; // edi
  ActorProcessManager *v4; // esi
  int v5; // ebp
  Actor *v6; // eax
  Actor *i; // ebx
  Actor *vtbl; // ebp
  TESPackage *v9; // eax
  int v10; // esi
  Actor **v11; // eax
  Actor **v12; // eax
  int v14; // [esp+10h] [ebp-8h]

  v3 = 0;
  v4 = this;
  v5 = 0;
  v14 = 0;
  do
  {
    if ( v5 )
    {
      if ( v5 == 1 )
      {
        v6 = sub_673A50(v4, 1);
      }
      else if ( v5 == 2 )
      {
        v6 = sub_673A50(v4, 2);
      }
      else
      {
        v6 = sub_673A50(v4, 3);
      }
    }
    else
    {
      v6 = sub_673A50(v4, 0);
    }
    for ( i = sub_7616D0((ActorList *)v6); i; v4 = this )
    {
      if ( !i->vtbl )
        break;
      if ( (*((unsigned __int8 (__thiscall **)(ActorVtbl *))i->vtbl->super.super.super.super.InitializeComponent + 0x64))(i->vtbl) )
      {
        vtbl = (Actor *)i->vtbl;
        if ( i->vtbl )
        {
          v9 = sub_5E0380((Actor *)i->vtbl);
          v10 = (int)v9;
          if ( v9 )
          {
            if ( v9->members.type == 0xF && sub_606AD0(v9, a2) )
            {
              if ( !v3 )
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
                v3 = v11;
              }
              if ( a3 )
              {
                sub_606B50(v10, (int)i, (int)v3, a2, vtbl);
              }
              else
              {
                if ( *v3 )
                {
                  v12 = (Actor **)FormHeapAlloc(8u);
                  if ( v12 )
                  {
                    *v12 = *v3;
                    v12[1] = 0;
                  }
                  else
                  {
                    v12 = 0;
                  }
                  v12[1] = v3[1];
                  v3[1] = (Actor *)v12;
                }
                *v3 = vtbl;
              }
            }
          }
        }
      }
      i = *(Actor **)&i->members.super.super.super.type;
      v5 = v14;
    }
    v14 = ++v5;
  }
  while ( v5 < 4 );
  if ( !a3 )
    return v3;
  FormHeapFree((unsigned int)v3);
  return 0;
}
