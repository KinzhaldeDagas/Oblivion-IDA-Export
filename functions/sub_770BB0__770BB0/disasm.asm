0x770BB0: sub     esp, 0Ch
0x770BB3: push    ebx
0x770BB4: push    ebp
0x770BB5: push    esi
0x770BB6: mov     esi, [esp+18h+arg_0]
0x770BBA: mov     ebx, [esi+10h]
0x770BBD: xor     ebp, ebp
0x770BBF: cmp     ebx, ebp
0x770BC1: push    edi
0x770BC2: mov     edi, [esi+24h]
0x770BC5: mov     [esp+1Ch+var_C], ebp
0x770BC9: jnz     short loc_770C03
0x770BCB: cmp     [esi+8], bp
0x770BCF: jbe     loc_770C9D
0x770BD5: mov     eax, [esi+1Ch]
0x770BD8: push    eax
0x770BD9: push    0
0x770BDB: push    edi
0x770BDC: call    __memset
0x770BE1: mov     eax, [esi+1Ch]
0x770BE4: add     edi, [esi+20h]
0x770BE7: add     [esp+28h+var_C], eax
0x770BEB: add     ebp, 1
0x770BEE: add     esp, 0Ch
0x770BF1: cmp     bp, [esi+8]
0x770BF5: jb      short loc_770BD8
0x770BF7: mov     eax, [esp+1Ch+var_C]
0x770BFB: pop     edi
0x770BFC: pop     esi
0x770BFD: pop     ebp
0x770BFE: pop     ebx
0x770BFF: add     esp, 0Ch
0x770C02: retn
0x770C03: mov     ax, [esi+4]
0x770C07: sub     ax, 8
0x770C0B: movzx   eax, ax
0x770C0E: lea     ecx, [eax-4]
0x770C11: test    cx, cx
0x770C14: jle     short loc_770C20
0x770C16: mov     [esp+1Ch+arg_0], 4
0x770C1E: jmp     short loc_770C27
0x770C20: movzx   edx, ax
0x770C23: mov     [esp+1Ch+arg_0], edx
0x770C27: cmp     [esi+8], bp
0x770C2B: mov     [esp+1Ch+var_8], ebp
0x770C2F: jbe     short loc_770C9D
0x770C31: mov     ebp, [esp+1Ch+arg_0]
0x770C35: xor     edx, edx
0x770C37: test    bp, bp
0x770C3A: mov     ecx, ebx
0x770C3C: mov     eax, edi
0x770C3E: jbe     short loc_770C69
0x770C40: movzx   ebp, bp
0x770C43: movzx   edx, bp
0x770C46: mov     [esp+1Ch+var_4], edx
0x770C4A: lea     ebx, [ebx+0]
0x770C50: mov     dl, [ecx]
0x770C52: mov     [eax], dl
0x770C54: add     eax, 1
0x770C57: add     ecx, 4
0x770C5A: sub     ebp, 1
0x770C5D: jnz     short loc_770C50
0x770C5F: mov     edx, [esp+1Ch+var_4]
0x770C63: cmp     dx, 4
0x770C67: jnb     short loc_770C7F
0x770C69: mov     ecx, 4
0x770C6E: sub     ecx, edx
0x770C70: movzx   edx, cx
0x770C73: push    edx
0x770C74: push    0
0x770C76: push    eax
0x770C77: call    __memset
0x770C7C: add     esp, 0Ch
0x770C7F: mov     eax, [esi+1Ch]
0x770C82: add     [esp+1Ch+var_C], eax
0x770C86: mov     eax, [esp+1Ch+var_8]
0x770C8A: add     ebx, [esi+18h]
0x770C8D: add     edi, [esi+20h]
0x770C90: add     eax, 1
0x770C93: cmp     ax, [esi+8]
0x770C97: mov     [esp+1Ch+var_8], eax
0x770C9B: jb      short loc_770C31
0x770C9D: mov     eax, [esp+1Ch+var_C]
0x770CA1: pop     edi
0x770CA2: pop     esi
0x770CA3: pop     ebp
0x770CA4: pop     ebx
0x770CA5: add     esp, 0Ch
0x770CA8: retn
