0x4CAD00: sub     esp, 0Ch
0x4CAD03: push    ebx
0x4CAD04: push    ebp
0x4CAD05: push    esi
0x4CAD06: push    edi
0x4CAD07: mov     edi, ecx
0x4CAD09: push    edi; a2
0x4CAD0A: mov     ecx, offset stru_B35C80; this
0x4CAD0F: call    sub_496EA0
0x4CAD14: test    byte ptr ds:0B35E10h, 1
0x4CAD1B: jnz     short loc_4CAD46
0x4CAD1D: mov     eax, ds:0B3F9A8h
0x4CAD22: mov     ecx, ds:0B3F9ACh
0x4CAD28: mov     edx, ds:0B3F9B0h
0x4CAD2E: or      dword ptr ds:0B35E10h, 1
0x4CAD35: mov     ds:0B35E04h, eax
0x4CAD3A: mov     ds:0B35E08h, ecx
0x4CAD40: mov     ds:0B35E0Ch, edx
0x4CAD46: lea     ebx, [edi+28h]
0x4CAD49: mov     ecx, ebx
0x4CAD4B: call    sub_41F9C0
0x4CAD50: mov     esi, eax
0x4CAD52: test    esi, esi
0x4CAD54: jnz     short loc_4CAD81
0x4CAD56: test    byte ptr [edi+24h], 1
0x4CAD5A: jnz     short loc_4CAD81
0x4CAD5C: mov     ecx, ebx
0x4CAD5E: call    sub_41F9B0
0x4CAD63: mov     ecx, eax
0x4CAD65: test    ecx, ecx
0x4CAD67: mov     [esp+1Ch+var_4], ecx
0x4CAD6B: jnz     short loc_4CAD98
0x4CAD6D: test    byte ptr [edi+24h], 1
0x4CAD71: jnz     short loc_4CAD81
0x4CAD73: mov     ecx, [edi+50h]
0x4CAD76: test    ecx, ecx
0x4CAD78: jz      short loc_4CAD81
0x4CAD7A: call    sub_4EF0F0
0x4CAD7F: mov     esi, eax
0x4CAD81: push    edi; a2
0x4CAD82: mov     ecx, offset stru_B35C80; this
0x4CAD87: call    sub_496F50
0x4CAD8C: mov     eax, esi
0x4CAD8E: pop     edi
0x4CAD8F: pop     esi
0x4CAD90: pop     ebp
0x4CAD91: pop     ebx
0x4CAD92: add     esp, 0Ch
0x4CAD95: retn    4
0x4CAD98: mov     esi, [esp+1Ch+arg_0]
0x4CAD9C: test    esi, esi
0x4CAD9E: jz      loc_4CAEF1
0x4CADA4: mov     bl, [edi+24h]
0x4CADA7: and     bl, 1
0x4CADAA: jnz     short loc_4CADB7
0x4CADAC: mov     eax, [edi+3Ch]
0x4CADAF: test    eax, eax
0x4CADB1: jz      short loc_4CADB7
0x4CADB3: mov     eax, [eax]
0x4CADB5: jmp     short loc_4CADB9
0x4CADB7: xor     eax, eax
0x4CADB9: shl     eax, 0Ch
0x4CADBC: mov     [esp+1Ch+arg_0], eax
0x4CADC0: add     eax, 1000h
0x4CADC5: test    bl, bl
0x4CADC7: mov     [esp+1Ch+var_C], eax
0x4CADCB: jnz     short loc_4CADD9
0x4CADCD: mov     eax, [edi+3Ch]
0x4CADD0: test    eax, eax
0x4CADD2: jz      short loc_4CADD9
0x4CADD4: mov     eax, [eax+4]
0x4CADD7: jmp     short loc_4CADDB
0x4CADD9: xor     eax, eax
0x4CADDB: fld     dword ptr [esi]
0x4CADDD: shl     eax, 0Ch
0x4CADE0: fild    [esp+1Ch+arg_0]
0x4CADE4: mov     edx, eax
0x4CADE6: mov     [esp+1Ch+var_8], edx
0x4CADEA: fcompp
0x4CADEC: fnstsw  ax
0x4CADEE: test    ah, 41h
0x4CADF1: jp      loc_4CAEF1
0x4CADF7: fld     dword ptr [esi]
0x4CADF9: fild    [esp+1Ch+var_C]
0x4CADFD: fcompp
0x4CADFF: fnstsw  ax
0x4CAE01: test    ah, 1
0x4CAE04: jnz     loc_4CAEF1
0x4CAE0A: fld     dword ptr [esi+4]
0x4CAE0D: fild    [esp+1Ch+var_8]
0x4CAE11: fcompp
0x4CAE13: fnstsw  ax
0x4CAE15: test    ah, 41h
0x4CAE18: jp      loc_4CAEF1
0x4CAE1E: fld     dword ptr [esi+4]
0x4CAE21: add     edx, 1000h
0x4CAE27: mov     [esp+1Ch+arg_0], edx
0x4CAE2B: fild    [esp+1Ch+arg_0]
0x4CAE2F: fcompp
0x4CAE31: fnstsw  ax
0x4CAE33: test    ah, 1
0x4CAE36: jnz     loc_4CAEF1
0x4CAE3C: push    offset qword_B35E04
0x4CAE41: mov     ecx, esi
0x4CAE43: call    sub_8AA350
0x4CAE48: test    al, al
0x4CAE4A: jz      short loc_4CAE6F
0x4CAE4C: cmp     dword ptr ds:0B09554h, 3
0x4CAE53: jz      short loc_4CAE6F
0x4CAE55: push    edi; a2
0x4CAE56: mov     ecx, offset stru_B35C80; this
0x4CAE5B: call    sub_496F50
0x4CAE60: mov     eax, ds:0B09554h
0x4CAE65: pop     edi
0x4CAE66: pop     esi
0x4CAE67: pop     ebp
0x4CAE68: pop     ebx
0x4CAE69: add     esp, 0Ch
0x4CAE6C: retn    4
0x4CAE6F: mov     eax, ds:0B33A98h
0x4CAE74: mov     ebp, [eax+0CD8h]
0x4CAE7A: xor     eax, eax
0x4CAE7C: test    bl, bl
0x4CAE7E: jnz     short loc_4CAE83
0x4CAE80: mov     eax, [edi+50h]
0x4CAE83: mov     ecx, [esi]
0x4CAE85: mov     edx, [esi+4]
0x4CAE88: mov     ebx, [ebp+0]
0x4CAE8B: push    eax; int
0x4CAE8C: sub     esp, 0Ch
0x4CAE8F: mov     eax, esp
0x4CAE91: mov     [eax], ecx
0x4CAE93: mov     ecx, [esi+8]
0x4CAE96: mov     [eax+4], edx
0x4CAE99: mov     [eax+8], ecx
0x4CAE9C: mov     ecx, [esp+2Ch+var_4]
0x4CAEA0: push    7; int
0x4CAEA2: call    sub_4A67B0
0x4CAEA7: mov     edx, [ebx+1Ch]
0x4CAEAA: push    eax
0x4CAEAB: mov     ecx, ebp
0x4CAEAD: call    edx
0x4CAEAF: xor     ebx, ebx
0x4CAEB1: cmp     eax, ebx
0x4CAEB3: jz      short loc_4CAEC8
0x4CAEB5: mov     edx, [eax]
0x4CAEB7: mov     ecx, eax
0x4CAEB9: mov     eax, [edx+24h]
0x4CAEBC: call    eax
0x4CAEBE: mov     ebp, eax
0x4CAEC0: mov     ds:0B09554h, ebp
0x4CAEC6: jmp     short loc_4CAED0
0x4CAEC8: xor     ebp, ebp
0x4CAECA: mov     ds:0B09554h, ebx
0x4CAED0: mov     ecx, [esi]
0x4CAED2: mov     ds:0B35E04h, ecx
0x4CAED8: mov     edx, [esi+4]
0x4CAEDB: mov     ds:0B35E08h, edx
0x4CAEE1: mov     eax, [esi+8]
0x4CAEE4: mov     ds:0B35E0Ch, eax
0x4CAEE9: mov     ds:0B35E00h, ebx
0x4CAEEF: jmp     short loc_4CAF50
0x4CAEF1: mov     eax, ds:0B35E00h
0x4CAEF6: test    eax, eax
0x4CAEF8: jz      short loc_4CAF06
0x4CAEFA: cmp     eax, edi
0x4CAEFC: jnz     short loc_4CAF06
0x4CAEFE: mov     ebp, ds:0B09554h
0x4CAF04: jmp     short loc_4CAF50
0x4CAF06: mov     edx, ds:0B33A98h
0x4CAF0C: mov     esi, [edx+0CD8h]
0x4CAF12: xor     eax, eax
0x4CAF14: test    byte ptr [edi+24h], 1
0x4CAF18: jnz     short loc_4CAF1D
0x4CAF1A: mov     eax, [edi+50h]
0x4CAF1D: mov     ebx, [esi]
0x4CAF1F: push    eax
0x4CAF20: push    0
0x4CAF22: push    7
0x4CAF24: call    sub_4A6460
0x4CAF29: push    eax
0x4CAF2A: mov     eax, [ebx+1Ch]
0x4CAF2D: mov     ecx, esi
0x4CAF2F: call    eax
0x4CAF31: test    eax, eax
0x4CAF33: jz      short loc_4CAF42
0x4CAF35: mov     edx, [eax]
0x4CAF37: mov     ecx, eax
0x4CAF39: mov     eax, [edx+24h]
0x4CAF3C: call    eax
0x4CAF3E: mov     ebp, eax
0x4CAF40: jmp     short loc_4CAF44
0x4CAF42: xor     ebp, ebp
0x4CAF44: mov     ds:0B09554h, ebp
0x4CAF4A: mov     ds:0B35E00h, edi
0x4CAF50: test    ebp, ebp
0x4CAF52: jnz     short loc_4CAF6E
0x4CAF54: test    byte ptr [edi+24h], 1
0x4CAF58: jnz     short loc_4CAF6E
0x4CAF5A: mov     ecx, [edi+50h]
0x4CAF5D: test    ecx, ecx
0x4CAF5F: jz      short loc_4CAF6E
0x4CAF61: call    sub_4EF0F0
0x4CAF66: mov     ebp, eax
0x4CAF68: mov     ds:0B09554h, ebp
0x4CAF6E: push    edi; a2
0x4CAF6F: mov     ecx, offset stru_B35C80; this
0x4CAF74: call    sub_496F50
0x4CAF79: pop     edi
0x4CAF7A: pop     esi
0x4CAF7B: mov     eax, ebp
0x4CAF7D: pop     ebp
0x4CAF7E: pop     ebx
0x4CAF7F: add     esp, 0Ch
0x4CAF82: retn    4
