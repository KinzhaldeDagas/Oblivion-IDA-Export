0x46BA80: mov     eax, ds:0B33C18h
0x46BA85: push    esi
0x46BA86: mov     esi, eax
0x46BA88: add     eax, 0Ah
0x46BA8B: push    eax; NewSize
0x46BA8C: mov     ds:0B33C18h, eax
0x46BA91: mov     eax, ds:0B33C14h
0x46BA96: push    eax; Src
0x46BA97: mov     ecx, offset FormHeap
0x46BA9C: call    MemoryHeap_Reallocate
0x46BAA1: mov     ecx, [esp+4+arg_0]
0x46BAA5: mov     ds:0B33C14h, eax
0x46BAAA: add     eax, esi
0x46BAAC: mov     word ptr [eax+4], 4
0x46BAB2: mov     edx, ecx
0x46BAB4: mov     [eax], edx
0x46BAB6: mov     cx, [eax+4]
0x46BABA: mov     edx, [esp+4+arg_4]
0x46BABE: mov     [eax+4], cx
0x46BAC2: mov     eax, ds:0B33C14h
0x46BAC7: mov     [eax+esi+6], edx
0x46BACB: pop     esi
0x46BACC: retn
