0x4D7FE0: push    ebx
0x4D7FE1: push    ebp
0x4D7FE2: push    esi
0x4D7FE3: push    edi
0x4D7FE4: push    8; Size
0x4D7FE6: mov     ebp, ecx
0x4D7FE8: call    FormHeapAlloc
0x4D7FED: add     esp, 4
0x4D7FF0: test    eax, eax
0x4D7FF2: jz      short loc_4D7FFE
0x4D7FF4: mov     dword ptr [eax], 0
0x4D7FFA: mov     edi, eax
0x4D7FFC: jmp     short loc_4D8000
0x4D7FFE: xor     edi, edi
0x4D8000: mov     esi, [edi]
0x4D8002: mov     ebx, [esp+10h+arg_0]
0x4D8006: cmp     esi, ebx
0x4D8008: jz      short loc_4D803A
0x4D800A: test    esi, esi
0x4D800C: jz      short loc_4D802A
0x4D800E: lea     eax, [esi+4]
0x4D8011: push    eax; lpAddend
0x4D8012: call    dword ptr ds:0A2807Ch
0x4D8018: test    eax, eax
0x4D801A: jnz     short loc_4D802A
0x4D801C: test    esi, esi
0x4D801E: jz      short loc_4D802A
0x4D8020: mov     edx, [esi]
0x4D8022: mov     eax, [edx]
0x4D8024: push    1
0x4D8026: mov     ecx, esi
0x4D8028: call    eax
0x4D802A: test    ebx, ebx
0x4D802C: mov     [edi], ebx
0x4D802E: jz      short loc_4D803A
0x4D8030: add     ebx, 4
0x4D8033: push    ebx; lpAddend
0x4D8034: call    dword ptr ds:0A28078h
0x4D803A: fld1
0x4D803C: push    edi
0x4D803D: lea     ecx, [ebp+44h]
0x4D8040: fstp    dword ptr [edi+4]
0x4D8043: call    sub_4267B0
0x4D8048: pop     edi
0x4D8049: pop     esi
0x4D804A: pop     ebp
0x4D804B: pop     ebx
0x4D804C: retn    4
