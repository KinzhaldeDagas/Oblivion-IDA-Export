void __cdecl sub_583CF0(int a1)
{
  _DWORD *v1; // eax
  int v2; // ecx

  v1 = *(_DWORD **)(InterfaceManagerPtr->unk0C0[0x1C] + 0x10);
  if ( v1 )
  {
    while ( *v1 != a1 )
    {
      v1 = (_DWORD *)v1[4];
      if ( !v1 )
        return;
    }
    v2 = v1[4];
    *(_DWORD *)(v1[3] + 0x10) = v2;
    if ( v2 )
      *(_DWORD *)(v2 + 0xC) = v1[3];
    if ( !v1[4] )
      *(_DWORD *)(InterfaceManagerPtr->unk0C0[0x1C] + 0xC) = v1[3];
    FormHeapFree((unsigned int)v1);
  }
}
