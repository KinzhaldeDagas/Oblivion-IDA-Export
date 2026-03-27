0x748330: sub     esp, 8
0x748333: push    ebx
0x748334: push    esi
0x748335: push    edi
0x748336: mov     ebx, 1
0x74833B: xor     edi, edi
0x74833D: xor     esi, esi
0x74833F: cmp     [esp+14h+arg_4], ebx
0x748343: mov     [esp+14h+var_8], ecx
0x748347: jbe     short loc_7483A6
0x748349: push    ebp
0x74834A: mov     ebp, [esp+18h+arg_0]
0x74834E: jmp     short loc_748354
0x748350: mov     ecx, [esp+18h+var_8]
0x748354: push    1
0x748356: lea     eax, [esp+1Ch+var_4]
0x74835A: push    eax
0x74835B: mov     eax, [ecx+4]
0x74835E: push    1
0x748360: lea     edx, [esp+24h+arg_0]
0x748364: push    edx
0x748365: push    ecx
0x748366: mov     [esp+2Ch+var_4], 1
0x74836E: call    eax
0x748370: add     esp, 14h
0x748373: add     edi, eax
0x748375: cmp     eax, 1
0x748378: jnz     short loc_748396
0x74837A: mov     al, byte ptr [esp+18h+arg_0]
0x74837E: cmp     al, 0Ah
0x748380: jz      short loc_748396
0x748382: cmp     al, 0Dh
0x748384: jz      short loc_748390
0x748386: mov     [ebx+ebp-1], al
0x74838A: add     esi, 1
0x74838D: add     ebx, 1
0x748390: cmp     ebx, [esp+18h+arg_4]
0x748394: jb      short loc_748350
0x748396: mov     byte ptr [esi+ebp], 0
0x74839A: pop     ebp
0x74839B: mov     eax, edi
0x74839D: pop     edi
0x74839E: pop     esi
0x74839F: pop     ebx
0x7483A0: add     esp, 8
0x7483A3: retn    8
0x7483A6: mov     ecx, [esp+14h+arg_0]
0x7483AA: mov     eax, edi
0x7483AC: pop     edi
0x7483AD: mov     byte ptr [esi+ecx], 0
0x7483B1: pop     esi
0x7483B2: pop     ebx
0x7483B3: add     esp, 8
0x7483B6: retn    8
