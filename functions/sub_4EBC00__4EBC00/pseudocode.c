int __thiscall sub_4EBC00(NiTMap_TESCELL *this)
{
  UInt32 m_numBuckets; // ecx
  __int16 v4; // bp
  UInt32 v5; // eax
  NiTMap_Entry_TESCELL **m_buckets; // edx
  NiTMap_Entry_TESCELL *v7; // eax
  TESFormVtbl *vtbl; // eax
  int v9; // edx
  TESObjectCELL *v10; // [esp+4h] [ebp-18h] BYREF
  NiTMap_Entry_TESCELL *v11; // [esp+8h] [ebp-14h] BYREF
  void *v12; // [esp+Ch] [ebp-10h] BYREF
  float v13; // [esp+10h] [ebp-Ch]
  float v14; // [esp+14h] [ebp-8h]

  if ( this->m_numItems )
    return 0;
  byte_B3608F = byte_B43077 != 0;
  sub_4EB1A0(this);
  m_numBuckets = this->m_numBuckets;
  v4 = 0;
  v5 = 0;
  if ( m_numBuckets )
  {
    m_buckets = this->m_buckets;
    while ( !*m_buckets )
    {
      ++v5;
      ++m_buckets;
      if ( v5 >= m_numBuckets )
        goto LABEL_7;
    }
    v7 = this->m_buckets[v5];
  }
  else
  {
LABEL_7:
    v7 = 0;
  }
  v11 = v7;
  while ( v11 )
  {
    v10 = 0;
    sub_452600(this, &v11, &v12, &v10);
    if ( v10 )
    {
      vtbl = v10->vtbl;
      if ( v10->vtbl )
      {
        if ( vtbl->Unk_05 )
        {
          v9 = SLOWORD(v10->members.super.flags) << 0x11;
          v10 = (TESObjectCELL *)(SHIWORD(v10->members.super.flags) << 0x11);
          vtbl->super.CopyFromBase = (void (__thiscall *)(BaseFormComponent *, BaseFormComponent *))5;
          ++v4;
          v13 = (float)v9;
          v14 = (float)(int)v10;
          *(float *)&vtbl->Unk_06 = v13;
          *(float *)&vtbl->LoadForm = v14;
          *(float *)&vtbl->ClearModified = flt_A47B20;
        }
      }
    }
  }
  return v4;
}
