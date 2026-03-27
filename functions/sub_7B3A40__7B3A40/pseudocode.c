NiTMap_Entry_TESCELL *__cdecl sub_7B3A40(TESObjectCELL *a1)
{
  int v1; // eax
  int v2; // edx
  NiTMap_Entry_TESCELL *result; // eax
  bool v4; // zf
  TESObjectCELL *v5; // ebx
  _DWORD *v6; // eax
  Data *data; // esi
  _DWORD *unk008; // edi
  NiTMap_Entry_TESCELL *v9; // esi
  TESObjectCELL *v10; // [esp+0h] [ebp-Ch] BYREF
  NiTMap_Entry_TESCELL *v11; // [esp+4h] [ebp-8h] BYREF
  Data *v12; // [esp+8h] [ebp-4h] BYREF

  v1 = 0;
  if ( dword_B2C340 )
  {
    v2 = dword_B2C344;
    while ( !*(_DWORD *)(v2 + 4 * v1) )
    {
      if ( ++v1 >= (unsigned int)dword_B2C340 )
        goto LABEL_5;
    }
    result = *(NiTMap_Entry_TESCELL **)(v2 + 4 * v1);
  }
  else
  {
LABEL_5:
    result = 0;
  }
  v4 = dword_B2C348 == 0;
  v11 = result;
  v10 = 0;
  if ( !v4 && result )
  {
    do
    {
      result = (NiTMap_Entry_TESCELL *)sub_452600((NiTMap_TESCELL *)&off_B2C33C, &v11, (void **)&v12, &v10);
      v5 = v10;
      if ( v10 )
      {
        v6 = *(_DWORD **)&v10->members.flags0;
        if ( v6 )
        {
          while ( 1 )
          {
            v4 = a1 == (TESObjectCELL *)v6[2];
            v6 = (_DWORD *)*v6;
            if ( v4 )
              break;
            if ( !v6 )
              goto LABEL_19;
          }
          data = v10->members.super.modlist.data;
          while ( data )
          {
            unk008 = (_DWORD *)data->unk008;
            v12 = data;
            data = (Data *)data->errorState;
            if ( unk008 )
            {
              if ( !sub_802A60((int)unk008, (int)a1) )
              {
                sub_7AA860((BSTextureManager *)&v5->members.super.refID, (NiTPointerList_Node_void **)&v12);
                sub_803210(unk008);
                FormHeapFree((unsigned int)unk008);
                --dword_B42D5C;
              }
            }
          }
        }
LABEL_19:
        result = *(NiTMap_Entry_TESCELL **)&v5->members.flags0;
        if ( result )
        {
          while ( 1 )
          {
            v4 = a1 == result->data;
            v9 = result;
            result = (NiTMap_Entry_TESCELL *)result->next;
            if ( v4 )
              break;
            if ( !result )
              goto LABEL_22;
          }
        }
        else
        {
LABEL_22:
          v9 = 0;
        }
        v12 = (Data *)v9;
        if ( v9 )
          result = (NiTMap_Entry_TESCELL *)sub_7AA860(
                                             (BSTextureManager *)&v5->members.fullName.name.m_dataLen,
                                             (NiTPointerList_Node_void **)&v12);
      }
    }
    while ( v11 );
  }
  return result;
}
