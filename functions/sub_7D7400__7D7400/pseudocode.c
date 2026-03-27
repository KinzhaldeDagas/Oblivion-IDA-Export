int __thiscall sub_7D7400(
        int this,
        char a2,
        char a3,
        char a4,
        char a5,
        char a6,
        char a7,
        char a8,
        char a9,
        char a10,
        int a11)
{
  int result; // eax

  if ( *(_WORD *)(this + 0xB8) == 9 )
  {
    **(_BYTE **)(this + 0xC8) = a2;
    *(_BYTE *)(*(_DWORD *)(this + 0xC8) + 1) = a3;
    *(_BYTE *)(*(_DWORD *)(this + 0xC8) + 2) = a4;
    *(_BYTE *)(*(_DWORD *)(this + 0xC8) + 3) = a5;
    *(_BYTE *)(*(_DWORD *)(this + 0xC8) + 4) = a6;
    *(_BYTE *)(*(_DWORD *)(this + 0xC8) + 5) = a7;
    *(_BYTE *)(*(_DWORD *)(this + 0xC8) + 6) = a8;
    *(_BYTE *)(*(_DWORD *)(this + 0xC8) + 7) = a9;
    result = *(_DWORD *)(this + 0xC8);
    *(_BYTE *)(result + 8) = a10;
  }
  return result;
}
