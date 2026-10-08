// Xref audit: only 0x563107 calls this function in Oblivion. No additional stock CSpeedTreeRT shared-ownership acquisition path was observed.
OB_CSpeedTreeRT_010201A0 *__thiscall CSpeedTreeRT__MakeInstance(OB_CSpeedTreeRT_010201A0 *this)
{
  void *v2; // ecx
  _DWORD v4[22]; // [esp+0h] [ebp-64h] BYREF
  int v5; // [esp+60h] [ebp-4h]

  v4[0x15] = v4; /*0x78dc38*/
  v4[0x14] = 0; /*0x78dc44*/
  v5 = 0; /*0x78dc47*/
  v2 = (void *)FormHeapAlloc(0xA0u); /*0x78dc4f*/
  v4[0x13] = v2; /*0x78dc54*/
  LOBYTE(v5) = 1; /*0x78dc59*/
  if ( v2 ) /*0x78dc5d*/
    return (OB_CSpeedTreeRT_010201A0 *)CSpeedTreeRT__InstanceInit(v2, this);// The wrapper returns only after InstanceInit has copied shared pointers, inserted the instance into the shared list, and incremented the shared count. /*0x78dc60*/
  else
    return 0; /*0x78dc67*/
}
