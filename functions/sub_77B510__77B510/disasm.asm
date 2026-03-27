0x77B510: mov     eax, [esp+arg_0]
0x77B514: test    eax, eax
0x77B516: jz      short locret_77B561
0x77B518: cmp     byte ptr [ecx+1000h], 0
0x77B51F: jz      short loc_77B529
0x77B521: cmp     [ecx+100Ch], eax
0x77B527: jz      short locret_77B561
0x77B529: cmp     byte ptr [esp+arg_4], 0
0x77B52E: mov     byte ptr [ecx+1000h], 1
0x77B535: jz      short loc_77B543
0x77B537: mov     edx, [ecx+100Ch]
0x77B53D: mov     [ecx+1010h], edx
0x77B543: mov     [ecx+100Ch], eax
0x77B549: mov     ecx, [ecx+0FF8h]
0x77B54F: mov     edx, [ecx]
0x77B551: mov     [esp+arg_4], eax
0x77B555: mov     eax, [edx+15Ch]
0x77B55B: mov     [esp+arg_0], ecx
0x77B55F: jmp     eax
0x77B561: retn    8
