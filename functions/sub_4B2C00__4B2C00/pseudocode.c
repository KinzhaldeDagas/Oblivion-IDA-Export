void __thiscall sub_4B2C00(int this)
{
  int v2; // eax
  int v3; // [esp+4h] [ebp-10Ch] BYREF
  char Str[260]; // [esp+8h] [ebp-108h] BYREF

  v2 = *(_DWORD *)(this + 0xC);
  v3 = 0;
  if ( NiTMap_GetAt(&off_B08310, v2, &v3) )
  {
    if ( v3 )
    {
      sub_46D540(Str, (char *)this);
      nullsub_returnVoid_2arg(0x4C544D44, Str);
    }
  }
}
