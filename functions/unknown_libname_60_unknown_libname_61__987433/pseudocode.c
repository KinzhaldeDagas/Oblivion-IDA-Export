// positive sp value has been detected, the output may be wrong!
int __usercall unknown_libname_60_::unknown_libname_61@<eax>(
        char *a1@<ebx>,
        unsigned int a2@<ebp>,
        char *a3@<esi>,
        int a4,
        int a5,
        unsigned int a6,
        int (__cdecl *a7)(unsigned int, unsigned int))
{
  unsigned int v7; // eax
  int result; // eax
  char *v9; // edi
  unsigned int v10; // ecx
  char *v11; // eax
  int v12; // ebp
  unsigned int v13; // eax
  char *v14; // [esp-100h] [ebp-100h]
  char *v15; // [esp-FCh] [ebp-FCh]
  char v16; // [esp-F5h] [ebp-F5h]
  int v17; // [esp-F4h] [ebp-F4h]
  _DWORD v18[60]; // [esp-F0h] [ebp-F0h]

  while ( 1 ) /*0x987619*/
  {
    while ( 1 ) /*0x9875cc*/
    {
      while ( 1 ) /*0x98743b*/
      {
        v7 = (a3 - a1) / a2 + 1; /*0x98743b*/
        if ( v7 <= 8 ) /*0x987441*/
        {
          shortsort((unsigned int)a1, (unsigned int)a3, a2, a7); /*0x98744e*/
          goto LABEL_3; /*0x98744e*/
        }
        v9 = &a1[a2 * (v7 >> 1)]; /*0x987487*/
        if ( a7((unsigned int)a1, (unsigned int)v9) > 0 ) /*0x987497*/
          swap(a1, a2, v9); /*0x98749f*/
        if ( a7((unsigned int)a1, (unsigned int)a3) > 0 ) /*0x9874b2*/
          swap(a1, a2, a3); /*0x9874ba*/
        if ( a7((unsigned int)v9, (unsigned int)a3) > 0 ) /*0x9874cd*/
          swap(v9, a2, a3); /*0x9874d5*/
        while ( 1 ) /*0x9874e0*/
        {
          if ( v9 > a1 ) /*0x9874e2*/
          {
            while ( 1 ) /*0x9874e4*/
            {
              a1 += a2; /*0x9874e4*/
              if ( a1 >= v9 ) /*0x9874e8*/
                break; /*0x9874e8*/
              if ( a7((unsigned int)a1, (unsigned int)v9) > 0 ) /*0x9874f8*/
              {
                if ( v9 > a1 ) /*0x9874fc*/
                  goto LABEL_17; /*0x9874fc*/
                goto LABEL_15; /*0x9874fc*/
              }
            }
          }
          do /*0x987516*/
LABEL_15:
            a1 += a2; /*0x987500*/
          while ( a1 <= v15 && a7((unsigned int)a1, (unsigned int)v9) <= 0 ); /*0x987516*/
          do /*0x98752c*/
LABEL_17:
            a3 -= a2; /*0x987518*/
          while ( a3 > v9 && a7((unsigned int)a3, (unsigned int)v9) > 0 ); /*0x98752c*/
          if ( a1 > a3 ) /*0x987530*/
            break; /*0x987530*/
          v10 = a2; /*0x987532*/
          v11 = a3; /*0x987534*/
          if ( a1 != a3 ) /*0x987536*/
          {
            v12 = a1 - a3; /*0x98753a*/
            do /*0x98755d*/
            {
              v16 = v11[v12]; /*0x987544*/
              v11[v12] = *v11; /*0x98754b*/
              --v10; /*0x987553*/
              *v11++ = v16; /*0x987556*/
            }
            while ( v10 ); /*0x98755d*/
            a2 = a6; /*0x98755f*/
          }
          if ( v9 == a3 ) /*0x987568*/
            v9 = a1; /*0x98756e*/
        }
        a3 += a2; /*0x987575*/
        if ( v9 >= a3 ) /*0x987579*/
          goto LABEL_30; /*0x987579*/
        do /*0x987594*/
        {
          a3 -= a2; /*0x987580*/
          if ( a3 <= v9 ) /*0x987584*/
            goto LABEL_30; /*0x987584*/
        }
        while ( !a7((unsigned int)a3, (unsigned int)v9) ); /*0x987594*/
        if ( v9 < a3 ) /*0x987598*/
        {
LABEL_32:
          v13 = (unsigned int)v14; /*0x9875ba*/
        }
        else
        {
LABEL_30:
          while ( 1 ) /*0x9875a0*/
          {
            v13 = (unsigned int)v14; /*0x9875a0*/
            a3 -= a2; /*0x9875a4*/
            if ( a3 <= v14 ) /*0x9875a8*/
              break; /*0x9875a8*/
            if ( a7((unsigned int)a3, (unsigned int)v9) ) /*0x9875ac*/
              goto LABEL_32; /*0x9875b8*/
          }
        }
        if ( (int)&a3[-v13] < v15 - a1 ) /*0x9875cc*/
          break; /*0x9875cc*/
        if ( v13 < (unsigned int)a3 ) /*0x9875d0*/
        {
          v18[v17] = v13; /*0x9875d6*/
          v18[v17++ + 0x1E] = a3; /*0x9875da*/
        }
        if ( a1 >= v15 ) /*0x9875ea*/
          goto LABEL_3; /*0x9875ea*/
        a3 = v15; /*0x9875f0*/
        v14 = a1; /*0x9875f4*/
      }
      if ( a1 < v15 ) /*0x9875ff*/
      {
        v18[v17] = a1; /*0x987605*/
        v18[v17++ + 0x1E] = v15; /*0x987609*/
      }
      if ( v13 >= (unsigned int)a3 ) /*0x987619*/
        break; /*0x987619*/
      a1 = v14; /*0x98761f*/
      v15 = a3; /*0x987623*/
    }
LABEL_3:
    result = --v17; /*0x98745a*/
    if ( v17 < 0 ) /*0x987461*/
      return result; /*0x987636*/
    v14 = (char *)v18[result]; /*0x987472*/
    v15 = (char *)v18[result + 0x1E]; /*0x987476*/
    a3 = v15; /*0x98747a*/
    a1 = v14; /*0x98747c*/
  }
}
