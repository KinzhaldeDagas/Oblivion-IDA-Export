double __cdecl sub_4A6810(float a1, float a2, float a3)
{
  float v4[2]; // [esp+0h] [ebp-Ch] BYREF
  float v5; // [esp+8h] [ebp-4h]
  float v6; // [esp+10h] [ebp+4h]
  float v7; // [esp+10h] [ebp+4h]

  v4[1] = a2; /*0x4a681f*/
  v4[0] = a1; /*0x4a6826*/
  v5 = a3; /*0x4a6829*/
  v6 = Vector3_NormalizeInPlace(v4); /*0x4a6832*/
  v7 = v5 / v6; /*0x4a683e*/
  return (float)acos(v7); /*0x4a6853*/
}
