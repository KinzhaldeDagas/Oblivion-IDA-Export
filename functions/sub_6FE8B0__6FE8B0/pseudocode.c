void __thiscall sub_6FE8B0(_DWORD *this, int *a2)
{
  int v3; // ebp
  unsigned int v4; // edi
  LONG v5; // esi
  int v6; // [esp+14h] [ebp-1Ch] BYREF
  LONG v7; // [esp+18h] [ebp-18h] BYREF
  LONG v8; // [esp+1Ch] [ebp-14h] BYREF
  LONG v9; // [esp+20h] [ebp-10h] BYREF
  unsigned int v10; // [esp+2Ch] [ebp-4h]

  sub_753180(this, (int)a2);
  if ( NiTMap_GetAt((_DWORD *)*a2, (int)this, &v6) )
  {
    v3 = v6;
    v4 = *(unsigned __int16 *)(v6 + 0x62);
    v6 = 0;
    while ( v4 )
    {
      --v4;
      if ( NiTMap_GetAt((_DWORD *)*a2, *(_DWORD *)(*(_DWORD *)(v3 + 0x5C) + 4 * v4), &v7) )
      {
        v5 = v7;
        ++v6;
        v8 = v7;
        if ( v7 )
          InterlockedIncrement((volatile LONG *)(v7 + 4));
        v10 = 0;
        sub_4B34E0((_DWORD *)(v3 + 0x58), v4, &v8);
        v10 = 0xFFFFFFFF;
        if ( !v5 || InterlockedDecrement((volatile LONG *)(v5 + 4)) )
          continue;
      }
      else
      {
        sub_6D7F60(v3 + 0x58, &v9, v4);
        if ( !v9 )
          continue;
        v5 = v9;
        if ( InterlockedDecrement((volatile LONG *)(v9 + 4)) )
          continue;
      }
      (**(void (__thiscall ***)(LONG, int))v5)(v5, 1);
    }
    if ( v6 != *(unsigned __int16 *)(v3 + 0x62) )
      sub_4784A0((_WORD *)(v3 + 0x58));
  }
}
