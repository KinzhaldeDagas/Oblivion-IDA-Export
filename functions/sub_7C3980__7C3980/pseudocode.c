NiTMap_Entry_TESCELL *__cdecl sub_7C3980(TESObjectCELL *a1)
{
  int v1; // eax
  int v2; // edx
  NiTMap_Entry_TESCELL *result; // eax
  bool v4; // zf
  TESObjectCELL *v5; // ebx
  _DWORD *v6; // eax
  NiTMap_Entry_TESCELL *v7; // esi
  unsigned int *data; // edi
  NiTMap_Entry_TESCELL *v9; // esi
  TESObjectCELL *v10; // [esp+0h] [ebp-Ch] BYREF
  NiTMap_Entry_TESCELL *v11; // [esp+4h] [ebp-8h] BYREF
  NiTMap_Entry_TESCELL *v12; // [esp+8h] [ebp-4h] BYREF

  v1 = 0; /*0x7c3989*/
  if ( MEMORY[0xB2CBC8] ) /*0x7c3980*/
  {
    v2 = MEMORY[0xB2CBCC]; /*0x7c398f*/
    while ( !*(_DWORD *)(v2 + 4 * v1) ) /*0x7c3999*/
    {
      if ( ++v1 >= (unsigned int)MEMORY[0xB2CBC8] ) /*0x7c39a0*/
        goto LABEL_5; /*0x7c39a0*/
    }
    result = *(NiTMap_Entry_TESCELL **)(v2 + 4 * v1); /*0x7c3a10*/
  }
  else
  {
LABEL_5:
    result = 0; /*0x7c39a2*/
  }
  v4 = MEMORY[0xB2CBD0] == 0; /*0x7c39a4*/
  v11 = result; /*0x7c39ab*/
  v10 = 0; /*0x7c39af*/
  if ( !v4 && result ) /*0x7c39be*/
  {
    do /*0x7c3a99*/
    {
      result = (NiTMap_Entry_TESCELL *)NiTMap_U32Pointer_GetNextEntry( /*0x7c39e4*/
                                         (NiTMap_TESCELL *)&stru_B2CBC4,
                                         &v11,
                                         (void **)&v12,
                                         &v10);
      v5 = v10; /*0x7c39e9*/
      if ( v10 ) /*0x7c39ef*/
      {
        v6 = *(_DWORD **)&v10->members.extraData.members.m_presenceBitfield[8]; /*0x7c39f5*/
        if ( v6 ) /*0x7c39fa*/
        {
          while ( 1 ) /*0x7c3a00*/
          {
            v4 = v6[2] == (_DWORD)a1; /*0x7c3a00*/
            v6 = (_DWORD *)*v6; /*0x7c3a06*/
            if ( v4 ) /*0x7c3a08*/
              break; /*0x7c3a08*/
            if ( !v6 ) /*0x7c3a0c*/
              goto LABEL_19; /*0x7c3a0c*/
          }
          v7 = *(NiTMap_Entry_TESCELL **)&v10->members.flags0; /*0x7c3a15*/
          while ( v7 ) /*0x7c3a1a*/
          {
            data = (unsigned int *)v7->data; /*0x7c3a20*/
            v12 = v7; /*0x7c3a28*/
            v7 = (NiTMap_Entry_TESCELL *)v7->next; /*0x7c3a2c*/
            if ( data ) /*0x7c3a2e*/
            {
              if ( !sub_812630((int)data, (int)a1) ) /*0x7c3a33*/
              {
                NiTPointerList_RemoveNode( /*0x7c3a44*/
                  (BSTextureManager *)&v5->members.fullName.name.m_dataLen,
                  (NiTPointerList_Node_void **)&v12);
                sub_812D60(data); /*0x7c3a4b*/
                FormHeapFree((unsigned int)data); /*0x7c3a51*/
                --unk_B43348; /*0x7c3a59*/
              }
            }
          }
        }
LABEL_19:
        result = *(NiTMap_Entry_TESCELL **)&v5->members.extraData.members.m_presenceBitfield[8]; /*0x7c3a64*/
        if ( result ) /*0x7c3a6c*/
        {
          while ( 1 ) /*0x7c3a70*/
          {
            v4 = a1 == result->data; /*0x7c3a70*/
            v9 = result; /*0x7c3a76*/
            result = (NiTMap_Entry_TESCELL *)result->next; /*0x7c3a78*/
            if ( v4 ) /*0x7c3a7a*/
              break; /*0x7c3a7a*/
            if ( !result ) /*0x7c3a7e*/
              goto LABEL_22; /*0x7c3a7e*/
          }
        }
        else
        {
LABEL_22:
          v9 = 0; /*0x7c3a80*/
        }
        v12 = v9; /*0x7c3a84*/
        if ( v9 ) /*0x7c3a88*/
          result = (NiTMap_Entry_TESCELL *)NiTPointerList_RemoveNode( /*0x7c3a8f*/
                                             (BSTextureManager *)&v5->members.extraData.members.m_presenceBitfield[4],
                                             (NiTPointerList_Node_void **)&v12);
      }
    }
    while ( v11 ); /*0x7c3a99*/
  }
  return result; /*0x7c3aa3*/
}
