void sub_772500()
{
  unsigned int *v0; // edi
  unsigned int v1; // esi
  _DWORD *v2; // ecx

  v0 = (unsigned int *)dword_B4275C;
  if ( dword_B4275C )
  {
    v1 = v0[5];
    *(_DWORD *)(dword_B4275C + 8) = 0;
    if ( v1 )
    {
      if ( *(_DWORD *)v1 )
        sub_7722B0(*(unsigned int **)v1, 3);
      v2 = *(_DWORD **)(v1 + 8);
      if ( v2 )
        sub_772040(v2, 1);
      FormHeapFree(v1);
    }
    FormHeapFree(*v0);
    FormHeapFree((unsigned int)v0);
  }
  dword_B4275C = 0;
}
