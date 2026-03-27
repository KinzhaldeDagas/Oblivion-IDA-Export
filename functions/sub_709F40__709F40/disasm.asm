0x709F40: sub     esp, 8Ch
0x709F46: cmp     [esp+8Ch+arg_8], 0
0x709F4E: push    ebx
0x709F4F: push    ebp
0x709F50: push    esi
0x709F51: push    edi
0x709F52: mov     esi, ecx
0x709F54: jz      loc_70A07B
0x709F5A: mov     ebp, [esp+9Ch+arg_0]
0x709F61: lea     ebx, [esi+30h]
0x709F64: push    ebx
0x709F65: lea     eax, [esp+0A0h+var_24]
0x709F69: push    eax
0x709F6A: mov     ecx, ebp
0x709F6C: call    NiMAtrix33_Multiply
0x709F71: push    eax
0x709F72: lea     ecx, [esp+0A0h+var_48]
0x709F76: push    ecx
0x709F77: mov     ecx, ebx
0x709F79: call    sub_710490
0x709F7E: lea     edi, [esi+54h]
0x709F81: push    edi
0x709F82: lea     edx, [esp+0A0h+var_54]
0x709F86: push    edx
0x709F87: mov     ecx, ebp
0x709F89: call    sub_7101F0
0x709F8E: fld     dword ptr [eax]
0x709F90: mov     ecx, [esp+9Ch+arg_4]
0x709F97: fadd    dword ptr [ecx]
0x709F99: push    ebx
0x709F9A: fstp    [esp+0A0h+var_84]
0x709F9E: fld     dword ptr [eax+4]
0x709FA1: fadd    dword ptr [ecx+4]
0x709FA4: fstp    [esp+0A0h+var_80]
0x709FA8: fld     dword ptr [eax+8]
0x709FAB: lea     eax, [esp+0A0h+var_6C]
0x709FAF: fadd    dword ptr [ecx+8]
0x709FB2: push    eax
0x709FB3: lea     ecx, [esp+0A4h+var_60]
0x709FB7: push    ecx
0x709FB8: fstp    [esp+0A8h+var_7C]
0x709FBC: fld     [esp+0A8h+var_84]
0x709FC0: fsub    dword ptr [edi]
0x709FC2: fstp    [esp+0A8h+var_6C]
0x709FC6: fld     [esp+0A8h+var_80]
0x709FCA: fsub    dword ptr [edi+4]
0x709FCD: fstp    [esp+0A8h+var_68]
0x709FD1: fld     [esp+0A8h+var_7C]
0x709FD5: fsub    dword ptr [edi+8]
0x709FD8: fstp    [esp+0A8h+var_64]
0x709FDC: fld     dword ptr [esi+60h]
0x709FDF: fstp    [esp+0A8h+var_8C]
0x709FE3: call    sub_710250
0x709FE8: fld     [esp+0A8h+var_8C]
0x709FEC: xor     edi, edi
0x709FEE: fld1
0x709FF0: add     esp, 0Ch
0x709FF3: cmp     [esi+0B6h], di
0x709FFA: fdivrp  st(1), st
0x709FFC: fstp    [esp+9Ch+var_8C]
0x70A000: fld     dword ptr [eax+4]
0x70A003: fld     [esp+9Ch+var_8C]
0x70A007: fld     st
0x70A009: fmulp   st(2), st
0x70A00B: fxch    st(1)
0x70A00D: fstp    [esp+9Ch+var_8C]
0x70A011: fld     dword ptr [eax+8]
0x70A014: fmul    st, st(1)
0x70A016: fstp    [esp+9Ch+var_88]
0x70A01A: fmul    dword ptr [eax]
0x70A01C: fstp    [esp+9Ch+var_78]
0x70A020: fld     [esp+9Ch+var_8C]
0x70A024: fstp    [esp+9Ch+var_74]
0x70A028: fld     [esp+9Ch+var_88]
0x70A02C: fstp    [esp+9Ch+var_70]
0x70A030: jbe     loc_70A0BA
0x70A036: jmp     short loc_70A040
0x70A038: align 10h
0x70A040: mov     edx, [esi+0B0h]
0x70A046: mov     ecx, [edx+edi*4]
0x70A049: test    ecx, ecx
0x70A04B: jz      short loc_70A060
0x70A04D: mov     eax, [ecx]
0x70A04F: mov     eax, [eax+54h]
0x70A052: push    1
0x70A054: lea     edx, [esp+0A0h+var_78]
0x70A058: push    edx
0x70A059: lea     edx, [esp+0A4h+var_48]
0x70A05D: push    edx
0x70A05E: call    eax
0x70A060: movzx   ecx, word ptr [esi+0B6h]
0x70A067: add     edi, 1
0x70A06A: cmp     edi, ecx
0x70A06C: jb      short loc_70A040
0x70A06E: pop     edi
0x70A06F: pop     esi
0x70A070: pop     ebp
0x70A071: pop     ebx
0x70A072: add     esp, 8Ch
0x70A078: retn    0Ch
0x70A07B: xor     edi, edi
0x70A07D: cmp     [esi+0B6h], di
0x70A084: jbe     short loc_70A0BA
0x70A086: mov     ebx, [esp+9Ch+arg_4]
0x70A08D: mov     ebp, [esp+9Ch+arg_0]
0x70A094: mov     edx, [esi+0B0h]
0x70A09A: mov     ecx, [edx+edi*4]
0x70A09D: test    ecx, ecx
0x70A09F: jz      short loc_70A0AC
0x70A0A1: mov     eax, [ecx]
0x70A0A3: mov     edx, [eax+54h]
0x70A0A6: push    1
0x70A0A8: push    ebx
0x70A0A9: push    ebp
0x70A0AA: call    edx
0x70A0AC: movzx   eax, word ptr [esi+0B6h]
0x70A0B3: add     edi, 1
0x70A0B6: cmp     edi, eax
0x70A0B8: jb      short loc_70A094
0x70A0BA: pop     edi
0x70A0BB: pop     esi
0x70A0BC: pop     ebp
0x70A0BD: pop     ebx
0x70A0BE: add     esp, 8Ch
0x70A0C4: retn    0Ch
