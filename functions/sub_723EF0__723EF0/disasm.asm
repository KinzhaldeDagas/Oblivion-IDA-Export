0x723EF0: mov     eax, [esp+cloningProcess]
0x723EF4: push    esi
0x723EF5: push    edi
0x723EF6: mov     edi, [esp+8+destination]
0x723EFA: push    eax; cloningProcess
0x723EFB: push    edi; destination
0x723EFC: mov     esi, ecx
0x723EFE: call    OB_NiNode_CopyMembersForClone
0x723F03: mov     cx, [esi+0DCh]
0x723F0A: mov     [edi+0DCh], cx
0x723F11: mov     edx, [esi+0E0h]
0x723F17: mov     [edi+0E0h], edx
0x723F1D: pop     edi
0x723F1E: pop     esi
0x723F1F: retn    8
