int __thiscall sub_536B30(_DWORD *this, int a2, int a3, int a4)
{
  int result; // eax
  FreeEntry *v6; // eax
  unsigned __int8 v7; // cl
  int v8; // [esp+0h] [ebp-10h]
  int savedregs; // [esp+10h] [ebp+0h] BYREF

  result = *(this + 4);
  if ( !result )
    goto LABEL_5;
  do
  {
    if ( *(_DWORD *)(result + 0xC) == a2 )
      break;
    result = *(_DWORD *)(result + 4);
  }
  while ( result );
  if ( !result )
  {
LABEL_5:
    v6 = j_MemoryHeap_Alloc(&FormHeap, (char)&savedregs, 0x100000050uLL, v8);
    v7 = 0x10 - ((unsigned __int8)v6 & 0xF);
    result = (int)v6 + v7;
    *(_BYTE *)(result - 1) = v7;
    *(_DWORD *)result = 0;
    *(_DWORD *)(result + 4) = 0;
    *(_DWORD *)(result + 8) = a3;
    *(_DWORD *)(result + 0xC) = a2;
    *(_DWORD *)(result + 0x30) = 0x1F;
    *(_OWORD *)(result + 0x10) = 0;
    *(_OWORD *)(result + 0x20) = 0;
    *(_DWORD *)result |= a4;
    *(_DWORD *)(result + 4) = *(this + 4);
    *(this + 4) = result;
  }
  return result;
}
