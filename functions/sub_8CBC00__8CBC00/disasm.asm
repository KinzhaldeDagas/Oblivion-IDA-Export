0x8CBC00: push    edi
0x8CBC01: mov     edi, [esp+4+arg_4]
0x8CBC05: mov     byte ptr [edi+28h], 1
0x8CBC09: xor     al, al
0x8CBC0B: cmp     word ptr [edi+22h], 0FFFFh
0x8CBC11: mov     [edi+25h], al
0x8CBC14: mov     [edi+24h], al
0x8CBC17: jnz     short loc_8CBC50
0x8CBC19: mov     eax, [esp+4+arg_0]
0x8CBC1D: mov     cx, [eax+54h]
0x8CBC21: push    esi
0x8CBC22: lea     esi, [eax+50h]
0x8CBC25: mov     [edi+22h], cx
0x8CBC29: mov     edx, [esi+8]
0x8CBC2C: mov     eax, [esi+4]
0x8CBC2F: and     edx, 3FFFFFFFh
0x8CBC35: cmp     eax, edx
0x8CBC37: jnz     short loc_8CBC44
0x8CBC39: push    4
0x8CBC3B: push    esi
0x8CBC3C: call    sub_8A6EE0
0x8CBC41: add     esp, 8
0x8CBC44: mov     eax, [esi+4]
0x8CBC47: mov     ecx, [esi]
0x8CBC49: mov     [ecx+eax*4], edi
0x8CBC4C: inc     dword ptr [esi+4]
0x8CBC4F: pop     esi
0x8CBC50: pop     edi
0x8CBC51: retn
