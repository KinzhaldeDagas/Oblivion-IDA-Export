NiAVObject *__userpurge sub_609D50@<eax>(
        _DWORD *a1@<ecx>,
        double a2@<st2>,
        double a3@<st0>,
        double a4@<st1>,
        float a5,
        int a6,
        int a7,
        int a8,
        int a9,
        char a10)
{
  NiAVObject *result; // eax
  _DWORD *v12; // ecx
  NiExtraData **m_extraDataList; // ecx
  char v14; // al
  _DWORD v15[5]; // [esp+4h] [ebp-24h] BYREF
  char v16; // [esp+18h] [ebp-10h]
  char v17; // [esp+19h] [ebp-Fh]
  char *v18; // [esp+1Ch] [ebp-Ch]
  NiExtraData **v19; // [esp+20h] [ebp-8h]
  int v20; // [esp+24h] [ebp-4h]

  result = (NiAVObject *)(*(int (__usercall **)@<eax>(_DWORD *@<ecx>, double@<st0>, double@<st1>))(*a1 + 0x154))( /*0x609d5e*/
                           a1,
                           a3,
                           a4);
  if ( result ) /*0x609d62*/
  {
    v12 = (_DWORD *)a1[0x17]; /*0x609d64*/
    if ( v12 ) /*0x609d69*/
    {
      if ( *v12 == 1 ) /*0x609d6e*/
      {
        result = (NiAVObject *)NiAVObject_FindBhkCollisionObjectRecursive(result); /*0x609d71*/
        if ( result ) /*0x609d7b*/
        {
          m_extraDataList = result->members.super.m_extraDataList; /*0x609d7d*/
          if ( m_extraDataList ) /*0x609d82*/
          {
            *(float *)&v15[4] = kHeadBodyNormalMatchRadius; /*0x609d8f*/
            v19 = m_extraDataList; /*0x609d93*/
            v20 = a9; /*0x609d97*/
            v14 = *(_BYTE *)(sub_494F10(m_extraDataList) + 0x10); /*0x609da4*/
            *(float *)&v15[3] = a5; /*0x609da7*/
            v15[0] = a6; /*0x609db3*/
            v16 = v14; /*0x609db7*/
            v17 = a10; /*0x609dbf*/
            v15[1] = a7; /*0x609dce*/
            v15[2] = a8; /*0x609dd2*/
            v18 = (char *)a1 + a9; /*0x609dd6*/
            return (NiAVObject *)sub_6B0C70(a2, a5, COERCE_FLOAT(v15)); /*0x609dda*/
          }
        }
      }
    }
  }
  return result; /*0x609de3*/
}
