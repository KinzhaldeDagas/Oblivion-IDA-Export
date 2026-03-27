0x74BB40: push    ecx
0x74BB41: push    esi
0x74BB42: push    edi
0x74BB43: mov     edi, [esp+0Ch+arg_0]
0x74BB47: push    edi
0x74BB48: mov     esi, ecx
0x74BB4A: call    sub_74F240
0x74BB4F: mov     ecx, edi
0x74BB51: call    sub_712AE0
0x74BB56: mov     eax, [edi+21Ch]
0x74BB5C: push    1
0x74BB5E: lea     ecx, [esp+10h+arg_0]
0x74BB62: push    ecx
0x74BB63: push    4
0x74BB65: lea     edx, [esp+18h+var_4]
0x74BB69: push    edx
0x74BB6A: push    eax
0x74BB6B: mov     eax, [eax+4]
0x74BB6E: mov     [esp+20h+arg_0], 4
0x74BB76: call    eax
0x74BB78: mov     ecx, [esp+20h+var_4]
0x74BB7C: push    1
0x74BB7E: lea     edx, [esp+24h+arg_0]
0x74BB82: push    edx
0x74BB83: mov     [esi+70h], ecx
0x74BB86: mov     eax, [edi+21Ch]
0x74BB8C: mov     edx, [eax+4]
0x74BB8F: push    4
0x74BB91: lea     ecx, [esp+2Ch+var_4]
0x74BB95: push    ecx
0x74BB96: push    eax
0x74BB97: mov     [esp+34h+arg_0], 4
0x74BB9F: call    edx
0x74BBA1: mov     eax, [esp+34h+var_4]
0x74BBA5: add     esp, 28h
0x74BBA8: push    edi
0x74BBA9: lea     ecx, [esi+78h]
0x74BBAC: mov     [esi+74h], eax
0x74BBAF: call    sub_709430
0x74BBB4: pop     edi
0x74BBB5: pop     esi
0x74BBB6: pop     ecx
0x74BBB7: retn    4
