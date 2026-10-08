int __userpurge sub_72E960@<eax>(unsigned int a1@<edi>, int a2, int a3, unsigned int *a4)
{
  int v4; // esi
  int result; // eax
  unsigned int *v6; // eax
  unsigned int v7; // ecx
  unsigned int *v8; // esi
  _DWORD *v9; // ebp
  unsigned int v10; // ebx
  unsigned int v11; // edx
  unsigned int v12; // eax
  _WORD *v13; // ecx
  unsigned int v14; // eax
  unsigned int v15; // eax
  unsigned int *v16; // ebx
  unsigned int v17; // ecx
  unsigned int v18; // eax
  unsigned int v19; // eax
  unsigned int i; // [esp+18h] [ebp-30h]
  unsigned int v21; // [esp+1Ch] [ebp-2Ch]
  unsigned int v22; // [esp+28h] [ebp-20h]
  unsigned int v23; // [esp+2Ch] [ebp-1Ch]
  char v24[2]; // [esp+30h] [ebp-18h] BYREF
  __int16 v25; // [esp+32h] [ebp-16h] BYREF
  _DWORD v26[5]; // [esp+34h] [ebp-14h] BYREF

  v4 = a2; /*0x72e996*/
  result = 0; /*0x72e9a5*/
  v23 = *(unsigned __int16 *)(a2 + 0x40); /*0x72e9ad*/
  for ( i = 0; i < v23; result = ++i ) /*0x72e99e*/
  {
    (*(void (__thiscall **)(int, int, char *, __int16 *, _DWORD *))(*(_DWORD *)v4 + 0x60))(v4, result, v24, &v25, v26); /*0x72e9d2*/
    if ( *(_WORD *)v24 != v25 && v25 != LOWORD(v26[0]) && LOWORD(v26[0]) != *(_WORD *)v24 ) /*0x72e9f8*/
    {
      v6 = (unsigned int *)FormHeapAlloc(0xCu); /*0x72ea00*/
      v7 = 0; /*0x72ea08*/
      if ( v6 ) /*0x72ea0c*/
      {
        *v6 = 0; /*0x72ea0e*/
        v6[1] = 0; /*0x72ea10*/
        v6[2] = 0; /*0x72ea13*/
        v8 = v6; /*0x72ea16*/
      }
      else
      {
        v8 = 0; /*0x72ea1a*/
      }
      v26[4] = 0xFFFFFFFF; /*0x72ea1c*/
      v21 = 0; /*0x72ea24*/
      do /*0x72eaac*/
      {
        v9 = (_DWORD *)(a3 + 0xC * *(unsigned __int16 *)&v24[2 * v7]); /*0x72ea34*/
        v10 = 0; /*0x72ea3a*/
        v22 = v9[2]; /*0x72ea3e*/
        if ( v22 ) /*0x72ea42*/
        {
          do /*0x72ea9c*/
          {
            a1 = *(unsigned __int16 *)(*v9 + 8 * v10); /*0x72ea47*/
            v11 = v8[2]; /*0x72ea4b*/
            v12 = 0; /*0x72ea4e*/
            if ( !v11 ) /*0x72ea52*/
              goto LABEL_16; /*0x72ea52*/
            v13 = (_WORD *)*v8; /*0x72ea54*/
            while ( *v13 != (_WORD)a1 ) /*0x72ea59*/
            {
              ++v12; /*0x72ea5b*/
              ++v13; /*0x72ea5e*/
              if ( v12 >= v11 ) /*0x72ea63*/
                goto LABEL_16; /*0x72ea63*/
            }
            if ( v12 == 0xFFFFFFFF ) /*0x72ea6a*/
            {
LABEL_16:
              v14 = v8[1]; /*0x72ea6c*/
              if ( v11 == v14 ) /*0x72ea71*/
              {
                if ( v14 ) /*0x72ea75*/
                  v15 = 2 * v14; /*0x72ea77*/
                else
                  v15 = 1; /*0x72ea7b*/
                sub_72CCC0(v8, v15); /*0x72ea83*/
              }
              *(_WORD *)(*v8 + 2 * v8[2]++) = a1; /*0x72ea8d*/
            }
            ++v10; /*0x72ea95*/
          }
          while ( v10 < v22 ); /*0x72ea9c*/
          v7 = v21; /*0x72ea9e*/
        }
        v21 = ++v7; /*0x72eaa8*/
      }
      while ( v7 < 3 ); /*0x72eaac*/
      unknown_libname_60(a1, *v8, v8[2], 2, (int)PtFuncCompare); /*0x72eac0*/
      a1 = 0; /*0x72eac9*/
      if ( a4[2] ) /*0x72eace*/
      {
        while ( 1 ) /*0x72ead6*/
        {
          v16 = *(unsigned int **)(*a4 + 4 * a1); /*0x72ead6*/
          if ( sub_72CDF0(v16, v8) ) /*0x72eadc*/
            break; /*0x72eadc*/
          if ( sub_72CDF0(v8, v16) ) /*0x72eae8*/
          {
            if ( v16 ) /*0x72eaf3*/
            {
              FormHeapFree(*v16); /*0x72eaf8*/
              FormHeapFree((unsigned int)v16); /*0x72eafe*/
            }
            --a4[2]; /*0x72eb06*/
            *(_DWORD *)(*a4 + 4 * a1) = *(_DWORD *)(*a4 + 4 * a4[2]); /*0x72eb13*/
          }
          else
          {
            ++a1; /*0x72eb18*/
          }
          if ( a1 >= a4[2] ) /*0x72eb1e*/
            goto LABEL_35; /*0x72eb1e*/
        }
        FormHeapFree(*v8); /*0x72eb25*/
        FormHeapFree((unsigned int)v8); /*0x72eb2b*/
      }
LABEL_35:
      v17 = a4[2]; /*0x72eb33*/
      if ( a1 == v17 ) /*0x72eb38*/
      {
        a1 = (unsigned int)a4; /*0x72eb3a*/
        v18 = a4[1]; /*0x72eb3c*/
        if ( v17 == v18 ) /*0x72eb41*/
        {
          if ( v18 ) /*0x72eb45*/
            v19 = 2 * v18; /*0x72eb47*/
          else
            v19 = 1; /*0x72eb4b*/
          sub_6E8CA0(a4, v19); /*0x72eb53*/
        }
        *(_DWORD *)(*a4 + 4 * a4[2]++) = v8; /*0x72eb5d*/
      }
      v4 = a2; /*0x72eb64*/
    }
  }
  return result; /*0x72eb7d*/
}
