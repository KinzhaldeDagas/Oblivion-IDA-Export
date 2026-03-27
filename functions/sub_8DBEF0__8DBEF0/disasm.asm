0x8DBEF0: push    esi
0x8DBEF1: push    edi
0x8DBEF2: mov     edi, [esp+8+arg_0]
0x8DBEF6: mov     esi, [edi+0B0h]
0x8DBEFC: dec     esi
0x8DBEFD: js      short loc_8DBF16
0x8DBEFF: nop
0x8DBF00: mov     eax, [edi+0ACh]
0x8DBF06: mov     ecx, [eax+esi*4]
0x8DBF09: test    ecx, ecx
0x8DBF0B: jz      short loc_8DBF13
0x8DBF0D: mov     edx, [ecx]
0x8DBF0F: push    edi
0x8DBF10: call    dword ptr [edx+4]
0x8DBF13: dec     esi
0x8DBF14: jns     short loc_8DBF00
0x8DBF16: pop     edi
0x8DBF17: pop     esi
0x8DBF18: retn
