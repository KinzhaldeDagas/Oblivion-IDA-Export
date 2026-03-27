UInt32 __usercall sub_4E87C0@<eax>(TESForm *this@<ecx>, char a2@<bpl>, int a3@<edi>)
{
  TESForm *v3; // esi
  TESFormVtbl *vtbl; // eax
  TESObjectCELL *v5; // ebx
  TESObjectCELL *v6; // edi
  char *v7; // esi
  char *v8; // ebp
  int v9; // ebx
  char *j; // eax
  char *v11; // eax
  int v12; // ecx
  TESObjectCELL *v13; // edi
  int v14; // ebx
  TESObjectCELL *k; // ebp
  char *v16; // esi
  TESFormVtbl **v17; // edi
  char *v18; // eax
  size_t v20; // [esp-Ch] [ebp-30h]
  size_t v21; // [esp-Ch] [ebp-30h]
  NiTMap_Entry_TESCELL *i; // [esp+8h] [ebp-1Ch] BYREF
  TESForm *v23; // [esp+Ch] [ebp-18h]
  unsigned int v24; // [esp+10h] [ebp-14h]
  int v25; // [esp+14h] [ebp-10h]
  TESObjectCELL *v26; // [esp+18h] [ebp-Ch] BYREF
  TESObjectCELL *v27; // [esp+1Ch] [ebp-8h] BYREF
  void *v28; // [esp+20h] [ebp-4h] BYREF

  v3 = this;
  v23 = this;
  TESForm_InitializeFormRecord(this, a2);
  vtbl = v3[1].vtbl;
  if ( vtbl )
  {
    if ( (v3->member.flags & 0x20) == 0 )
    {
      HIDWORD(v20) = a3;
      v5 = (TESObjectCELL *)FormHeapAlloc((unsigned __int64)(unsigned int)vtbl >> 0x1C != 0 ? 0xFFFFFFFF : 0x10 * (_DWORD)vtbl);
      v27 = v5;
      v25 = 0;
      v24 = 0;
      for ( i = (NiTMap_Entry_TESCELL *)sub_6A9030(&v3[1].member); i; v5 = v27 )
      {
        v26 = 0;
        sub_452600((NiTMap_TESCELL *)&v3[1].member, &i, &v28, &v26);
        v6 = v26;
        if ( v26 )
        {
          v7 = (char *)v5 + 0x10 * v25;
          do
          {
            if ( !*(_DWORD *)&v6->members.super.type && !v6->vtbl )
              break;
            v8 = (char *)v6->vtbl;
            v9 = 0;
            for ( j = sub_4E7DE0((char *)v6->vtbl); j; j = *((char **)j + 1) )
            {
              if ( *(_DWORD *)j )
                ++v9;
            }
            v11 = sub_4BEF40(v8);
            v12 = *(_DWORD *)v11;
            v24 += v9;
            ++v25;
            *(_DWORD *)v7 = v12;
            *((_DWORD *)v7 + 1) = *((_DWORD *)v11 + 1);
            *((_DWORD *)v7 + 2) = *((_DWORD *)v11 + 2);
            v7[0xC] = v9;
            v6 = *(TESObjectCELL **)&v6->members.super.type;
            v7 += 0x10;
          }
          while ( v6 );
          v3 = v23;
        }
      }
      LODWORD(v20) = 0x10 * (int)v3[1].vtbl;
      TESForm_PutFormRecordChunkData(0x50524750, v5, v20);
      FormHeapFree((unsigned int)v5);
      v13 = (TESObjectCELL *)FormHeapAlloc((0xC * (unsigned __int64)v24) >> 0x20 != 0 ? 0xFFFFFFFF : 0xC * v24);
      v26 = v13;
      v14 = 0;
      i = (NiTMap_Entry_TESCELL *)sub_6A9030(&v3[1].member);
      if ( i )
      {
        do
        {
          v27 = 0;
          sub_452600((NiTMap_TESCELL *)&v3[1].member, &i, &v28, &v27);
          for ( k = v27; k; v3 = v23 )
          {
            if ( !*(_DWORD *)&k->members.super.type && !k->vtbl )
              break;
            v16 = sub_4E7DE0((char *)k->vtbl);
            if ( v16 )
            {
              v17 = &v26->vtbl + 3 * v14;
              do
              {
                if ( !*((_DWORD *)v16 + 1) && !*(_DWORD *)v16 )
                  break;
                v18 = sub_4BEF40(*(char **)v16);
                *v17 = *(TESFormVtbl **)v18;
                v17[1] = *((TESFormVtbl **)v18 + 1);
                v17[2] = *((TESFormVtbl **)v18 + 2);
                v16 = *((char **)v16 + 1);
                ++v14;
                v17 += 3;
              }
              while ( v16 );
            }
            k = *(TESObjectCELL **)&k->members.super.type;
          }
        }
        while ( i );
        v13 = v26;
      }
      LODWORD(v21) = 0xC * v24;
      TESForm_PutFormRecordChunkData(0x52524750, v13, v21);
      FormHeapFree((unsigned int)v13);
    }
  }
  return TESForm_FinalizeFormRecord(v3);
}
