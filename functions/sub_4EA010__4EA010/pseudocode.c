int __cdecl sub_4EA010(char a1)
{
  int v1; // ecx
  int v2; // edx
  double v3; // st7
  float v5; // [esp+0h] [ebp-10h]
  int v6; // [esp+4h] [ebp-Ch]

  v1 = dword_B2C720; /*0x4ea028*/
  v2 = dword_B2C724; /*0x4ea032*/
  byte_B09AE5 = a1; /*0x4ea038*/
  if ( a1 ) /*0x4ea03d*/
  {
    v5 = 0.0; /*0x4ea041*/
    v3 = 1.0; /*0x4ea044*/
  }
  else
  {
    v5 = 1.0; /*0x4ea04a*/
    v3 = 0.0; /*0x4ea04d*/
  }
  *(float *)&v6 = v3; /*0x4ea052*/
  *(float *)&dword_B2C718 = v5; /*0x4ea056*/
  dword_B2C71C = v6; /*0x4ea05f*/
  dword_B2C720 = v1; /*0x4ea064*/
  dword_B2C724 = v2; /*0x4ea06a*/
  return v6; /*0x4ea070*/
}
