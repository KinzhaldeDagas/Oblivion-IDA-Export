char __cdecl sub_95D730(float *a1, float *a2, float *a3, int a4)
{
  float *v4; // ebp
  float *v5; // eax
  float *v6; // eax
  int v8; // edi
  NiRTTI *v9; // eax
  unsigned int v10; // eax
  unsigned int v11; // esi
  int v12; // edx

  v4 = a3; /*0x95d731*/
  if ( *((_DWORD *)a3 + 2) || *(_DWORD *)a3 != 1 ) /*0x95d73f*/
  {
    v8 = a4; /*0x95d778*/
    if ( a4 && (v9 = (NiRTTI *)(*(int (__thiscall **)(int))(*(_DWORD *)a4 + 4))(a4)) != 0 ) /*0x95d78b*/
    {
      while ( v9 != &stru_B3FD70 ) /*0x95d795*/
      {
        v9 = v9->parent; /*0x95d797*/
        if ( !v9 ) /*0x95d79c*/
          goto LABEL_11; /*0x95d79c*/
      }
      return sub_95D6C0(a1, a2, (int)v4, v8); /*0x95d816*/
    }
    else
    {
LABEL_11:
      v10 = *(unsigned __int16 *)(v8 + 0xB6); /*0x95d79e*/
      v11 = 0; /*0x95d7a7*/
      LOBYTE(a3) = 0; /*0x95d7ab*/
      if ( v10 ) /*0x95d7b0*/
      {
        while ( *(_DWORD *)v4 != 1 || *((_DWORD *)v4 + 1) != 1 || !*((_WORD *)v4 + 0x12) ) /*0x95d7c7*/
        {
          if ( v10 > v11 ) /*0x95d7cb*/
          {
            v12 = *(_DWORD *)(v8 + 0xB0); /*0x95d7cd*/
            if ( *(_DWORD *)(v12 + 4 * v11) ) /*0x95d7d3*/
            {
              if ( sub_95D540(a1, a2, (int)v4, *(float **)(v12 + 4 * v11)) ) /*0x95d7e2*/
                LOBYTE(a3) = 1; /*0x95d7ee*/
            }
          }
          v10 = *(unsigned __int16 *)(v8 + 0xB6); /*0x95d7f3*/
          if ( ++v11 >= v10 ) /*0x95d7ff*/
            return (char)a3; /*0x95d7ff*/
        }
        return 1; /*0x95d824*/
      }
      else
      {
        return (char)a3; /*0x95d801*/
      }
    }
  }
  else
  {
    v5 = (float *)FormHeapAlloc(0x44u); /*0x95d743*/
    if ( v5 ) /*0x95d74d*/
      v6 = sub_95A2D0(v5, a4); /*0x95d756*/
    else
      v6 = 0; /*0x95d75d*/
    a3 = v6; /*0x95d767*/
    *((_DWORD *)v4 + 0xA) = v6; /*0x95d76b*/
    sub_4BACA0((NiTArray_NiTexturingPropertyMap *)(v4 + 6), &a3); /*0x95d76e*/
    return 1; /*0x95d773*/
  }
}
