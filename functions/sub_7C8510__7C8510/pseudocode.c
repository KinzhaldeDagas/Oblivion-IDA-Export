char sub_7C8510()
{
  if ( *(_DWORD *)&OB_RendererGlobalState_010201A0[0x1F] ) /*0x7c8510*/
    return *(_BYTE *)(*(_DWORD *)&OB_RendererGlobalState_010201A0[0x1F] + 6); /*0x7c8519*/
  else
    return 0; /*0x7c851d*/
}
