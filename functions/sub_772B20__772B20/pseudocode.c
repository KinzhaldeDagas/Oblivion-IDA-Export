void sub_772B20()
{
  unsigned int *v0; // edi
  _DWORD *v1; // esi
  unsigned int *v2; // edi
  unsigned int *v3; // esi
  _DWORD *v4; // ecx

  v0 = (unsigned int *)dword_B427A8;
  if ( dword_B427A8 )
  {
    v1 = (_DWORD *)v0[5];
    *(_DWORD *)(dword_B427A8 + 8) = 0;
    if ( v1 )
    {
      sub_772ED0(v1);
      FormHeapFree((unsigned int)v1);
    }
    FormHeapFree(*v0);
    FormHeapFree((unsigned int)v0);
  }
  v2 = (unsigned int *)dword_B427AC;
  if ( dword_B427AC )
  {
    v3 = (unsigned int *)v2[5];
    *(_DWORD *)(dword_B427AC + 8) = 0;
    if ( v3 )
    {
      FormHeapFree(*v3);
      v4 = (_DWORD *)v3[2];
      if ( v4 )
        sub_772820(v4, 1);
      FormHeapFree((unsigned int)v3);
    }
    FormHeapFree(*v2);
    FormHeapFree((unsigned int)v2);
  }
}
