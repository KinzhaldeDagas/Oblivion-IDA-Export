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

  v3 = a2; /*0x634275*/
  if ( !a2 || !Actor_GetActorBaseForm(a2, 0) ) /*0x63428d*/
    return 0; /*0x6343a3*/
  result = *(this + 0xA9); /*0x63429a*/
  if ( !result ) /*0x6342a2*/
  {
    ActorBaseForm = Actor_GetActorBaseForm(a2, 0); /*0x6342ab*/
    v12 = ActorBaseForm + 4; /*0x6342b3*/
    if ( ActorBaseForm != (TESForm *)0xFFFFFFA0 ) /*0x6342b7*/
    {
      while ( 1 ) /*0x6342c4*/
      {
        v7 = v12; /*0x6342c4*/
        if ( !*(_DWORD *)&v12->member.type && !v12->vtbl ) /*0x6342cd*/
          break; /*0x6342cd*/
        if ( v12->vtbl ) /*0x6342d6*/
        {
          v8 = sub_4B0920((int *)v12->vtbl, v3); /*0x6342e7*/
          v13 = v8; /*0x6342eb*/
          v9 = v8; /*0x6342ef*/
          if ( v8 ) /*0x6342f1*/
          {
            do /*0x63436a*/
            {
              if ( !v9[1] && !*v9 ) /*0x6342fc*/
                break; /*0x6342fe*/
              v10 = *v9; /*0x634300*/
              if ( *v9 ) /*0x634300*/
              {
                if ( (*(int (__thiscall **)(int))(*(_DWORD *)(v10 + 0x18) + 0x18))(v10 + 0x18) != 4 /*0x63432a*/
                  && ((*(int (__thiscall **)(int))(*(_DWORD *)(v10 + 0x18) + 0x18))(v10 + 0x18) != 1 || a3) )
                {
                  if ( !*(this + 0xA9) ) /*0x634330*/
                  {
                    v11 = (_DWORD *)FormHeapAlloc(8u); /*0x63433a*/
                    if ( v11 ) /*0x634344*/
                    {
                      *v11 = 0; /*0x634346*/
                      v11[1] = 0; /*0x634348*/
                    }
                    else
                    {
                      v11 = 0; /*0x63434d*/
                    }
                    *(this + 0xA9) = v11; /*0x63434f*/
                  }
                  BSSimpleList_PushFront((_DWORD *)*(this + 0xA9), v10); /*0x63435c*/
                }
              }
              v9 = (int *)v9[1]; /*0x634361*/
              v8 = v13; /*0x634366*/
            }
            while ( v9 ); /*0x63436a*/
            BSSimpleList_Clear(v8); /*0x63436e*/
            FormHeapFree((unsigned int)v8); /*0x634374*/
            v7 = v12; /*0x634379*/
          }
        }
        v12 = *(TESForm **)&v7->member.type; /*0x634385*/
        if ( !v12 ) /*0x634389*/
          break; /*0x634389*/
        v3 = a2; /*0x6342c0*/
      }
    }
    return *(this + 0xA9); /*0x634394*/
  }
  return result; /*0x63439a*/
}
