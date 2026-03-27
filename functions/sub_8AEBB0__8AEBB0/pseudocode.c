int __cdecl sub_8AEBB0(float a1, float a2, float a3, float a4)
{
  unsigned __int8 v4; // bl
  unsigned int v6; // [esp+0h] [ebp-8h]
  unsigned int v7; // [esp+0h] [ebp-8h]
  unsigned int v8; // [esp+0h] [ebp-8h]
  unsigned int v9; // [esp+0h] [ebp-8h]
  unsigned __int8 v10; // [esp+Ch] [ebp+4h]
  unsigned __int8 v11; // [esp+18h] [ebp+10h]

  *(float *)&v6 = a4 * flt_A40098;
  v4 = sub_8ECB30(v6);
  *(float *)&v7 = a1 * flt_A40098;
  v11 = sub_8ECB30(v7);
  *(float *)&v8 = a2 * flt_A40098;
  v10 = sub_8ECB30(v8);
  *(float *)&v9 = a3 * flt_A40098;
  return ((v10 + ((v11 + (v4 << 8)) << 8)) << 8) + (unsigned __int8)sub_8ECB30(v9);
}
