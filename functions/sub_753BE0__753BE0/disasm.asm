0x753BE0: push    ecx
0x753BE1: fld     dword ptr ds:0A7DEB4h
0x753BE7: push    ebx
0x753BE8: push    ebp
0x753BE9: fchs
0x753BEB: push    esi
0x753BEC: push    edi
0x753BED: mov     edi, ecx
0x753BEF: mov     ax, [edi+8]
0x753BF3: fstp    dword ptr [edi+14h]
0x753BF6: fld     dword ptr ds:0A7DEB4h
0x753BFC: and     ax, 0FFFDh
0x753C00: or      ax, 4
0x753C04: fstp    dword ptr [edi+18h]
0x753C07: mov     [edi+8], ax
0x753C0B: mov     eax, [edi+30h]
0x753C0E: mov     esi, [eax+0Ch]
0x753C11: xor     ebx, ebx
0x753C13: xor     ebp, ebp
0x753C15: test    esi, esi
0x753C17: mov     [esp+14h+var_4], eax
0x753C1B: jz      short loc_753C4C
0x753C1D: mov     edx, [esi]
0x753C1F: mov     eax, [edx+4]
0x753C22: mov     ecx, esi
0x753C24: call    eax
0x753C26: test    eax, eax
0x753C28: jz      short loc_753C3E
0x753C2A: lea     ebx, [ebx+0]
0x753C30: cmp     eax, offset dword_B40BCC
0x753C35: jz      short loc_753C47
0x753C37: mov     eax, [eax+4]
0x753C3A: test    eax, eax
0x753C3C: jnz     short loc_753C30
0x753C3E: mov     esi, [esi+34h]
0x753C41: test    esi, esi
0x753C43: jnz     short loc_753C1D
0x753C45: jmp     short loc_753C4C
0x753C47: mov     ebp, [esi+44h]
0x753C4A: mov     ebx, esi
0x753C4C: fld     dword ptr [edi+20h]
0x753C4F: fld     dword ptr ds:0A7DEB4h
0x753C55: fchs
0x753C57: fucompp
0x753C59: fnstsw  ax
0x753C5B: fld     [esp+14h+arg_0]
0x753C5F: test    ah, 44h
0x753C62: jnp     short loc_753C82
0x753C64: test    ebx, ebx
0x753C66: jz      short loc_753C82
0x753C68: test    byte ptr [ebx+8], 6
0x753C6C: jnz     short loc_753C82
0x753C6E: fld     st
0x753C70: fsub    dword ptr [edi+20h]
0x753C73: fld     dword ptr [ebp+48h]
0x753C76: fcompp
0x753C78: fnstsw  ax
0x753C7A: test    ah, 5
0x753C7D: jp      short loc_753C82
0x753C7F: fst     dword ptr [edi+20h]
0x753C82: push    ecx
0x753C83: mov     ecx, edi
0x753C85: fstp    [esp+18h+var_18]; float
0x753C88: call    sub_6C36B0
0x753C8D: fldz
0x753C8F: cmp     dword ptr [edi+30h], 0
0x753C93: fst     dword ptr [edi+18h]
0x753C96: fstp    dword ptr [edi+14h]
0x753C99: jz      short loc_753CB4
0x753C9B: test    al, al
0x753C9D: jnz     short loc_753CB4
0x753C9F: mov     ecx, [esp+14h+var_4]
0x753CA3: fld     dword ptr [edi+28h]
0x753CA6: mov     edx, [ecx]
0x753CA8: mov     eax, [edx+98h]
0x753CAE: push    ecx
0x753CAF: fstp    [esp+18h+var_18]
0x753CB2: call    eax
0x753CB4: pop     edi
0x753CB5: pop     esi
0x753CB6: pop     ebp
0x753CB7: pop     ebx
0x753CB8: pop     ecx
0x753CB9: retn    4
