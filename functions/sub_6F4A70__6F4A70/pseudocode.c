void __thiscall sub_6F4A70(OB_stString28_010201A0 *this, unsigned int a2)
{
  OB_stString28_010201A0 v2; // [esp-2Ch] [ebp-44h] BYREF
  int v3; // [esp-10h] [ebp-28h]
  OB_stString28_010201A0 *v4; // [esp+8h] [ebp-10h]
  unsigned int v5; // [esp+14h] [ebp-4h]

  v2.capacity = 0xF; /*0x6f4a9a*/
  v2.size = 0; /*0x6f4aa1*/
  v4 = &v2; /*0x6f4aa4*/
  v2.storage.inlineData[0] = 0; /*0x6f4aa8*/
  v5 = 0xFFFFFFFF; /*0x6f4ab9*/
  sub_6F47F0(this, a2, v2, v3, 0, 0, 0); /*0x6f4ac1*/
}
