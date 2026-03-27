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

  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v7 = (a3 - a1) / a2 + 1;
        if ( v7 <= 8 )
        {
          shortsort((unsigned int)a1, (unsigned int)a3, a2, a7);
          goto LABEL_3;
        }
        v9 = &a1[a2 * (v7 >> 1)];
        if ( a7((unsigned int)a1, (unsigned int)v9) > 0 )
          swap(a1, a2, v9);
        if ( a7((unsigned int)a1, (unsigned int)a3) > 0 )
          swap(a1, a2, a3);
        if ( a7((unsigned int)v9, (unsigned int)a3) > 0 )
          swap(v9, a2, a3);
        while ( 1 )
        {
          if ( v9 > a1 )
          {
            while ( 1 )
            {
              a1 += a2;
              if ( a1 >= v9 )
                break;
              if ( a7((unsigned int)a1, (unsigned int)v9) > 0 )
              {
                if ( v9 > a1 )
                  goto LABEL_17;
                goto LABEL_15;
              }
            }
          }
          do
LABEL_15:
            a1 += a2;
          while ( a1 <= v15 && a7((unsigned int)a1, (unsigned int)v9) <= 0 );
          do
LABEL_17:
            a3 -= a2;
          while ( a3 > v9 && a7((unsigned int)a3, (unsigned int)v9) > 0 );
          if ( a1 > a3 )
            break;
          v10 = a2;
          v11 = a3;
          if ( a1 != a3 )
          {
            v12 = a1 - a3;
            do
            {
              v16 = v11[v12];
              v11[v12] = *v11;
              --v10;
              *v11++ = v16;
            }
            while ( v10 );
            a2 = a6;
          }
          if ( v9 == a3 )
            v9 = a1;
        }
        a3 += a2;
        if ( v9 >= a3 )
          goto LABEL_30;
        do
        {
          a3 -= a2;
          if ( a3 <= v9 )
            goto LABEL_30;
        }
        while ( !a7((unsigned int)a3, (unsigned int)v9) );
        if ( v9 < a3 )
        {
LABEL_32:
          v13 = (unsigned int)v14;
        }
        else
        {
LABEL_30:
          while ( 1 )
          {
            v13 = (unsigned int)v14;
            a3 -= a2;
            if ( a3 <= v14 )
              break;
            if ( a7((unsigned int)a3, (unsigned int)v9) )
              goto LABEL_32;
          }
        }
        if ( (int)&a3[-v13] < v15 - a1 )
          break;
        if ( v13 < (unsigned int)a3 )
        {
          v18[v17] = v13;
          v18[v17++ + 0x1E] = a3;
        }
        if ( a1 >= v15 )
          goto LABEL_3;
        a3 = v15;
        v14 = a1;
      }
      if ( a1 < v15 )
      {
        v18[v17] = a1;
        v18[v17++ + 0x1E] = v15;
      }
      if ( v13 >= (unsigned int)a3 )
        break;
      a1 = v14;
      v15 = a3;
    }
LABEL_3:
    result = --v17;
    if ( v17 < 0 )
      return result;
    v14 = (char *)v18[result];
    v15 = (char *)v18[result + 0x1E];
    a3 = v15;
    a1 = v14;
  }
}
