0x8ECDD0: sub     esp, 0Ch
0x8ECDD3: mov     eax, [ecx+8]
0x8ECDD6: mov     eax, [eax+74h]
0x8ECDD9: push    ebx
0x8ECDDA: mov     ebx, [eax]
0x8ECDDC: push    edi
0x8ECDDD: mov     edi, [ecx+124h]
0x8ECDE3: dec     edi
0x8ECDE4: mov     [esp+14h+var_C], ecx
0x8ECDE8: mov     [esp+14h+var_4], eax
0x8ECDEC: js      short loc_8ECE50
0x8ECDEE: push    ebp
0x8ECDEF: push    esi
0x8ECDF0: lea     ebp, [ecx+14h]
0x8ECDF3: jmp     short loc_8ECE00
0x8ECDF5: mov     ecx, [esp+1Ch+var_C]
0x8ECDF9: lea     esp, [esp+0]
0x8ECE00: mov     ecx, [ecx+120h]
0x8ECE06: mov     edx, [ecx+edi*4]
0x8ECE09: lea     esi, [ecx+edi*4]
0x8ECE0C: mov     ecx, [edx]
0x8ECE0E: mov     eax, [ecx]
0x8ECE10: call    dword ptr [eax+8]
0x8ECE13: mov     ecx, [ebp+0]
0x8ECE16: mov     edx, [ecx]
0x8ECE18: mov     [esp+1Ch+var_8], eax
0x8ECE1C: call    dword ptr [edx+8]
0x8ECE1F: mov     ecx, [esp+1Ch+var_8]
0x8ECE23: mov     edx, [esp+1Ch+var_4]
0x8ECE27: shl     eax, 5
0x8ECE2A: add     eax, ecx
0x8ECE2C: mov     ecx, [esp+1Ch+arg_0]
0x8ECE30: movzx   eax, byte ptr [eax+ebx+190h]
0x8ECE38: push    ecx
0x8ECE39: mov     ecx, [esi]
0x8ECE3B: push    edx
0x8ECE3C: push    ecx
0x8ECE3D: lea     eax, [eax+eax*4]
0x8ECE40: push    ebp
0x8ECE41: call    dword ptr [ebx+eax*4+998h]
0x8ECE48: add     esp, 10h
0x8ECE4B: dec     edi
0x8ECE4C: jns     short loc_8ECDF5
0x8ECE4E: pop     esi
0x8ECE4F: pop     ebp
0x8ECE50: pop     edi
0x8ECE51: pop     ebx
0x8ECE52: add     esp, 0Ch
0x8ECE55: retn    4
