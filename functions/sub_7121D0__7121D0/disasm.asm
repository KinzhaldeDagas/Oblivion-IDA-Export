0x7121D0: push    0FFFFFFFFh
0x7121D2: push    offset SEH_7121D0
0x7121D7: mov     eax, large fs:0
0x7121DD: push    eax
0x7121DE: sub     esp, 20h
0x7121E1: push    ebx
0x7121E2: push    esi
0x7121E3: mov     eax, ds:0B30AACh
0x7121E8: xor     eax, esp
0x7121EA: push    eax
0x7121EB: lea     eax, [esp+38h+var_C]
0x7121EF: mov     large fs:0, eax
0x7121F5: mov     esi, ecx
0x7121F7: lea     ecx, [esp+38h+var_2C]
0x7121FB: call    sub_748860
0x712200: mov     eax, [esi]
0x712202: mov     edx, [eax+10h]
0x712205: lea     ecx, [esp+38h+var_2C]
0x712209: push    ecx
0x71220A: mov     ecx, esi
0x71220C: mov     [esp+3Ch+var_4], 0
0x712214: call    edx
0x712216: mov     ecx, [esp+38h+var_18]
0x71221A: mov     bl, al
0x71221C: mov     eax, [esp+38h+arg_4]
0x712220: mov     [eax], ecx
0x712222: lea     ecx, [esp+38h+var_2C]
0x712226: call    sub_7489A0
0x71222B: mov     edx, [esp+38h+arg_0]
0x71222F: lea     ecx, [esp+38h+var_2C]
0x712233: mov     [edx], eax
0x712235: mov     [esp+38h+var_4], 0FFFFFFFFh
0x71223D: call    sub_7488B0
0x712242: mov     al, bl
0x712244: mov     ecx, dword ptr [esp+38h+var_C]
0x712248: mov     large fs:0, ecx
0x71224F: pop     ecx
0x712250: pop     esi
0x712251: pop     ebx
0x712252: add     esp, 2Ch
0x712255: retn    8
