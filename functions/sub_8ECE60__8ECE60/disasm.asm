0x8ECE60: sub     esp, 0Ch
0x8ECE63: mov     eax, [ecx+8]
0x8ECE66: mov     eax, [eax+74h]
0x8ECE69: push    ebx
0x8ECE6A: mov     ebx, [eax]
0x8ECE6C: mov     [esp+10h+var_4], eax
0x8ECE70: mov     eax, [ecx+124h]
0x8ECE76: dec     eax
0x8ECE77: mov     [esp+10h+var_8], ecx
0x8ECE7B: mov     [esp+10h+var_C], eax
0x8ECE7F: js      short loc_8ECEE5
0x8ECE81: push    ebp
0x8ECE82: push    esi
0x8ECE83: push    edi
0x8ECE84: lea     edi, [ecx+14h]
0x8ECE87: jmp     short loc_8ECE91
0x8ECE89: mov     eax, [esp+1Ch+var_C]
0x8ECE8D: mov     ecx, [esp+1Ch+var_8]
0x8ECE91: mov     ecx, [ecx+120h]
0x8ECE97: mov     edx, [ecx+eax*4]
0x8ECE9A: lea     esi, [ecx+eax*4]
0x8ECE9D: mov     ecx, [edx]
0x8ECE9F: mov     eax, [ecx]
0x8ECEA1: call    dword ptr [eax+8]
0x8ECEA4: mov     ecx, [edi]
0x8ECEA6: mov     edx, [ecx]
0x8ECEA8: mov     ebp, eax
0x8ECEAA: call    dword ptr [edx+8]
0x8ECEAD: mov     ecx, [esp+1Ch+var_4]
0x8ECEB1: mov     edx, [esi]
0x8ECEB3: shl     eax, 5
0x8ECEB6: add     eax, ebp
0x8ECEB8: mov     ebp, [esp+1Ch+arg_0]
0x8ECEBC: movzx   eax, byte ptr [eax+ebx+190h]
0x8ECEC4: push    ebp
0x8ECEC5: push    ecx
0x8ECEC6: push    edx
0x8ECEC7: lea     eax, [eax+eax*4]
0x8ECECA: push    edi
0x8ECECB: call    dword ptr [ebx+eax*4+994h]
0x8ECED2: mov     al, [ebp+4]
0x8ECED5: add     esp, 10h
0x8ECED8: test    al, al
0x8ECEDA: jnz     short loc_8ECEE2
0x8ECEDC: dec     [esp+1Ch+var_C]
0x8ECEE0: jns     short loc_8ECE89
0x8ECEE2: pop     edi
0x8ECEE3: pop     esi
0x8ECEE4: pop     ebp
0x8ECEE5: pop     ebx
0x8ECEE6: add     esp, 0Ch
0x8ECEE9: retn    4
