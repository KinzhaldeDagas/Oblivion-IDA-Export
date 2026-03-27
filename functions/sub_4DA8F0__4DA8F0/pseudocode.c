int __usercall sub_4DA8F0@<eax>(int a1@<edi>, int esi0@<esi>, int a3, NiAVObject *a4, float a2)
{
  double v5; // st7
  int v6; // esi
  int result; // eax
  unsigned int v8; // ebx
  TESSaveLoad *v9; // ecx
  unsigned __int8 next; // al
  char *v11; // eax
  char *v12; // edx
  char v13; // cl
  unsigned __int8 v14; // al
  unsigned int v15; // edi
  int *v16; // ebp
  int v17; // esi
  unsigned __int16 v18; // ax
  NiAVObject *v19; // edi
  double v20; // st5
  double v21; // st7
  size_t v22; // [esp+Ch] [ebp-140h]
  size_t v23; // [esp+Ch] [ebp-140h]
  float v24; // [esp+Ch] [ebp-140h]
  size_t v25; // [esp+14h] [ebp-138h]
  char v26; // [esp+23h] [ebp-129h]
  float v27; // [esp+24h] [ebp-128h]
  float v28; // [esp+24h] [ebp-128h]
  unsigned __int8 v29; // [esp+2Bh] [ebp-121h] BYREF
  float v30; // [esp+2Ch] [ebp-120h]
  int Dst; // [esp+30h] [ebp-11Ch] BYREF
  NiAVObject *v32; // [esp+34h] [ebp-118h]
  int v33; // [esp+38h] [ebp-114h]
  int v34; // [esp+3Ch] [ebp-110h]
  int v35; // [esp+40h] [ebp-10Ch] BYREF
  char v36[260]; // [esp+44h] [ebp-108h] BYREF

  v5 = flt_A30634;
  v32 = a4;
  HIDWORD(v25) = esi0;
  v6 = a3;
  v33 = a3;
  if ( v5 == a2 )
    a2 = flt_B33A30;
  LODWORD(v25) = 2;
  SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, &Dst, v25);
  result = Dst;
  if ( (unsigned __int16)Dst > 0xFDE8u )
  {
    result = 0;
    Dst = 0;
  }
  v8 = 0;
  if ( a3 )
  {
    v8 = *(unsigned __int16 *)(a3 + 0x46);
    if ( (_WORD)result )
      *(_WORD *)(a3 + 8) |= 8u;
  }
  v26 = 0;
  v34 = 0;
  if ( (_WORD)result )
  {
    HIDWORD(v22) = a1;
    do
    {
      v9 = SaveLoad_CurrentSavegame;
      next = (unsigned __int8)SaveLoad_CurrentSavegame[1].createdObjectList.next;
      if ( next >= 0x15u && next < 0x17u )
      {
        LODWORD(v22) = 4;
        SaveLoad_LoadData((int)v9, &v35, v22);
        if ( v35 >= 0x2B )
        {
          _memset(v36, 0, sizeof(v36));
        }
        else
        {
          v11 = *(char **)(0x24 * v35 + 0xB102E0);
          v12 = (char *)(v36 - v11);
          do
          {
            v13 = *v11;
            v11[(_DWORD)v12] = *v11;
            ++v11;
          }
          while ( v13 );
        }
        v9 = SaveLoad_CurrentSavegame;
      }
      v14 = (unsigned __int8)v9[1].createdObjectList.next;
      if ( v14 < 0x15u || v14 >= 0x17u )
      {
        LODWORD(v22) = 1;
        SaveLoad_LoadData((int)v9, &v29, v22);
        _memset(v36, 0, sizeof(v36));
        LODWORD(v23) = v29;
        SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, v36, v23);
      }
      if ( v6 && (v15 = 0, v8) )
      {
        v16 = *(int **)(v6 + 0x40);
        while ( 1 )
        {
          v17 = *v16;
          if ( *v16 )
          {
            if ( !strcmp(*(const char **)(v17 + 8), v36) )
              break;
          }
          ++v15;
          ++v16;
          if ( v15 >= v8 )
          {
            v6 = v33;
            goto LABEL_28;
          }
        }
        if ( !*(_DWORD *)(v17 + 0x44) )
          sub_6C9BA0((_DWORD *)v17, 0, 0, 1.0, 0.0, 0, 0);
        sub_49F5F0((float *)v17, a2);
        v19 = v32;
        if ( v32 )
        {
          if ( sub_4808A0((int)v32) )
          {
            v30 = *(float *)(v17 + 0x48) + a2;
            v27 = a2 - v30;
            if ( v27 >= 0.0 )
              v20 = v27;
            else
              v20 = (float)0.0;
            v30 = v30 / dbl_A46E48;
            if ( flt_A46E44 > (double)v30 )
              v30 = flt_A46E44;
            v28 = v20;
            if ( v20 < a2 )
            {
              v21 = v28;
              do
              {
                v24 = v21;
                sub_7073A0(v19, v24);
                v28 = v28 + v30;
                v21 = v28;
              }
              while ( a2 > (double)v28 );
            }
          }
        }
        v6 = v33;
        v26 = 1;
      }
      else
      {
LABEL_28:
        v18 = sub_49F550();
        SaveLoad_AdvanceBufferOffset(SaveLoad_CurrentSavegame, v18);
      }
      result = ++v34;
    }
    while ( v34 < (unsigned __int16)Dst );
    if ( v26 )
    {
      if ( v32 )
        return NiAVObject_UpdateNiAVObject(v32, a2, 1);
    }
  }
  return result;
}
