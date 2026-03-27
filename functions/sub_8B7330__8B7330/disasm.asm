0x8B7330: sub     esp, 34h
0x8B7333: push    ebx
0x8B7334: mov     ebx, [ecx+10h]
0x8B7337: test    ebx, ebx
0x8B7339: jz      short loc_8B73A6
0x8B733B: cmp     dword ptr [ebx+8], 0
0x8B733F: jz      short loc_8B73A6
0x8B7341: call    sub_452A60
0x8B7346: test    eax, eax
0x8B7348: jz      short loc_8B73A6
0x8B734A: push    esi
0x8B734B: push    edi
0x8B734C: lea     esi, [eax+64h]
0x8B734F: mov     ecx, 0Dh
0x8B7354: lea     edi, [esp+40h+var_34]
0x8B7358: push    offset stru_BA7B00; lpCriticalSection
0x8B735D: rep movsd
0x8B735F: call    dword ptr ds:0A2806Ch
0x8B7365: call    dword ptr ds:0A2808Ch
0x8B736B: mov     ds:0BA7B78h, eax
0x8B7370: lea     eax, [esp+40h+var_34]
0x8B7374: mov     esi, 1
0x8B7379: add     ds:0BA7B7Ch, esi
0x8B737F: push    eax
0x8B7380: mov     ecx, ebx
0x8B7382: call    sub_8B7210
0x8B7387: sub     ds:0BA7B7Ch, esi
0x8B738D: pop     edi
0x8B738E: pop     esi
0x8B738F: jnz     short loc_8B739B
0x8B7391: mov     dword ptr ds:0BA7B78h, 0
0x8B739B: push    offset stru_BA7B00; lpCriticalSection
0x8B73A0: call    dword ptr ds:0A28074h
0x8B73A6: pop     ebx
0x8B73A7: add     esp, 34h
0x8B73AA: retn
