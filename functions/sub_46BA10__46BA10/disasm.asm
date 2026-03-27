0x46BA10: mov     eax, ds:0B33C18h
0x46BA15: push    esi
0x46BA16: mov     esi, eax
0x46BA18: add     eax, 6
0x46BA1B: push    eax; NewSize
0x46BA1C: mov     ds:0B33C18h, eax
0x46BA21: mov     eax, ds:0B33C14h
0x46BA26: push    eax; Src
0x46BA27: mov     ecx, offset FormHeap
0x46BA2C: call    MemoryHeap_Reallocate
0x46BA31: mov     ecx, [esp+4+arg_0]
0x46BA35: mov     ds:0B33C14h, eax
0x46BA3A: add     eax, esi
0x46BA3C: mov     word ptr [eax+4], 0
0x46BA42: mov     edx, ecx
0x46BA44: mov     [eax], edx
0x46BA46: mov     cx, [eax+4]
0x46BA4A: mov     [eax+4], cx
0x46BA4E: mov     edx, ds:0B33C14h
0x46BA54: push    0; Size
0x46BA56: lea     eax, [edx+esi+6]
0x46BA5A: push    0; Src
0x46BA5C: push    eax; Dst
0x46BA5D: call    _memcpy
0x46BA62: add     esp, 0Ch
0x46BA65: pop     esi
0x46BA66: retn
