0x474BE0: push    esi
0x474BE1: push    edi
0x474BE2: mov     edi, [esp+8+arg_4]
0x474BE6: cmp     di, 0FFh
0x474BEB: mov     esi, ecx
0x474BED: jz      short loc_474C3F
0x474BEF: mov     ecx, [esi+9Ch]
0x474BF5: lea     eax, [esp+8+arg_4]
0x474BF9: push    eax
0x474BFA: push    edi
0x474BFB: call    sub_470960
0x474C00: test    al, al
0x474C02: jz      short loc_474C3F
0x474C04: push    ebx
0x474C05: mov     ebx, [esp+0Ch+arg_4]
0x474C09: mov     edx, [ebx]
0x474C0B: mov     eax, [edx+0Ch]
0x474C0E: mov     ecx, ebx
0x474C10: call    eax
0x474C12: test    al, al
0x474C14: jnz     short loc_474C26
0x474C16: mov     ecx, [esp+0Ch+arg_0]
0x474C1A: push    ecx
0x474C1B: mov     ecx, ebx
0x474C1D: call    sub_470C40
0x474C22: test    eax, eax
0x474C24: jnz     short loc_474C2E
0x474C26: pop     ebx
0x474C27: pop     edi
0x474C28: xor     eax, eax
0x474C2A: pop     esi
0x474C2B: retn    8
0x474C2E: push    0FFFFFFFFh
0x474C30: push    edi
0x474C31: push    eax
0x474C32: mov     ecx, esi
0x474C34: call    sub_474530
0x474C39: pop     ebx
0x474C3A: pop     edi
0x474C3B: pop     esi
0x474C3C: retn    8
0x474C3F: pop     edi
0x474C40: xor     eax, eax
0x474C42: pop     esi
0x474C43: retn    8
