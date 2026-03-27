int __thiscall sub_72D2B0(__int16 **this, __int16 **a2)
{
  __int16 v2; // dx
  __int16 v3; // cx
  int v4; // esi
  _DWORD v6[2]; // [esp+8h] [ebp-18h] BYREF
  __int16 v7; // [esp+10h] [ebp-10h]
  __int16 v8; // [esp+12h] [ebp-Eh]
  __int16 **v9; // [esp+14h] [ebp-Ch]
  __int16 **v10; // [esp+18h] [ebp-8h]

  v9 = this;
  v2 = **this;
  v10 = a2;
  v3 = **a2;
  v4 = 0;
  v6[1] = 0;
  v6[0] = 0;
  v7 = v2;
  v8 = v3;
  while ( v7 != (__int16)0xFFFF || v8 != (__int16)0xFFFF )
  {
    sub_72CEC0(v6);
    ++v4;
  }
  return v4;
}
