0x8A4070: push    0FFFFFFFFh
0x8A4072: push    offset SEH_8A4070
0x8A4077: mov     eax, large fs:0
0x8A407D: push    eax
0x8A407E: sub     esp, 8
0x8A4081: push    ebp
0x8A4082: push    esi
0x8A4083: push    edi
0x8A4084: mov     eax, ds:0B30AACh
0x8A4089: xor     eax, esp
0x8A408B: push    eax
0x8A408C: lea     eax, [esp+24h+var_C]
0x8A4090: mov     large fs:0, eax
0x8A4096: mov     esi, ecx
0x8A4098: mov     ebp, [esp+24h+arg_0]
0x8A409C: test    ebp, ebp
0x8A409E: mov     [esp+24h+var_4], 0
0x8A40A6: jz      loc_8A4130
0x8A40AC: cmp     dword ptr [esi], 0
0x8A40AF: jz      short loc_8A4103
0x8A40B1: push    8; Size
0x8A40B3: call    FormHeapAlloc
0x8A40B8: mov     edi, eax
0x8A40BA: add     esp, 4
0x8A40BD: mov     [esp+24h+var_14], edi
0x8A40C1: test    edi, edi
0x8A40C3: mov     byte ptr [esp+24h+var_4], 1
0x8A40C8: jz      short loc_8A40EC
0x8A40CA: mov     eax, [esi]
0x8A40CC: test    eax, eax
0x8A40CE: push    ecx
0x8A40CF: mov     ecx, esp
0x8A40D1: mov     [esp+28h+var_10], esp
0x8A40D5: mov     [ecx], eax
0x8A40D7: jz      short loc_8A40E3
0x8A40D9: add     eax, 4
0x8A40DC: push    eax; lpAddend
0x8A40DD: call    dword ptr ds:0A28078h
0x8A40E3: mov     ecx, edi
0x8A40E5: call    sub_532DF0
0x8A40EA: jmp     short loc_8A40EE
0x8A40EC: xor     eax, eax
0x8A40EE: mov     ecx, [esi+4]
0x8A40F1: lea     edx, [esp+24h+arg_0]
0x8A40F5: mov     [eax+4], ecx
0x8A40F8: mov     byte ptr [esp+24h+var_4], 0
0x8A40FD: mov     [esi+4], eax
0x8A4100: push    edx
0x8A4101: jmp     short loc_8A4108
0x8A4103: lea     eax, [esp+24h+arg_0]
0x8A4107: push    eax
0x8A4108: mov     ecx, esi
0x8A410A: call    sub_55E2A0
0x8A410F: lea     ecx, [ebp+4]
0x8A4112: push    ecx; lpAddend
0x8A4113: mov     [esp+28h+var_4], 0FFFFFFFFh
0x8A411B: call    dword ptr ds:0A2807Ch
0x8A4121: test    eax, eax
0x8A4123: jnz     short loc_8A4130
0x8A4125: mov     edx, [ebp+0]
0x8A4128: mov     eax, [edx]
0x8A412A: push    1
0x8A412C: mov     ecx, ebp
0x8A412E: call    eax
0x8A4130: mov     ecx, dword ptr [esp+24h+var_C]
0x8A4134: mov     large fs:0, ecx
0x8A413B: pop     ecx
0x8A413C: pop     edi
0x8A413D: pop     esi
0x8A413E: pop     ebp
0x8A413F: add     esp, 14h
0x8A4142: retn    4
