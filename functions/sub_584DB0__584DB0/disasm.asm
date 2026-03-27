0x584DB0: mov     ecx, ds:0B1394Ch
0x584DB6: xor     eax, eax
0x584DB8: test    ecx, ecx
0x584DBA: jbe     short loc_584DCF
0x584DBC: mov     edx, ds:0B13950h
0x584DC2: cmp     dword ptr [edx+eax*4], 0
0x584DC6: jnz     short loc_584DED
0x584DC8: add     eax, 1
0x584DCB: cmp     eax, ecx
0x584DCD: jb      short loc_584DC2
0x584DCF: xor     eax, eax
0x584DD1: test    eax, eax
0x584DD3: push    esi
0x584DD4: push    edi
0x584DD5: mov     esi, eax
0x584DD7: jz      short loc_584E58
0x584DD9: lea     esp, [esp+0]
0x584DE0: mov     eax, [esi]
0x584DE2: test    eax, eax
0x584DE4: mov     edi, [esi+8]
0x584DE7: jz      short loc_584DF2
0x584DE9: mov     esi, eax
0x584DEB: jmp     short loc_584E30
0x584DED: mov     eax, [edx+eax*4]
0x584DF0: jmp     short loc_584DD1
0x584DF2: mov     eax, [esi+4]
0x584DF5: mov     edx, ds:0B13948h
0x584DFB: push    eax
0x584DFC: mov     eax, [edx+4]
0x584DFF: mov     ecx, offset off_B13948
0x584E04: call    eax
0x584E06: mov     ecx, ds:0B1394Ch
0x584E0C: add     eax, 1
0x584E0F: cmp     eax, ecx
0x584E11: jnb     short loc_584E2E
0x584E13: mov     edx, ds:0B13950h
0x584E19: lea     esp, [esp+0]
0x584E20: mov     esi, [edx+eax*4]
0x584E23: test    esi, esi
0x584E25: jnz     short loc_584E30
0x584E27: add     eax, 1
0x584E2A: cmp     eax, ecx
0x584E2C: jb      short loc_584E20
0x584E2E: xor     esi, esi
0x584E30: test    edi, edi
0x584E32: jz      short loc_584E54
0x584E34: mov     eax, [edi+4]
0x584E37: test    eax, eax
0x584E39: jz      short loc_584E44
0x584E3B: push    eax
0x584E3C: call    FormHeapFree
0x584E41: add     esp, 4
0x584E44: push    edi
0x584E45: mov     dword ptr [edi+4], 0
0x584E4C: call    FormHeapFree
0x584E51: add     esp, 4
0x584E54: test    esi, esi
0x584E56: jnz     short loc_584DE0
0x584E58: mov     ecx, offset off_B13948
0x584E5D: call    NiTMap_Clear
0x584E62: mov     ecx, ds:0B13960h
0x584E68: xor     eax, eax
0x584E6A: test    ecx, ecx
0x584E6C: jbe     short loc_584E81
0x584E6E: mov     edx, ds:0B13964h
0x584E74: cmp     dword ptr [edx+eax*4], 0
0x584E78: jnz     short loc_584E9D
0x584E7A: add     eax, 1
0x584E7D: cmp     eax, ecx
0x584E7F: jb      short loc_584E74
0x584E81: xor     eax, eax
0x584E83: test    eax, eax
0x584E85: mov     esi, eax
0x584E87: jz      short loc_584EF8
0x584E89: lea     esp, [esp+0]
0x584E90: mov     eax, [esi]
0x584E92: test    eax, eax
0x584E94: mov     edi, [esi+8]
0x584E97: jz      short loc_584EA2
0x584E99: mov     esi, eax
0x584E9B: jmp     short loc_584EE0
0x584E9D: mov     eax, [edx+eax*4]
0x584EA0: jmp     short loc_584E83
0x584EA2: mov     ecx, [esi+4]
0x584EA5: mov     edx, ds:0B1395Ch
0x584EAB: mov     eax, [edx+4]
0x584EAE: push    ecx
0x584EAF: mov     ecx, offset off_B1395C
0x584EB4: call    eax
0x584EB6: mov     ecx, ds:0B13960h
0x584EBC: add     eax, 1
0x584EBF: cmp     eax, ecx
0x584EC1: jnb     short loc_584EDE
0x584EC3: mov     edx, ds:0B13964h
0x584EC9: lea     esp, [esp+0]
0x584ED0: mov     esi, [edx+eax*4]
0x584ED3: test    esi, esi
0x584ED5: jnz     short loc_584EE0
0x584ED7: add     eax, 1
0x584EDA: cmp     eax, ecx
0x584EDC: jb      short loc_584ED0
0x584EDE: xor     esi, esi
0x584EE0: test    edi, edi
0x584EE2: jz      short loc_584EF4
0x584EE4: mov     ecx, edi
0x584EE6: call    sub_58CDB0
0x584EEB: push    edi
0x584EEC: call    FormHeapFree
0x584EF1: add     esp, 4
0x584EF4: test    esi, esi
0x584EF6: jnz     short loc_584E90
0x584EF8: pop     edi
0x584EF9: mov     ecx, offset off_B1395C
0x584EFE: pop     esi
0x584EFF: jmp     NiTMap_Clear
