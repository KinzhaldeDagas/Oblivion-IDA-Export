void __cdecl sub_7C3AB0(int a1, int a2)
{
  int v2; // eax
  int v3; // edx
  NiTMap_Entry_TESCELL *v4; // eax
  bool v5; // zf
  TESObjectCELL *v6; // ebp
  _DWORD *v7; // ecx
  unsigned int v8; // ebx
  int v9; // eax
  int v10; // edi
  BSTextureManager *v11; // ebp
  NiTPointerList_Node_void *start; // eax
  NiTPointerList_Node_void *v13; // esi
  TESObjectCELL *v14; // [esp+0h] [ebp-1Ch] BYREF
  _DWORD *v15; // [esp+4h] [ebp-18h]
  NiTMap_Entry_TESCELL *v16; // [esp+8h] [ebp-14h] BYREF
  int v17; // [esp+Ch] [ebp-10h]
  NiTPointerList_Node_void *v18; // [esp+10h] [ebp-Ch] BYREF
  int v19; // [esp+14h] [ebp-8h]
  void *v20; // [esp+18h] [ebp-4h] BYREF

  v2 = 0;
  if ( dword_B2CBC8 )
  {
    v3 = dword_B2CBCC;
    while ( !*(_DWORD *)(v3 + 4 * v2) )
    {
      if ( ++v2 >= (unsigned int)dword_B2CBC8 )
        goto LABEL_5;
    }
    v4 = *(NiTMap_Entry_TESCELL **)(v3 + 4 * v2);
  }
  else
  {
LABEL_5:
    v4 = 0;
  }
  v5 = dword_B2CBD0 == 0;
  v16 = v4;
  v14 = 0;
  if ( !v5 && v4 )
  {
    do
    {
      sub_452600((NiTMap_TESCELL *)&off_B2CBC4, &v16, &v20, &v14);
      v6 = v14;
      if ( v14 )
      {
        v7 = *(_DWORD **)&v14->members.flags0;
        if ( v7 )
        {
          while ( 1 )
          {
            v8 = v7[2];
            v20 = v7;
            v15 = (_DWORD *)*v7;
            if ( v8 && a1 == *(_DWORD *)(v8 + 0x38) && a2 == *(_DWORD *)(v8 + 0x3C) )
            {
              v9 = *(unsigned __int16 *)(v8 + 0xE);
              v10 = 0;
              v17 = *(_DWORD *)(v8 + 0x14);
              v19 = v9;
              if ( v9 )
              {
                v11 = (BSTextureManager *)&v6->members.extraData.members.m_presenceBitfield[4];
                do
                {
                  start = v11->unk00.start;
                  if ( start )
                  {
                    while ( 1 )
                    {
                      v5 = *(void **)(v17 + 4 * v10) == start->data;
                      v13 = start;
                      start = start->next;
                      if ( v5 )
                        break;
                      if ( !start )
                        goto LABEL_21;
                    }
                  }
                  else
                  {
LABEL_21:
                    v13 = 0;
                  }
                  v18 = v13;
                  if ( v13 )
                    sub_7AA860(v11, &v18);
                  ++v10;
                }
                while ( v10 < v19 );
                v6 = v14;
              }
              sub_7AA860((BSTextureManager *)&v6->members.fullName.name.m_dataLen, (NiTPointerList_Node_void **)&v20);
              sub_812D60((int *)v8);
              FormHeapFree(v8);
              --dword_B43348;
            }
            if ( !v15 )
              break;
            v7 = v15;
          }
        }
      }
    }
    while ( v16 );
  }
}
