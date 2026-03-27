0x748C90: push    edi
0x748C91: mov     edi, [esp+4+Size]
0x748C95: test    edi, edi
0x748C97: ja      short loc_748C9D
0x748C99: xor     eax, eax
0x748C9B: pop     edi
0x748C9C: retn
0x748C9D: push    esi
0x748C9E: push    edi; Size
0x748C9F: call    FormHeapAlloc
0x748CA4: mov     esi, eax
0x748CA6: mov     eax, [esp+0Ch+Src]
0x748CAA: push    edi; Size
0x748CAB: push    eax; Src
0x748CAC: push    esi; Dst
0x748CAD: call    _memcpy
0x748CB2: mov     ecx, [esp+18h+arg_10]
0x748CB6: mov     edx, [esp+18h+arg_C]
0x748CBA: push    ecx
0x748CBB: push    edx
0x748CBC: push    edi
0x748CBD: push    esi
0x748CBE: call    NiBinaryStream_DoByteSwap
0x748CC3: mov     ecx, [esp+28h+arg_0]
0x748CC7: add     esp, 20h
0x748CCA: push    edi; Size
0x748CCB: push    esi; Src
0x748CCC: call    sub_748920
0x748CD1: push    esi
0x748CD2: mov     edi, eax
0x748CD4: call    FormHeapFree
0x748CD9: add     esp, 4
0x748CDC: pop     esi
0x748CDD: mov     eax, edi
0x748CDF: pop     edi
0x748CE0: retn
