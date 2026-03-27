double __usercall sub_5A47B0@<st0>(double result@<st0>)
{
  _DWORD *v4; // ecx

  if ( g_HUDInfoMenu && (v4 = *(_DWORD **)(g_HUDInfoMenu + 0x50)) != 0 )
  {
    sub_588CF0(v4);
  }
  else
  {
    InterfaceManager_GetSingleton(0, 1);
    sub_57D7F0();
  }
  Double_To_SInt32(result);
  return result;
}
