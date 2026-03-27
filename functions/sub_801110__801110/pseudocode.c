_BYTE *__cdecl sub_801110(int a1, int a2, int a3, int a4)
{
  _DWORD *v4; // ecx
  _DWORD *v5; // ecx

  v4 = *(_DWORD **)(a1 + 0xC);
  *(_DWORD *)a1 = a2;
  sub_772FF0(v4, 0xB, a2, 0);
  sub_772FF0(*(_DWORD **)(a1 + 0xC), 1, 1, 0);
  sub_772FF0(*(_DWORD **)(a1 + 0xC), 2, 2, 0);
  sub_772FF0(*(_DWORD **)(a1 + 0xC), 4, 1, 0);
  sub_772FF0(*(_DWORD **)(a1 + 0xC), 5, 2, 0);
  v5 = *(_DWORD **)(a1 + 0xC);
  *(_BYTE *)(a1 + 0x5A) = 0;
  sub_772FF0(v5, 0x18, 0, 0);
  sub_773100(*(_DWORD **)(a1 + 0xC), 1, a3, 0, 0);
  sub_773100(*(_DWORD **)(a1 + 0xC), 2, a3, 0, 0);
  sub_773100(*(_DWORD **)(a1 + 0xC), 5, a4, 0, 0);
  sub_773100(*(_DWORD **)(a1 + 0xC), 6, a4, 0, 0);
  sub_773100(*(_DWORD **)(a1 + 0xC), 7, a4, 0, 0);
  return sub_771640((_DWORD **)a1, 2);
}
