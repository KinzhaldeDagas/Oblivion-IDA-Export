0x78FD30: push    ecx
0x78FD31: push    ebx
0x78FD32: push    esi
0x78FD33: mov     esi, ds:0B429B8h
0x78FD39: mov     eax, [esi+14h]
0x78FD3C: test    eax, eax
0x78FD3E: mov     bl, 1
0x78FD40: jz      loc_78FE9A
0x78FD46: mov     ecx, [esi+18h]
0x78FD49: sub     ecx, eax
0x78FD4B: mov     eax, 30C30C31h
0x78FD50: imul    ecx
0x78FD52: sar     edx, 4
0x78FD55: mov     eax, edx
0x78FD57: shr     eax, 1Fh
0x78FD5A: add     eax, edx
0x78FD5C: jz      loc_78FE9A
0x78FD62: mov     eax, [esi+14h]
0x78FD65: test    eax, eax
0x78FD67: push    ebp
0x78FD68: lea     ebp, [esi+14h]
0x78FD6B: push    edi
0x78FD6C: mov     edi, [esp+14h+arg_4]
0x78FD70: jz      short loc_78FD8C
0x78FD72: mov     ecx, [esi+18h]
0x78FD75: sub     ecx, eax
0x78FD77: mov     eax, 30C30C31h
0x78FD7C: imul    ecx
0x78FD7E: sar     edx, 4
0x78FD81: mov     eax, edx
0x78FD83: shr     eax, 1Fh
0x78FD86: add     eax, edx
0x78FD88: cmp     edi, eax
0x78FD8A: jb      short loc_78FD97
0x78FD8C: call    __invalid_parameter_noinfo
0x78FD91: mov     esi, ds:0B429B8h
0x78FD97: imul    edi, 54h ; 'T'
0x78FD9A: add     edi, [ebp+0]
0x78FD9D: fld     dword ptr [edi+48h]
0x78FDA0: fld     dword ptr [edi+4Ch]
0x78FDA3: fcompp
0x78FDA5: fnstsw  ax
0x78FDA7: test    ah, 5
0x78FDAA: jp      short loc_78FDB1
0x78FDAC: fld     dword ptr [edi+48h]
0x78FDAF: jmp     short loc_78FDB4
0x78FDB1: fld     dword ptr [edi+4Ch]
0x78FDB4: fstp    [esp+14h+arg_4]
0x78FDB8: xor     edi, edi
0x78FDBA: fld     dword ptr [esi+20h]
0x78FDBD: mov     esi, [esp+14h+arg_8]
0x78FDC1: fmul    [esp+14h+arg_4]
0x78FDC5: mov     ecx, esi
0x78FDC7: fstp    [esp+14h+arg_4]
0x78FDCB: call    sub_78FA80
0x78FDD0: test    eax, eax
0x78FDD2: jbe     loc_78FEA4
0x78FDD8: mov     ebp, [esp+14h+arg_0]
0x78FDDC: lea     esp, [esp+0]
0x78FDE0: test    bl, bl
0x78FDE2: fld     [esp+14h+arg_4]
0x78FDE6: jz      loc_78FEA2
0x78FDEC: mov     ecx, [esi+4]
0x78FDEF: test    ecx, ecx
0x78FDF1: jz      short loc_78FDFF
0x78FDF3: mov     eax, [esi+8]
0x78FDF6: sub     eax, ecx
0x78FDF8: sar     eax, 2
0x78FDFB: cmp     edi, eax
0x78FDFD: jb      short loc_78FE0A
0x78FDFF: fstp    st
0x78FE01: call    __invalid_parameter_noinfo
0x78FE06: fld     [esp+14h+arg_4]
0x78FE0A: mov     ecx, [esi+4]
0x78FE0D: fld     dword ptr [ebp+0]
0x78FE10: mov     ecx, [ecx+edi*4]
0x78FE13: fld     dword ptr [ecx+4]
0x78FE16: add     ecx, 4
0x78FE19: fadd    st, st(2)
0x78FE1B: fcompp
0x78FE1D: fnstsw  ax
0x78FE1F: test    ah, 41h
0x78FE22: jnz     short loc_78FE7C
0x78FE24: fld     dword ptr [ebp+0]
0x78FE27: fld     dword ptr [ecx]
0x78FE29: fsub    st, st(2)
0x78FE2B: fcompp
0x78FE2D: fnstsw  ax
0x78FE2F: test    ah, 5
0x78FE32: jp      short loc_78FE7C
0x78FE34: fld     dword ptr [ebp+4]
0x78FE37: fld     dword ptr [ecx+4]
0x78FE3A: fadd    st, st(2)
0x78FE3C: fcompp
0x78FE3E: fnstsw  ax
0x78FE40: test    ah, 41h
0x78FE43: jnz     short loc_78FE7C
0x78FE45: fld     dword ptr [ebp+4]
0x78FE48: fld     dword ptr [ecx+4]
0x78FE4B: fsub    st, st(2)
0x78FE4D: fcompp
0x78FE4F: fnstsw  ax
0x78FE51: test    ah, 5
0x78FE54: jp      short loc_78FE7C
0x78FE56: fld     dword ptr [ebp+8]
0x78FE59: fld     dword ptr [ecx+8]
0x78FE5C: fadd    st, st(2)
0x78FE5E: fcompp
0x78FE60: fnstsw  ax
0x78FE62: test    ah, 41h
0x78FE65: jnz     short loc_78FE7C
0x78FE67: fld     dword ptr [ebp+8]
0x78FE6A: fld     dword ptr [ecx+8]
0x78FE6D: fsubrp  st(2), st
0x78FE6F: fcompp
0x78FE71: fnstsw  ax
0x78FE73: test    ah, 41h
0x78FE76: jnz     short loc_78FE7E
0x78FE78: xor     bl, bl
0x78FE7A: jmp     short loc_78FE7E
0x78FE7C: fstp    st
0x78FE7E: mov     ecx, esi
0x78FE80: add     edi, 1
0x78FE83: call    sub_78FA80
0x78FE88: cmp     edi, eax
0x78FE8A: jb      loc_78FDE0
0x78FE90: pop     edi
0x78FE91: pop     ebp
0x78FE92: pop     esi
0x78FE93: mov     al, bl
0x78FE95: pop     ebx
0x78FE96: pop     ecx
0x78FE97: retn    0Ch
0x78FE9A: pop     esi
0x78FE9B: xor     al, al
0x78FE9D: pop     ebx
0x78FE9E: pop     ecx
0x78FE9F: retn    0Ch
0x78FEA2: fstp    st
0x78FEA4: pop     edi
0x78FEA5: pop     ebp
0x78FEA6: pop     esi
0x78FEA7: mov     al, bl
0x78FEA9: pop     ebx
0x78FEAA: pop     ecx
0x78FEAB: retn    0Ch
