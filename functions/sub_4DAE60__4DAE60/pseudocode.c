char *__cdecl sub_4DAE60(int a1, NiObject *a2)
{
  UInt32 m_uiRefCount; // ebp
  NiObject *v3; // edi
  char *result; // eax
  char *v5; // ebx
  const char *v6; // esi
  char *v7; // esi
  int v8; // eax
  bool v9; // bl
  int *v10; // edi
  int v11; // ecx
  float *v12; // eax
  float *v13; // eax
  char v14; // al
  bool v15; // zf
  int v16; // edi
  int *v17; // edi
  size_t v18; // [esp-4h] [ebp-54h]
  size_t v19; // [esp-4h] [ebp-54h]
  size_t v20; // [esp-4h] [ebp-54h]
  float Dst[3]; // [esp+10h] [ebp-40h] BYREF
  float v22[4]; // [esp+1Ch] [ebp-34h] BYREF
  float v23[9]; // [esp+2Ch] [ebp-24h] BYREF

  m_uiRefCount = a2[1].members.m_uiRefCount;
  *(_WORD *)(a1 + 0xC) &= ~0x40u;
  v3 = *(NiObject **)(a1 + 0x10);
  a2 = v3;
  result = (char *)sub_452A60((Atmosphere *)a1);
  v5 = result;
  if ( a1 != *(_DWORD *)(m_uiRefCount + 0x10) )
  {
    if ( result )
    {
      v6 = *((const char **)result + 2);
      if ( v6 )
      {
        if ( !strcmp(v6, "Arrow") )
          return result;
        v3 = a2;
      }
    }
  }
  result = (char *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(m_uiRefCount + 8) + 0x190))(*(_DWORD *)(m_uiRefCount + 8));
  if ( !(_BYTE)result || !v5 || (result = (char *)(*(int (__thiscall **)(char *))(*(_DWORD *)v5 + 4))(v5)) == 0 )
  {
LABEL_11:
    if ( !v3 )
      return result;
    result = (char *)NiRTTI_Cast((BSStringT *)dword_BA7D84, v3);
    v7 = result;
    if ( !result )
      return result;
    v8 = (*(int (__thiscall **)(char *))(*(_DWORD *)result + 0x58))(result);
    v9 = v8 != 0;
    if ( v8 )
    {
      v10 = *((int **)v7 + 2);
      if ( v10 )
      {
        sub_89F570(v7);
        sub_8A6440(v10);
        sub_89F570(v7);
      }
    }
    if ( (*(_BYTE *)m_uiRefCount & 2) != 0 )
    {
      v11 = *(_DWORD *)(m_uiRefCount + 8);
      *(_BYTE *)m_uiRefCount &= ~2u;
      v12 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v11 + 0x174))(v11);
      sub_4D69A0(v7, v12);
      v13 = sub_4D7AF0(*(float **)(m_uiRefCount + 8), v23);
      sub_7150F0(v22, v13);
      sub_4D6A00(v7, v22);
    }
    else
    {
      LODWORD(v18) = 0xC;
      SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, Dst, v18);
      LODWORD(v19) = 0x10;
      SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, v22, v19);
      sub_4D69A0(v7, Dst);
      sub_4D6A00(v7, v22);
    }
    v14 = *(_BYTE *)m_uiRefCount;
    v15 = (*(_BYTE *)m_uiRefCount & 4) == 0;
    LOBYTE(a2) = 0;
    if ( v15 )
    {
      if ( (v14 & 1) != 0 )
      {
        LOBYTE(a2) = 1;
LABEL_21:
        LODWORD(v18) = 0xC;
        SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, Dst, v18);
        LODWORD(v20) = 0xC;
        SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, v22, v20);
        sub_4D9960((int *)v7, Dst);
        result = (char *)sub_4D99E0((int *)v7, v22);
        v16 = *((_DWORD *)v7 + 2);
        if ( v16 )
        {
          sub_89F570(v7);
          sub_8A6410(v16);
          return (char *)sub_89F570(v7);
        }
        return result;
      }
    }
    else
    {
      LODWORD(v18) = 1;
      SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, &a2, v18);
      if ( (_BYTE)a2 )
        goto LABEL_21;
    }
    sub_4D9960((int *)v7, &Vector3_InitValue_);
    result = (char *)sub_4D99E0((int *)v7, &Vector3_InitValue_);
    if ( v9 )
    {
      v17 = *((int **)v7 + 2);
      if ( v17 )
      {
        sub_89F570(v7);
        sub_8A6440(v17);
        return (char *)sub_89F570(v7);
      }
    }
    return result;
  }
  while ( result != dword_B35288 )
  {
    result = *((char **)result + 1);
    if ( !result )
      goto LABEL_11;
  }
  return result;
}
