// Verified PathGrid PGRI writer emits PGRIRecords rows verbatim (16 bytes). The nearest-point query establishes low-u16 pointIndex and NiPoint3 at +4; only the upper halfword remains Unknown.
void __usercall TESPathGrid_SaveGraphChunks(TESForm *this@<ecx>, FreeEntry *p_next@<ebp>)
{
  _WORD *v3; // ecx
  int v4; // edi
  unsigned __int16 v5; // ax
  int v6; // esi
  unsigned __int8 v7; // bl
  BSSimpleList_VoidPtr *i; // eax
  unsigned int v9; // esi
  unsigned int v10; // esi
  FreeEntry *v11; // edi
  int v12; // eax
  BSSimpleList_VoidPtr *j; // eax
  UInt32 refID; // edx
  void *data; // ebx
  unsigned int v16; // edi
  int v17; // ecx
  void **v18; // edx
  __int16 v19; // cx
  int v20; // edi
  TESForm::ModReferenceList *p_modlist; // esi
  TESForm::ModReferenceList *v22; // eax
  int v23; // ebx
  FreeEntry *v24; // eax
  Data *v25; // ecx
  TESForm::FormFlags flags; // edx
  unsigned int v27; // eax
  _DWORD *v28; // ecx
  _DWORD *v29; // eax
  _DWORD *v30; // edi
  _DWORD *v31; // eax
  int v32; // ebx
  _DWORD *v33; // esi
  TESFormMembr *p_member; // edi
  int v35; // eax
  TESForm::FormFlags v36; // edx
  unsigned int v37; // eax
  _DWORD **v38; // ecx
  int v39; // ecx
  _DWORD *v40; // eax
  FreeEntry *v41; // eax
  FreeEntry *v42; // edx
  FreeEntry *v43; // edi
  UInt32 v44; // ecx
  int v45; // ebx
  unsigned int v46; // edi
  int v47; // eax
  _DWORD *v48; // ecx
  _BYTE v49[12]; // [esp-10h] [ebp-2Ch]
  size_t v50; // [esp-Ch] [ebp-28h]
  size_t v51; // [esp-Ch] [ebp-28h]
  size_t v52; // [esp-Ch] [ebp-28h]
  size_t v53; // [esp-Ch] [ebp-28h]
  int Src; // [esp+8h] [ebp-14h] BYREF
  TESForm *v55; // [esp+Ch] [ebp-10h]
  unsigned int v56; // [esp+10h] [ebp-Ch]
  int Size; // [esp+14h] [ebp-8h]
  FreeEntry *v58; // [esp+18h] [ebp-4h]

  v3 = *((_WORD **)this + 9); /*0x4e61c6*/
  v4 = 0; /*0x4e61ca*/
  v55 = this; /*0x4e61ce*/
  if ( v3 )
  {
    sub_521BE0(v3); /*0x4e61d8*/
    if ( *(_WORD *)(*((_DWORD *)this + 9) + 0xA) )
    {
      HIDWORD(v50) = p_next; /*0x4e61eb*/
      TESForm_InitializeFormRecord(this, (char)p_next); /*0x4e61ee*/
      LODWORD(v50) = 2; /*0x4e61fa*/
      LOWORD(Src) = *(_WORD *)(*((_DWORD *)this + 9) + 0xA); /*0x4e6206*/
      TESForm_PutFormRecordChunkData(0x41544144, &Src, v50); /*0x4e620b*/
      Size = FormHeapAlloc((unsigned __int64)(unsigned __int16)Src >> 0x1C != 0 ? 0xFFFFFFFF : 0x10
                                                                                             * (unsigned __int16)Src);
      v5 = Src; /*0x4e622f*/
      v56 = 0; /*0x4e623a*/
      if ( (_WORD)Src ) /*0x4e623e*/
      {
        v6 = Size; /*0x4e6240*/
        do /*0x4e62a0*/
        {
          p_next = *(FreeEntry **)(*(_DWORD *)(v55[1].member.refID + 4) + 4 * v4); /*0x4e624e*/
          v7 = 0; /*0x4e6253*/
          for ( i = PathGraphNode_GetConnections(p_next); i; i = (BSSimpleList_VoidPtr *)i->firstNode.next ) /*0x4e625c*/
          {
            if ( i->firstNode.data ) /*0x4e6260*/
              ++v7; /*0x4e6265*/
          }
          v56 += v7; /*0x4e6272*/
          *(_BYTE *)(v6 + 0xC) = v7; /*0x4e6278*/
          *(NiPoint3 *)v6 = *PathGraphNode_GetPosition(p_next); /*0x4e6282*/
          v5 = Src; /*0x4e6290*/
          ++v4; /*0x4e6298*/
          v6 += 0x10; /*0x4e629b*/
        }
        while ( v4 < (unsigned __int16)Src ); /*0x4e62a0*/
      }
      v9 = Size; /*0x4e62a2*/
      LODWORD(v51) = 0x10 * v5; /*0x4e62ac*/
      TESForm_PutFormRecordChunkData(0x50524750, (void *)Size, v51); /*0x4e62b3*/
      FormHeapFree(v9); /*0x4e62b9*/
      v10 = v56; /*0x4e62be*/
      if ( v56 )
      {
        v11 = (FreeEntry *)FormHeapAlloc((unsigned __int64)v56 >> 0x1F != 0 ? 0xFFFFFFFF : 2 * v56);
        v12 = 0; /*0x4e62e7*/
        p_next = 0; /*0x4e62ec*/
        v58 = v11; /*0x4e62f3*/
        Size = 0; /*0x4e62f7*/
        if ( (_WORD)Src ) /*0x4e62fb*/
        {
          do /*0x4e6390*/
          {
            for ( j = PathGraphNode_GetConnections(*(void **)(*(_DWORD *)(v55[1].member.refID + 4) + 4 * v12)); /*0x4e6315*/
                  j;
                  p_next = (FreeEntry *)((char *)p_next + 1) )
            {
              if ( !j->firstNode.next && !j->firstNode.data ) /*0x4e631d*/
                break; /*0x4e6320*/
              refID = v55[1].member.refID; /*0x4e6326*/
              data = j->firstNode.data; /*0x4e6329*/
              v16 = 0xFFFFFFFF; /*0x4e632b*/
              if ( refID ) /*0x4e6330*/
              {
                if ( data ) /*0x4e6334*/
                {
                  v17 = 0; /*0x4e633e*/
                  if ( LOWORD(v55[2].vtbl) ) /*0x4e633a*/
                  {
                    v18 = *(void ***)(refID + 4); /*0x4e6344*/
                    while ( *v18 != data ) /*0x4e6349*/
                    {
                      ++v17; /*0x4e634b*/
                      ++v18; /*0x4e634e*/
                      if ( v17 >= LOWORD(v55[2].vtbl) ) /*0x4e6353*/
                        goto LABEL_23; /*0x4e6353*/
                    }
                    v16 = v17; /*0x4e6357*/
                  }
                }
              }
LABEL_23:
              v19 = v16; /*0x4e6359*/
              if ( v16 >= 0x10000 ) /*0x4e635d*/
                v19 = 0xFFFF; /*0x4e6367*/
              *((_WORD *)&v58->prev + (_DWORD)p_next) = v19; /*0x4e6370*/
              j = (BSSimpleList_VoidPtr *)j->firstNode.next; /*0x4e6374*/
            }
            v12 = ++Size; /*0x4e6387*/
          }
          while ( Size < (unsigned __int16)Src ); /*0x4e6390*/
          v11 = v58; /*0x4e6396*/
          v10 = v56; /*0x4e639a*/
        }
        *(_DWORD *)&v49[4] = 2 * v10; /*0x4e63a1*/
        TESForm_PutFormRecordChunkData(0x52524750, v11, *(size_t *)&v49[4]); /*0x4e63a8*/
        FormHeapFree((unsigned int)v11); /*0x4e63ae*/
      }
      v20 = 0; /*0x4e63ba*/
      p_modlist = &v55[1].member.modlist; /*0x4e63bc*/
      v22 = &v55[1].member.modlist; /*0x4e63bf*/
      if ( v55 != (TESForm *)0xFFFFFFD8 ) /*0x4e63c1*/
      {
        do /*0x4e63d4*/
        {
          if ( v22->data ) /*0x4e63c7*/
            ++v20; /*0x4e63cc*/
          v22 = v22->next; /*0x4e63cf*/
        }
        while ( v22 ); /*0x4e63d4*/
        if ( v20 ) /*0x4e63d8*/
        {
          *(_DWORD *)&v49[4] = 1; /*0x4e63dc*/
          v23 = 0x10 * v20; /*0x4e63de*/
          *(_DWORD *)v49 = 0x10 * v20; /*0x4e63e1*/
          v24 = j_MemoryHeap_Alloc(&FormHeap, (char)p_next, *(size_t *)v49, *(int *)&v49[8]); /*0x4e63e7*/
          p_next = v24; /*0x4e63ee*/
          if ( v20 > 0 ) /*0x4e63f0*/
          {
            do /*0x4e6417*/
            {
              if ( p_modlist ) /*0x4e63f4*/
              {
                v25 = p_modlist->data; /*0x4e63f6*/
                v24->prev = (FreeEntry *)p_modlist->data->errorState; /*0x4e63fa*/
                v24->next = (FreeEntry *)v25->ghostFileParent; /*0x4e63ff*/
                v24[1].prev = (FreeEntry *)v25->unk008; /*0x4e6405*/
                v24[1].next = (FreeEntry *)v25->unkFile00C; /*0x4e640b*/
              }
              p_modlist = p_modlist->next; /*0x4e640e*/
              v24 += 2; /*0x4e6411*/
              --v20; /*0x4e6414*/
            }
            while ( v20 ); /*0x4e6417*/
          }
          LODWORD(v52) = v23; /*0x4e6419*/
          TESForm_PutFormRecordChunkData(0x49524750, p_next, v52); /*0x4e6420*/
          MemoryHeap_Free_checked(p_next); /*0x4e642e*/
        }
      }
      flags = v55[2].member.flags; /*0x4e6437*/
      v27 = 0; /*0x4e643d*/
      if ( flags ) /*0x4e6441*/
      {
        v28 = (_DWORD *)v55[2].member.refID; /*0x4e6446*/
        while ( !*v28 ) /*0x4e644b*/
        {
          ++v27; /*0x4e644d*/
          ++v28; /*0x4e6450*/
          if ( v27 >= flags ) /*0x4e6455*/
            goto LABEL_43; /*0x4e6455*/
        }
        v29 = *(_DWORD **)(v55[2].member.refID + 4 * v27); /*0x4e6477*/
      }
      else
      {
LABEL_43:
        v29 = 0; /*0x4e6457*/
      }
      v30 = v29; /*0x4e645b*/
      while ( v30 ) /*0x4e645d*/
      {
        v31 = (_DWORD *)*v30; /*0x4e6463*/
        v32 = v30[1]; /*0x4e6467*/
        v33 = (_DWORD *)v30[2]; /*0x4e646a*/
        if ( *v30 ) /*0x4e6463*/
        {
          v30 = (_DWORD *)*v30; /*0x4e646f*/
          v56 = (unsigned int)v31; /*0x4e6471*/
        }
        else
        {
          p_member = &v55[2].member; /*0x4e6486*/
          v35 = (*(int (__thiscall **)(TESFormMembr *, int))(*(_DWORD *)&v55[2].member.type + 4))(&v55[2].member, v32); /*0x4e648c*/
          v36 = p_member->flags; /*0x4e648e*/
          v37 = v35 + 1; /*0x4e6491*/
          if ( v37 >= v36 ) /*0x4e6496*/
          {
LABEL_52:
            v30 = 0; /*0x4e64b0*/
          }
          else
          {
            v38 = (_DWORD **)(p_member->refID + 4 * v37); /*0x4e649b*/
            while ( 1 ) /*0x4e64a0*/
            {
              v30 = *v38; /*0x4e64a0*/
              if ( *v38 ) /*0x4e64a0*/
                break; /*0x4e64a0*/
              ++v37; /*0x4e64a6*/
              ++v38; /*0x4e64a9*/
              if ( v37 >= v36 ) /*0x4e64ae*/
                goto LABEL_52; /*0x4e64ae*/
            }
          }
          v56 = (unsigned int)v30; /*0x4e64b2*/
        }
        if ( v32 && v33 && (v33[1] || *v33) ) /*0x4e64cc*/
        {
          v39 = 0; /*0x4e64d5*/
          v40 = v33; /*0x4e64d7*/
          do /*0x4e64ed*/
          {
            if ( *v40 ) /*0x4e64e0*/
              ++v39; /*0x4e64e5*/
            v40 = (_DWORD *)v40[1]; /*0x4e64e8*/
          }
          while ( v40 ); /*0x4e64ed*/
          Size = 4 * v39 + 4; /*0x4e64f8*/
          v41 = j_MemoryHeap_Alloc(&FormHeap, (char)p_next, (unsigned int)Size | 0x100000000LL, *(int *)&v49[8]); /*0x4e6502*/
          v42 = *(FreeEntry **)(v32 + 0xC); /*0x4e6507*/
          v43 = v41; /*0x4e650a*/
          v58 = v41; /*0x4e650c*/
          v41->prev = v42; /*0x4e6510*/
          p_next = (FreeEntry *)&v41->next; /*0x4e6512*/
          do /*0x4e6566*/
          {
            if ( !v33[1] && !*v33 ) /*0x4e651b*/
              break; /*0x4e651e*/
            v44 = v55[1].member.refID; /*0x4e6524*/
            v45 = *v33; /*0x4e6527*/
            v46 = 0xFFFFFFFF; /*0x4e6529*/
            if ( v44 ) /*0x4e652e*/
            {
              if ( v45 ) /*0x4e6532*/
              {
                v47 = 0; /*0x4e653c*/
                if ( LOWORD(v55[2].vtbl) ) /*0x4e6538*/
                {
                  v48 = *(_DWORD **)(v44 + 4); /*0x4e6542*/
                  while ( *v48 != v45 ) /*0x4e6547*/
                  {
                    ++v47; /*0x4e6549*/
                    ++v48; /*0x4e654c*/
                    if ( v47 >= LOWORD(v55[2].vtbl) ) /*0x4e6551*/
                      goto LABEL_73; /*0x4e6551*/
                  }
                  v46 = v47; /*0x4e6555*/
                }
              }
            }
LABEL_73:
            p_next->prev = (FreeEntry *)v46; /*0x4e6557*/
            v33 = (_DWORD *)v33[1]; /*0x4e655a*/
            v43 = v58; /*0x4e655d*/
            p_next = (FreeEntry *)((char *)p_next + 4); /*0x4e6561*/
          }
          while ( v33 ); /*0x4e6566*/
          LODWORD(v53) = Size; /*0x4e656c*/
          TESForm_PutFormRecordChunkData(0x4C524750, v43, v53); /*0x4e6573*/
          MemoryHeap_Free_checked(v43); /*0x4e6581*/
          v30 = (_DWORD *)v56; /*0x4e6586*/
        }
      }
      TESForm_FinalizeFormRecord(v55); /*0x4e6596*/
      TESForm_CompressSaveBuffer(); /*0x4e659b*/
    }
  }
}
