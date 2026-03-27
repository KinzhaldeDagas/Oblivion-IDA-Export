void __thiscall sub_67CF00(int *this)
{
  int v1; // esi
  int *v2; // edi
  _DWORD *v3; // eax

  v1 = *this;
  if ( *this )
  {
    while ( 1 )
    {
      v2 = *(int **)v1;
      if ( !*(_DWORD *)v1 )
        break;
      sub_67B5F0(*(int **)v1, (int)v2);
      FormHeapFree((unsigned int)v2);
      v3 = *(_DWORD **)(v1 + 4);
      if ( v3 )
      {
        *(_DWORD *)(v1 + 4) = v3[1];
        *(_DWORD *)v1 = *v3;
        FormHeapFree((unsigned int)v3);
      }
      else
      {
        *(_DWORD *)v1 = 0;
      }
    }
  }
}
