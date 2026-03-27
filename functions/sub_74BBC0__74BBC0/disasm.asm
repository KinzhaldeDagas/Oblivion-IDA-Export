0x74BBC0: push    ecx
0x74BBC1: push    ebx
0x74BBC2: push    esi
0x74BBC3: mov     esi, [esp+0Ch+arg_0]
0x74BBC7: push    edi
0x74BBC8: push    esi
0x74BBC9: mov     edi, ecx
0x74BBCB: call    sub_74F3A0
0x74BBD0: movzx   eax, word ptr [edi+5Ah]
0x74BBD4: push    1
0x74BBD6: lea     ecx, [esp+14h+var_4]
0x74BBDA: push    ecx
0x74BBDB: mov     [esp+18h+arg_0], eax
0x74BBDF: mov     eax, [esi+220h]
0x74BBE5: push    4
0x74BBE7: lea     edx, [esp+1Ch+arg_0]
0x74BBEB: push    edx
0x74BBEC: push    eax
0x74BBED: mov     eax, [eax+8]
0x74BBF0: mov     [esp+24h+var_4], 4
0x74BBF8: call    eax
0x74BBFA: xor     ebx, ebx
0x74BBFC: add     esp, 14h
0x74BBFF: cmp     [esp+10h+arg_0], ebx
0x74BC03: jbe     short loc_74BC1E
0x74BC05: mov     eax, [edi+54h]
0x74BC08: mov     ecx, [eax+ebx*4]
0x74BC0B: mov     edx, [esi]
0x74BC0D: mov     edx, [edx+2Ch]
0x74BC10: push    ecx
0x74BC11: mov     ecx, esi
0x74BC13: call    edx
0x74BC15: add     ebx, 1
0x74BC18: cmp     ebx, [esp+10h+arg_0]
0x74BC1C: jb      short loc_74BC05
0x74BC1E: mov     eax, [esi+220h]
0x74BC24: push    1
0x74BC26: lea     ecx, [esp+14h+var_4]
0x74BC2A: push    ecx
0x74BC2B: push    4
0x74BC2D: lea     edx, [edi+70h]
0x74BC30: push    edx
0x74BC31: push    eax
0x74BC32: mov     eax, [eax+8]
0x74BC35: mov     [esp+24h+var_4], 4
0x74BC3D: call    eax
0x74BC3F: mov     eax, [esi+220h]
0x74BC45: push    1
0x74BC47: lea     ecx, [esp+28h+var_4]
0x74BC4B: push    ecx
0x74BC4C: push    4
0x74BC4E: lea     edx, [edi+74h]
0x74BC51: push    edx
0x74BC52: push    eax
0x74BC53: mov     eax, [eax+8]
0x74BC56: mov     [esp+38h+var_4], 4
0x74BC5E: call    eax
0x74BC60: add     esp, 28h
0x74BC63: push    esi
0x74BC64: lea     ecx, [edi+78h]
0x74BC67: call    sub_7094A0
0x74BC6C: pop     edi
0x74BC6D: pop     esi
0x74BC6E: pop     ebx
0x74BC6F: pop     ecx
0x74BC70: retn    4
