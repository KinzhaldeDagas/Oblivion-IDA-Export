int __thiscall sub_634270(_DWORD *this, Actor *a2, char a3)
{
  Actor *v3; // esi
  int result; // eax
  TESForm *ActorBaseForm; // eax
  TESForm *v7; // ebp
  int *v8; // esi
  int *v9; // edi
  int v10; // ebp
  _DWORD *v11; // eax
  TESForm *v12; // [esp+Ch] [ebp-Ch]
  int *v13; // [esp+10h] [ebp-8h]

  v3 = a2;
  if ( !a2 || !Actor_GetActorBaseForm(a2, 0) )
    return 0;
  result = *(this + 0xA9);
  if ( !result )
  {
    ActorBaseForm = Actor_GetActorBaseForm(a2, 0);
    v12 = ActorBaseForm + 4;
    if ( ActorBaseForm != (TESForm *)0xFFFFFFA0 )
    {
      while ( 1 )
      {
        v7 = v12;
        if ( !*(_DWORD *)&v12->member.type && !v12->vtbl )
          break;
        if ( v12->vtbl )
        {
          v8 = sub_4B0920((int *)v12->vtbl, v3);
          v13 = v8;
          v9 = v8;
          if ( v8 )
          {
            do
            {
              if ( !v9[1] && !*v9 )
                break;
              v10 = *v9;
              if ( *v9 )
              {
                if ( (*(int (__thiscall **)(int))(*(_DWORD *)(v10 + 0x18) + 0x18))(v10 + 0x18) != 4
                  && ((*(int (__thiscall **)(int))(*(_DWORD *)(v10 + 0x18) + 0x18))(v10 + 0x18) != 1 || a3) )
                {
                  if ( !*(this + 0xA9) )
                  {
                    v11 = (_DWORD *)FormHeapAlloc(8u);
                    if ( v11 )
                    {
                      *v11 = 0;
                      v11[1] = 0;
                    }
                    else
                    {
                      v11 = 0;
                    }
                    *(this + 0xA9) = v11;
                  }
                  BSSimpleList_PushFront((_DWORD *)*(this + 0xA9), v10);
                }
              }
              v9 = (int *)v9[1];
              v8 = v13;
            }
            while ( v9 );
            BSSimpleList_Clear(v8);
            FormHeapFree((unsigned int)v8);
            v7 = v12;
          }
        }
        v12 = *(TESForm **)&v7->member.type;
        if ( !v12 )
          break;
        v3 = a2;
      }
    }
    return *(this + 0xA9);
  }
  return result;
}
