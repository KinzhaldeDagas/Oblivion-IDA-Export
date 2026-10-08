void __thiscall sub_6F4AE0(OB_stString28_010201A0 *this, unsigned int a2)
{
  OB_stString28_010201A0 v2; // [esp-30h] [ebp-48h] BYREF
  int v3; // [esp-14h] [ebp-2Ch]
  int v4; // [esp-10h] [ebp-28h]
  OB_stString28_010201A0 *v5; // [esp+8h] [ebp-10h]
  unsigned int v6; // [esp+14h] [ebp-4h]

  v2.capacity = 0xF; /*0x6f4b0a*/
  v2.size = 0; /*0x6f4b11*/
  v5 = &v2; /*0x6f4b14*/
  v2.storage.inlineData[0] = 0; /*0x6f4b18*/
  v6 = 0xFFFFFFFF; /*0x6f4b29*/
  sub_6F4930(this, a2, v2, v3, v4, 0, 0, 0); /*0x6f4b31*/
}
