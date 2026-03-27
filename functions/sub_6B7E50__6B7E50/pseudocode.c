int __thiscall sub_6B7E50(unsigned int **this)
{
  _WORD *v2; // eax
  unsigned int *v3; // edi
  unsigned int **v4; // eax
  unsigned int **v5; // esi
  bool v6; // zf
  unsigned int **v7; // eax
  int v8; // eax
  unsigned int *v9; // ecx
  unsigned int v10; // edx
  TESForm *v11; // eax
  TESForm *v12; // eax
  TESForm *v13; // eax
  int result; // eax
  size_t v15; // [esp-1Ch] [ebp-58h]
  size_t v16; // [esp-14h] [ebp-50h]
  int v17; // [esp-14h] [ebp-50h]
  int v18; // [esp-10h] [ebp-4Ch]
  size_t v19; // [esp-Ch] [ebp-48h]
  int v20; // [esp-Ch] [ebp-48h]
  int v21; // [esp-Ch] [ebp-48h]
  int v22; // [esp-8h] [ebp-44h]
  size_t v23; // [esp-4h] [ebp-40h]
  size_t v24; // [esp-4h] [ebp-40h]
  size_t v25; // [esp-4h] [ebp-40h]
  int v26; // [esp-4h] [ebp-40h]
  int v27; // [esp-4h] [ebp-40h]
  int v28; // [esp+0h] [ebp-3Ch]
  int v29; // [esp+4h] [ebp-38h]
  int v30; // [esp+4h] [ebp-38h]
  int v31; // [esp+8h] [ebp-34h]
  unsigned int *v32; // [esp+8h] [ebp-34h]
  int v33; // [esp+Ch] [ebp-30h]
  UInt32 v34; // [esp+Ch] [ebp-30h]
  int v35; // [esp+10h] [ebp-2Ch] BYREF
  int a1; // [esp+14h] [ebp-28h] BYREF
  unsigned int i; // [esp+18h] [ebp-24h] BYREF
  _DWORD Dst[5]; // [esp+1Ch] [ebp-20h] BYREF
  unsigned int v39; // [esp+38h] [ebp-4h]

  LODWORD(v23) = 1;
  SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, (char *)&a1 + 2, v23);
  for ( i = 0; i < BYTE2(a1); ++i )
  {
    v2 = (_WORD *)FormHeapAlloc(0x18u);
    Dst[4] = v2;
    v39 = 0;
    if ( v2 )
      v3 = (unsigned int *)sub_6B8390(v2);
    else
      v3 = 0;
    v39 = 0xFFFFFFFF;
    sub_6B8280(v3);
    if ( v3 )
    {
      v4 = this + 1;
      v5 = this;
      if ( *(this + 1) )
      {
        do
        {
          v5 = (unsigned int **)*v4;
          v6 = (*v4)[1] == 0;
          v4 = (unsigned int **)(*v4 + 1);
        }
        while ( !v6 );
      }
      if ( *v5 )
      {
        v7 = (unsigned int **)FormHeapAlloc(8u);
        if ( v7 )
        {
          *v7 = v3;
          v7[1] = 0;
          v5[1] = (unsigned int *)v7;
        }
        else
        {
          v5[1] = 0;
        }
      }
      else
      {
        *v5 = v3;
      }
    }
  }
  LODWORD(v24) = 1;
  SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, (char *)&a1 + 3, v24);
  if ( HIBYTE(a1) == 0xFF )
  {
    *(this + 2) = 0;
  }
  else
  {
    v8 = sub_6B7CA0(this, SHIBYTE(a1));
    v9 = (unsigned int *)this;
    if ( this )
    {
      do
      {
        v10 = v9[1];
        if ( !v10 && !*v9 )
          break;
        if ( v8 == *v9 )
        {
          *(this + 2) = v9;
          break;
        }
        v9 = (unsigned int *)v9[1];
      }
      while ( v10 );
    }
  }
  LODWORD(v25) = 4;
  SaveLoad_LoadFormID(Dst, v25, v29, v31, v33);
  if ( a1 )
  {
    v11 = TESForm_LookupByFormID(a1);
    *(this + 3) = (unsigned int *)OblivionDynamicCast(
                                    v11,
                                    0,
                                    (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                    &TESTopicInfo `RTTI Type Descriptor',
                                    0);
  }
  LODWORD(v19) = 4;
  SaveLoad_LoadFormID(&i, v19, v26, v28, v30);
  if ( v35 )
  {
    v12 = TESForm_LookupByFormID(v35);
    *(this + 4) = (unsigned int *)OblivionDynamicCast(
                                    v12,
                                    0,
                                    (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                    &TESTopic `RTTI Type Descriptor',
                                    0);
  }
  LODWORD(v16) = 4;
  SaveLoad_LoadFormID(&a1, v16, v20, v22, v27);
  if ( v34 )
  {
    v13 = TESForm_LookupByFormID(v34);
    *(this + 5) = (unsigned int *)OblivionDynamicCast(
                                    v13,
                                    0,
                                    (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                    &TESQuest `RTTI Type Descriptor',
                                    0);
  }
  LODWORD(v15) = 4;
  result = SaveLoad_LoadFormID(&v35, v15, v17, v18, v21);
  *(this + 6) = v32;
  return result;
}
