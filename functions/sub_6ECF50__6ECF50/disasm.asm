0x6ECF50: push    esi
0x6ECF51: mov     esi, [esp+4+arg_0]
0x6ECF55: push    edi
0x6ECF56: push    esi
0x6ECF57: mov     edi, ecx
0x6ECF59: call    sub_6CE3A0
0x6ECF5E: test    al, al
0x6ECF60: jnz     short loc_6ECF69
0x6ECF62: pop     edi
0x6ECF63: xor     al, al
0x6ECF65: pop     esi
0x6ECF66: retn    4
0x6ECF69: mov     ecx, [edi+44h]
0x6ECF6C: test    ecx, ecx
0x6ECF6E: jz      short loc_6ECF7A
0x6ECF70: cmp     dword ptr [esi+44h], 0
0x6ECF74: jz      short loc_6ECF62
0x6ECF76: test    ecx, ecx
0x6ECF78: jnz     short loc_6ECF84
0x6ECF7A: cmp     dword ptr [esi+44h], 0
0x6ECF7E: jnz     short loc_6ECF62
0x6ECF80: test    ecx, ecx
0x6ECF82: jz      short loc_6ECF97
0x6ECF84: mov     eax, [esi+44h]
0x6ECF87: test    eax, eax
0x6ECF89: jz      short loc_6ECF97
0x6ECF8B: mov     edx, [ecx]
0x6ECF8D: push    eax
0x6ECF8E: mov     eax, [edx+2Ch]
0x6ECF91: call    eax
0x6ECF93: test    al, al
0x6ECF95: jz      short loc_6ECF62
0x6ECF97: mov     eax, [edi+40h]
0x6ECF9A: test    eax, eax
0x6ECF9C: jz      short loc_6ECFA8
0x6ECF9E: cmp     dword ptr [esi+40h], 0
0x6ECFA2: jz      short loc_6ECF62
0x6ECFA4: test    eax, eax
0x6ECFA6: jnz     short loc_6ECFB2
0x6ECFA8: cmp     dword ptr [esi+40h], 0
0x6ECFAC: jnz     short loc_6ECF62
0x6ECFAE: test    eax, eax
0x6ECFB0: jz      short loc_6ECFED
0x6ECFB2: mov     ecx, [esi+40h]
0x6ECFB5: test    ecx, ecx
0x6ECFB7: jz      short loc_6ECFED
0x6ECFB9: lea     esp, [esp+0]
0x6ECFC0: mov     dl, [eax]
0x6ECFC2: cmp     dl, [ecx]
0x6ECFC4: jnz     short loc_6ECFE0
0x6ECFC6: test    dl, dl
0x6ECFC8: jz      short loc_6ECFDC
0x6ECFCA: mov     dl, [eax+1]
0x6ECFCD: cmp     dl, [ecx+1]
0x6ECFD0: jnz     short loc_6ECFE0
0x6ECFD2: add     eax, 2
0x6ECFD5: add     ecx, 2
0x6ECFD8: test    dl, dl
0x6ECFDA: jnz     short loc_6ECFC0
0x6ECFDC: xor     eax, eax
0x6ECFDE: jmp     short loc_6ECFE5
0x6ECFE0: sbb     eax, eax
0x6ECFE2: sbb     eax, 0FFFFFFFFh
0x6ECFE5: test    eax, eax
0x6ECFE7: jnz     loc_6ECF62
0x6ECFED: pop     edi
0x6ECFEE: mov     al, 1
0x6ECFF0: pop     esi
0x6ECFF1: retn    4
