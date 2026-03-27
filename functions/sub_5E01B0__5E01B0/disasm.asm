0x5E01B0: push    ecx
0x5E01B1: push    ebx
0x5E01B2: push    esi
0x5E01B3: mov     esi, ecx
0x5E01B5: mov     eax, [esi]
0x5E01B7: mov     edx, [eax+284h]
0x5E01BD: push    5
0x5E01BF: mov     bl, 1
0x5E01C1: call    edx
0x5E01C3: push    eax
0x5E01C4: call    Actor_CalcMaxBreath
0x5E01C9: fstp    [esp+10h+var_4]
0x5E01CD: add     esp, 4
0x5E01D0: cmp     dword ptr [esi+58h], 0
0x5E01D4: jz      short loc_5E01F6
0x5E01D6: mov     ecx, [esi+58h]
0x5E01D9: mov     eax, [ecx]
0x5E01DB: mov     edx, [eax+1F4h]
0x5E01E1: call    edx
0x5E01E3: fld     [esp+0Ch+var_4]
0x5E01E7: fcompp
0x5E01E9: fnstsw  ax
0x5E01EB: test    ah, 41h
0x5E01EE: jnz     short loc_5E01F6
0x5E01F0: pop     esi
0x5E01F1: xor     al, al
0x5E01F3: pop     ebx
0x5E01F4: pop     ecx
0x5E01F5: retn
0x5E01F6: pop     esi
0x5E01F7: mov     al, bl
0x5E01F9: pop     ebx
0x5E01FA: pop     ecx
0x5E01FB: retn
