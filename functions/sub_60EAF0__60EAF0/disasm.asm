0x60EAF0: push    esi
0x60EAF1: mov     esi, ecx
0x60EAF3: mov     eax, [esi]
0x60EAF5: mov     edx, [eax+334h]
0x60EAFB: push    1
0x60EAFD: call    edx
0x60EAFF: test    al, al
0x60EB01: jnz     loc_60EC5A
0x60EB07: mov     eax, [esi]
0x60EB09: mov     edx, [eax+198h]
0x60EB0F: push    0
0x60EB11: mov     ecx, esi
0x60EB13: call    edx
0x60EB15: test    al, al
0x60EB17: jnz     loc_60EC5A
0x60EB1D: mov     ecx, esi
0x60EB1F: call    sub_5E6BA0
0x60EB24: test    al, al
0x60EB26: jnz     loc_60EC5A
0x60EB2C: push    0
0x60EB2E: mov     ecx, esi
0x60EB30: call    sub_5E6CD0
0x60EB35: test    al, al
0x60EB37: jnz     loc_60EC5A
0x60EB3D: mov     eax, [esi]
0x60EB3F: mov     edx, [eax+354h]
0x60EB45: mov     ecx, esi
0x60EB47: call    edx
0x60EB49: test    al, al
0x60EB4B: jnz     loc_60EC5A
0x60EB51: push    edi; int
0x60EB52: mov     edi, [esp+8+a2]
0x60EB56: test    edi, edi
0x60EB58: jz      short loc_60EB64
0x60EB5A: cmp     dword ptr [edi+54h], 1
0x60EB5E: jge     loc_60EC59
0x60EB64: mov     eax, [esi]
0x60EB66: mov     edx, [eax+18Ch]
0x60EB6C: mov     ecx, esi
0x60EB6E: call    edx
0x60EB70: test    eax, eax
0x60EB72: jz      short loc_60EB9A
0x60EB74: mov     eax, [esi]
0x60EB76: mov     edx, [eax+18Ch]
0x60EB7C: mov     ecx, esi
0x60EB7E: call    edx
0x60EB80: cmp     eax, 4
0x60EB83: jz      short loc_60EB9A
0x60EB85: mov     eax, [esi]
0x60EB87: mov     edx, [eax+18Ch]
0x60EB8D: mov     ecx, esi
0x60EB8F: call    edx
0x60EB91: cmp     eax, 9
0x60EB94: jnz     loc_60EC59
0x60EB9A: mov     ecx, [esi+58h]
0x60EB9D: mov     eax, [ecx]
0x60EB9F: mov     edx, [eax+178h]
0x60EBA5: push    0
0x60EBA7: call    edx
0x60EBA9: mov     ecx, [esi+58h]
0x60EBAC: mov     eax, [ecx]
0x60EBAE: mov     edx, [eax+49Ch]
0x60EBB4: call    edx
0x60EBB6: mov     ecx, esi
0x60EBB8: call    sub_5E0380
0x60EBBD: test    eax, eax
0x60EBBF: jz      short loc_60EBDA
0x60EBC1: mov     ecx, esi
0x60EBC3: call    sub_5E0380
0x60EBC8: mov     ecx, eax
0x60EBCA: call    sub_567770
0x60EBCF: test    al, al
0x60EBD1: jz      short loc_60EBDA
0x60EBD3: mov     ecx, esi; int
0x60EBD5: call    sub_5EAE70
0x60EBDA: mov     ecx, [esi+58h]
0x60EBDD: mov     eax, [ecx]
0x60EBDF: mov     edx, [eax+20h]
0x60EBE2: call    edx
0x60EBE4: mov     eax, [esi+58h]
0x60EBE7: cmp     dword ptr [eax+8], 0
0x60EBEB: jz      short loc_60EC32
0x60EBED: mov     ecx, eax
0x60EBEF: mov     edx, [ecx]
0x60EBF1: mov     eax, [edx+390h]
0x60EBF7: push    ebx
0x60EBF8: push    ebp
0x60EBF9: mov     edi, ecx
0x60EBFB: mov     ebx, ecx
0x60EBFD: mov     ebp, ecx
0x60EBFF: call    eax
0x60EC01: mov     edx, [edi]
0x60EC03: mov     ecx, edi
0x60EC05: push    eax
0x60EC06: mov     eax, [edx+0C0h]
0x60EC0C: call    eax
0x60EC0E: mov     edx, [ebx]
0x60EC10: mov     ecx, ebx
0x60EC12: push    eax
0x60EC13: mov     eax, [edx+0CCh]
0x60EC19: call    eax
0x60EC1B: mov     ecx, [ebp+4]
0x60EC1E: mov     edx, [ebp+8]
0x60EC21: push    eax
0x60EC22: push    ecx
0x60EC23: push    edx
0x60EC24: lea     ecx, [esi+44h]
0x60EC27: call    sub_4268B0
0x60EC2C: mov     edi, [esp+10h+a2]
0x60EC30: pop     ebp
0x60EC31: pop     ebx
0x60EC32: push    0; a4
0x60EC34: push    0; a3
0x60EC36: push    edi; a2
0x60EC37: mov     ecx, esi; this
0x60EC39: call    Actor_AddPackage?
0x60EC3E: add     dword ptr [edi+54h], 1
0x60EC42: mov     ecx, [esi+58h]
0x60EC45: mov     eax, [ecx]
0x60EC47: pop     edi
0x60EC48: pop     esi
0x60EC49: mov     [esp+a2], 0
0x60EC51: mov     edx, [eax+17Ch]
0x60EC57: jmp     edx
0x60EC59: pop     edi
0x60EC5A: pop     esi
0x60EC5B: retn    4
