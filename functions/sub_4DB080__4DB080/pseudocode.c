float *__usercall sub_4DB080@<eax>(int a1@<ebp>, _DWORD *a2, _DWORD *a3)
{
  NiObject *v4; // eax
  float *result; // eax
  float *v7; // edi
  NiAVObject *v8; // eax
  float *v9; // esi
  bool v10; // al
  float *v11; // eax
  float *v12; // eax
  int v13; // edi
  size_t v14; // [esp-8h] [ebp-7Ch]
  size_t v15; // [esp-8h] [ebp-7Ch]
  size_t v16; // [esp-8h] [ebp-7Ch]
  float Dst[3]; // [esp+Ch] [ebp-68h] BYREF
  float v18[3]; // [esp+18h] [ebp-5Ch] BYREF
  float v19[3]; // [esp+24h] [ebp-50h] BYREF
  float v20[4]; // [esp+30h] [ebp-44h] BYREF
  float v21[4]; // [esp+40h] [ebp-34h] BYREF
  float v22[9]; // [esp+50h] [ebp-24h] BYREF
  NiObject *v23; // [esp+78h] [ebp+4h]

  v4 = (NiObject *)a2[4];
  *((_WORD *)a2 + 6) &= ~0x40u;
  v23 = v4;
  if ( sub_452A60((Atmosphere *)a2) )
  {
    if ( sub_452A60((Atmosphere *)a2)->members.super.m_pcName )
    {
      result = (float *)sub_452A60((Atmosphere *)a2);
      if ( !strcmp(*((const char **)result + 2), "Arrow") )
        return result;
    }
  }
  HIDWORD(v14) = a1;
  v7 = (float *)a3[4];
  if ( !(*(unsigned __int8 (__thiscall **)(float *))(*(_DWORD *)v7 + 0x190))(v7) )
  {
LABEL_10:
    result = (float *)v23;
    if ( v23 )
    {
      result = (float *)NiRTTI_Cast((BSStringT *)dword_BA7D84, v23);
      v9 = result;
      if ( result )
      {
        v10 = (a3[5] & 2) == 0;
        if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) < 0x2Bu )
          v10 = a2 != (_DWORD *)a3[3];
        if ( v10 )
        {
          LODWORD(v14) = 0xC;
          SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, Dst, v14);
          LODWORD(v15) = 0x10;
          SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, v20, v15);
          sub_4D69A0(v9, Dst);
          sub_4D6A00(v9, v20);
        }
        else
        {
          a3[5] &= ~2u;
          v11 = (float *)(*(int (__thiscall **)(float *))(*(_DWORD *)v7 + 0x174))(v7);
          sub_4D69A0(v9, v11);
          v12 = sub_4D7AF0(v7, v22);
          sub_7150F0(v21, v12);
          sub_4D6A00(v9, v21);
        }
        if ( (a3[5] & 1) != 0 )
        {
          LODWORD(v14) = 0xC;
          SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, v18, v14);
          LODWORD(v16) = 0xC;
          SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, v19, v16);
          sub_4D9960((int *)v9, v18);
          result = sub_4D99E0((int *)v9, v19);
          v13 = *((_DWORD *)v9 + 2);
          if ( v13 )
          {
            sub_89F570(v9);
            sub_8A6410(v13);
            return (float *)sub_89F570(v9);
          }
        }
        else
        {
          sub_4D9960((int *)v9, &Vector3_InitValue_);
          return sub_4D99E0((int *)v9, &Vector3_InitValue_);
        }
      }
    }
    return result;
  }
  v8 = sub_452A60((Atmosphere *)a2);
  if ( !v8 || (result = (float *)v8->vtbl->super.GetType((NiObject *)v8)) == 0 )
  {
LABEL_9:
    (*(void (__thiscall **)(_DWORD *, int, _DWORD))(*a2 + 0x70))(a2, 1, 0);
    goto LABEL_10;
  }
  while ( result != (float *)dword_B35288 )
  {
    result = *((float **)result + 1);
    if ( !result )
      goto LABEL_9;
  }
  return result;
}
