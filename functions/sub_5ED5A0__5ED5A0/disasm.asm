0x5ED5A0: sub     esp, 8
0x5ED5A3: push    esi
0x5ED5A4: mov     esi, ecx
0x5ED5A6: mov     ecx, [esp+0Ch+arg_0]
0x5ED5AA: test    ecx, ecx
0x5ED5AC: jz      loc_5ED71A
0x5ED5B2: mov     eax, [ecx+8]
0x5ED5B5: test    eax, eax
0x5ED5B7: jz      loc_5ED71A
0x5ED5BD: cmp     byte ptr [eax+4], 21h ; '!'
0x5ED5C1: jnz     loc_5ED71A
0x5ED5C7: add     eax, 60h ; '`'
0x5ED5CA: push    edi
0x5ED5CB: jz      short loc_5ED5D2
0x5ED5CD: mov     edi, [eax+4]
0x5ED5D0: jmp     short loc_5ED5D4
0x5ED5D2: xor     edi, edi
0x5ED5D4: test    edi, edi
0x5ED5D6: jz      loc_5ED719
0x5ED5DC: call    sub_4849C0
0x5ED5E1: fstp    [esp+10h+arg_0]
0x5ED5E5: mov     eax, [edi+24h]
0x5ED5E8: fld     [esp+10h+arg_0]
0x5ED5EC: mov     edx, [eax]
0x5ED5EE: fstp    [esp+10h+var_8]
0x5ED5F2: lea     ecx, [edi+24h]
0x5ED5F5: push    esi
0x5ED5F6: call    edx
0x5ED5F8: fcomp   [esp+10h+var_8]
0x5ED5FC: fnstsw  ax
0x5ED5FE: test    ah, 41h
0x5ED601: jp      loc_5ED719
0x5ED607: cmp     esi, ds:0B333C4h
0x5ED60D: jz      short loc_5ED64F
0x5ED60F: mov     eax, [esi]
0x5ED611: mov     edx, [eax+334h]
0x5ED617: push    1
0x5ED619: mov     ecx, esi
0x5ED61B: call    edx
0x5ED61D: test    al, al
0x5ED61F: jz      short loc_5ED64F
0x5ED621: mov     eax, [esi]
0x5ED623: mov     edx, [eax+330h]
0x5ED629: mov     ecx, esi
0x5ED62B: call    edx
0x5ED62D: test    eax, eax
0x5ED62F: jz      short loc_5ED641
0x5ED631: mov     ecx, eax
0x5ED633: call    sub_6135F0
0x5ED638: test    eax, eax
0x5ED63A: jz      short loc_5ED641
0x5ED63C: add     eax, 68h ; 'h'
0x5ED63F: jmp     short loc_5ED643
0x5ED641: xor     eax, eax
0x5ED643: mov     edx, [esi+5Ch]
0x5ED646: lea     ecx, [esi+5Ch]
0x5ED649: push    eax
0x5ED64A: mov     eax, [edx+3Ch]
0x5ED64D: call    eax
0x5ED64F: mov     edx, [esi+5Ch]
0x5ED652: mov     eax, [edx+34h]
0x5ED655: lea     ecx, [esi+5Ch]
0x5ED658: add     edi, 18h
0x5ED65B: push    edi
0x5ED65C: call    eax
0x5ED65E: mov     ecx, [esi+58h]
0x5ED661: test    ecx, ecx
0x5ED663: jz      short loc_5ED671
0x5ED665: mov     edx, [ecx]
0x5ED667: mov     eax, [edx+2BCh]
0x5ED66D: push    1
0x5ED66F: call    eax
0x5ED671: push    0
0x5ED673: mov     ecx, edi
0x5ED675: call    MagicItem_GetFXEffect
0x5ED67A: mov     edi, eax
0x5ED67C: test    edi, edi
0x5ED67E: jz      loc_5ED719
0x5ED684: cmp     dword ptr [edi+80h], 0
0x5ED68B: jz      loc_5ED719
0x5ED691: mov     edx, [esi]
0x5ED693: mov     eax, [edx+330h]
0x5ED699: mov     ecx, esi
0x5ED69B: call    eax
0x5ED69D: test    eax, eax
0x5ED69F: jz      short loc_5ED6C8
0x5ED6A1: mov     ecx, [edi+80h]
0x5ED6A7: mov     eax, [ecx+0Ch]
0x5ED6AA: mov     edx, [esi]
0x5ED6AC: push    0
0x5ED6AE: push    eax
0x5ED6AF: mov     eax, [edx+330h]
0x5ED6B5: mov     ecx, esi
0x5ED6B7: call    eax
0x5ED6B9: mov     ecx, eax
0x5ED6BB: call    sub_619FA0
0x5ED6C0: pop     edi
0x5ED6C1: pop     esi
0x5ED6C2: add     esp, 8
0x5ED6C5: retn    4
0x5ED6C8: mov     ecx, ds:0B333C4h
0x5ED6CE: cmp     esi, ecx
0x5ED6D0: jnz     short loc_5ED6E9
0x5ED6D2: mov     edx, [edi+80h]
0x5ED6D8: mov     eax, [edx+0Ch]
0x5ED6DB: pop     edi
0x5ED6DC: pop     esi
0x5ED6DD: add     esp, 8
0x5ED6E0: mov     [esp+arg_0], eax
0x5ED6E4: jmp     sub_663520
0x5ED6E9: mov     ecx, [edi+80h]
0x5ED6EF: mov     eax, [ecx+0Ch]
0x5ED6F2: push    1; a5
0x5ED6F4: push    102h; a4
0x5ED6F9: push    0; a3
0x5ED6FB: push    eax; a2
0x5ED6FC: mov     ecx, esi; this
0x5ED6FE: call    sub_65AC50
0x5ED703: mov     esi, eax
0x5ED705: test    esi, esi
0x5ED707: jz      short loc_5ED719
0x5ED709: mov     ecx, esi; this
0x5ED70B: call    sub_6B73E0
0x5ED710: push    esi
0x5ED711: call    FormHeapFree
0x5ED716: add     esp, 4
0x5ED719: pop     edi
0x5ED71A: pop     esi
0x5ED71B: add     esp, 8
0x5ED71E: retn    4
