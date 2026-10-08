_DWORD *__cdecl sub_6BD1F0(_DWORD *a1, float a2, int a3, int a4, int a5, char a6)
{
  _DWORD *v7; // ecx
  int v8; // [esp+Ch] [ebp-14h]

  if ( a5 ) /*0x6bd1f6*/
  {
    if ( *(float *)a3 <= (double)a2 ) /*0x6bd20d*/
    {
      if ( *(float *)((unsigned __int8)a6 * (a5 - 1) + a3) >= (double)a2 ) /*0x6bd246*/
      {
        v8 = a5; /*0x6bd27b*/
        a5 = 0; /*0x6bd287*/
        NiRotKey_EvaluateTrack(a1, a2, a3, a4, v8, &a5, a6); /*0x6bd28f*/
      }
      else
      {
        v7 = (_DWORD *)((unsigned __int8)a6 * (a5 - 1) + a3 + 4); /*0x6bd254*/
        *a1 = *v7; /*0x6bd25a*/
        a1[1] = v7[1]; /*0x6bd25f*/
        a1[2] = v7[2]; /*0x6bd265*/
        a1[3] = v7[3]; /*0x6bd26c*/
      }
      return a1; /*0x6bd248*/
    }
    else
    {
      *a1 = *(_DWORD *)(a3 + 4); /*0x6bd218*/
      a1[1] = *(_DWORD *)(a3 + 8); /*0x6bd21d*/
      a1[2] = *(_DWORD *)(a3 + 0xC); /*0x6bd223*/
      a1[3] = *(_DWORD *)(a3 + 0x10); /*0x6bd229*/
      return a1; /*0x6bd214*/
    }
  }
  else
  {
    *a1 = unk_B3C3A4; /*0x6bd2a6*/
    a1[1] = unk_B3C3A8; /*0x6bd2ae*/
    a1[2] = unk_B3C3AC; /*0x6bd2b7*/
    a1[3] = unk_B3C3B0; /*0x6bd2c0*/
    return a1; /*0x6bd2a2*/
  }
}
