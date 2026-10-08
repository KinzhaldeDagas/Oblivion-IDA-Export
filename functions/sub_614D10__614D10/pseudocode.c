void __stdcall sub_614D10(int a1)
{
  int v1; // edi
  UInt32 *v2; // esi
  _DWORD *v3; // ecx

  v1 = a1; /*0x614d11*/
  if ( a1 ) /*0x614d17*/
  {
    while ( 1 ) /*0x614d24*/
    {
      v2 = *(UInt32 **)v1; /*0x614d24*/
      if ( !*(_DWORD *)(v1 + 4) ) /*0x614d20*/
        break; /*0x614d20*/
      if ( v2 ) /*0x614d30*/
        goto LABEL_6; /*0x614d30*/
LABEL_10:
      v1 = *(_DWORD *)(v1 + 4); /*0x614d4f*/
      if ( !v1 ) /*0x614d54*/
        return; /*0x614d54*/
    }
    if ( !v2 ) /*0x614d2a*/
      return; /*0x614d2a*/
LABEL_6:
    v3 = (_DWORD *)v2[1]; /*0x614d32*/
    if ( v3 ) /*0x614d37*/
      sub_485BC0(v3); /*0x614d39*/
    if ( *v2 ) /*0x614d3e*/
      *v2 = MagicItem_LookupByFormID(*v2); /*0x614d4d*/
    goto LABEL_10; /*0x614d4d*/
  }
}
