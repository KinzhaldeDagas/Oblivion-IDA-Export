0x4715A0: mov     edx, [esp+name]; Looks up a NiControllerSequence by name in the controller manager name map at +0x58; returns null on miss.
0x4715A4: lea     eax, [esp+name]
0x4715A8: push    eax
0x4715A9: push    edx
0x4715AA: add     ecx, 58h ; 'X'
0x4715AD: call    NiTMap_GetAt
0x4715B2: neg     al
0x4715B4: sbb     eax, eax
0x4715B6: and     eax, [esp+name]
0x4715BA: retn    4
