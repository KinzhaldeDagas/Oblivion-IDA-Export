int __thiscall sub_8BA6F0(hkVector4 **this, hkVector4 *a2)
{
  int result; // eax
  hkVector4 v4[2]; // [esp+10h] [ebp-30h] BYREF

  sub_89F580(this, (int)a2);
  result = sub_88D820(this, v4);
  a2[2] = v4[0];
  a2[3] = v4[1];
  return result;
}
