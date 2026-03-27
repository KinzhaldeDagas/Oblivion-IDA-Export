0x8B1750: mov     ecx, [esp+Format]
0x8B1754: mov     edx, [esp+DstBuf]
0x8B1758: lea     eax, [esp+ArgList]
0x8B175C: push    eax; ArgList
0x8B175D: push    ecx; Format
0x8B175E: push    edx; DstBuf
0x8B175F: call    __vsprintf
0x8B1764: add     esp, 0Ch
0x8B1767: retn
