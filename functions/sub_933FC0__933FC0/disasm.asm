0x933FC0: mov     eax, [esi+8]
0x933FC3: mov     ecx, [eax+10h]
0x933FC6: mov     edx, [esi]
0x933FC8: mov     eax, [edx+8]
0x933FCB: push    ebx
0x933FCC: mov     ebx, [esp+4+arg_0]
0x933FD0: push    ebp
0x933FD1: lea     ebp, [edi+20h]
0x933FD4: push    ebp; int
0x933FD5: push    ecx; float
0x933FD6: add     eax, 40h ; '@'
0x933FD9: push    eax; int
0x933FDA: call    sub_8DD150
0x933FDF: mov     ecx, [esi+8]
0x933FE2: mov     edx, [ecx+10h]
0x933FE5: lea     eax, [edi+60h]
0x933FE8: push    eax; int
0x933FE9: mov     [esp+18h+arg_0], eax
0x933FED: mov     eax, [esi+4]
0x933FF0: mov     ecx, [eax+8]
0x933FF3: push    edx; float
0x933FF4: add     ecx, 40h ; '@'
0x933FF7: push    ecx; int
0x933FF8: call    sub_8DD150
0x933FFD: mov     [ebx], edi
0x933FFF: lea     eax, [edi+10h]
0x934002: mov     [ebx+4], eax
0x934005: mov     edx, [esi+0Ch]
0x934008: mov     [ebx+0Ch], edx
0x93400B: mov     ecx, [esi+8]
0x93400E: mov     [ebx+8], ecx
0x934011: mov     ecx, [esi]
0x934013: mov     edx, [ecx+4]
0x934016: mov     ecx, [ecx]
0x934018: mov     [edi], ecx
0x93401A: mov     [edi+4], edx
0x93401D: mov     edx, [esi]
0x93401F: add     esp, 18h
0x934022: test    eax, eax
0x934024: mov     [edi+0Ch], edx
0x934027: mov     [edi+8], ebp
0x93402A: jz      short loc_934039
0x93402C: mov     ecx, [esi+4]
0x93402F: mov     edx, [esp+8+arg_0]
0x934033: mov     [eax+0Ch], ecx
0x934036: mov     [eax+8], edx
0x934039: mov     eax, [esp+8+arg_0]
0x93403D: push    eax
0x93403E: push    ebp
0x93403F: lea     ecx, [ebx+10h]
0x934042: call    sub_8B1FF0
0x934047: pop     ebp
0x934048: pop     ebx
0x934049: retn
