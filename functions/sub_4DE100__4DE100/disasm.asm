0x4DE100: mov     eax, [esp+arg_0]
0x4DE104: push    esi
0x4DE105: mov     esi, ecx
0x4DE107: cmp     dword ptr [esi+3Ch], 0
0x4DE10B: jz      short loc_4DE147
0x4DE10D: test    eax, eax
0x4DE10F: jnz     short loc_4DE11D
0x4DE111: lea     ecx, [esi+44h]
0x4DE114: call    sub_41FFA0
0x4DE119: test    eax, eax
0x4DE11B: jz      short loc_4DE125
0x4DE11D: push    esi
0x4DE11E: mov     ecx, eax
0x4DE120: call    sub_497830
0x4DE125: mov     eax, [esi]
0x4DE127: mov     edx, [eax+198h]
0x4DE12D: push    0
0x4DE12F: mov     ecx, esi
0x4DE131: call    edx
0x4DE133: test    al, al
0x4DE135: jnz     short loc_4DE154
0x4DE137: mov     eax, [esi]
0x4DE139: mov     edx, [eax+164h]
0x4DE13F: mov     ecx, esi
0x4DE141: call    edx
0x4DE143: pop     esi
0x4DE144: retn    4
0x4DE147: test    eax, eax
0x4DE149: jz      short loc_4DE154
0x4DE14B: push    eax
0x4DE14C: lea     ecx, [esi+44h]
0x4DE14F: call    sub_424970
0x4DE154: pop     esi
0x4DE155: retn    4
