0x948180: push    esi
0x948181: mov     esi, ecx
0x948183: mov     ecx, [esi+4]
0x948186: test    ecx, ecx
0x948188: jz      short loc_9481B7
0x94818A: push    0Dh
0x94818C: call    sub_918440
0x948191: mov     ecx, [esi+4]
0x948194: push    4
0x948196: call    sub_9181B0
0x94819B: mov     eax, [esp+4+arg_0]
0x94819F: mov     ecx, [esi+4]
0x9481A2: push    0
0x9481A4: push    eax
0x9481A5: call    sub_918460
0x9481AA: mov     ecx, [esp+4+arg_4]
0x9481AE: push    ecx
0x9481AF: mov     ecx, [esi+4]
0x9481B2: call    sub_918440
0x9481B7: mov     ecx, [esi+4]
0x9481BA: test    ecx, ecx
0x9481BC: pop     esi
0x9481BD: jz      short loc_9481D3
0x9481BF: lea     edx, [esp+arg_0]
0x9481C3: push    edx
0x9481C4: call    sub_918060
0x9481C9: cmp     byte ptr [eax], 0
0x9481CC: jz      short loc_9481D3
0x9481CE: xor     eax, eax
0x9481D0: retn    8
0x9481D3: mov     eax, 1
0x9481D8: retn    8
