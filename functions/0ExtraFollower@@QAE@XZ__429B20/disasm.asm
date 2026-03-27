0x429B20: push    0FFFFFFFFh
0x429B22: push    offset SEH_42B090
0x429B27: mov     eax, large fs:0
0x429B2D: push    eax
0x429B2E: push    ecx
0x429B2F: push    esi
0x429B30: mov     eax, ___security_cookie
0x429B35: xor     eax, esp
0x429B37: push    eax
0x429B38: lea     eax, [esp+18h+var_C]
0x429B3C: mov     large fs:0, eax
0x429B42: mov     esi, ecx
0x429B44: mov     [esp+18h+var_10], esi
0x429B48: mov     byte ptr [esi+4], 23h ; '#'
0x429B4C: mov     dword ptr [esi+8], 0
0x429B53: push    8; Size
0x429B55: mov     [esp+1Ch+var_4], 0
0x429B5D: mov     dword ptr [esi], offset ??_7ExtraFollower@@6B@; const ExtraFollower::`vftable'
0x429B63: call    FormHeapAlloc
0x429B68: add     esp, 4
0x429B6B: test    eax, eax
0x429B6D: jz      short loc_429B7E
0x429B6F: mov     dword ptr [eax], 0
0x429B75: mov     dword ptr [eax+4], 0
0x429B7C: jmp     short loc_429B80
0x429B7E: xor     eax, eax
0x429B80: mov     [esi+0Ch], eax
0x429B83: mov     eax, esi
0x429B85: mov     ecx, [esp+18h+var_C]
0x429B89: mov     large fs:0, ecx
0x429B90: pop     ecx
0x429B91: pop     esi
0x429B92: add     esp, 10h
0x429B95: retn
