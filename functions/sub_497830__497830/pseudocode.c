BOOL __thiscall sub_497830(unsigned __int8 *this, int a2)
{
  char v3; // bl
  int v4; // ecx
  NiNode *v5; // esi
  int v7; // [esp+8h] [ebp-4h] BYREF

  v7 = 0;
  v3 = 1;
  if ( a2 )
  {
    v4 = *(_DWORD *)(a2 + 0x3C);
    if ( v4 )
    {
      if ( *this )
      {
        v5 = (NiNode *)(*(int (__thiscall **)(int))(*(_DWORD *)v4 + 8))(v4);
        v3 = sub_497640(this, (int)v5, &v7);
        if ( !v3 )
          sub_88D070(v5, 1, 1, 0);
      }
    }
  }
  return v7 == *this && v3;
}
