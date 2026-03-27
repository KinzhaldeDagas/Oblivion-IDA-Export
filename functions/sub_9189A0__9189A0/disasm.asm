0x9189A0: push    ebx
0x9189A1: push    esi
0x9189A2: mov     esi, ecx
0x9189A4: mov     eax, [esi+3Ch]
0x9189A7: push    edi
0x9189A8: xor     edi, edi
0x9189AA: test    eax, eax
0x9189AC: mov     dword ptr [esi], offset off_A9D230
0x9189B2: mov     dword ptr [esi+8], offset off_A9D214
0x9189B9: mov     dword ptr [esi+0Ch], offset off_A9D1FC
0x9189C0: jle     short loc_9189DA
0x9189C2: mov     eax, [esi+38h]
0x9189C5: mov     ecx, [eax+edi*4]
0x9189C8: test    ecx, ecx
0x9189CA: jz      short loc_9189D2
0x9189CC: mov     edx, [ecx]
0x9189CE: push    1
0x9189D0: call    dword ptr [edx]
0x9189D2: mov     eax, [esi+3Ch]
0x9189D5: inc     edi
0x9189D6: cmp     edi, eax
0x9189D8: jl      short loc_9189C2
0x9189DA: mov     ecx, [esi+14h]
0x9189DD: test    ecx, ecx
0x9189DF: jz      short loc_9189E7
0x9189E1: mov     eax, [ecx]
0x9189E3: push    1
0x9189E5: call    dword ptr [eax]
0x9189E7: mov     ecx, [esi+18h]
0x9189EA: test    ecx, ecx
0x9189EC: jz      short loc_9189F4
0x9189EE: mov     edx, [ecx]
0x9189F0: push    1
0x9189F2: call    dword ptr [edx]
0x9189F4: mov     ecx, [esi+1Ch]
0x9189F7: test    ecx, ecx
0x9189F9: jz      short loc_918A01
0x9189FB: mov     eax, [ecx]
0x9189FD: push    1
0x9189FF: call    dword ptr [eax]
0x918A01: mov     eax, [esi+4Ch]
0x918A04: test    eax, eax
0x918A06: mov     edi, ds:0BA9DE4h
0x918A0C: mov     ebx, large fs:2Ch
0x918A13: js      short loc_918A3C
0x918A15: mov     ecx, [ebx+edi*4]
0x918A18: mov     ecx, [ecx+19Ch]
0x918A1E: test    ecx, ecx
0x918A20: jnz     short loc_918A28
0x918A22: mov     ecx, ds:0BA7D9Ch
0x918A28: mov     edx, [esi+44h]
0x918A2B: and     eax, 3FFFFFFFh
0x918A30: push    14h
0x918A32: shl     eax, 2
0x918A35: push    eax
0x918A36: push    edx
0x918A37: call    sub_8A75D0
0x918A3C: mov     eax, [esi+40h]
0x918A3F: test    eax, eax
0x918A41: js      short loc_918A6A
0x918A43: mov     ecx, [ebx+edi*4]
0x918A46: mov     ecx, [ecx+19Ch]
0x918A4C: test    ecx, ecx
0x918A4E: jnz     short loc_918A56
0x918A50: mov     ecx, ds:0BA7D9Ch
0x918A56: mov     edx, [esi+38h]
0x918A59: and     eax, 3FFFFFFFh
0x918A5E: push    14h
0x918A60: shl     eax, 2
0x918A63: push    eax
0x918A64: push    edx
0x918A65: call    sub_8A75D0
0x918A6A: lea     ecx, [esi+2Ch]
0x918A6D: call    sub_8B0E60
0x918A72: mov     dword ptr [esi+24h], offset ??_7hkBaseObject@@6B@; const hkBaseObject::`vftable'
0x918A79: mov     dword ptr [esi+0Ch], offset off_A9D1C0
0x918A80: mov     dword ptr [esi+8], offset off_A9D1D8
0x918A87: pop     edi
0x918A88: mov     dword ptr [esi], offset ??_7hkBaseObject@@6B@; const hkBaseObject::`vftable'
0x918A8E: pop     esi
0x918A8F: pop     ebx
0x918A90: retn
