0x52FD20: mov     eax, [esp+arg_0]
0x52FD24: test    eax, eax
0x52FD26: push    ebx
0x52FD27: push    ebp
0x52FD28: mov     ebp, ecx
0x52FD2A: jz      loc_52FE85
0x52FD30: mov     ebx, [esp+8+arg_4]
0x52FD34: test    ebx, ebx
0x52FD36: jz      loc_52FE85
0x52FD3C: mov     ecx, [ebp+8]
0x52FD3F: shr     ecx, 3
0x52FD42: test    cl, 1
0x52FD45: jnz     loc_52FE85
0x52FD4B: push    esi
0x52FD4C: push    edi
0x52FD4D: push    0
0x52FD4F: push    eax
0x52FD50: mov     ecx, ebp
0x52FD52: call    sub_52FC40
0x52FD57: mov     edi, dword ptr [esp+10h+ArgList]
0x52FD5B: test    edi, edi
0x52FD5D: mov     esi, eax
0x52FD5F: jz      loc_52FE5D
0x52FD65: cmp     edi, 0FFFFFFFFh
0x52FD68: jz      loc_52FE20
0x52FD6E: movzx   eax, word ptr [ebx+20h]
0x52FD72: cmp     ax, 0FFFFh
0x52FD76: jz      short loc_52FD91
0x52FD78: lea     edx, [esp+10h+ArgList]
0x52FD7C: movzx   eax, ax
0x52FD7F: push    edx
0x52FD80: push    eax
0x52FD81: lea     ecx, [esi+4]
0x52FD84: mov     dword ptr [esp+18h+ArgList], 0
0x52FD8C: call    sub_446C50
0x52FD91: push    1
0x52FD93: push    edi
0x52FD94: mov     ecx, ebp
0x52FD96: call    TESTopic_GetTopicInfo??
0x52FD9B: test    eax, eax
0x52FD9D: jz      short loc_52FDF2
0x52FD9F: movzx   ecx, word ptr [eax+20h]
0x52FDA3: or      ebx, 0FFFFFFFFh
0x52FDA6: cmp     cx, 0FFFFh
0x52FDAB: jnz     short loc_52FDE4
0x52FDAD: mov     edi, [esi+10h]
0x52FDB0: xor     ecx, ecx
0x52FDB2: test    edi, edi
0x52FDB4: jbe     short loc_52FDEA
0x52FDB6: mov     edx, [esi+8]
0x52FDB9: lea     esp, [esp+0]
0x52FDC0: cmp     [edx], eax
0x52FDC2: jz      short loc_52FDD9
0x52FDC4: add     ecx, 1
0x52FDC7: add     edx, 4
0x52FDCA: cmp     ecx, edi
0x52FDCC: jb      short loc_52FDC0
0x52FDCE: mov     ecx, [esp+10h+arg_4]
0x52FDD2: push    ecx
0x52FDD3: push    ebx
0x52FDD4: jmp     loc_52FE60
0x52FDD9: lea     ebx, [ecx+1]
0x52FDDC: mov     ecx, [esp+10h+arg_4]
0x52FDE0: push    ecx
0x52FDE1: push    ebx
0x52FDE2: jmp     short loc_52FE60
0x52FDE4: movzx   ebx, cx
0x52FDE7: add     ebx, 1
0x52FDEA: mov     ecx, [esp+10h+arg_4]
0x52FDEE: push    ecx
0x52FDEF: push    ebx
0x52FDF0: jmp     short loc_52FE60
0x52FDF2: mov     ecx, ds:0B3650Ch
0x52FDF8: mov     eax, [ecx+0Ch]
0x52FDFB: mov     edx, [ecx]
0x52FDFD: mov     ebx, [ebp+0Ch]
0x52FE00: push    eax
0x52FE01: mov     eax, [edx+0D4h]
0x52FE07: call    eax
0x52FE09: push    eax
0x52FE0A: push    ebx
0x52FE0B: push    edi; ArgList
0x52FE0C: push    offset aCouldNotFin_13; "Could not find previous info (%08X) for"...
0x52FE11: call    PrintError
0x52FE16: mov     ecx, [esp+24h+arg_4]
0x52FE1A: add     esp, 14h
0x52FE1D: push    ecx
0x52FE1E: jmp     short loc_52FE5E
0x52FE20: cmp     word ptr [ebx+20h], 0FFFFh
0x52FE26: jnz     short loc_52FE68
0x52FE28: mov     ecx, [esi+10h]
0x52FE2B: lea     eax, [ecx-1]
0x52FE2E: test    eax, eax
0x52FE30: jle     short loc_52FE46
0x52FE32: cmp     eax, ecx
0x52FE34: jnb     short loc_52FE3F
0x52FE36: mov     edx, [esi+8]
0x52FE39: cmp     dword ptr [edx+eax*4], 0
0x52FE3D: jnz     short loc_52FE46
0x52FE3F: sub     eax, 1
0x52FE42: test    eax, eax
0x52FE44: jg      short loc_52FE32
0x52FE46: lea     ecx, [esp+10h+arg_4]
0x52FE4A: add     eax, 1
0x52FE4D: push    ecx
0x52FE4E: push    eax
0x52FE4F: lea     ecx, [esi+4]
0x52FE52: mov     [ebx+20h], ax
0x52FE56: call    sub_52ED80
0x52FE5B: jmp     short loc_52FE68
0x52FE5D: push    ebx
0x52FE5E: push    0
0x52FE60: lea     ecx, [esi+4]
0x52FE63: call    sub_52F3C0
0x52FE68: lea     ecx, [esi+4]
0x52FE6B: call    sub_5A56F0
0x52FE70: mov     edx, [esp+10h+arg_0]
0x52FE74: push    edx
0x52FE75: mov     ecx, ebp
0x52FE77: call    sub_52F650
0x52FE7C: pop     edi
0x52FE7D: pop     esi
0x52FE7E: pop     ebp
0x52FE7F: mov     al, 1
0x52FE81: pop     ebx
0x52FE82: retn    0Ch
0x52FE85: pop     ebp
0x52FE86: xor     al, al
0x52FE88: pop     ebx
0x52FE89: retn    0Ch
