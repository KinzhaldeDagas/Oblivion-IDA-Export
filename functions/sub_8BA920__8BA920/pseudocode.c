int __thiscall sub_8BA920(hkVector4 **this, _BYTE *a2)
{
  FreeEntry *v3; // eax
  unsigned __int8 v4; // cl
  char *v5; // eax
  bool v6; // zf
  int v8; // [esp+0h] [ebp-10h]
  int savedregs; // [esp+10h] [ebp+0h] BYREF

  if ( *(this + 3) )
  {
    *a2 = 0;
    return (int)*(this + 3);
  }
  else
  {
    v3 = j_MemoryHeap_Alloc(&FormHeap, (char)&savedregs, 0x100000050uLL, v8);
    v4 = 0x10 - ((unsigned __int8)v3 & 0xF);
    v5 = (char *)v3 + v4;
    v5[0xFFFFFFFF] = v4;
    *((_DWORD *)v5 + 3) = 0;
    *((_DWORD *)v5 + 4) = 0;
    *((_DWORD *)v5 + 5) = 0x80000000;
    *(_DWORD *)v5 = 0;
    *((_DWORD *)v5 + 1) = 0;
    v5[8] = 2;
    *((_OWORD *)v5 + 2) = 0;
    *((_OWORD *)v5 + 3) = 0;
    v6 = *(this + 2) == 0;
    *(this + 3) = (hkVector4 *)v5;
    if ( !v6 )
      sub_8BA6F0(this, (hkVector4 *)v5);
    *a2 = 1;
    return (int)*(this + 3);
  }
}
