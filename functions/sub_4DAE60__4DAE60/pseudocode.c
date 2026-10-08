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
  NiMatrix33 *v13; // eax
  char v14; // al
  bool v15; // zf
  int v16; // edi
  int *v17; // edi
  float Dst[3]; // [esp+10h] [ebp-40h] BYREF
  float destination[4]; // [esp+1Ch] [ebp-34h] BYREF
  NiMatrix33 v20; // [esp+2Ch] [ebp-24h] BYREF

  m_uiRefCount = a2[1].members.m_uiRefCount; /*0x4dae69*/
  *(_WORD *)(a1 + 0xC) &= ~0x40u; /*0x4dae71*/
  v3 = *(NiObject **)(a1 + 0x10); /*0x4dae78*/
  a2 = v3; /*0x4dae7d*/
  result = (char *)Shared_GetPointerAtOffset08((Atmosphere *)a1); /*0x4dae81*/
  v5 = result; /*0x4dae89*/
  if ( a1 != *(_DWORD *)(m_uiRefCount + 0x10) ) /*0x4dae8b*/
  {
    if ( result ) /*0x4dae8f*/
    {
      v6 = *((const char **)result + 2); /*0x4dae91*/
      if ( v6 ) /*0x4dae96*/
      {
        if ( !strcmp(v6, "Arrow") ) /*0x4daea6*/
          return result; /*0x4daea6*/
        v3 = a2; /*0x4daeac*/
      }
    }
  }
  result = (char *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(m_uiRefCount + 8) + 0x190))(*(_DWORD *)(m_uiRefCount + 8)); /*0x4daebb*/
  if ( !(_BYTE)result || !v5 || (result = (char *)(*(int (__thiscall **)(char *))(*(_DWORD *)v5 + 4))(v5)) == 0 ) /*0x4daed0*/
  {
LABEL_11:
    if ( !v3 ) /*0x4daee6*/
      return result; /*0x4daee6*/
    result = (char *)NiRTTI_Cast((BSStringT *)&stru_BA7D84, v3); /*0x4daef2*/
    v7 = result; /*0x4daef7*/
    if ( !result ) /*0x4daefe*/
      return result; /*0x4daefe*/
    v8 = (*(int (__thiscall **)(char *))(*(_DWORD *)result + 0x58))(result); /*0x4daf0b*/
    v9 = v8 != 0; /*0x4daf0f*/
    if ( v8 ) /*0x4daf14*/
    {
      v10 = *((int **)v7 + 2); /*0x4daf16*/
      if ( v10 ) /*0x4daf1b*/
      {
        bhkRefObject_UpdateHavokObject(v7); /*0x4daf1f*/
        sub_8A6440(v10); /*0x4daf26*/
        bhkRefObject_UpdateHavokObject(v7); /*0x4daf2d*/
      }
    }
    if ( (*(_BYTE *)m_uiRefCount & 2) != 0 ) /*0x4daf37*/
    {
      v11 = *(_DWORD *)(m_uiRefCount + 8); /*0x4daf39*/
      *(_BYTE *)m_uiRefCount &= ~2u; /*0x4daf3e*/
      v12 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v11 + 0x174))(v11); /*0x4daf49*/
      sub_4D69A0(v7, v12); /*0x4daf4e*/
      v13 = sub_4D7AF0(*(float **)(m_uiRefCount + 8), &v20); /*0x4daf5b*/
      sub_7150F0(destination, (float *)v13); /*0x4daf65*/
      sub_4D6A00(v7, destination); /*0x4daf6f*/
    }
    else
    {
      SaveLoad_LoadData(g_TESSaveLoadGame, Dst, 0xCu); /*0x4daf7e*/
      SaveLoad_LoadData(g_TESSaveLoadGame, destination, 0x10u); /*0x4daf90*/
      sub_4D69A0(v7, Dst); /*0x4daf9c*/
      sub_4D6A00(v7, destination); /*0x4dafa8*/
    }
    v14 = *(_BYTE *)m_uiRefCount; /*0x4dafad*/
    v15 = (*(_BYTE *)m_uiRefCount & 4) == 0; /*0x4dafb0*/
    LOBYTE(a2) = 0; /*0x4dafb2*/
    if ( v15 ) /*0x4dafb7*/
    {
      if ( (v14 & 1) != 0 ) /*0x4db034*/
      {
        LOBYTE(a2) = 1; /*0x4db036*/
LABEL_21:
        SaveLoad_LoadData(g_TESSaveLoadGame, Dst, 0xCu); /*0x4dafd2*/
        SaveLoad_LoadData(g_TESSaveLoadGame, destination, 0xCu); /*0x4daff1*/
        sub_4D9960((int *)v7, Dst); /*0x4daffd*/
        result = (char *)sub_4D99E0((int *)v7, destination); /*0x4db009*/
        v16 = *((_DWORD *)v7 + 2); /*0x4db00e*/
        if ( v16 ) /*0x4db013*/
        {
          bhkRefObject_UpdateHavokObject(v7); /*0x4db017*/
          sub_8A6410(v16); /*0x4db01e*/
          return (char *)bhkRefObject_UpdateHavokObject(v7); /*0x4db025*/
        }
        return result; /*0x4db025*/
      }
    }
    else
    {
      SaveLoad_LoadData(g_TESSaveLoadGame, &a2, 1u); /*0x4dafc6*/
      if ( (_BYTE)a2 ) /*0x4dafd0*/
        goto LABEL_21; /*0x4dafd0*/
    }
    sub_4D9960((int *)v7, &g_zeroNiPoint3.x); /*0x4db044*/
    result = (char *)sub_4D99E0((int *)v7, &g_zeroNiPoint3.x); /*0x4db050*/
    if ( v9 ) /*0x4db057*/
    {
      v17 = *((int **)v7 + 2); /*0x4db059*/
      if ( v17 ) /*0x4db05e*/
      {
        bhkRefObject_UpdateHavokObject(v7); /*0x4db062*/
        sub_8A6440(v17); /*0x4db069*/
        return (char *)bhkRefObject_UpdateHavokObject(v7); /*0x4db077*/
      }
    }
    return result; /*0x4db077*/
  }
  while ( result != &MEMORY[0xB33E90][0x13F8] ) /*0x4daed7*/
  {
    result = *((char **)result + 1); /*0x4daedd*/
    if ( !result ) /*0x4daee2*/
      goto LABEL_11; /*0x4daee2*/
  }
  return result; /*0x4db02a*/
}
