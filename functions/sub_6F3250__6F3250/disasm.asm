0x6F3250: sub     esp, 8
0x6F3253: mov     edx, [esp+8+arg_8]
0x6F3257: push    ebx
0x6F3258: mov     ebx, [esp+0Ch+arg_0]
0x6F325C: push    esi
0x6F325D: mov     esi, [esp+10h+arg_4]
0x6F3261: push    edi
0x6F3262: mov     edi, [esp+14h+arg_8]
0x6F3266: xor     al, al
0x6F3268: mov     byte ptr [esp+14h+var_4], al
0x6F326C: mov     ecx, [esp+14h+var_4]
0x6F3270: mov     byte ptr [esp+14h+var_8], al
0x6F3274: mov     eax, [esp+14h+var_8]
0x6F3278: push    eax
0x6F3279: push    ecx
0x6F327A: push    edx
0x6F327B: push    edi
0x6F327C: push    esi
0x6F327D: push    ebx
0x6F327E: call    sub_6F2F30
0x6F3283: sub     esi, ebx
0x6F3285: mov     eax, 2E8BA2E9h
0x6F328A: imul    esi
0x6F328C: sar     edx, 3
0x6F328F: mov     eax, edx
0x6F3291: shr     eax, 1Fh
0x6F3294: add     eax, edx
0x6F3296: mov     ecx, eax
0x6F3298: imul    ecx, 2Ch ; ','
0x6F329B: add     esp, 18h
0x6F329E: mov     eax, edi
0x6F32A0: pop     edi
0x6F32A1: pop     esi
0x6F32A2: sub     eax, ecx
0x6F32A4: pop     ebx
0x6F32A5: add     esp, 8
0x6F32A8: retn
