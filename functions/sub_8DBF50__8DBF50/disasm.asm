0x8DBF50: push    esi
0x8DBF51: push    edi
0x8DBF52: mov     edi, [esp+8+arg_0]
0x8DBF56: mov     esi, [edi+0B0h]
0x8DBF5C: dec     esi
0x8DBF5D: js      short loc_8DBF76
0x8DBF5F: nop
0x8DBF60: mov     eax, [edi+0ACh]
0x8DBF66: mov     ecx, [eax+esi*4]
0x8DBF69: test    ecx, ecx
0x8DBF6B: jz      short loc_8DBF73
0x8DBF6D: mov     edx, [ecx]
0x8DBF6F: push    edi
0x8DBF70: call    dword ptr [edx+10h]
0x8DBF73: dec     esi
0x8DBF74: jns     short loc_8DBF60
0x8DBF76: pop     edi
0x8DBF77: pop     esi
0x8DBF78: retn
