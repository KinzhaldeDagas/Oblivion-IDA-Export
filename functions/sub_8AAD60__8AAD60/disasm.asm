0x8AAD60: sub     esp, 8
0x8AAD63: push    esi
0x8AAD64: mov     esi, ecx
0x8AAD66: mov     eax, [esi+30h]
0x8AAD69: test    eax, eax
0x8AAD6B: jz      loc_8AAE44
0x8AAD71: mov     cl, [esi+8]
0x8AAD74: shr     cl, 3
0x8AAD77: test    cl, 1
0x8AAD7A: jz      loc_8AAE44
0x8AAD80: cmp     dword ptr [esi+50h], 0
0x8AAD84: jz      loc_8AAE44
0x8AAD8A: push    edi
0x8AAD8B: push    eax
0x8AAD8C: call    sub_497420
0x8AAD91: fld     [esp+14h+arg_0]
0x8AAD95: mov     edi, eax
0x8AAD97: add     esp, 4
0x8AAD9A: test    edi, edi
0x8AAD9C: jz      loc_8AAE40
0x8AADA2: mov     edx, [esi]
0x8AADA4: mov     eax, [edx+64h]
0x8AADA7: push    ecx
0x8AADA8: mov     ecx, esi
0x8AADAA: fstp    [esp+14h+var_14]
0x8AADAD: call    eax
0x8AADAF: fstp    [esp+10h+arg_0]
0x8AADB3: fld     [esp+10h+arg_0]
0x8AADB7: lea     ecx, [esp+10h+var_4]
0x8AADBB: push    ecx; int
0x8AADBC: lea     edx, [esp+14h+var_8]
0x8AADC0: push    edx; int
0x8AADC1: push    ecx
0x8AADC2: mov     ecx, esi
0x8AADC4: fstp    [esp+1Ch+var_1C]; float
0x8AADC7: call    sub_8AA990
0x8AADCC: test    al, al
0x8AADCE: jz      short loc_8AADF6
0x8AADD0: fldz
0x8AADD2: fcomp   dword ptr [esi+58h]
0x8AADD5: fnstsw  ax
0x8AADD7: test    ah, 41h
0x8AADDA: jnz     short loc_8AADE8
0x8AADDC: fld     dword ptr [edi+14h]
0x8AADDF: fstp    dword ptr [esi+58h]
0x8AADE2: fld     dword ptr [edi+18h]
0x8AADE5: fstp    dword ptr [esi+5Ch]
0x8AADE8: fld     [esp+10h+var_8]
0x8AADEC: fstp    dword ptr [edi+14h]
0x8AADEF: fld     [esp+10h+var_4]
0x8AADF3: fstp    dword ptr [edi+18h]
0x8AADF6: fld     [esp+10h+arg_0]
0x8AADFA: fld     dword ptr [esi+18h]
0x8AADFD: fucompp
0x8AADFF: fnstsw  ax
0x8AAE01: test    ah, 44h
0x8AAE04: jp      short loc_8AAE43
0x8AAE06: movzx   eax, word ptr [esi+8]
0x8AAE0A: mov     cl, al
0x8AAE0C: and     cl, 6
0x8AAE0F: cmp     cl, 4
0x8AAE12: jnz     short loc_8AAE43
0x8AAE14: shr     al, 6
0x8AAE17: test    al, 1
0x8AAE19: jz      short loc_8AAE22
0x8AAE1B: mov     ecx, esi
0x8AAE1D: call    sub_8AA7F0
0x8AAE22: mov     ecx, esi
0x8AAE24: call    sub_8AA3E0
0x8AAE29: push    edi
0x8AAE2A: mov     ecx, esi
0x8AAE2C: call    sub_8AA420
0x8AAE31: mov     edx, [esi]
0x8AAE33: mov     eax, [edx+50h]
0x8AAE36: call    eax
0x8AAE38: pop     edi
0x8AAE39: pop     esi
0x8AAE3A: add     esp, 8
0x8AAE3D: retn    4
0x8AAE40: fstp    dword ptr [esi+20h]
0x8AAE43: pop     edi
0x8AAE44: pop     esi
0x8AAE45: add     esp, 8
0x8AAE48: retn    4
