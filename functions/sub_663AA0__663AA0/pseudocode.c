void __thiscall sub_663AA0(Actor *this, int *a2)
{
  int v2; // ebx
  TESForm *ActorBaseForm; // eax
  TESForm::ModReferenceList *p_modlist; // ebp
  int *v5; // ecx
  int v6; // edi
  Data *data; // esi
  bool v8; // zf
  int v9; // eax
  int v10; // edi
  int (__thiscall *v11)(UInt32 *); // edx
  UInt32 *p_unkFile018; // esi
  int SchoolAV; // eax
  int SkillMasteryLevel; // esi
  int *v15; // eax
  int *v16; // eax
  int *v17; // esi
  int *v18; // [esp+4h] [ebp-18h]
  int v19; // [esp+8h] [ebp-14h]
  int v20; // [esp+Ch] [ebp-10h]
  int *v21; // [esp+10h] [ebp-Ch]
  TESForm::ModReferenceList *v22; // [esp+14h] [ebp-8h]

  v2 = 0;
  ActorBaseForm = Actor_GetActorBaseForm(this, 0);
  if ( ActorBaseForm )
  {
    p_modlist = &ActorBaseForm[3].member.modlist;
    v22 = &ActorBaseForm[3].member.modlist;
    if ( ActorBaseForm != (TESForm *)0xFFFFFFA8 )
    {
      v5 = a2;
      v18 = 0;
      if ( a2 )
      {
        while ( v5[1] || *v5 )
        {
          v6 = *v5;
          v20 = *v5;
          v21 = (int *)v5[1];
          v19 = 0;
          do
          {
            if ( !p_modlist->next && !p_modlist->data )
              break;
            data = p_modlist->data;
            v8 = p_modlist->data == 0;
            p_modlist = p_modlist->next;
            if ( !v8 )
            {
              v9 = *(_DWORD *)(v6 + 0x98);
              v10 = (int)&data->name[8];
              if ( EffectItemList_HasEffect(&data->name[8], v9, 0x48) )
              {
                v11 = *(int (__thiscall **)(UInt32 *))(data->unkFile018 + 0x18);
                p_unkFile018 = &data->unkFile018;
                ++v2;
                if ( v11(p_unkFile018) != 2
                  && (*(int (__thiscall **)(UInt32 *))(*p_unkFile018 + 0x18))(p_unkFile018) != 3 )
                {
                  SchoolAV = EffectItemList_GetSchoolAV();
                  SkillMasteryLevel = Actor_GetSkillMasteryLevel((int *)this, v2, v10, SchoolAV);
                  if ( SkillMasteryLevel < (*(int (__thiscall **)(int))(*(_DWORD *)v10 + 8))(v10) )
                    ++v19;
                }
              }
              v6 = v20;
            }
          }
          while ( p_modlist );
          if ( v19 == v2 )
          {
            v2 = 0;
            if ( !v18 )
            {
              v15 = (int *)FormHeapAlloc(8u);
              if ( v15 )
              {
                *v15 = 0;
                v15[1] = 0;
              }
              else
              {
                v15 = 0;
              }
              v18 = v15;
            }
            if ( v6 )
            {
              if ( *v18 )
              {
                v16 = (int *)FormHeapAlloc(8u);
                if ( v16 )
                {
                  *v16 = *v18;
                  v16[1] = 0;
                  v16[1] = v18[1];
                  v18[1] = (int)v16;
                }
                else
                {
                  *(_DWORD *)4 = v18[1];
                  v18[1] = 0;
                }
                *v18 = v6;
              }
              else
              {
                *v18 = v6;
              }
            }
          }
          else
          {
            v2 = 0;
          }
          if ( !v21 )
            break;
          v5 = v21;
          p_modlist = v22;
        }
        v17 = v18;
        if ( v18 )
        {
          do
          {
            if ( !v17[1] && !*v17 )
              break;
            BSSimpleList_Remove(a2, *v17);
            v17 = (int *)v17[1];
          }
          while ( v17 );
          BSSimpleList_Clear(v18);
          FormHeapFree((unsigned int)v18);
        }
      }
    }
  }
}
