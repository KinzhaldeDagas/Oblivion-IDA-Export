0x8A9B20: push    ebp
0x8A9B21: mov     ebp, esp
0x8A9B23: and     esp, 0FFFFFFF0h
0x8A9B26: sub     esp, 14h
0x8A9B29: push    ebx
0x8A9B2A: push    esi
0x8A9B2B: mov     esi, ecx
0x8A9B2D: mov     ecx, [esi+8]
0x8A9B30: test    ecx, ecx
0x8A9B32: push    edi
0x8A9B33: jz      short loc_8A9B7B
0x8A9B35: mov     eax, [ecx+88h]
0x8A9B3B: test    eax, eax
0x8A9B3D: jz      short loc_8A9B64
0x8A9B3F: mov     eax, [ebp+arg_0]
0x8A9B42: lea     edx, [esp+20h+var_10]
0x8A9B46: push    edx
0x8A9B47: mov     [esp+24h+var_10], 5
0x8A9B4C: mov     [esp+24h+var_C], esi
0x8A9B50: mov     [esp+24h+var_8], eax
0x8A9B54: call    sub_898820
0x8A9B59: xor     eax, eax
0x8A9B5B: pop     edi
0x8A9B5C: pop     esi
0x8A9B5D: pop     ebx
0x8A9B5E: mov     esp, ebp
0x8A9B60: pop     ebp
0x8A9B61: retn    4
0x8A9B64: test    ecx, ecx
0x8A9B66: jz      short loc_8A9B7B
0x8A9B68: inc     dword ptr [ecx+88h]
0x8A9B6E: mov     eax, [esi+8]
0x8A9B71: push    esi
0x8A9B72: push    eax
0x8A9B73: call    sub_8CCA80
0x8A9B78: add     esp, 8
0x8A9B7B: mov     ecx, [esi+14h]
0x8A9B7E: lea     edi, [esi+14h]
0x8A9B81: test    ecx, ecx
0x8A9B83: setnz   bl
0x8A9B86: test    ecx, ecx
0x8A9B88: jz      short loc_8A9BA2
0x8A9B8A: cmp     word ptr [ecx+4], 0
0x8A9B8F: jz      short loc_8A9BA2
0x8A9B91: dec     word ptr [ecx+6]
0x8A9B95: cmp     word ptr [ecx+6], 0
0x8A9B9A: jnz     short loc_8A9BA2
0x8A9B9C: mov     edx, [ecx]
0x8A9B9E: push    1
0x8A9BA0: call    dword ptr [edx]
0x8A9BA2: mov     ecx, [ebp+arg_0]
0x8A9BA5: mov     [edi], ecx
0x8A9BA7: cmp     word ptr [ecx+4], 0
0x8A9BAC: jz      short loc_8A9BB2
0x8A9BAE: inc     word ptr [ecx+6]
0x8A9BB2: lea     eax, [esp+20h+var_10]
0x8A9BB6: push    eax
0x8A9BB7: push    esi
0x8A9BB8: call    sub_8A9970
0x8A9BBD: add     esp, 8
0x8A9BC0: test    bl, bl
0x8A9BC2: jz      short loc_8A9BD4
0x8A9BC4: cmp     dword ptr [esi+34h], 7F7FFFFFh
0x8A9BCB: jz      short loc_8A9BD4
0x8A9BCD: mov     dword ptr [esi+34h], 0BF800000h
0x8A9BD4: fld     dword ptr [esi+34h]
0x8A9BD7: fcomp   dword ptr ds:0A2FAA8h
0x8A9BDD: fnstsw  ax
0x8A9BDF: test    ah, 41h
0x8A9BE2: jp      short loc_8A9BEF
0x8A9BE4: lea     ecx, [esp+20h+var_10]
0x8A9BE8: mov     edx, edi
0x8A9BEA: call    sub_8A9A60
0x8A9BEF: mov     eax, [esi+8]
0x8A9BF2: test    eax, eax
0x8A9BF4: jz      short loc_8A9C00
0x8A9BF6: push    esi
0x8A9BF7: push    eax
0x8A9BF8: call    sub_8DC4A0
0x8A9BFD: add     esp, 8
0x8A9C00: push    esi
0x8A9C01: call    sub_8DBF20
0x8A9C06: mov     eax, [esi+8]
0x8A9C09: add     esp, 4
0x8A9C0C: test    eax, eax
0x8A9C0E: jz      short loc_8A9C45
0x8A9C10: push    esi
0x8A9C11: push    eax
0x8A9C12: call    sub_8CC800
0x8A9C17: mov     ecx, [esi+8]
0x8A9C1A: mov     eax, [ecx+88h]
0x8A9C20: add     esp, 8
0x8A9C23: dec     eax
0x8A9C24: mov     [ecx+88h], eax
0x8A9C2A: jnz     short loc_8A9C45
0x8A9C2C: mov     eax, [ecx+84h]
0x8A9C32: test    eax, eax
0x8A9C34: jz      short loc_8A9C45
0x8A9C36: mov     al, [ecx+90h]
0x8A9C3C: test    al, al
0x8A9C3E: jnz     short loc_8A9C45
0x8A9C40: call    sub_899210
0x8A9C45: pop     edi
0x8A9C46: pop     esi
0x8A9C47: mov     eax, 1
0x8A9C4C: pop     ebx
0x8A9C4D: mov     esp, ebp
0x8A9C4F: pop     ebp
0x8A9C50: retn    4
