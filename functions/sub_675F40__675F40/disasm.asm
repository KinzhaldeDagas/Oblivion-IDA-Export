0x675F40: push    edi
0x675F41: add     ecx, 68h ; 'h'; this
0x675F44: call    sub_7616D0
0x675F49: mov     edi, eax
0x675F4B: test    edi, edi
0x675F4D: jz      short loc_675FB6
0x675F4F: push    esi
0x675F50: mov     ecx, [edi]
0x675F52: test    ecx, ecx
0x675F54: jz      short loc_675FB5
0x675F56: mov     eax, [ecx]
0x675F58: mov     edx, [eax+190h]
0x675F5E: call    edx
0x675F60: test    al, al
0x675F62: jz      short loc_675FAE
0x675F64: mov     esi, [edi]
0x675F66: test    esi, esi
0x675F68: jz      short loc_675FAE
0x675F6A: mov     eax, [esi]
0x675F6C: mov     edx, [eax+198h]
0x675F72: push    0
0x675F74: mov     ecx, esi
0x675F76: call    edx
0x675F78: test    al, al
0x675F7A: jz      short loc_675FAE
0x675F7C: push    0; a2
0x675F7E: mov     ecx, esi; this
0x675F80: call    Actor_GetActorBaseForm
0x675F85: mov     ecx, eax
0x675F87: call    TESActorBase_GetHealth
0x675F8C: test    eax, eax
0x675F8E: jle     short loc_675FAE
0x675F90: mov     eax, [esi]
0x675F92: mov     edx, [eax+80h]
0x675F98: mov     ecx, esi
0x675F9A: call    edx
0x675F9C: test    al, al
0x675F9E: jnz     short loc_675FAE
0x675FA0: mov     ecx, [esi+58h]
0x675FA3: mov     eax, [ecx]
0x675FA5: mov     edx, [eax+384h]
0x675FAB: push    esi
0x675FAC: call    edx
0x675FAE: mov     edi, [edi+4]
0x675FB1: test    edi, edi
0x675FB3: jnz     short loc_675F50
0x675FB5: pop     esi
0x675FB6: pop     edi
0x675FB7: retn
