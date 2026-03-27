0x79F0E0: push    ebx
0x79F0E1: push    ebp
0x79F0E2: mov     ebp, [esp+8+arg_4]
0x79F0E6: test    ebp, ebp
0x79F0E8: push    esi
0x79F0E9: mov     esi, ecx
0x79F0EB: jz      short loc_79F0F3
0x79F0ED: cmp     ebp, [esp+0Ch+arg_C]
0x79F0F1: jz      short loc_79F0F8
0x79F0F3: call    __invalid_parameter_noinfo
0x79F0F8: mov     ebx, [esp+0Ch+arg_8]
0x79F0FC: mov     ecx, [esp+0Ch+arg_10]
0x79F100: cmp     ebx, ecx
0x79F102: jz      short loc_79F13D
0x79F104: mov     eax, [esi+8]
0x79F107: push    edi
0x79F108: mov     byte ptr [esp+10h+arg_4], 0
0x79F10D: mov     edx, [esp+10h+arg_4]
0x79F111: push    edx
0x79F112: mov     edx, [esp+14h+arg_0]
0x79F116: push    edx
0x79F117: mov     edx, [esp+18h+arg_0]
0x79F11B: push    edx
0x79F11C: push    ebx
0x79F11D: push    eax
0x79F11E: push    ecx
0x79F11F: call    sub_79BE80
0x79F124: mov     ecx, [esi+8]
0x79F127: mov     edi, eax
0x79F129: mov     eax, [esp+28h+arg_0]
0x79F12D: push    eax
0x79F12E: push    esi
0x79F12F: push    ecx
0x79F130: push    edi
0x79F131: call    sub_79E150
0x79F136: add     esp, 28h
0x79F139: mov     [esi+8], edi
0x79F13C: pop     edi
0x79F13D: mov     eax, [esp+0Ch+arg_0]
0x79F141: pop     esi
0x79F142: mov     [eax], ebp
0x79F144: pop     ebp
0x79F145: mov     [eax+4], ebx
0x79F148: pop     ebx
0x79F149: retn    14h
