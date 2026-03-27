0x8E8040: push    ecx
0x8E8041: push    ebx
0x8E8042: push    esi
0x8E8043: push    edi
0x8E8044: mov     edi, [esp+10h+arg_0]
0x8E8048: mov     eax, [edi+21Ch]
0x8E804E: push    1
0x8E8050: lea     ecx, [esp+14h+arg_0]
0x8E8054: push    ecx
0x8E8055: push    4
0x8E8057: lea     edx, [esp+1Ch+var_4]
0x8E805B: push    edx
0x8E805C: push    eax
0x8E805D: mov     eax, [eax+4]
0x8E8060: xor     ebx, ebx
0x8E8062: mov     [esp+24h+arg_0], 4
0x8E806A: call    eax
0x8E806C: mov     ecx, [esp+24h+var_4]
0x8E8070: push    ecx
0x8E8071: call    sub_8E7E60
0x8E8076: mov     esi, eax
0x8E8078: add     esp, 18h
0x8E807B: test    esi, esi
0x8E807D: jz      short loc_8E80B6
0x8E807F: mov     edx, [esi]
0x8E8081: mov     eax, [edx+4]
0x8E8084: push    edi
0x8E8085: mov     ecx, esi
0x8E8087: call    eax
0x8E8089: mov     edi, [esi+4]
0x8E808C: cmp     [edi+4], bx
0x8E8090: jz      short loc_8E8097
0x8E8092: add     word ptr [edi+6], 1
0x8E8097: push    0
0x8E8099: mov     ecx, esi
0x8E809B: mov     dword ptr [esi], offset ??_7hkConstraintCinfo@@6B@; const hkConstraintCinfo::`vftable'
0x8E80A1: call    sub_8A0200
0x8E80A6: push    esi
0x8E80A7: call    FormHeapFree
0x8E80AC: add     esp, 4
0x8E80AF: mov     eax, edi
0x8E80B1: pop     edi
0x8E80B2: pop     esi
0x8E80B3: pop     ebx
0x8E80B4: pop     ecx
0x8E80B5: retn
0x8E80B6: pop     edi
0x8E80B7: pop     esi
0x8E80B8: mov     eax, ebx
0x8E80BA: pop     ebx
0x8E80BB: pop     ecx
0x8E80BC: retn
