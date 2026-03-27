0x46BAD0: mov     eax, ds:0B33C18h
0x46BAD5: push    esi
0x46BAD6: mov     esi, eax
0x46BAD8: add     eax, 8
0x46BADB: push    eax; NewSize
0x46BADC: mov     ds:0B33C18h, eax
0x46BAE1: mov     eax, ds:0B33C14h
0x46BAE6: push    eax; Src
0x46BAE7: mov     ecx, offset FormHeap
0x46BAEC: call    MemoryHeap_Reallocate
0x46BAF1: mov     ecx, [esp+4+arg_0]
0x46BAF5: mov     ds:0B33C14h, eax
0x46BAFA: add     eax, esi
0x46BAFC: mov     word ptr [eax+4], 2
0x46BB02: mov     edx, ecx
0x46BB04: mov     [eax], edx
0x46BB06: mov     cx, [eax+4]
0x46BB0A: mov     dx, [esp+4+arg_4]
0x46BB0F: mov     [eax+4], cx
0x46BB13: mov     eax, ds:0B33C14h
0x46BB18: mov     [eax+esi+6], dx
0x46BB1D: pop     esi
0x46BB1E: retn
