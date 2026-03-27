0x5C0B50: push    esi
0x5C0B51: mov     esi, ecx
0x5C0B53: call    ??0Menu@@QAE@XZ; Menu::Menu(void)
0x5C0B58: xor     edx, edx
0x5C0B5A: mov     dword ptr [esi], offset ??_7QuickKeysMenu@@6B@; const QuickKeysMenu::`vftable'
0x5C0B60: mov     [esi+28h], edx
0x5C0B63: mov     [esi+2Ch], edx
0x5C0B66: xor     eax, eax
0x5C0B68: lea     ecx, [esi+30h]
0x5C0B6B: jmp     short loc_5C0B70
0x5C0B6D: align 10h
0x5C0B70: mov     [ecx], edx
0x5C0B72: mov     ds:byte_B3B418[eax], dl
0x5C0B78: add     eax, 1
0x5C0B7B: add     ecx, 4
0x5C0B7E: cmp     eax, 8
0x5C0B81: jl      short loc_5C0B70
0x5C0B83: or      eax, 0FFFFFFFFh
0x5C0B86: mov     ds:0B3B430h, eax
0x5C0B8B: mov     ds:0B3B424h, eax
0x5C0B90: mov     ds:0B3B434h, eax
0x5C0B95: mov     ds:0B3B428h, eax
0x5C0B9A: mov     ds:0B3B438h, eax
0x5C0B9F: mov     ds:0B3B42Ch, eax
0x5C0BA4: mov     eax, esi
0x5C0BA6: mov     ds:0B3B420h, dl
0x5C0BAC: pop     esi
0x5C0BAD: retn
