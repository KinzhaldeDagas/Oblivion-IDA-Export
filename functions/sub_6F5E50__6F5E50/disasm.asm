0x6F5E50: push    esi
0x6F5E51: mov     esi, ecx
0x6F5E53: cmp     dword ptr [esi+40h], 0
0x6F5E57: jz      short loc_6F5EBE
0x6F5E59: mov     ecx, [esp+4+arg_4]
0x6F5E5D: imul    ecx, [esp+4+arg_8]
0x6F5E62: mov     eax, [esi]
0x6F5E64: mov     edx, [esp+4+arg_0]
0x6F5E68: mov     eax, [eax+10h]
0x6F5E6B: push    ecx; int
0x6F5E6C: push    1; Size
0x6F5E6E: push    edx; int
0x6F5E6F: mov     ecx, esi
0x6F5E71: call    eax
0x6F5E73: test    al, al
0x6F5E75: jnz     short loc_6F5EC4
0x6F5E77: sub     esp, 1Ch
0x6F5E7A: mov     ecx, esp
0x6F5E7C: mov     [esp+20h+arg_4], esp
0x6F5E80: push    0FFFFFFFFh
0x6F5E82: push    0
0x6F5E84: lea     edx, [esi+4]
0x6F5E87: mov     dword ptr [ecx+18h], 0Fh
0x6F5E8E: mov     dword ptr [ecx+14h], 0
0x6F5E95: push    edx
0x6F5E96: mov     [ecx+4], al
0x6F5E99: call    sub_414420
0x6F5E9E: push    1; int
0x6F5EA0: call    sub_6F6BF0
0x6F5EA5: mov     ecx, [esi+40h]
0x6F5EA8: add     esp, 20h
0x6F5EAB: test    ecx, ecx
0x6F5EAD: jz      short loc_6F5EB7
0x6F5EAF: mov     eax, [ecx]
0x6F5EB1: mov     edx, [eax]
0x6F5EB3: push    1
0x6F5EB5: call    edx
0x6F5EB7: mov     dword ptr [esi+40h], 0
0x6F5EBE: xor     al, al
0x6F5EC0: pop     esi
0x6F5EC1: retn    0Ch
0x6F5EC4: mov     al, 1
0x6F5EC6: pop     esi
0x6F5EC7: retn    0Ch
