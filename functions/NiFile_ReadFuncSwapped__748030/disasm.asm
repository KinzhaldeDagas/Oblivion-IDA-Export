0x748030: push    esi
0x748031: mov     esi, [esp+4+Count]
0x748035: test    esi, esi
0x748037: ja      short loc_74803D
0x748039: xor     eax, eax
0x74803B: pop     esi
0x74803C: retn
0x74803D: mov     ecx, [esp+4+arg_0]
0x748041: push    ebx
0x748042: push    edi
0x748043: mov     edi, [esp+0Ch+Dst]
0x748047: push    esi; Count
0x748048: push    edi; Dst
0x748049: call    NiFile_DirectRead
0x74804E: mov     ecx, [esp+0Ch+arg_C]
0x748052: mov     ebx, eax
0x748054: mov     eax, [esp+0Ch+arg_10]
0x748058: push    eax
0x748059: push    ecx
0x74805A: push    esi
0x74805B: push    edi
0x74805C: call    NiBinaryStream_DoByteSwap
0x748061: add     esp, 10h
0x748064: pop     edi
0x748065: mov     eax, ebx
0x748067: pop     ebx
0x748068: pop     esi
0x748069: retn
