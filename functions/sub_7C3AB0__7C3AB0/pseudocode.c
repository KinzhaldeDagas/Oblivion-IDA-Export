void __cdecl sub_7C3AB0(int a1, int a2)
{
  int v2; // eax
  MEF_U32PointerMapEntry32 **buckets; // edx
  MEF_U32PointerMapEntry32 *v4; // eax
  bool v5; // zf
  char *v6; // ebp
  _DWORD *v7; // ecx
  unsigned int v8; // ebx
  int v9; // eax
  int v10; // edi
  _DWORD *v11; // ebp
  _DWORD *v12; // eax
  void *v13; // esi
  void *valueOut; // [esp+0h] [ebp-1Ch] BYREF
  _DWORD *v15; // [esp+4h] [ebp-18h]
  MEF_U32PointerMapEntry32 *position; // [esp+8h] [ebp-14h] BYREF
  int v17; // [esp+Ch] [ebp-10h]
  void *node; // [esp+10h] [ebp-Ch] BYREF
  int v19; // [esp+14h] [ebp-8h]
  unsigned int keyOut; // [esp+18h] [ebp-4h] BYREF

  v2 = 0; /*0x7c3ab9*/
  if ( stru_B2CBC4.bucketCount ) /*0x7c3ab0*/
  {
    buckets = stru_B2CBC4.buckets; /*0x7c3abf*/
    while ( !buckets[v2] ) /*0x7c3ac9*/
    {
      if ( ++v2 >= stru_B2CBC4.bucketCount ) /*0x7c3ad0*/
        goto LABEL_5; /*0x7c3ad0*/
    }
    v4 = buckets[v2]; /*0x7c3b32*/
  }
  else
  {
LABEL_5:
    v4 = 0; /*0x7c3ad2*/
  }
  v5 = stru_B2CBC4.entryCount == 0; /*0x7c3ad4*/
  position = v4; /*0x7c3adb*/
  valueOut = 0; /*0x7c3adf*/
  if ( !v5 && v4 ) /*0x7c3aee*/
  {
    do /*0x7c3bfa*/
    {
      NiTMap_U32Pointer_GetNextEntry(&stru_B2CBC4, &position, &keyOut, &valueOut); /*0x7c3b14*/
      v6 = (char *)valueOut; /*0x7c3b19*/
      if ( valueOut ) /*0x7c3b1f*/
      {
        v7 = *((_DWORD **)valueOut + 9); /*0x7c3b25*/
        if ( v7 ) /*0x7c3b2a*/
        {
          while ( 1 ) /*0x7c3b3b*/
          {
            v8 = v7[2]; /*0x7c3b3b*/
            keyOut = (unsigned int)v7; /*0x7c3b43*/
            v15 = (_DWORD *)*v7; /*0x7c3b49*/
            if ( v8 && a1 == *(_DWORD *)(v8 + 0x38) && a2 == *(_DWORD *)(v8 + 0x3C) ) /*0x7c3b67*/
            {
              v9 = *(unsigned __int16 *)(v8 + 0xE); /*0x7c3b6d*/
              v10 = 0; /*0x7c3b74*/
              v17 = *(_DWORD *)(v8 + 0x14); /*0x7c3b78*/
              v19 = v9; /*0x7c3b7c*/
              if ( v9 ) /*0x7c3b80*/
              {
                v11 = v6 + 0x34; /*0x7c3b82*/
                do /*0x7c3bc0*/
                {
                  v12 = (_DWORD *)v11[1]; /*0x7c3b85*/
                  if ( v12 ) /*0x7c3b91*/
                  {
                    while ( 1 ) /*0x7c3b93*/
                    {
                      v5 = *(_DWORD *)(v17 + 4 * v10) == v12[2]; /*0x7c3b93*/
                      v13 = v12; /*0x7c3b99*/
                      v12 = (_DWORD *)*v12; /*0x7c3b9b*/
                      if ( v5 ) /*0x7c3b9d*/
                        break; /*0x7c3b9d*/
                      if ( !v12 ) /*0x7c3ba1*/
                        goto LABEL_21; /*0x7c3ba1*/
                    }
                  }
                  else
                  {
LABEL_21:
                    v13 = 0; /*0x7c3ba3*/
                  }
                  node = v13; /*0x7c3ba7*/
                  if ( v13 ) /*0x7c3bab*/
                    NiTPointerList_RemoveNode(v11, &node); /*0x7c3bb4*/
                  ++v10; /*0x7c3bb9*/
                }
                while ( v10 < v19 ); /*0x7c3bc0*/
                v6 = (char *)valueOut; /*0x7c3bc2*/
              }
              NiTPointerList_RemoveNode(v6 + 0x20, (void **)&keyOut); /*0x7c3bce*/
              sub_812D60((unsigned int *)v8); /*0x7c3bd5*/
              FormHeapFree(v8); /*0x7c3bdb*/
              --unk_B43348; /*0x7c3be3*/
            }
            if ( !v15 ) /*0x7c3bef*/
              break; /*0x7c3bef*/
            v7 = v15; /*0x7c3b37*/
          }
        }
      }
    }
    while ( position ); /*0x7c3bfa*/
  }
}
