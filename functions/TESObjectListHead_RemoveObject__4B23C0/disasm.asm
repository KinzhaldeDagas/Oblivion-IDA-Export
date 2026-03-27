0x4B23C0: mov     edx, [ecx+4]
0x4B23C3: mov     eax, [esp+arg_0]
0x4B23C7: cmp     eax, edx
0x4B23C9: jnz     short loc_4B23D1
0x4B23CB: mov     edx, [edx+20h]
0x4B23CE: mov     [ecx+4], edx
0x4B23D1: mov     edx, [ecx+8]
0x4B23D4: cmp     eax, edx
0x4B23D6: jnz     short loc_4B23DE
0x4B23D8: mov     edx, [edx+1Ch]
0x4B23DB: mov     [ecx+8], edx
0x4B23DE: mov     edx, [eax+1Ch]
0x4B23E1: test    edx, edx
0x4B23E3: push    edi
0x4B23E4: jz      short loc_4B23EC
0x4B23E6: mov     edi, [eax+20h]
0x4B23E9: mov     [edx+20h], edi
0x4B23EC: mov     edx, [eax+20h]
0x4B23EF: test    edx, edx
0x4B23F1: jz      short loc_4B23F9
0x4B23F3: mov     edi, [eax+1Ch]
0x4B23F6: mov     [edx+1Ch], edi
0x4B23F9: mov     dword ptr [eax+18h], 0
0x4B2400: add     dword ptr [ecx], 0FFFFFFFFh
0x4B2403: pop     edi
0x4B2404: retn    4
