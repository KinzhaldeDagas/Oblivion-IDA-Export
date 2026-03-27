int __usercall sub_7439C0@<eax>(int result@<eax>, __int16 a2@<cx>)
{
  int v2; // edi

  *(_BYTE *)(*(_DWORD *)(result + 8) + *(_DWORD *)(result + 0x14)) = HIBYTE(a2);
  v2 = *(_DWORD *)(result + 8);
  *(_BYTE *)(++*(_DWORD *)(result + 0x14) + v2) = a2;
  ++*(_DWORD *)(result + 0x14);
  return result;
}
