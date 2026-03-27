0x72BED0: push    ebx
0x72BED1: mov     ebx, [esp+4+a2]
0x72BED5: push    edi
0x72BED6: push    ebx; a2
0x72BED7: mov     edi, ecx
0x72BED9: call    sub_700650
0x72BEDE: test    al, al
0x72BEE0: jnz     short loc_72BEE7
0x72BEE2: pop     edi
0x72BEE3: pop     ebx
0x72BEE4: retn    4
0x72BEE7: mov     ecx, [edi+8]
0x72BEEA: mov     eax, [ecx]
0x72BEEC: mov     edx, [eax+24h]
0x72BEEF: push    ebx
0x72BEF0: call    edx
0x72BEF2: mov     ecx, [edi+0Ch]
0x72BEF5: test    ecx, ecx
0x72BEF7: jz      short loc_72BF01
0x72BEF9: mov     eax, [ecx]
0x72BEFB: mov     edx, [eax+24h]
0x72BEFE: push    ebx
0x72BEFF: call    edx
0x72BF01: mov     ecx, [edi+10h]
0x72BF04: mov     eax, [ecx]
0x72BF06: mov     edx, [eax+24h]
0x72BF09: push    ebp
0x72BF0A: push    esi
0x72BF0B: push    ebx
0x72BF0C: call    edx
0x72BF0E: mov     eax, [edi+8]
0x72BF11: mov     ebp, [eax+40h]
0x72BF14: xor     esi, esi
0x72BF16: test    ebp, ebp
0x72BF18: jbe     short loc_72BF35
0x72BF1A: lea     ebx, [ebx+0]
0x72BF20: mov     ecx, [edi+14h]
0x72BF23: mov     ecx, [ecx+esi*4]
0x72BF26: mov     edx, [ecx]
0x72BF28: mov     eax, [edx+24h]
0x72BF2B: push    ebx
0x72BF2C: call    eax
0x72BF2E: add     esi, 1
0x72BF31: cmp     esi, ebp
0x72BF33: jb      short loc_72BF20
0x72BF35: pop     esi
0x72BF36: pop     ebp
0x72BF37: pop     edi
0x72BF38: mov     al, 1
0x72BF3A: pop     ebx
0x72BF3B: retn    4
