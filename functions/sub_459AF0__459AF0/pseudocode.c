signed int __thiscall sub_459AF0(NiTMap_TESCELL **this, int a2, char a3)
{
  int v3; // ebx
  NiTMap_TESCELL *v5; // esi
  void **v6; // edi
  UInt32 m_numBuckets; // ecx
  UInt32 v8; // eax
  NiTMap_Entry_TESCELL **m_buckets; // esi
  NiTMap_Entry_TESCELL **v10; // edx
  NiTMap_Entry_TESCELL *v11; // eax
  NiTMap_TESCELL *v12; // ecx
  int vtbl; // eax
  NiTMap_TESCELL *v14; // ecx
  TESSaveLoad *v15; // edx
  TESObjectCELL **v16; // ecx
  TESSaveLoad *v17; // ecx
  unsigned int *v18; // eax
  unsigned int v19; // edx
  unsigned int v20; // esi
  unsigned int v21; // eax
  unsigned __int16 *v22; // eax
  unsigned __int16 v23; // dx
  int *v24; // eax
  int v25; // edx
  UInt32 v26; // eax
  int v27; // edx
  __int16 v28; // si
  unsigned int v29; // esi
  TESSaveLoad *v30; // edi
  const void *v31; // esi
  TESSaveLoad *v32; // edi
  const void *v33; // esi
  unsigned int *v34; // eax
  int v35; // eax
  NiTMap_TESCELL *v36; // esi
  void **v37; // ebx
  TESObjectCELL *v38; // edi
  int *v39; // eax
  int *v40; // esi
  size_t v42; // [esp-4h] [ebp-A4h]
  int v43; // [esp+10h] [ebp-90h]
  void **v44; // [esp+14h] [ebp-8Ch] BYREF
  int *v45; // [esp+18h] [ebp-88h] BYREF
  TESObjectCELL *v46; // [esp+1Ch] [ebp-84h] BYREF
  unsigned int v47; // [esp+20h] [ebp-80h]
  unsigned int v48; // [esp+24h] [ebp-7Ch]
  NiTMap_Entry_TESCELL *v49; // [esp+28h] [ebp-78h] BYREF
  int v50; // [esp+2Ch] [ebp-74h]
  _DWORD *v51; // [esp+30h] [ebp-70h] BYREF
  unsigned int v52[7]; // [esp+34h] [ebp-6Ch] BYREF
  char Dst[8]; // [esp+50h] [ebp-50h] BYREF
  unsigned int v54; // [esp+58h] [ebp-48h]
  char v55[16]; // [esp+74h] [ebp-2Ch] BYREF
  unsigned int v56; // [esp+84h] [ebp-1Ch]

  v3 = a2;
  v5 = *this;
  v43 = 0;
  if ( (SaveLoad_CurrentSavegame->flags & 0x1000) == 0 )
  {
    v44 = 0;
    NiTMap_GetAt(v5, a2, &v44);
    v6 = v44;
    if ( v44 )
    {
      if ( !v44[1] )
      {
        NiTMap_RemoveAt(v5, a2);
        if ( v6[1] )
          MemoryHeap_Free_checked(v6[1]);
        FormHeapFree((unsigned int)v6);
      }
      v43 = 1;
    }
  }
  m_numBuckets = (*this)->m_numBuckets;
  v8 = 0;
  if ( m_numBuckets )
  {
    m_buckets = (*this)->m_buckets;
    v10 = m_buckets;
    while ( !*v10 )
    {
      ++v8;
      ++v10;
      if ( v8 >= m_numBuckets )
        goto LABEL_12;
    }
    v11 = m_buckets[v8];
  }
  else
  {
LABEL_12:
    v11 = 0;
  }
  v49 = v11;
  if ( v11 )
  {
    while ( 1 )
    {
      v12 = *this;
      v46 = 0;
      v44 = 0;
      sub_452600(v12, &v49, (void **)&v44, &v46);
      vtbl = (int)v46->vtbl;
      v14 = *(NiTMap_TESCELL **)&v46->members.super.type;
      *(this + 5) = v14;
      if ( v14 )
        break;
LABEL_64:
      if ( !v49 )
        goto LABEL_65;
    }
    v15 = SaveLoad_CurrentSavegame;
    v16 = (TESObjectCELL **)SaveLoad_CurrentSavegame->unk000[5];
    v46 = *v16;
    v15->unk000[5] = (UInt32)(v16 + 1);
    if ( a3 || BYTE2(v46) != 0x30 )
    {
      if ( BYTE2(v46) == 0x31 || BYTE2(v46) == 0x32 || BYTE2(v46) == 0x33 )
      {
        v29 = 0;
        if ( (vtbl & 2) != 0 )
        {
          v30 = SaveLoad_CurrentSavegame;
          v31 = (const void *)SaveLoad_CurrentSavegame->unk000[5];
          LODWORD(v42) = 0x24;
          memcpy(Dst, v31, v42);
          v30->unk000[5] = (UInt32)v31 + 0x24;
          v29 = v54;
        }
        else if ( (vtbl & 0xC) != 0 )
        {
          v32 = SaveLoad_CurrentSavegame;
          v33 = (const void *)SaveLoad_CurrentSavegame->unk000[5];
          if ( vtbl >= 0 )
          {
            LODWORD(v42) = 0x1C;
            memcpy(v52, v33, v42);
            v32->unk000[5] = (UInt32)v33 + 0x1C;
            v29 = v52[0];
          }
          else
          {
            LODWORD(v42) = 0x2C;
            memcpy(v55, v33, v42);
            v32->unk000[5] = (UInt32)v33 + 0x2C;
            v29 = v56;
          }
        }
        else if ( ((unsigned int)&loc_800000 & vtbl) != 0 )
        {
          v34 = (unsigned int *)SaveLoad_CurrentSavegame->unk000[5];
          v29 = *v34;
          SaveLoad_CurrentSavegame->unk000[5] = (UInt32)(v34 + 1);
        }
        if ( !TESDataHandler_IsFormIDCreated_(v29) )
        {
          v35 = (int)*(this + 0x1D);
          if ( v29 <= *(_DWORD *)(v35 + 0xC) )
            v29 = *(_DWORD *)(*(_DWORD *)(v35 + 4) + 4 * v29);
          else
            v29 = 0;
        }
        if ( v29 == v3 )
        {
          v36 = *this;
          v37 = v44;
          if ( (SaveLoad_CurrentSavegame->flags & 0x1000) == 0 )
          {
            v46 = 0;
            NiTMap_GetAt(v36, (int)v44, &v46);
            v38 = v46;
            if ( v46 )
            {
              NiTMap_RemoveAt(v36, (int)v37);
              if ( *(_DWORD *)&v38->members.super.type )
                MemoryHeap_Free_checked(*(void **)&v38->members.super.type);
              FormHeapFree((unsigned int)v38);
            }
          }
          if ( a3 )
          {
            if ( NiTMap_GetAt(*(this + 2), a2, &v51) )
              BSSimpleList_Remove(v51, (int)v37);
          }
          else if ( NiTMap_GetAt(*(this + 3), a2, &v45) )
          {
            v39 = v45;
            if ( v45 )
            {
              while ( !*v39 || *(void ***)*v39 != v37 )
              {
                v39 = (int *)v39[1];
                if ( !v39 )
                  goto LABEL_62;
              }
              BSSimpleList_Remove(v45, *v39);
            }
          }
LABEL_62:
          ++v43;
          v3 = a2;
        }
      }
      goto LABEL_63;
    }
    if ( HIBYTE(v46) >= 0x5Bu )
    {
      if ( (vtbl & 0x4000000) != 0 )
      {
        v24 = (int *)SaveLoad_CurrentSavegame->unk000[5];
        v25 = *v24;
        SaveLoad_CurrentSavegame->unk000[5] = (UInt32)(v24 + 1);
        if ( sub_459990(this, v25) != v3 )
        {
LABEL_63:
          *(this + 5) = 0;
          goto LABEL_64;
        }
      }
      else
      {
        if ( (vtbl & 0x2000000) == 0 )
          goto LABEL_63;
        v26 = SaveLoad_CurrentSavegame->unk000[5];
        v27 = *(_DWORD *)v26;
        v28 = *(_WORD *)(v26 + 4);
        SaveLoad_CurrentSavegame->unk000[5] = v26 + 6;
        LOWORD(v47) = v28;
        if ( sub_459990(this, v27) != v3 )
          goto LABEL_63;
      }
    }
    else
    {
      if ( (vtbl & 2) != 0 && (vtbl & 4) != 0 )
      {
        v17 = SaveLoad_CurrentSavegame;
        v18 = (unsigned int *)SaveLoad_CurrentSavegame->unk000[5];
        v19 = *v18;
        v47 = v18[1];
        v20 = v18[2];
        v17->unk000[5] = (UInt32)(v18 + 3);
        v48 = v20;
        v21 = sub_459950(this, v19);
      }
      else
      {
        v22 = (unsigned __int16 *)SaveLoad_CurrentSavegame->unk000[5];
        v23 = *v22;
        SaveLoad_CurrentSavegame->unk000[5] = (UInt32)(v22 + 1);
        LOWORD(v50) = v23;
        v21 = sub_459990(this, v23);
      }
      if ( v21 != v3 )
        goto LABEL_63;
    }
    sub_452DF0(*this, (int)v44, 1);
    goto LABEL_63;
  }
LABEL_65:
  if ( a3 )
  {
    if ( NiTMap_GetAt(*(this + 2), v3, &v45) )
    {
      v40 = v45;
      if ( !v45[1] && !*v45 )
      {
        NiTMap_RemoveAt(*(this + 2), v3);
LABEL_74:
        FormHeapFree((unsigned int)v40);
      }
    }
  }
  else if ( NiTMap_GetAt(*(this + 3), v3, &v45) )
  {
    v40 = v45;
    if ( !v45[1] && !*v45 )
    {
      NiTMap_RemoveAt(*(this + 3), v3);
      goto LABEL_74;
    }
  }
  return v43;
}
