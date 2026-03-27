0x9393E0: mov     ecx, ds:0BA7D98h
0x9393E6: mov     eax, [ecx]
0x9393E8: push    edi
0x9393E9: mov     edi, [esp+4+arg_C]
0x9393ED: test    edi, edi
0x9393EF: jz      short loc_939428
0x9393F1: push    esi
0x9393F2: push    1Ch
0x9393F4: push    80h ; '€'
0x9393F9: call    dword ptr [eax+10h]
0x9393FC: mov     ecx, [esp+8+arg_4]
0x939400: mov     edx, [esp+8+arg_0]
0x939404: push    edi
0x939405: mov     esi, eax
0x939407: push    ecx
0x939408: push    edx
0x939409: mov     ecx, esi
0x93940B: mov     word ptr [esi+4], 80h ; '€'
0x939411: call    sub_93F0E0
0x939416: mov     dword ptr [esi], offset off_AA1D60
0x93941C: mov     dword ptr [esi+30h], 0
0x939423: mov     eax, esi
0x939425: pop     esi
0x939426: pop     edi
0x939427: retn
0x939428: push    1Ch
0x93942A: push    30h ; '0'
0x93942C: call    dword ptr [eax+10h]
0x93942F: mov     ecx, [esp+4+arg_4]
0x939433: mov     edx, [esp+4+arg_0]
0x939437: push    0
0x939439: push    ecx
0x93943A: push    edx
0x93943B: mov     ecx, eax
0x93943D: mov     word ptr [eax+4], 30h ; '0'
0x939443: call    sub_93F0E0
0x939448: pop     edi
0x939449: retn
