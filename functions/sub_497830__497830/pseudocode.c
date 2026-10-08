BOOL __thiscall sub_497830(unsigned __int8 *this, int a2)
{
  char v3; // bl
  int v4; // ecx
  NiNode *v5; // esi
  int v7; // [esp+8h] [ebp-4h] BYREF

  v7 = 0; /*0x49783b*/
  v3 = 1; /*0x497843*/
  if ( a2 ) /*0x497845*/
  {
    v4 = *(_DWORD *)(a2 + 0x3C); /*0x497847*/
    if ( v4 ) /*0x49784c*/
    {
      if ( *this ) /*0x49784e*/
      {
        v5 = (NiNode *)(*(int (__thiscall **)(int))(*(_DWORD *)v4 + 8))(v4); /*0x49785b*/
        v3 = sub_497640(this, (int)v5, &v7); /*0x49786a*/
        if ( !v3 ) /*0x49786e*/
          sub_88D070(v5, 1, 1, 0); /*0x497877*/
      }
    }
  }
  return v7 == *this && v3; /*0x49788d*/
}
