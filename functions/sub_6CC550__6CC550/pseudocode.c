unsigned __int8 __thiscall sub_6CC550(int this)
{
  unsigned __int8 result; // al
  unsigned __int8 v2; // bl
  unsigned __int8 v3; // dl
  float *v4; // ecx
  unsigned __int8 v5; // [esp+3h] [ebp-5h]
  float v6; // [esp+4h] [ebp-4h]

  if ( *(_BYTE *)(this + 0xE) == 1 ) /*0x6cc557*/
    return *(_BYTE *)(this + 0xF); /*0x6cc559*/
  v2 = *(_BYTE *)(this + 0xD); /*0x6cc563*/
  v6 = 0.0; /*0x6cc566*/
  v3 = 0; /*0x6cc56a*/
  v5 = 0xFF; /*0x6cc56e*/
  if ( !v2 ) /*0x6cc573*/
    return 0xFF; /*0x6cc573*/
  v4 = (float *)(*(_DWORD *)(this + 0x14) + 8); /*0x6cc578*/
  do /*0x6cc5a1*/
  {
    if ( v6 < (double)*v4 ) /*0x6cc58d*/
    {
      v5 = v3; /*0x6cc591*/
      v6 = *v4; /*0x6cc595*/
    }
    ++v3; /*0x6cc599*/
    v4 += 6; /*0x6cc59c*/
  }
  while ( v3 < v2 ); /*0x6cc5a1*/
  result = v5; /*0x6cc5a3*/
  if ( v5 == 0xFF ) /*0x6cc5a9*/
    return 0xFF; /*0x6cc5ab*/
  return result; /*0x6cc55c*/
}
