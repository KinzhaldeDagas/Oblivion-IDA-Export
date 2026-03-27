0x72CB20: push    ebp
0x72CB21: mov     ebp, [esp+4+a2]
0x72CB25: push    esi
0x72CB26: push    ebp; a2
0x72CB27: mov     esi, ecx
0x72CB29: call    sub_700670
0x72CB2E: test    al, al
0x72CB30: jnz     short loc_72CB37
0x72CB32: pop     esi
0x72CB33: pop     ebp
0x72CB34: retn    4
0x72CB37: push    ebx
0x72CB38: mov     ebx, [esi+8]
0x72CB3B: cmp     ebx, [ebp+8]
0x72CB3E: jz      short loc_72CB48
0x72CB40: pop     ebx
0x72CB41: pop     esi
0x72CB42: xor     al, al
0x72CB44: pop     ebp
0x72CB45: retn    4
0x72CB48: push    edi
0x72CB49: xor     edi, edi
0x72CB4B: test    ebx, ebx
0x72CB4D: jbe     short loc_72CB70
0x72CB4F: mov     esi, [esi+0Ch]
0x72CB52: mov     ebp, [ebp+0Ch]
0x72CB55: sub     ebp, esi
0x72CB57: lea     eax, [esi+ebp]
0x72CB5A: push    eax
0x72CB5B: mov     ecx, esi
0x72CB5D: call    sub_72C4C0
0x72CB62: test    al, al
0x72CB64: jz      short loc_72CB79
0x72CB66: add     edi, 1
0x72CB69: add     esi, 2Ch ; ','
0x72CB6C: cmp     edi, ebx
0x72CB6E: jb      short loc_72CB57
0x72CB70: pop     edi
0x72CB71: pop     ebx
0x72CB72: pop     esi
0x72CB73: mov     al, 1
0x72CB75: pop     ebp
0x72CB76: retn    4
0x72CB79: pop     edi
0x72CB7A: pop     ebx
0x72CB7B: pop     esi
0x72CB7C: xor     al, al
0x72CB7E: pop     ebp
0x72CB7F: retn    4
