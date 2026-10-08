0x4B8400: mov     eax, [esp+arg_0]
0x4B8404: mov     byte ptr [eax+8], 0
0x4B8408: mov     [esp+arg_0], eax
0x4B840C: add     ecx, 0Ch
0x4B840F: jmp     NiTListNodePool_Release; Return one 12-byte NiTList node to Oblivion's synchronized global node pool. The caller must already have handled or cleared node+0x08 payload ownership.
