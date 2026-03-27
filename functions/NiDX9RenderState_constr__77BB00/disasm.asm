0x77BB00: push    ebx
0x77BB01: push    ebp
0x77BB02: push    esi
0x77BB03: push    edi
0x77BB04: push    1148h; Size
0x77BB09: call    FormHeapAlloc
0x77BB0E: mov     edi, [esp+14h+Src]
0x77BB12: mov     ebp, [esp+14h+arg_0]
0x77BB16: mov     esi, eax
0x77BB18: add     esp, 4
0x77BB1B: test    esi, esi
0x77BB1D: jz      short loc_77BB4B
0x77BB1F: push    ebp
0x77BB20: mov     ecx, esi; this
0x77BB22: call    ??0NiD3DRenderState@@QAE@XZ; NiD3DRenderState::NiD3DRenderState(void)
0x77BB27: push    130h; Size
0x77BB2C: lea     eax, [esi+1018h]
0x77BB32: push    edi; Src
0x77BB33: push    eax; Dst
0x77BB34: mov     dword ptr [esi], offset ??_7NiDX9RenderState@@6B@; const NiDX9RenderState::`vftable'
0x77BB3A: mov     byte ptr [esi+1014h], 0
0x77BB41: call    _memcpy
0x77BB46: add     esp, 0Ch
0x77BB49: jmp     short loc_77BB4D
0x77BB4B: xor     esi, esi
0x77BB4D: mov     edx, [esi]
0x77BB4F: mov     eax, [edx+108h]
0x77BB55: mov     ecx, esi
0x77BB57: call    eax
0x77BB59: mov     dl, [esp+10h+arg_8]
0x77BB5D: xor     eax, eax
0x77BB5F: nop
0x77BB60: mov     ecx, ds:dword_B29FB8[eax]
0x77BB66: cmp     ecx, 0FFFFFFFFh
0x77BB69: jz      short loc_77BBDE
0x77BB6B: cmp     ecx, 7
0x77BB6E: jnz     short loc_77BB7D
0x77BB70: xor     ecx, ecx
0x77BB72: test    dl, dl
0x77BB74: setnz   cl
0x77BB77: mov     ds:dword_B29FBC[eax], ecx
0x77BB7D: mov     ecx, ds:dword_B29FC0[eax]
0x77BB83: cmp     ecx, 0FFFFFFFFh
0x77BB86: jz      short loc_77BBDE
0x77BB88: cmp     ecx, 7
0x77BB8B: jnz     short loc_77BB9A
0x77BB8D: xor     ecx, ecx
0x77BB8F: test    dl, dl
0x77BB91: setnz   cl
0x77BB94: mov     ds:dword_B29FC4[eax], ecx
0x77BB9A: mov     ecx, ds:dword_B29FC8[eax]
0x77BBA0: cmp     ecx, 0FFFFFFFFh
0x77BBA3: jz      short loc_77BBDE
0x77BBA5: cmp     ecx, 7
0x77BBA8: jnz     short loc_77BBB7
0x77BBAA: xor     ecx, ecx
0x77BBAC: test    dl, dl
0x77BBAE: setnz   cl
0x77BBB1: mov     ds:dword_B29FCC[eax], ecx
0x77BBB7: mov     ecx, ds:dword_B29FD0[eax]
0x77BBBD: cmp     ecx, 0FFFFFFFFh
0x77BBC0: jz      short loc_77BBDE
0x77BBC2: cmp     ecx, 7
0x77BBC5: jnz     short loc_77BBD4
0x77BBC7: xor     ecx, ecx
0x77BBC9: test    dl, dl
0x77BBCB: setnz   cl
0x77BBCE: mov     ds:dword_B29FD4[eax], ecx
0x77BBD4: add     eax, 20h ; ' '
0x77BBD7: cmp     eax, 800h
0x77BBDC: jb      short loc_77BB60
0x77BBDE: test    dl, dl
0x77BBE0: jz      short loc_77BBE6
0x77BBE2: or      dword ptr [esi+8], 2
0x77BBE6: push    edi
0x77BBE7: push    ebp
0x77BBE8: call    sub_780B30
0x77BBED: mov     edi, [esi+0FF0h]
0x77BBF3: mov     ebx, eax
0x77BBF5: add     esp, 8
0x77BBF8: cmp     edi, ebx
0x77BBFA: jz      short loc_77BC30
0x77BBFC: test    edi, edi
0x77BBFE: jz      short loc_77BC1C
0x77BC00: lea     edx, [edi+4]
0x77BC03: push    edx; lpAddend
0x77BC04: call    dword ptr ds:0A2807Ch
0x77BC0A: test    eax, eax
0x77BC0C: jnz     short loc_77BC1C
0x77BC0E: test    edi, edi
0x77BC10: jz      short loc_77BC1C
0x77BC12: mov     eax, [edi]
0x77BC14: mov     edx, [eax]
0x77BC16: push    1
0x77BC18: mov     ecx, edi
0x77BC1A: call    edx
0x77BC1C: test    ebx, ebx
0x77BC1E: mov     [esi+0FF0h], ebx
0x77BC24: jz      short loc_77BC30
0x77BC26: add     ebx, 4
0x77BC29: push    ebx; lpAddend
0x77BC2A: call    dword ptr ds:0A28078h
0x77BC30: pop     edi
0x77BC31: mov     eax, esi
0x77BC33: pop     esi
0x77BC34: pop     ebp
0x77BC35: pop     ebx
0x77BC36: retn
