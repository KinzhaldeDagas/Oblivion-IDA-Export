0x537C10: mov     eax, [esp+arg_0]
0x537C14: test    eax, eax
0x537C16: push    esi
0x537C17: jz      short loc_537C1E
0x537C19: mov     esi, [eax+0Ch]
0x537C1C: jmp     short loc_537C20
0x537C1E: xor     esi, esi
0x537C20: test    esi, esi
0x537C22: jz      short loc_537C49
0x537C24: mov     eax, [esi]
0x537C26: mov     edx, [eax+4]
0x537C29: mov     ecx, esi
0x537C2B: call    edx
0x537C2D: test    eax, eax
0x537C2F: jz      short loc_537C3F
0x537C31: cmp     eax, offset dword_BA7D84
0x537C36: jz      short loc_537C72
0x537C38: mov     eax, [eax+4]
0x537C3B: test    eax, eax
0x537C3D: jnz     short loc_537C31
0x537C3F: xor     al, al
0x537C41: neg     al
0x537C43: sbb     eax, eax
0x537C45: and     eax, esi
0x537C47: mov     esi, eax
0x537C49: mov     ecx, esi
0x537C4B: call    sub_535AC0
0x537C50: fcomp   dword ptr ds:0A2FAA8h
0x537C56: fnstsw  ax
0x537C58: test    ah, 44h
0x537C5B: jnp     short def_537C8A; jumptable 00537C8A default case, cases 7,9,11
0x537C5D: test    esi, esi
0x537C5F: jz      short def_537C8A; jumptable 00537C8A default case, cases 7,9,11
0x537C61: mov     eax, [esi+8]
0x537C64: test    eax, eax
0x537C66: jz      short loc_537C76
0x537C68: add     eax, 14h
0x537C6B: jz      short loc_537C76
0x537C6D: mov     eax, [eax+1Ch]
0x537C70: jmp     short loc_537C78
0x537C72: mov     al, 1
0x537C74: jmp     short loc_537C41
0x537C76: xor     eax, eax
0x537C78: and     eax, 3Fh
0x537C7B: add     eax, 0FFFFFFFCh; switch 11 cases
0x537C7E: cmp     eax, 0Ah
0x537C81: ja      short def_537C8A; jumptable 00537C8A default case, cases 7,9,11
0x537C83: movzx   eax, ds:byte_537CA8[eax]
0x537C8A: jmp     ds:jpt_537C8A[eax*4]; switch jump
0x537C91: mov     eax, esi; jumptable 00537C8A cases 4-6,8,10,12-14
0x537C93: pop     esi
0x537C94: retn    4
0x537C97: xor     eax, eax; jumptable 00537C8A default case, cases 7,9,11
0x537C99: pop     esi
0x537C9A: retn    4
