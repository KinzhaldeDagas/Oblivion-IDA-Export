int __thiscall sub_8C98E0(_DWORD *this, _BYTE *a2)
{
  FreeEntry *v3; // eax
  unsigned __int8 v4; // cl
  int v5; // eax
  double v6; // st7
  bool v7; // zf
  int v9; // [esp+0h] [ebp-10h]
  int savedregs; // [esp+10h] [ebp+0h] BYREF

  if ( *(this + 3) )
  {
    *a2 = 0;
    return *(this + 3);
  }
  else
  {
    v3 = j_MemoryHeap_Alloc(&FormHeap, (char)&savedregs, 0x100000060uLL, v9);
    v4 = 0x10 - ((unsigned __int8)v3 & 0xF);
    v5 = (int)v3 + v4;
    *(_BYTE *)(v5 - 1) = v4;
    *(_DWORD *)v5 = 0;
    v6 = flt_B2EFC4;
    *(_DWORD *)(v5 + 8) = 0;
    *(float *)(v5 + 4) = v6;
    *(_OWORD *)(v5 + 0x10) = 0;
    *(_OWORD *)(v5 + 0x20) = 0;
    *(_OWORD *)(v5 + 0x30) = 0;
    *(float *)(v5 + 0x10) = 1.0;
    *(float *)(v5 + 0x24) = 1.0;
    *(float *)(v5 + 0x38) = 1.0;
    *(_OWORD *)(v5 + 0x40) = 0;
    v7 = *(this + 2) == 0;
    *(this + 3) = v5;
    if ( !v7 )
      sub_8C9380(this, v5);
    *a2 = 1;
    return *(this + 3);
  }
}
