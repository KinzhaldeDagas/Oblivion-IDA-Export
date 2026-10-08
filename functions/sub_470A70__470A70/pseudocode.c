// Writes an encoded-key map node payload: UInt16 key at node+4 and AnimSequenceBase* at node+8.
int __stdcall AnimKeyMap_SetNode(int a1, __int16 a2, int a3)
{
  *(_WORD *)(a1 + 4) = a2; /*0x470a7d*/
  *(_DWORD *)(a1 + 8) = a3; /*0x470a81*/
  return a1; /*0x470a84*/
}
