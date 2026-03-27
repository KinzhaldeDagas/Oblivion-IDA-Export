_DWORD *__thiscall sub_57E270(_DWORD *this, _DWORD *a2)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v6; // [esp+0h] [ebp-4h]

  v2 = *(this + 0xD9);
  if ( v2 )
  {
    v3 = *(_DWORD *)(v2 + 8);
    if ( v3 && (v4 = v3 + 0x14) != 0 )
    {
      v6 = *(_DWORD *)(v4 + 0x1C);
      *a2 = v6;
      return a2;
    }
    else
    {
      *a2 = 0;
      return a2;
    }
  }
  else
  {
    *a2 = 0;
    return a2;
  }
}
