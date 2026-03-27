0x42A980: push    0FFFFFFFFh
0x42A982: push    offset SEH_42B090
0x42A987: mov     eax, large fs:0
0x42A98D: push    eax
0x42A98E: push    ecx
0x42A98F: push    esi
0x42A990: mov     eax, ___security_cookie
0x42A995: xor     eax, esp
0x42A997: push    eax
0x42A998: lea     eax, [esp+18h+var_C]
0x42A99C: mov     large fs:0, eax
0x42A9A2: mov     esi, ecx
0x42A9A4: mov     [esp+18h+var_10], esi
0x42A9A8: mov     byte ptr [esi+4], 4Eh ; 'N'
0x42A9AC: mov     dword ptr [esi+8], 0
0x42A9B3: push    8; Size
0x42A9B5: mov     [esp+1Ch+var_4], 0
0x42A9BD: mov     dword ptr [esi], offset ??_7ExtraFriendHitList@@6B@; const ExtraFriendHitList::`vftable'
0x42A9C3: call    FormHeapAlloc
0x42A9C8: add     esp, 4
0x42A9CB: test    eax, eax
0x42A9CD: jz      short loc_42A9DE
0x42A9CF: mov     dword ptr [eax], 0
0x42A9D5: mov     dword ptr [eax+4], 0
0x42A9DC: jmp     short loc_42A9E0
0x42A9DE: xor     eax, eax
0x42A9E0: mov     [esi+0Ch], eax
0x42A9E3: mov     eax, esi
0x42A9E5: mov     ecx, [esp+18h+var_C]
0x42A9E9: mov     large fs:0, ecx
0x42A9F0: pop     ecx
0x42A9F1: pop     esi
0x42A9F2: add     esp, 10h
0x42A9F5: retn
