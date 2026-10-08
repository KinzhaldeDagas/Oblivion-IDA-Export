Ni2DBuffer *__thiscall sub_478A40(int **this)
{
  int *v2; // ecx
  Ni2DBuffer *v3; // esi
  int v4; // edx
  int v5; // eax
  int v6; // eax
  int (__thiscall *v7)(int *); // edx
  const char *v8; // esi
  unsigned int v9; // eax
  char *v10; // edi
  char *v12; // eax
  BSStringT v14; // [esp+10h] [ebp-11Ch] BYREF
  _DWORD v15[3]; // [esp+18h] [ebp-114h] BYREF
  char v16; // [esp+24h] [ebp-108h]
  unsigned int v17; // [esp+128h] [ebp-4h]

  NiEnterCriticalSection((struct _RTL_CRITICAL_SECTION *)&unk_B33E00, (int)&unk_A2F830); /*0x478a86*/
  v2 = *(this + 0x18); /*0x478a8b*/
  v3 = 0; /*0x478a90*/
  if ( v2 ) /*0x478a94*/
  {
    v14.m_data = 0; /*0x478a9a*/
    *(_DWORD *)&v14.m_dataLen = 0; /*0x478a9e*/
    v4 = dword_A366D8; /*0x478aad*/
    v15[0] = dword_A366D4; /*0x478ab3*/
    v5 = dword_A366DC; /*0x478ab7*/
    v15[1] = v4; /*0x478abc*/
    LOBYTE(v4) = byte_A366E0; /*0x478ac0*/
    v15[2] = v5; /*0x478ac6*/
    v6 = *v2; /*0x478aca*/
    v16 = v4; /*0x478acc*/
    v7 = *(int (__thiscall **)(int *))(v6 + 0x14); /*0x478ad0*/
    v17 = 0; /*0x478ad3*/
    v8 = (const char *)v7(v2); /*0x478adc*/
    v9 = strlen(v8) + 1; /*0x478aed*/
    v10 = (char *)&v14.m_bufLen + 1; /*0x478aef*/
    while ( *++v10 ) /*0x478afa*/
      ; /*0x478af2*/
    qmemcpy(v10, v8, v9); /*0x478b01*/
    v12 = sub_54FEB0(&v14, (char *)v15); /*0x478b1a*/
    v3 = sub_553620(v12, 0, 0, 0, 1, 0); /*0x478b2d*/
    v17 = 0xFFFFFFFF; /*0x478b2f*/
    FormHeapFree((unsigned int)v14.m_data); /*0x478b3a*/
    v14.m_data = 0; /*0x478b42*/
    *(_DWORD *)&v14.m_dataLen = 0; /*0x478b4b*/
  }
  NiLeaveCriticalSection_0(&unk_B33E00); /*0x478b55*/
  return v3; /*0x478b5c*/
}
