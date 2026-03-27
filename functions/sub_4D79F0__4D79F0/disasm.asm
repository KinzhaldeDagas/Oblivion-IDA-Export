0x4D79F0: push    esi
0x4D79F1: mov     esi, ecx
0x4D79F3: lea     ecx, [esi+44h]
0x4D79F6: call    ExtraDataList__GetStartLocation
0x4D79FB: test    eax, eax
0x4D79FD: jz      short loc_4D7A04
0x4D79FF: add     eax, 4
0x4D7A02: pop     esi
0x4D7A03: retn
0x4D7A04: mov     eax, [esi]
0x4D7A06: mov     edx, [eax+174h]
0x4D7A0C: mov     ecx, esi
0x4D7A0E: pop     esi
0x4D7A0F: jmp     edx
