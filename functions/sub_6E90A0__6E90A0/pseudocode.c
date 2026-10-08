unsigned int __thiscall sub_6E90A0(_DWORD *this, _DWORD *a2)
{
  _DWORD *v2; // ebx
  _DWORD *v3; // edi
  unsigned int i; // ebp
  _DWORD *v5; // esi
  unsigned int j; // edi
  int v7; // eax
  unsigned int result; // eax
  _DWORD *v9; // ebp
  int *v10; // edi
  int v11; // eax
  int v12; // esi
  int v13; // ebx
  unsigned int m; // esi
  unsigned int v15; // [esp+10h] [ebp-Ch]
  unsigned int k; // [esp+18h] [ebp-4h]

  v2 = a2; /*0x6e90a4*/
  v3 = this; /*0x6e90ab*/
  NiTimeController_LinkObject(this, a2); /*0x6e90b2*/
  for ( i = 0; i < *((unsigned __int16 *)v3 + 0x27); ++i ) /*0x6e90b9*/
  {
    v5 = *(_DWORD **)(v3[0x12] + 4 * i); /*0x6e90c3*/
    if ( v5 ) /*0x6e90c8*/
    {
      for ( j = 0; j < v5[2]; ++j ) /*0x6e90cc*/
      {
        v7 = sub_7124A0(a2); /*0x6e90d3*/
        if ( j < v5[2] ) /*0x6e90db*/
          *(_DWORD *)(*v5 + 4 * j) = v7; /*0x6e90df*/
      }
      v3 = this; /*0x6e90ea*/
    }
  }
  result = 0; /*0x6e90f9*/
  for ( k = 0; result < *((unsigned __int16 *)v3 + 0x2F); k = ++result ) /*0x6e90fb*/
  {
    v9 = *(_DWORD **)(v3[0x16] + 4 * result); /*0x6e9113*/
    if ( v9 ) /*0x6e9118*/
    {
      v15 = 0; /*0x6e9122*/
      if ( v9[2] ) /*0x6e911e*/
      {
        do /*0x6e9196*/
        {
          v10 = *(int **)(*v9 + 4 * v15); /*0x6e9137*/
          *v10 = sub_7124A0(v2); /*0x6e9143*/
          v11 = sub_7124A0(v2); /*0x6e9145*/
          v12 = v10[1]; /*0x6e914a*/
          v13 = v11; /*0x6e914d*/
          if ( v12 != v11 ) /*0x6e9151*/
          {
            if ( v12 ) /*0x6e9155*/
            {
              if ( !InterlockedDecrement((volatile LONG *)(v12 + 4)) ) /*0x6e915b*/
                (**(void (__thiscall ***)(int, int))v12)(v12, 1); /*0x6e9171*/
            }
            v10[1] = v13; /*0x6e9175*/
            if ( v13 ) /*0x6e9178*/
              InterlockedIncrement((volatile LONG *)(v13 + 4)); /*0x6e917e*/
          }
          v2 = a2; /*0x6e9188*/
          ++v15; /*0x6e9192*/
        }
        while ( v15 < v9[2] ); /*0x6e9196*/
        result = k; /*0x6e9198*/
        v3 = this; /*0x6e919c*/
      }
    }
  }
  for ( m = 0; m < v3[0x1B]; ++m ) /*0x6e91b5*/
  {
    result = sub_7124A0(v2); /*0x6e91c2*/
    if ( m < v3[0x1B] ) /*0x6e91ca*/
      *(_DWORD *)(v3[0x19] + 4 * m) = result; /*0x6e91cf*/
  }
  return result; /*0x6e91da*/
}
