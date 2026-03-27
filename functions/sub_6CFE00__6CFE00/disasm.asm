0x6CFE00: push    esi
0x6CFE01: push    edi
0x6CFE02: mov     edi, ecx
0x6CFE04: xor     esi, esi
0x6CFE06: cmp     [edi+44h], si
0x6CFE0A: jbe     short loc_6CFE44
0x6CFE0C: lea     esp, [esp+0]
0x6CFE10: mov     ecx, [edi+3Ch]
0x6CFE13: fld     [esp+8+arg_4]
0x6CFE17: movzx   eax, si
0x6CFE1A: lea     eax, [eax+eax*2]
0x6CFE1D: shl     eax, 4
0x6CFE20: mov     edx, [ecx+eax]
0x6CFE23: add     ecx, eax
0x6CFE25: mov     eax, [edx+84h]
0x6CFE2B: sub     esp, 8
0x6CFE2E: fstp    [esp+10h+var_C]
0x6CFE32: fld     [esp+10h+arg_0]
0x6CFE36: fstp    [esp+10h+var_10]
0x6CFE39: call    eax
0x6CFE3B: add     esi, 1
0x6CFE3E: cmp     si, [edi+44h]
0x6CFE42: jb      short loc_6CFE10
0x6CFE44: pop     edi
0x6CFE45: pop     esi
0x6CFE46: retn    8
