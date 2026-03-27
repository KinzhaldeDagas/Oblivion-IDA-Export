0x8E0A00: mov     edx, [esp+arg_0]
0x8E0A04: mov     ecx, [edx]
0x8E0A06: movsx   eax, byte ptr [ecx+5]
0x8E0A0A: mov     edx, [edx+4]
0x8E0A0D: add     eax, ecx
0x8E0A0F: movsx   ecx, byte ptr [edx+5]
0x8E0A13: add     ecx, edx
0x8E0A15: push    ecx
0x8E0A16: push    eax
0x8E0A17: call    sub_8E66D0
0x8E0A1C: add     esp, 8
0x8E0A1F: test    eax, eax
0x8E0A21: jz      short locret_8E0A2A
0x8E0A23: push    eax
0x8E0A24: call    sub_8E7920
0x8E0A29: pop     ecx
0x8E0A2A: retn    4
