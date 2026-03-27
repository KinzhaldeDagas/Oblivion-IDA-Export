void __usercall sub_4E61C0(TESForm *this@<ecx>, FreeEntry *p_next@<ebp>)
{
  _WORD *v3; // ecx
  int v4; // edi
  unsigned __int16 v5; // ax
  int v6; // esi
  unsigned __int8 v7; // bl
  _DWORD *i; // eax
  char *v9; // eax
  unsigned int v10; // esi
  unsigned int v11; // esi
  FreeEntry *v12; // edi
  int v13; // eax
  int *j; // eax
  UInt32 refID; // edx
  int v16; // ebx
  unsigned int v17; // edi
  int v18; // ecx
  _DWORD *v19; // edx
  __int16 v20; // cx
  int v21; // edi
  TESForm::ModReferenceList *p_modlist; // esi
  TESForm::ModReferenceList *v23; // eax
  int v24; // ebx
  FreeEntry *v25; // eax
  Data *data; // ecx
  TESForm::FormFlags flags; // edx
  unsigned int v28; // eax
  _DWORD *v29; // ecx
  _DWORD *v30; // eax
  _DWORD *v31; // edi
  _DWORD *v32; // eax
  int v33; // ebx
  _DWORD *v34; // esi
  TESFormMembr *p_member; // edi
  int v36; // eax
  TESForm::FormFlags v37; // edx
  unsigned int v38; // eax
  _DWORD **v39; // ecx
  int v40; // ecx
  _DWORD *v41; // eax
  FreeEntry *v42; // eax
  FreeEntry *v43; // edx
  FreeEntry *v44; // edi
  UInt32 v45; // ecx
  int v46; // ebx
  unsigned int v47; // edi
  int v48; // eax
  _DWORD *v49; // ecx
  _BYTE v50[12]; // [esp-10h] [ebp-2Ch]
  size_t v51; // [esp-Ch] [ebp-28h]
  size_t v52; // [esp-Ch] [ebp-28h]
  size_t v53; // [esp-Ch] [ebp-28h]
  size_t v54; // [esp-Ch] [ebp-28h]
  int Src; // [esp+8h] [ebp-14h] BYREF
  TESForm *v56; // [esp+Ch] [ebp-10h]
  unsigned int v57; // [esp+10h] [ebp-Ch]
  int Size; // [esp+14h] [ebp-8h]
  FreeEntry *v59; // [esp+18h] [ebp-4h]

  v3 = *((_WORD **)this + 9);
  v4 = 0;
  v56 = this;
  if ( v3 )
  {
    sub_521BE0(v3);
    if ( *(_WORD *)(*((_DWORD *)this + 9) + 0xA) )
    {
      HIDWORD(v51) = p_next;
      TESForm_InitializeFormRecord(this, (char)p_next);
      LODWORD(v51) = 2;
      LOWORD(Src) = *(_WORD *)(*((_DWORD *)this + 9) + 0xA);
      TESForm_PutFormRecordChunkData(0x41544144, &Src, v51);
      Size = FormHeapAlloc((unsigned __int64)(unsigned __int16)Src >> 0x1C != 0 ? 0xFFFFFFFF : 0x10
                                                                                             * (unsigned __int16)Src);
      v5 = Src;
      v57 = 0;
      if ( (_WORD)Src )
      {
        v6 = Size;
        do
        {
          p_next = *(FreeEntry **)(*(_DWORD *)(v56[1].member.refID + 4) + 4 * v4);
          v7 = 0;
          for ( i = (_DWORD *)sub_4E7DE0((char *)p_next); i; i = (_DWORD *)i[1] )
          {
            if ( *i )
              ++v7;
          }
          v57 += v7;
          *(_BYTE *)(v6 + 0xC) = v7;
          v9 = sub_4BEF40((char *)p_next);
          *(_DWORD *)v6 = *(_DWORD *)v9;
          *(_DWORD *)(v6 + 4) = *((_DWORD *)v9 + 1);
          *(_DWORD *)(v6 + 8) = *((_DWORD *)v9 + 2);
          v5 = Src;
          ++v4;
          v6 += 0x10;
        }
        while ( v4 < (unsigned __int16)Src );
      }
      v10 = Size;
      LODWORD(v52) = 0x10 * v5;
      TESForm_PutFormRecordChunkData(0x50524750, (void *)Size, v52);
      FormHeapFree(v10);
      v11 = v57;
      if ( v57 )
      {
        v12 = (FreeEntry *)FormHeapAlloc((unsigned __int64)v57 >> 0x1F != 0 ? 0xFFFFFFFF : 2 * v57);
        v13 = 0;
        p_next = 0;
        v59 = v12;
        Size = 0;
        if ( (_WORD)Src )
        {
          do
          {
            for ( j = (int *)sub_4E7DE0(*(char **)(*(_DWORD *)(v56[1].member.refID + 4) + 4 * v13));
                  j;
                  p_next = (FreeEntry *)((char *)p_next + 1) )
            {
              if ( !j[1] && !*j )
                break;
              refID = v56[1].member.refID;
              v16 = *j;
              v17 = 0xFFFFFFFF;
              if ( refID )
              {
                if ( v16 )
                {
                  v18 = 0;
                  if ( LOWORD(v56[2].vtbl) )
                  {
                    v19 = *(_DWORD **)(refID + 4);
                    while ( *v19 != v16 )
                    {
                      ++v18;
                      ++v19;
                      if ( v18 >= LOWORD(v56[2].vtbl) )
                        goto LABEL_23;
                    }
                    v17 = v18;
                  }
                }
              }
LABEL_23:
              v20 = v17;
              if ( v17 >= 0x10000 )
                v20 = 0xFFFF;
              *((_WORD *)&v59->prev + (_DWORD)p_next) = v20;
              j = (int *)j[1];
            }
            v13 = ++Size;
          }
          while ( Size < (unsigned __int16)Src );
          v12 = v59;
          v11 = v57;
        }
        *(_DWORD *)&v50[4] = 2 * v11;
        TESForm_PutFormRecordChunkData(0x52524750, v12, *(size_t *)&v50[4]);
        FormHeapFree((unsigned int)v12);
      }
      v21 = 0;
      p_modlist = &v56[1].member.modlist;
      v23 = &v56[1].member.modlist;
      if ( v56 != (TESForm *)0xFFFFFFD8 )
      {
        do
        {
          if ( v23->data )
            ++v21;
          v23 = v23->next;
        }
        while ( v23 );
        if ( v21 )
        {
          *(_DWORD *)&v50[4] = 1;
          v24 = 0x10 * v21;
          *(_DWORD *)v50 = 0x10 * v21;
          v25 = j_MemoryHeap_Alloc(&FormHeap, (char)p_next, *(size_t *)v50, *(int *)&v50[8]);
          p_next = v25;
          if ( v21 > 0 )
          {
            do
            {
              if ( p_modlist )
              {
                data = p_modlist->data;
                v25->prev = (FreeEntry *)p_modlist->data->errorState;
                v25->next = (FreeEntry *)data->ghostFileParent;
                v25[1].prev = (FreeEntry *)data->unk008;
                v25[1].next = (FreeEntry *)data->unkFile00C;
              }
              p_modlist = p_modlist->next;
              v25 += 2;
              --v21;
            }
            while ( v21 );
          }
          LODWORD(v53) = v24;
          TESForm_PutFormRecordChunkData(0x49524750, p_next, v53);
          MemoryHeap_Free_checked(p_next);
        }
      }
      flags = v56[2].member.flags;
      v28 = 0;
      if ( flags )
      {
        v29 = (_DWORD *)v56[2].member.refID;
        while ( !*v29 )
        {
          ++v28;
          ++v29;
          if ( v28 >= flags )
            goto LABEL_43;
        }
        v30 = *(_DWORD **)(v56[2].member.refID + 4 * v28);
      }
      else
      {
LABEL_43:
        v30 = 0;
      }
      v31 = v30;
      while ( v31 )
      {
        v32 = (_DWORD *)*v31;
        v33 = v31[1];
        v34 = (_DWORD *)v31[2];
        if ( *v31 )
        {
          v31 = (_DWORD *)*v31;
          v57 = (unsigned int)v32;
        }
        else
        {
          p_member = &v56[2].member;
          v36 = (*(int (__thiscall **)(TESFormMembr *, int))(*(_DWORD *)&v56[2].member.type + 4))(&v56[2].member, v33);
          v37 = p_member->flags;
          v38 = v36 + 1;
          if ( v38 >= v37 )
          {
LABEL_52:
            v31 = 0;
          }
          else
          {
            v39 = (_DWORD **)(p_member->refID + 4 * v38);
            while ( 1 )
            {
              v31 = *v39;
              if ( *v39 )
                break;
              ++v38;
              ++v39;
              if ( v38 >= v37 )
                goto LABEL_52;
            }
          }
          v57 = (unsigned int)v31;
        }
        if ( v33 && v34 && (v34[1] || *v34) )
        {
          v40 = 0;
          v41 = v34;
          do
          {
            if ( *v41 )
              ++v40;
            v41 = (_DWORD *)v41[1];
          }
          while ( v41 );
          Size = 4 * v40 + 4;
          v42 = j_MemoryHeap_Alloc(&FormHeap, (char)p_next, (unsigned int)Size | 0x100000000LL, *(int *)&v50[8]);
          v43 = *(FreeEntry **)(v33 + 0xC);
          v44 = v42;
          v59 = v42;
          v42->prev = v43;
          p_next = (FreeEntry *)&v42->next;
          do
          {
            if ( !v34[1] && !*v34 )
              break;
            v45 = v56[1].member.refID;
            v46 = *v34;
            v47 = 0xFFFFFFFF;
            if ( v45 )
            {
              if ( v46 )
              {
                v48 = 0;
                if ( LOWORD(v56[2].vtbl) )
                {
                  v49 = *(_DWORD **)(v45 + 4);
                  while ( *v49 != v46 )
                  {
                    ++v48;
                    ++v49;
                    if ( v48 >= LOWORD(v56[2].vtbl) )
                      goto LABEL_73;
                  }
                  v47 = v48;
                }
              }
            }
LABEL_73:
            p_next->prev = (FreeEntry *)v47;
            v34 = (_DWORD *)v34[1];
            v44 = v59;
            p_next = (FreeEntry *)((char *)p_next + 4);
          }
          while ( v34 );
          LODWORD(v54) = Size;
          TESForm_PutFormRecordChunkData(0x4C524750, v44, v54);
          MemoryHeap_Free_checked(v44);
          v31 = (_DWORD *)v57;
        }
      }
      TESForm_FinalizeFormRecord(v56);
      sub_46B370();
    }
  }
}
