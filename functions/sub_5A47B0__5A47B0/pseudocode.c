double __usercall sub_5A47B0@<st0>(double result@<st0>)
{
  _DWORD *v1; // ecx

  if ( dword_B3B0B4[0xA2] && (v1 = *(_DWORD **)(dword_B3B0B4[0xA2] + 0x50)) != 0 ) /*0x5a47be*/
  {
    sub_588CF0(v1); /*0x5a47c0*/
  }
  else
  {
    InterfaceManager_GetSingleton(0, 1); /*0x5a47ce*/
    UI_GetVirtualScreenHeight(); /*0x5a47d6*/
  }
  Double_To_SInt32(result); /*0x5a47c5*/
  return result;
}
