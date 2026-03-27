0x72C0D0: push    ecx
0x72C0D1: push    ebx
0x72C0D2: push    esi
0x72C0D3: mov     esi, [esp+0Ch+arg_0]
0x72C0D7: push    edi
0x72C0D8: push    esi
0x72C0D9: mov     edi, ecx
0x72C0DB: call    nullsub_returnvVoid_1arg
0x72C0E0: mov     ecx, [edi+8]
0x72C0E3: mov     eax, [esi]
0x72C0E5: mov     edx, [eax+2Ch]
0x72C0E8: push    ecx
0x72C0E9: mov     ecx, esi
0x72C0EB: call    edx
0x72C0ED: mov     ecx, [edi+0Ch]
0x72C0F0: mov     eax, [esi]
0x72C0F2: mov     edx, [eax+2Ch]
0x72C0F5: push    ecx
0x72C0F6: mov     ecx, esi
0x72C0F8: call    edx
0x72C0FA: mov     ecx, [edi+10h]
0x72C0FD: mov     eax, [esi]
0x72C0FF: mov     edx, [eax+2Ch]
0x72C102: push    ecx
0x72C103: mov     ecx, esi
0x72C105: call    edx
0x72C107: mov     eax, [edi+8]
0x72C10A: mov     ecx, [eax+40h]
0x72C10D: mov     eax, [esi+220h]
0x72C113: push    1
0x72C115: lea     edx, [esp+14h+var_4]
0x72C119: push    edx
0x72C11A: mov     [esp+18h+arg_0], ecx
0x72C11E: mov     edx, [eax+8]
0x72C121: push    4
0x72C123: lea     ecx, [esp+1Ch+arg_0]
0x72C127: push    ecx
0x72C128: push    eax
0x72C129: mov     [esp+24h+var_4], 4
0x72C131: call    edx
0x72C133: xor     ebx, ebx
0x72C135: add     esp, 14h
0x72C138: cmp     [esp+10h+arg_0], ebx
0x72C13C: jbe     short loc_72C159
0x72C13E: mov     edi, edi
0x72C140: mov     ecx, [edi+14h]
0x72C143: mov     edx, [ecx+ebx*4]
0x72C146: mov     eax, [esi]
0x72C148: mov     eax, [eax+2Ch]
0x72C14B: push    edx
0x72C14C: mov     ecx, esi
0x72C14E: call    eax
0x72C150: add     ebx, 1
0x72C153: cmp     ebx, [esp+10h+arg_0]
0x72C157: jb      short loc_72C140
0x72C159: pop     edi
0x72C15A: pop     esi
0x72C15B: pop     ebx
0x72C15C: pop     ecx
0x72C15D: retn    4
