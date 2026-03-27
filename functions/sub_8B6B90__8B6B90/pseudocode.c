int __thiscall sub_8B6B90(void *this, float *a2)
{
  __int128 v4; // [esp+14h] [ebp-30h] BYREF
  __int128 v5; // [esp+24h] [ebp-20h] BYREF

  if ( a2 )
  {
    *(float *)&v4 = a2[8];
    *((float *)&v4 + 1) = a2[9];
    *((float *)&v4 + 2) = a2[0xA];
    *((float *)&v4 + 3) = a2[0xB];
    *(float *)&v5 = a2[4];
    *((float *)&v5 + 1) = a2[5];
    *((float *)&v5 + 2) = a2[6];
    *((float *)&v5 + 3) = a2[7];
    sub_8B6980(this, &v5, &v4, COERCE_INT(a2[1]));
  }
  return (*(int (__thiscall **)(void *, float *))(*(_DWORD *)this + 0x7C))(this, a2);
}
