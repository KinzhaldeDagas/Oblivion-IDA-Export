0x948770: push    esi
0x948771: mov     esi, ecx
0x948773: mov     ecx, ds:0BA7D98h
0x948779: mov     eax, [ecx]
0x94877B: push    17h
0x94877D: push    1Ch
0x94877F: call    dword ptr [eax+10h]
0x948782: mov     ecx, [esp+4+arg_0]
0x948786: push    2000h
0x94878B: push    ecx
0x94878C: mov     ecx, eax
0x94878E: mov     word ptr [eax+4], 1Ch
0x948794: call    sub_8F5F10
0x948799: push    ecx
0x94879A: mov     ecx, esp
0x94879C: mov     byte ptr [ecx], 0
0x94879F: push    eax
0x9487A0: mov     ecx, esi
0x9487A2: call    sub_9183A0
0x9487A7: mov     ecx, [esi+8]
0x9487AA: mov     dword ptr [esi], offset off_AA2B4C
0x9487B0: cmp     word ptr [ecx+4], 0
0x9487B5: jz      short loc_9487C8
0x9487B7: dec     word ptr [ecx+6]
0x9487BB: cmp     word ptr [ecx+6], 0
0x9487C0: jnz     short loc_9487C8
0x9487C2: mov     edx, [ecx]
0x9487C4: push    1
0x9487C6: call    dword ptr [edx]
0x9487C8: mov     eax, esi
0x9487CA: pop     esi
0x9487CB: retn    4
