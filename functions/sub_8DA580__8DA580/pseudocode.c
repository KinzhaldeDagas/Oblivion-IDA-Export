int __thiscall sub_8DA580(int this, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  int v9; // edx
  int v10; // edi
  int v11; // eax
  int v12; // ecx
  int v13; // ebx
  int *v14; // eax
  int result; // eax
  int v16; // edx
  int v17; // edi
  int v18; // ecx
  int v19; // esi
  int v20; // eax
  char *v21; // esi
  const char *v22; // edi
  const char *v23; // ebp
  char *v24; // ebx
  const char *v25; // eax
  bool v26; // zf
  size_t v27; // [esp-28h] [ebp-45Ch]
  int v28; // [esp+10h] [ebp-424h]
  int v29; // [esp+14h] [ebp-420h]
  int v30; // [esp+18h] [ebp-41Ch]
  int v31; // [esp+1Ch] [ebp-418h]
  int v33; // [esp+24h] [ebp-410h]
  int v34; // [esp+28h] [ebp-40Ch]
  int v35; // [esp+2Ch] [ebp-408h]
  char Dest[1024]; // [esp+30h] [ebp-404h] BYREF

  v9 = this; /*0x8da594*/
  *(_BYTE *)(this + 0x1BF4) = 1; /*0x8da5a5*/
  v10 = 0; /*0x8da5b3*/
  if ( *(int *)(this + 0x1C08) > 0 ) /*0x8da5bb*/
  {
    while ( 1 ) /*0x8da5c1*/
    {
      v11 = *(_DWORD *)(v9 + 0x1C04); /*0x8da5c1*/
      v12 = *(_DWORD *)(v11 + 8 * v10 + 4); /*0x8da5c7*/
      v13 = a4; /*0x8da5cb*/
      v14 = (int *)(v11 + 8 * v10); /*0x8da5d4*/
      if ( v12 == a4 ) /*0x8da5d7*/
        goto LABEL_5; /*0x8da5d7*/
      if ( v12 == a5 ) /*0x8da5e0*/
      {
        if ( v12 == a4 ) /*0x8da5e4*/
LABEL_5:
          sub_8DA580(v9, a2, a3, *v14, a5, a6, a7, a8, a9 + 1); /*0x8da5e6*/
        else
          sub_8DA580(v9, a2, a3, a4, *v14, a6, a7, a8, a9 + 1); /*0x8da63a*/
        v9 = this; /*0x8da63f*/
      }
      if ( ++v10 >= *(_DWORD *)(v9 + 0x1C08) ) /*0x8da64c*/
        goto LABEL_11; /*0x8da64c*/
    }
  }
  v13 = a4; /*0x8da654*/
LABEL_11:
  result = a5; /*0x8da65b*/
  v31 = a5 + 1; /*0x8da668*/
  v16 = a9; /*0x8da66c*/
  v17 = v13; /*0x8da66e*/
  v33 = a5; /*0x8da670*/
  v18 = v13 + 1; /*0x8da674*/
  v28 = a9; /*0x8da677*/
  if ( v13 == 0xFFFFFFFF ) /*0x8da67b*/
  {
    v17 = 1; /*0x8da67e*/
    v18 = 0x20; /*0x8da683*/
    v28 = a9 + 1; /*0x8da688*/
    v16 = a9 + 1; /*0x8da68c*/
  }
  if ( a5 == 0xFFFFFFFF ) /*0x8da691*/
  {
    ++v16; /*0x8da693*/
    v33 = 1; /*0x8da694*/
    v31 = 0x20; /*0x8da69c*/
    v28 = v16; /*0x8da6a4*/
  }
  if ( v17 < v18 ) /*0x8da6aa*/
  {
    v30 = 0x20 * v17 + a2; /*0x8da6bf*/
    v19 = v33; /*0x8da6c3*/
    v29 = v33 + 0x20 * v17 + a8 + 2 * (v33 + 0x20 * v17) + 1; /*0x8da6d3*/
    v35 = v18 - v17; /*0x8da6d7*/
    do /*0x8da7d5*/
    {
      v20 = v19; /*0x8da6e4*/
      v34 = v19; /*0x8da6e6*/
      if ( v19 < v31 ) /*0x8da6ea*/
      {
        v21 = (char *)v29; /*0x8da6f0*/
        do /*0x8da7ac*/
        {
          *(_BYTE *)(v30 + v20) = a3; /*0x8da70b*/
          if ( a8 ) /*0x8da717*/
          {
            if ( *(_BYTE *)(this + 0x1C00) ) /*0x8da721*/
            {
              if ( v16 > v21[1] ) /*0x8da730*/
              {
                v22 = sub_90BA40(v21[0xFFFFFFFF]); /*0x8da73c*/
                v23 = sub_90BA40(*v21); /*0x8da748*/
                v24 = (char *)sub_90BA40(v13); /*0x8da757*/
                v25 = sub_90BA40(a5); /*0x8da759*/
                HIDWORD(v27) = "Agent handling types <%s-%s> would override more specialized agent <%s-%s>\n" /*0x8da762*/
                               "Maybe the order of registering your collision agent is wrong, make sure you register your"
                               " alternate type agents first";
                LODWORD(v27) = 0x3E8; /*0x8da76b*/
                sub_8B1730(Dest, v27, v24, v25, v22, v23); /*0x8da771*/
                v13 = a4; /*0x8da776*/
                v16 = v28; /*0x8da77d*/
                v20 = v34; /*0x8da781*/
              }
            }
            v21[0xFFFFFFFF] = a6; /*0x8da78f*/
            v21[1] = v16; /*0x8da799*/
            *v21 = a7; /*0x8da79c*/
          }
          ++v20; /*0x8da7a2*/
          v21 += 3; /*0x8da7a3*/
          v34 = v20; /*0x8da7a8*/
        }
        while ( v20 < v31 ); /*0x8da7ac*/
        v19 = v33; /*0x8da7b2*/
      }
      result = v35 - 1; /*0x8da7c8*/
      v26 = v35 == 1; /*0x8da7c8*/
      v29 += 0x60; /*0x8da7c9*/
      v30 += 0x20; /*0x8da7cd*/
      --v35; /*0x8da7d1*/
    }
    while ( !v26 ); /*0x8da7d5*/
  }
  return result; /*0x8da7db*/
}
