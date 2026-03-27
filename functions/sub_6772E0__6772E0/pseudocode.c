Actor *__thiscall sub_6772E0(ActorProcessManager *this)
{
  int i; // ebx
  Actor *result; // eax
  Actor *j; // edi
  ActorVtbl *vtbl; // esi

  for ( i = 0; i < 2; ++i )
  {
    if ( i )
    {
      result = (Actor *)(i - 1);
      if ( i != 1 )
        continue;
      result = sub_673A50(this, 2);
    }
    else
    {
      result = sub_673A50(this, 3);
    }
    if ( result )
    {
      result = sub_7616D0((ActorList *)result);
      for ( j = result; j; j = *(Actor **)&j->members.super.super.super.type )
      {
        vtbl = j->vtbl;
        if ( j->vtbl )
        {
          result = (Actor *)(*((int (__thiscall **)(ActorVtbl *))vtbl->super.super.super.super.InitializeComponent + 0x64))(j->vtbl);
          if ( (_BYTE)result )
          {
            result = (Actor *)(*((int (__thiscall **)(ActorVtbl *, _DWORD))vtbl->super.super.super.super.InitializeComponent
                               + 0x66))(
                                vtbl,
                                0);
            if ( !(_BYTE)result )
              result = (Actor *)(*((int (__thiscall **)(ActorVtbl *, int))vtbl->super.super.super.super.InitializeComponent
                                 + 0x61))(
                                  vtbl,
                                  1);
          }
        }
      }
    }
  }
  return result;
}
