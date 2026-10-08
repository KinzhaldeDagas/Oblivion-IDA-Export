// [Controller decode 2026-07-09] DirectInput EnumObjects callback. Records supported joystick axes in axisMask bits 0..5 and POV objects in povMask.
signed int __stdcall InputGlobals::EnumJoystickObjectsCallback(int a1, _DWORD *a2)
{
  const void *v2; // edi

  v2 = (const void *)(a1 + 4); /*0x4035d7*/
  if ( !memcmp((const void *)(a1 + 4), &CLSID_GUID_XAxis, 0x10u) ) /*0x4035ea*/
    *a2 |= 1u; /*0x403665*/
  if ( !memcmp(v2, &CLSID_GUID_YAxis, 0x10u) ) /*0x403679*/
    *a2 |= 2u; /*0x4036f0*/
  if ( !memcmp(v2, &CLSID_GUID_ZAxis, 0x10u) ) /*0x403704*/
    *a2 |= 4u; /*0x40377b*/
  if ( !memcmp(v2, &CLSID_GUID_RxAxis, 0x10u) ) /*0x403794*/
    *a2 |= 8u; /*0x40380b*/
  if ( !memcmp(v2, &CLSID_GUID_RyAxis, 0x10u) ) /*0x403824*/
    *a2 |= 0x10u; /*0x40389c*/
  if ( !memcmp(v2, &CLSID_GUID_RzAxis, 0x10u) ) /*0x4038b4*/
    *a2 |= 0x20u; /*0x40392b*/
  if ( (*(_BYTE *)(a1 + 0x18) & 0xC) != 0 ) /*0x403936*/
    a2[1] |= 1 << BYTE1(*(_DWORD *)(a1 + 0x18)); /*0x403945*/
  return 1; /*0x403948*/
}
