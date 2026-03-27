void __thiscall sub_6761A0(char *this, _DWORD ***a2, _DWORD *a3)
{
  int ExtraDataFollower; // eax
  _DWORD *i; // ebx
  _DWORD ***v5; // esi
  _DWORD *v6; // eax
  _DWORD *v7; // eax
  Actor *j; // ebx
  Actor *vtbl; // esi
  _DWORD ***v10; // eax
  Actor **v11; // eax

  ExtraDataFollower = GetExtraDataFollower();
  if ( ExtraDataFollower )
  {
    for ( i = *(_DWORD **)(ExtraDataFollower + 0xC); i; i = (_DWORD *)i[1] )
    {
      if ( !i[1] && !*i )
        break;
      v5 = (_DWORD ***)*i;
      v6 = a3;
      if ( a3 )
      {
        while ( (_DWORD ***)*v6 != v5 )
        {
          v6 = (_DWORD *)v6[1];
          if ( !v6 )
            goto LABEL_8;
        }
      }
      else
      {
LABEL_8:
        if ( v5 )
        {
          if ( *a3 )
          {
            v7 = (_DWORD *)FormHeapAlloc(8u);
            if ( v7 )
            {
              *v7 = *a3;
              v7[1] = 0;
            }
            else
            {
              v7 = 0;
            }
            v7[1] = a3[1];
            a3[1] = v7;
          }
          *a3 = v5;
        }
        sub_6761A0(this, v5, a3);
      }
    }
  }
  for ( j = sub_7616D0((ActorList *)(this + 0x68)); j; j = *(Actor **)&j->members.super.super.super.type )
  {
    if ( !j->vtbl )
      break;
    if ( (*((unsigned __int8 (__thiscall **)(ActorVtbl *))j->vtbl->super.super.super.super.InitializeComponent + 0x64))(j->vtbl) )
    {
      vtbl = (Actor *)j->vtbl;
      if ( sub_5E0380((Actor *)j->vtbl) )
      {
        if ( sub_5E0380(vtbl)->members.type == 2 || sub_5E0380(vtbl)->members.type == 7 )
        {
          sub_5E2E00(vtbl);
          if ( v10 == a2 )
          {
            v11 = (Actor **)a3;
            if ( a3 )
            {
              while ( *v11 != vtbl )
              {
                v11 = (Actor **)v11[1];
                if ( !v11 )
                  goto LABEL_27;
              }
            }
            else
            {
LABEL_27:
              BSSimpleList_PushFront(a3, (int)vtbl);
              sub_6761A0(this, vtbl, a3);
            }
          }
        }
      }
    }
  }
}
