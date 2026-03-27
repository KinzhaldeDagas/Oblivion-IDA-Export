0x4A5390: push    edi
0x4A5391: lea     edi, [ecx+0Ch]
0x4A5394: mov     eax, edi
0x4A5396: test    eax, eax
0x4A5398: jz      short loc_4A53D8
0x4A539A: push    esi
0x4A539B: jmp     short loc_4A53A0
0x4A539D: align 10h
0x4A53A0: mov     esi, [eax]
0x4A53A2: test    esi, esi
0x4A53A4: jz      short loc_4A53D7
0x4A53A6: mov     ecx, [eax+4]
0x4A53A9: test    ecx, ecx
0x4A53AB: jz      short loc_4A53C2
0x4A53AD: mov     edx, [ecx+4]
0x4A53B0: mov     [eax+4], edx
0x4A53B3: mov     edx, [ecx]
0x4A53B5: push    ecx
0x4A53B6: mov     [eax], edx
0x4A53B8: call    FormHeapFree
0x4A53BD: add     esp, 4
0x4A53C0: jmp     short loc_4A53C8
0x4A53C2: mov     dword ptr [eax], 0
0x4A53C8: push    esi
0x4A53C9: call    FormHeapFree
0x4A53CE: mov     eax, edi
0x4A53D0: add     esp, 4
0x4A53D3: test    eax, eax
0x4A53D5: jnz     short loc_4A53A0
0x4A53D7: pop     esi
0x4A53D8: cmp     dword ptr [edi+4], 0
0x4A53DC: jnz     short loc_4A53EA
0x4A53DE: cmp     dword ptr [edi], 0
0x4A53E1: jnz     short loc_4A53EA
0x4A53E3: mov     eax, 1
0x4A53E8: pop     edi
0x4A53E9: retn
0x4A53EA: xor     eax, eax
0x4A53EC: pop     edi
0x4A53ED: retn
