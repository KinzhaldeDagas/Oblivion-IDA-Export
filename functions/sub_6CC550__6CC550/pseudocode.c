unsigned __int8 __thiscall sub_6CC550(int this)
{
  unsigned __int8 result; // al
  unsigned __int8 v2; // bl
  unsigned __int8 v3; // dl
  float *v4; // ecx
  unsigned __int8 v5; // [esp+3h] [ebp-5h]
  float v6; // [esp+4h] [ebp-4h]

  if ( *(_BYTE *)(this + 0xE) == 1 )
    return *(_BYTE *)(this + 0xF);
  v2 = *(_BYTE *)(this + 0xD);
  v6 = 0.0;
  v3 = 0;
  v5 = 0xFF;
  if ( !v2 )
    return 0xFF;
  v4 = (float *)(*(_DWORD *)(this + 0x14) + 8);
  do
  {
    if ( v6 < (double)*v4 )
    {
      v5 = v3;
      v6 = *v4;
    }
    ++v3;
    v4 += 6;
  }
  while ( v3 < v2 );
  result = v5;
  if ( v5 == 0xFF )
    return 0xFF;
  return result;
}
