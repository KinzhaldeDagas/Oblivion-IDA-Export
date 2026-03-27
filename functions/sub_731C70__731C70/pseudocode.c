void __cdecl sub_731C70(unsigned int **a1, int a2)
{
  int v2; // ecx
  unsigned int *v3; // eax
  int v4; // edx
  unsigned int *v5; // edx
  unsigned int *v6; // eax
  unsigned int v7; // esi
  unsigned int v8; // [esp-4h] [ebp-8h]

  v2 = *(_DWORD *)(a2 + 0xB0);
  v3 = *a1;
  if ( *a1 )
  {
    v4 = *(_DWORD *)(v3[1] + 0xB0);
    if ( v2 >= v4 )
    {
      if ( v2 == v4 )
      {
        v8 = (unsigned int)*a1;
        *a1 = (unsigned int *)*v3;
        FormHeapFree(v8);
      }
      else
      {
        v5 = *a1;
        v6 = (unsigned int *)*v3;
        if ( v6 )
        {
          while ( 1 )
          {
            v7 = v6[1];
            if ( v2 <= *(_DWORD *)(v7 + 0xB0) )
              break;
            v5 = v6;
            v6 = (unsigned int *)*v6;
            if ( !v6 )
              return;
          }
          if ( v2 == *(_DWORD *)(v7 + 0xB0) )
          {
            *v5 = *v6;
            FormHeapFree((unsigned int)v6);
          }
        }
      }
    }
  }
}
