int __thiscall sub_8B05D0(_DWORD *this, int a2)
{
  int result; // eax
  int v4; // edi
  int v5; // edi

  result = sub_8B0280(this, (_DWORD *)a2);
  v4 = *(this + 2);
  if ( v4 )
  {
    v5 = *(_DWORD *)(v4 + 0xC);
    if ( v5 )
    {
      result = *(_DWORD *)(v5 + 0x10);
      if ( result )
      {
        *(float *)(a2 + 0x2C) = *(float *)(result + 0x58) + *(float *)(result + 0x14);
        *(float *)(a2 + 0x28) = *(float *)(result + 0x14) - *(float *)(result + 0x58);
        *(_OWORD *)(a2 + 0x10) = *(_OWORD *)(result + 0x20);
        *(_DWORD *)(a2 + 0x20) = *(_DWORD *)(result + 0xC);
        *(_DWORD *)(a2 + 0x24) = *(_DWORD *)(result + 0x10);
        result = *(_DWORD *)(result + 0x60);
        *(_DWORD *)(a2 + 0x30) = result;
      }
    }
  }
  return result;
}
