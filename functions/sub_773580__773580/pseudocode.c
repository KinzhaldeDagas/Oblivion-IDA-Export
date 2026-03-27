void sub_773580()
{
  unsigned int *v0; // edi
  _DWORD *v1; // esi
  _DWORD *v2; // ecx

  v0 = (unsigned int *)dword_B42838;
  if ( dword_B42838 )
  {
    v1 = (_DWORD *)v0[5];
    *(_DWORD *)(dword_B42838 + 8) = 0;
    if ( v1 )
    {
      if ( *v1 )
        FormHeapFree(*v1 - 4);
      v2 = (_DWORD *)v1[2];
      if ( v2 )
        sub_7733B0(v2, 1);
      FormHeapFree((unsigned int)v1);
    }
    FormHeapFree(*v0);
    FormHeapFree((unsigned int)v0);
  }
}
