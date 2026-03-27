0x8FFBB0: mov     ecx, ds:0BA7D98h
0x8FFBB6: mov     eax, [ecx]
0x8FFBB8: push    edi
0x8FFBB9: mov     edi, [esp+4+arg_C]
0x8FFBBD: test    edi, edi
0x8FFBBF: jz      short loc_8FFBF1
0x8FFBC1: push    esi
0x8FFBC2: push    1Ch
0x8FFBC4: push    80h ; '€'
0x8FFBC9: call    dword ptr [eax+10h]
0x8FFBCC: mov     ecx, [esp+8+arg_4]
0x8FFBD0: mov     edx, [esp+8+arg_0]
0x8FFBD4: push    edi
0x8FFBD5: mov     esi, eax
0x8FFBD7: push    ecx
0x8FFBD8: push    edx
0x8FFBD9: mov     ecx, esi
0x8FFBDB: mov     word ptr [esi+4], 80h ; '€'
0x8FFBE1: call    sub_9393B0
0x8FFBE6: mov     dword ptr [esi], offset off_A9BA28
0x8FFBEC: mov     eax, esi
0x8FFBEE: pop     esi
0x8FFBEF: pop     edi
0x8FFBF0: retn
0x8FFBF1: push    1Ch
0x8FFBF3: push    30h ; '0'
0x8FFBF5: call    dword ptr [eax+10h]
0x8FFBF8: mov     ecx, [esp+4+arg_4]
0x8FFBFC: mov     edx, [esp+4+arg_0]
0x8FFC00: push    0
0x8FFC02: push    ecx
0x8FFC03: push    edx
0x8FFC04: mov     ecx, eax
0x8FFC06: mov     word ptr [eax+4], 30h ; '0'
0x8FFC0C: call    sub_93F0E0
0x8FFC11: pop     edi
0x8FFC12: retn
