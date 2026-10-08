NiTMap_Entry_TESCELL *__cdecl sub_7B3A40(TESObjectCELL *a1)
{
  int v1; // eax
  int v2; // edx
  NiTMap_Entry_TESCELL *result; // eax
  bool v4; // zf
  TESObjectCELL *v5; // ebx
  int **v6; // eax
  Data *data; // esi
  unsigned int *unk008; // edi
  NiTMap_Entry_TESCELL *v9; // esi
  TESObjectCELL *v10; // [esp+0h] [ebp-Ch] BYREF
  NiTMap_Entry_TESCELL *v11; // [esp+4h] [ebp-8h] BYREF
  void *v12; // [esp+8h] [ebp-4h] BYREF

  v1 = 0; /*0x7b3a49*/
  if ( MEMORY[0xB2C340] ) /*0x7b3a40*/
  {
    v2 = MEMORY[0xB2C344]; /*0x7b3a4f*/
    while ( !*(_DWORD *)(v2 + 4 * v1) ) /*0x7b3a59*/
    {
      if ( ++v1 >= (unsigned int)MEMORY[0xB2C340] ) /*0x7b3a60*/
        goto LABEL_5; /*0x7b3a60*/
    }
    result = *(NiTMap_Entry_TESCELL **)(v2 + 4 * v1); /*0x7b3ad2*/
  }
  else
  {
LABEL_5:
    result = 0; /*0x7b3a62*/
  }
  v4 = MEMORY[0xB2C348] == 0; /*0x7b3a64*/
  v11 = result; /*0x7b3a6b*/
  v10 = 0; /*0x7b3a6f*/
  if ( !v4 && result ) /*0x7b3a7e*/
  {
    do /*0x7b3b59*/
    {
      result = (NiTMap_Entry_TESCELL *)NiTMap_U32Pointer_GetNextEntry((NiTMap_TESCELL *)&stru_B2C33C, &v11, &v12, &v10); /*0x7b3aa4*/
      v5 = v10; /*0x7b3aa9*/
      if ( v10 ) /*0x7b3aaf*/
      {
        v6 = *(int ***)&v10->members.flags0; /*0x7b3ab5*/
        if ( v6 ) /*0x7b3aba*/
        {
          while ( 1 ) /*0x7b3ac0*/
          {
            v4 = a1 == (TESObjectCELL *)v6[2]; /*0x7b3ac0*/
            v6 = (int **)*v6; /*0x7b3ac8*/
            if ( v4 ) /*0x7b3aca*/
              break; /*0x7b3aca*/
            if ( !v6 ) /*0x7b3ace*/
              goto LABEL_19; /*0x7b3ace*/
          }
          data = v10->members.super.modlist.data; /*0x7b3adb*/
          while ( data ) /*0x7b3ae0*/
          {
            unk008 = (unsigned int *)data->unk008; /*0x7b3ae2*/
            v12 = data; /*0x7b3aea*/
            data = (Data *)data->errorState; /*0x7b3aee*/
            if ( unk008 ) /*0x7b3af0*/
            {
              if ( !sub_802A60((int)unk008, (int)a1) ) /*0x7b3af5*/
              {
                sub_7AA860((BSTextureManager *)&v5->members.super.refID, (NiTPointerList_Node_void **)&v12); /*0x7b3b06*/
                sub_803210(unk008); /*0x7b3b0d*/
                FormHeapFree((unsigned int)unk008); /*0x7b3b13*/
                --unk_B42D5C; /*0x7b3b1b*/
              }
            }
          }
        }
LABEL_19:
        result = *(NiTMap_Entry_TESCELL **)&v5->members.flags0; /*0x7b3b26*/
        if ( result ) /*0x7b3b2e*/
        {
          while ( 1 ) /*0x7b3b30*/
          {
            v4 = a1 == result->data; /*0x7b3b30*/
            v9 = result; /*0x7b3b36*/
            result = (NiTMap_Entry_TESCELL *)result->next; /*0x7b3b38*/
            if ( v4 ) /*0x7b3b3a*/
              break; /*0x7b3b3a*/
            if ( !result ) /*0x7b3b3e*/
              goto LABEL_22; /*0x7b3b3e*/
          }
        }
        else
        {
LABEL_22:
          v9 = 0; /*0x7b3b40*/
        }
        v12 = v9; /*0x7b3b44*/
        if ( v9 ) /*0x7b3b48*/
          result = (NiTMap_Entry_TESCELL *)sub_7AA860( /*0x7b3b4f*/
                                             (BSTextureManager *)&v5->members.fullName.name.m_dataLen,
                                             (NiTPointerList_Node_void **)&v12);
      }
    }
    while ( v11 ); /*0x7b3b59*/
  }
  return result; /*0x7b3b63*/
}
