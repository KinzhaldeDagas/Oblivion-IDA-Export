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

  v2 = 0; /*0x663aa4*/
  ActorBaseForm = Actor_GetActorBaseForm(this, 0); /*0x663aab*/
  if ( ActorBaseForm ) /*0x663ab2*/
  {
    p_modlist = &ActorBaseForm[3].member.modlist; /*0x663ab9*/
    v22 = &ActorBaseForm[3].member.modlist; /*0x663abe*/
    if ( ActorBaseForm != (TESForm *)0xFFFFFFA8 ) /*0x663ac2*/
    {
      v5 = a2; /*0x663ac8*/
      v18 = 0; /*0x663ace*/
      if ( a2 ) /*0x663ad2*/
      {
        while ( v5[1] || *v5 ) /*0x663ae8*/
        {
          v6 = *v5; /*0x663af7*/
          v20 = *v5; /*0x663af9*/
          v21 = (int *)v5[1]; /*0x663afd*/
          v19 = 0; /*0x663b01*/
          do /*0x663b84*/
          {
            if ( !p_modlist->next && !p_modlist->data ) /*0x663b0c*/
              break; /*0x663b0f*/
            data = p_modlist->data; /*0x663b11*/
            v8 = p_modlist->data == 0; /*0x663b14*/
            p_modlist = p_modlist->next; /*0x663b16*/
            if ( !v8 ) /*0x663b18*/
            {
              v9 = *(_DWORD *)(v6 + 0x98); /*0x663b1a*/
              v10 = (int)&data->name[8]; /*0x663b22*/
              if ( EffectItemList_HasEffect(&data->name[8], v9, 0x48) ) /*0x663b28*/
              {
                v11 = *(int (__thiscall **)(UInt32 *))(data->unkFile018 + 0x18); /*0x663b34*/
                p_unkFile018 = &data->unkFile018; /*0x663b37*/
                ++v2; /*0x663b3c*/
                if ( v11(p_unkFile018) != 2 /*0x663b52*/
                  && (*(int (__thiscall **)(UInt32 *))(*p_unkFile018 + 0x18))(p_unkFile018) != 3 )
                {
                  SchoolAV = EffectItemList_GetSchoolAV(); /*0x663b56*/
                  SkillMasteryLevel = Actor_GetSkillMasteryLevel((int *)this, v2, v10, SchoolAV); /*0x663b65*/
                  if ( SkillMasteryLevel < (*(int (__thiscall **)(int))(*(_DWORD *)v10 + 8))(v10) ) /*0x663b77*/
                    ++v19; /*0x663b79*/
                }
              }
              v6 = v20; /*0x663b7e*/
            }
          }
          while ( p_modlist ); /*0x663b84*/
          if ( v19 == v2 ) /*0x663b8e*/
          {
            v2 = 0; /*0x663b90*/
            if ( !v18 ) /*0x663b96*/
            {
              v15 = (int *)FormHeapAlloc(8u); /*0x663b9a*/
              if ( v15 ) /*0x663ba4*/
              {
                *v15 = 0; /*0x663ba6*/
                v15[1] = 0; /*0x663ba8*/
              }
              else
              {
                v15 = 0; /*0x663bad*/
              }
              v18 = v15; /*0x663baf*/
            }
            if ( v6 ) /*0x663bb5*/
            {
              if ( *v18 ) /*0x663bbb*/
              {
                v16 = (int *)FormHeapAlloc(8u); /*0x663bc1*/
                if ( v16 ) /*0x663bcf*/
                {
                  *v16 = *v18; /*0x663bd3*/
                  v16[1] = 0; /*0x663bd5*/
                  v16[1] = v18[1]; /*0x663bdb*/
                  v18[1] = (int)v16; /*0x663bde*/
                }
                else
                {
                  *(_DWORD *)4 = v18[1]; /*0x663bea*/
                  v18[1] = 0; /*0x663bed*/
                }
                *v18 = v6; /*0x663be1*/
              }
              else
              {
                *v18 = v6; /*0x663bf4*/
              }
            }
          }
          else
          {
            v2 = 0; /*0x663bf8*/
          }
          if ( !v21 ) /*0x663bfe*/
            break; /*0x663bfe*/
          v5 = v21; /*0x663ae0*/
          p_modlist = v22; /*0x663ae4*/
        }
        v17 = v18; /*0x663c04*/
        if ( v18 ) /*0x663c0a*/
        {
          do /*0x663c2c*/
          {
            if ( !v17[1] && !*v17 ) /*0x663c16*/
              break; /*0x663c19*/
            BSSimpleList_Remove(a2, *v17); /*0x663c22*/
            v17 = (int *)v17[1]; /*0x663c27*/
          }
          while ( v17 ); /*0x663c2c*/
          BSSimpleList_Clear(v18); /*0x663c32*/
          FormHeapFree((unsigned int)v18); /*0x663c3c*/
        }
      }
    }
  }
}
