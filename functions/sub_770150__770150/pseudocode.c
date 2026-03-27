int __thiscall sub_770150(_DWORD *this, int a2, __int16 a3)
{
  *(_WORD *)(*(this + 0xB) + 8 * *(this + 6)) = a3;
  *(_WORD *)(*(this + 0xB) + 8 * *(this + 6) + 2) = *(_WORD *)(a2 + 4);
  *(_BYTE *)(*(this + 0xB) + 8 * *(this + 6) + 4) = *(_BYTE *)(4 * *(_DWORD *)(a2 + 0xC) + 0xB29858);
  *(_BYTE *)(*(this + 0xB) + 8 * *(this + 6) + 5) = *(_BYTE *)(4 * *(_DWORD *)(a2 + 0x10) + 0xB2983C);
  *(_BYTE *)(*(this + 0xB) + 8 * *(this + 6) + 6) = *(_BYTE *)(4 * *(_DWORD *)(a2 + 0x14) + 0xB298A0);
  *(_BYTE *)(*(this + 0xB) + 8 * (*(this + 6))++ + 7) = *(_BYTE *)(a2 + 0x18);
  if ( *(int *)(a2 + 0xC) < 0x12 )
    return *(_DWORD *)(4 * *(_DWORD *)(a2 + 0xC) + 0xB42708);
  else
    return 0;
}
