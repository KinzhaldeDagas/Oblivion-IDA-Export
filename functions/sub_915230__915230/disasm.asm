0x915230: push    ebp
0x915231: mov     ebp, esp
0x915233: and     esp, 0FFFFFFF0h
0x915236: sub     esp, 28h
0x915239: mov     edx, [ecx]
0x91523B: push    esi
0x91523C: mov     esi, [ebp+arg_8]
0x91523F: mov     eax, [esi+4]
0x915242: mov     [esp+2Ch+var_C], eax
0x915246: push    edi
0x915247: lea     eax, [esp+30h+var_20]
0x91524B: push    eax
0x91524C: mov     eax, [ebp+arg_0]
0x91524F: push    eax
0x915250: lea     eax, [esp+38h+var_21]
0x915254: push    eax
0x915255: call    dword ptr [edx+14h]
0x915258: cmp     byte ptr [eax], 0
0x91525B: jz      short loc_91527E
0x91525D: mov     edi, [ebp+arg_4]
0x915260: mov     edx, [edi+8]
0x915263: lea     ecx, [esp+30h+var_20]
0x915267: push    ecx
0x915268: push    edx
0x915269: lea     ecx, [esp+38h+var_20]
0x91526D: call    sub_88FE00
0x915272: mov     eax, [esi]
0x915274: lea     ecx, [esp+30h+var_20]
0x915278: push    ecx
0x915279: push    edi
0x91527A: mov     ecx, esi
0x91527C: call    dword ptr [eax]
0x91527E: pop     edi
0x91527F: pop     esi
0x915280: mov     esp, ebp
0x915282: pop     ebp
0x915283: retn    0Ch
