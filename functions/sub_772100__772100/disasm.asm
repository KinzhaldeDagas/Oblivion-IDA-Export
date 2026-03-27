0x772100: push    esi
0x772101: mov     esi, ecx
0x772103: mov     eax, [esi+14h]
0x772106: test    eax, eax
0x772108: jz      short loc_772116
0x77210A: mov     eax, [eax+8]
0x77210D: push    eax
0x77210E: call    sub_77CB50
0x772113: add     esp, 4
0x772116: mov     ecx, [esi+0Ch]
0x772119: push    ecx
0x77211A: call    sub_773620
0x77211F: mov     esi, [esi+4]
0x772122: add     esp, 4
0x772125: test    esi, esi
0x772127: jz      short loc_772145
0x772129: lea     edx, [esi+4]
0x77212C: push    edx; lpAddend
0x77212D: call    dword ptr ds:0A2807Ch
0x772133: test    eax, eax
0x772135: jnz     short loc_772145
0x772137: test    esi, esi
0x772139: jz      short loc_772145
0x77213B: mov     eax, [esi]
0x77213D: mov     edx, [eax]
0x77213F: push    1
0x772141: mov     ecx, esi
0x772143: call    edx
0x772145: pop     esi
0x772146: retn
