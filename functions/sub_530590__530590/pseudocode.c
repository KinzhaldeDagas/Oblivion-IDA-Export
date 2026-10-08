void __thiscall sub_530590(_WORD *this, int *a2)
{
  int v3; // eax
  _WORD **v4; // ebx
  unsigned int *v5; // esi
  int v6; // ecx
  int v7; // eax
  _WORD **v8; // edx
  _WORD *v9; // ecx
  int v10; // ecx

  if ( a2 && *(this + 0x10) != 0xFFFF ) /*0x5305a1*/
  {
    v3 = sub_52F520(a2, (int)this); /*0x5305a6*/
    v4 = *(_WORD ***)(v3 + 8); /*0x5305b1*/
    v5 = (unsigned int *)(v3 + 4); /*0x5305b4*/
    if ( v4[(unsigned __int16)*(this + 0x10)] == this ) /*0x5305ba*/
    {
      sub_5304C0(v5, (unsigned __int16)*(this + 0x10)); /*0x5305bf*/
    }
    else
    {
      v6 = *(_DWORD *)(v3 + 0x10); /*0x5305c6*/
      v7 = 0; /*0x5305c9*/
      if ( v6 > 0 ) /*0x5305cd*/
      {
        v8 = v4; /*0x5305cf*/
        while ( *v8 != this ) /*0x5305d3*/
        {
          ++v7; /*0x5305d5*/
          ++v8; /*0x5305d8*/
          if ( v7 >= v6 ) /*0x5305dd*/
            goto LABEL_15; /*0x5305dd*/
        }
        if ( v7 < (unsigned int)v6 ) /*0x5305e3*/
        {
          v9 = v4[v7]; /*0x5305e5*/
          v4[v7] = 0; /*0x5305ea*/
          if ( v9 ) /*0x5305f1*/
            --v5[4]; /*0x5305f3*/
          v10 = v5[3] - 1; /*0x5305fa*/
          if ( v7 == v10 ) /*0x5305ff*/
            v5[3] = v10; /*0x530601*/
        }
      }
    }
LABEL_15:
    sub_5A56F0(v5); /*0x530604*/
    sub_52EFE0((int)v5); /*0x53060c*/
  }
}
