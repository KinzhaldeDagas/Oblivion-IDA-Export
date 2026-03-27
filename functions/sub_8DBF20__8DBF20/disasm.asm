0x8DBF20: push    esi
0x8DBF21: push    edi
0x8DBF22: mov     edi, [esp+8+arg_0]
0x8DBF26: mov     esi, [edi+0B0h]
0x8DBF2C: dec     esi
0x8DBF2D: js      short loc_8DBF46
0x8DBF2F: nop
0x8DBF30: mov     eax, [edi+0ACh]
0x8DBF36: mov     ecx, [eax+esi*4]
0x8DBF39: test    ecx, ecx
0x8DBF3B: jz      short loc_8DBF43
0x8DBF3D: mov     edx, [ecx]
0x8DBF3F: push    edi
0x8DBF40: call    dword ptr [edx+0Ch]
0x8DBF43: dec     esi
0x8DBF44: jns     short loc_8DBF30
0x8DBF46: pop     edi
0x8DBF47: pop     esi
0x8DBF48: retn
