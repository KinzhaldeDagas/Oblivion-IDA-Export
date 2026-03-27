0x46F4B0: push    esi
0x46F4B1: push    edi
0x46F4B2: mov     edi, ecx
0x46F4B4: lea     esi, [edi+4]
0x46F4B7: test    esi, esi
0x46F4B9: jz      short loc_46F4E9
0x46F4BB: jmp     short loc_46F4C0
0x46F4BD: align 10h
0x46F4C0: mov     eax, [esi]
0x46F4C2: test    eax, eax
0x46F4C4: jz      short loc_46F4E9
0x46F4C6: mov     ecx, [eax+8]
0x46F4C9: shr     ecx, 5
0x46F4CC: test    cl, 1
0x46F4CF: jnz     short loc_46F4E2
0x46F4D1: mov     edx, [eax+0Ch]
0x46F4D4: push    edx
0x46F4D5: push    4F4C5053h
0x46F4DA: call    TESForm_PutCurrentChunkData4
0x46F4DF: add     esp, 8
0x46F4E2: mov     esi, [esi+4]
0x46F4E5: test    esi, esi
0x46F4E7: jnz     short loc_46F4C0
0x46F4E9: lea     esi, [edi+0Ch]
0x46F4EC: test    esi, esi
0x46F4EE: jz      short loc_46F519
0x46F4F0: mov     eax, [esi]
0x46F4F2: test    eax, eax
0x46F4F4: jz      short loc_46F519
0x46F4F6: mov     ecx, [eax+8]
0x46F4F9: shr     ecx, 5
0x46F4FC: test    cl, 1
0x46F4FF: jnz     short loc_46F512
0x46F501: mov     edx, [eax+0Ch]
0x46F504: push    edx
0x46F505: push    4F4C5053h
0x46F50A: call    TESForm_PutCurrentChunkData4
0x46F50F: add     esp, 8
0x46F512: mov     esi, [esi+4]
0x46F515: test    esi, esi
0x46F517: jnz     short loc_46F4F0
0x46F519: pop     edi
0x46F51A: pop     esi
0x46F51B: retn
