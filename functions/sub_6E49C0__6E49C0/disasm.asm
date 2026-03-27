0x6E49C0: push    esi
0x6E49C1: mov     esi, ecx
0x6E49C3: mov     ecx, [esp+4+arg_0]
0x6E49C7: movzx   eax, cx
0x6E49CA: sub     eax, 0
0x6E49CD: jz      short loc_6E4A05
0x6E49CF: sub     eax, 1
0x6E49D2: jz      short loc_6E49EF
0x6E49D4: sub     eax, 1
0x6E49D7: jnz     short loc_6E4A16
0x6E49D9: mov     eax, [esi]
0x6E49DB: mov     edx, [eax+9Ch]
0x6E49E1: push    ecx
0x6E49E2: mov     ecx, esi
0x6E49E4: call    edx
0x6E49E6: test    eax, eax
0x6E49E8: ja      short loc_6E4A16
0x6E49EA: fld     dword ptr [esi+38h]
0x6E49ED: jmp     short loc_6E4A1F
0x6E49EF: mov     eax, [esi]
0x6E49F1: mov     edx, [eax+9Ch]
0x6E49F7: push    ecx
0x6E49F8: mov     ecx, esi
0x6E49FA: call    edx
0x6E49FC: test    eax, eax
0x6E49FE: ja      short loc_6E4A16
0x6E4A00: fld     dword ptr [esi+2Ch]
0x6E4A03: jmp     short loc_6E4A1F
0x6E4A05: mov     eax, [esi]
0x6E4A07: mov     edx, [eax+9Ch]
0x6E4A0D: push    ecx
0x6E4A0E: mov     ecx, esi
0x6E4A10: call    edx
0x6E4A12: test    eax, eax
0x6E4A14: jbe     short loc_6E4A1C
0x6E4A16: xor     al, al
0x6E4A18: pop     esi
0x6E4A19: retn    4
0x6E4A1C: fld     dword ptr [esi+1Ch]
0x6E4A1F: fld     dword ptr ds:0A7DEB4h
0x6E4A25: fchs
0x6E4A27: fucompp
0x6E4A29: fnstsw  ax
0x6E4A2B: test    ah, 44h
0x6E4A2E: jnp     short loc_6E4A39
0x6E4A30: mov     eax, 1
0x6E4A35: pop     esi
0x6E4A36: retn    4
0x6E4A39: xor     eax, eax
0x6E4A3B: pop     esi
0x6E4A3C: retn    4
