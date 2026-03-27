NiTMap_Entry_TESCELL *__cdecl sub_7C3980(TESObjectCELL *a1)
{
  int v1; // eax
  int v2; // edx
  NiTMap_Entry_TESCELL *result; // eax
  bool v4; // zf
  TESObjectCELL *v5; // ebx
  _DWORD *v6; // eax
  NiTMap_Entry_TESCELL *v7; // esi
  int *data; // edi
  NiTMap_Entry_TESCELL *v9; // esi
  TESObjectCELL *v10; // [esp+0h] [ebp-Ch] BYREF
  NiTMap_Entry_TESCELL *v11; // [esp+4h] [ebp-8h] BYREF
  NiTMap_Entry_TESCELL *v12; // [esp+8h] [ebp-4h] BYREF

  v1 = 0;
  if ( dword_B2CBC8 )
  {
    v2 = dword_B2CBCC;
    while ( !*(_DWORD *)(v2 + 4 * v1) )
    {
      if ( ++v1 >= (unsigned int)dword_B2CBC8 )
        goto LABEL_5;
    }
    result = *(NiTMap_Entry_TESCELL **)(v2 + 4 * v1);
  }
  else
  {
LABEL_5:
    result = 0;
  }
  v4 = dword_B2CBD0 == 0;
  v11 = result;
  v10 = 0;
  if ( !v4 && result )
  {
    do
    {
      result = (NiTMap_Entry_TESCELL *)sub_452600((NiTMap_TESCELL *)&off_B2CBC4, &v11, (void **)&v12, &v10);
      v5 = v10;
      if ( v10 )
      {
        v6 = *(_DWORD **)&v10->members.extraData.members.m_presenceBitfield[8];
        if ( v6 )
        {
          while ( 1 )
          {
            v4 = v6[2] == (_DWORD)a1;
            v6 = (_DWORD *)*v6;
            if ( v4 )
              break;
            if ( !v6 )
              goto LABEL_19;
          }
          v7 = *(NiTMap_Entry_TESCELL **)&v10->members.flags0;
          while ( v7 )
          {
            data = (int *)v7->data;
            v12 = v7;
            v7 = (NiTMap_Entry_TESCELL *)v7->next;
            if ( data )
            {
              if ( !sub_812630((int)data, (int)a1) )
              {
                sub_7AA860((BSTextureManager *)&v5->members.fullName.name.m_dataLen, (NiTPointerList_Node_void **)&v12);
                sub_812D60(data);
                FormHeapFree((unsigned int)data);
                --dword_B43348;
              }
            }
          }
        }
LABEL_19:
        result = *(NiTMap_Entry_TESCELL **)&v5->members.extraData.members.m_presenceBitfield[8];
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
        v12 = v9;
        if ( v9 )
          result = (NiTMap_Entry_TESCELL *)sub_7AA860(
                                             (BSTextureManager *)&v5->members.extraData.members.m_presenceBitfield[4],
                                             (NiTPointerList_Node_void **)&v12);
      }
    }
    while ( v11 );
  }
  return result;
}
