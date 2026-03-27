0x91ED30: sub     esp, 10h
0x91ED33: push    ebx
0x91ED34: mov     ebx, [esp+14h+arg_0]
0x91ED38: mov     eax, [ebx+8]
0x91ED3B: push    ebp
0x91ED3C: push    esi
0x91ED3D: mov     esi, [ebx+24h]
0x91ED40: mov     byte ptr [eax+26h], 1
0x91ED44: mov     ecx, [esi+0Ch]
0x91ED47: mov     edx, [ecx]
0x91ED49: push    edi
0x91ED4A: lea     eax, [esp+20h+var_10]
0x91ED4E: push    eax
0x91ED4F: call    dword ptr [edx+20h]
0x91ED52: mov     ecx, [ebx+8]
0x91ED55: mov     edx, [ecx]
0x91ED57: lea     eax, [esp+20h+var_10]
0x91ED5B: push    eax
0x91ED5C: push    ebx
0x91ED5D: call    dword ptr [edx+10h]
0x91ED60: mov     dword ptr [ebx+8], 0
0x91ED67: movzx   edx, byte ptr [esi+11h]
0x91ED6B: mov     cx, [esi+12h]
0x91ED6F: mov     eax, 2
0x91ED74: sub     eax, edx
0x91ED76: mov     eax, [esi+eax*4]
0x91ED79: mov     edx, [eax+74h]
0x91ED7C: mov     edi, [eax+78h]
0x91ED7F: mov     edi, [edx+edi*4-4]
0x91ED83: add     eax, 74h ; 't'
0x91ED86: movzx   ebp, cx
0x91ED89: mov     [edx+ebp*4], edi
0x91ED8C: dec     dword ptr [eax+4]
0x91ED8F: mov     edx, [edi+24h]
0x91ED92: mov     [edx+12h], cx
0x91ED96: movzx   eax, byte ptr [esi+11h]
0x91ED9A: mov     ebp, [esi+eax*4+4]
0x91ED9E: mov     eax, [esi+18h]
0x91EDA1: xor     edi, edi
0x91EDA3: cmp     eax, edi
0x91EDA5: mov     [esp+20h+arg_0], edi
0x91EDA9: jz      short loc_91EDE8
0x91EDAB: movzx   edx, word ptr [esi+14h]
0x91EDAF: mov     ecx, edx
0x91EDB1: neg     ecx
0x91EDB3: mov     [esp+20h+arg_0], ecx
0x91EDB7: lea     ecx, [edx+eax]
0x91EDBA: mov     edx, [ebp+84h]
0x91EDC0: sub     edx, ecx
0x91EDC2: add     edx, [ebp+80h]
0x91EDC8: push    edx
0x91EDC9: push    ecx
0x91EDCA: push    eax
0x91EDCB: call    j_unknown_libname_16
0x91EDD0: movzx   eax, word ptr [esi+14h]
0x91EDD4: mov     ecx, [ebp+84h]
0x91EDDA: add     esp, 0Ch
0x91EDDD: sub     ecx, eax
0x91EDDF: mov     [ebp+84h], ecx
0x91EDE5: mov     [esi+18h], edi
0x91EDE8: mov     [ebx+24h], edi
0x91EDEB: mov     ecx, [ebp+6Ch]
0x91EDEE: mov     edx, [ebp+68h]
0x91EDF1: imul    ecx, 1Ch
0x91EDF4: lea     edx, [ecx+edx-1Ch]
0x91EDF8: cmp     esi, edx
0x91EDFA: mov     eax, esi
0x91EDFC: jnb     short loc_91EE2E
0x91EDFE: mov     edi, edi
0x91EE00: lea     esi, [eax+1Ch]
0x91EE03: mov     ecx, 7
0x91EE08: mov     edi, eax
0x91EE0A: rep movsd
0x91EE0C: mov     ecx, [eax]
0x91EE0E: mov     [ecx+24h], eax
0x91EE11: mov     ecx, [eax+18h]
0x91EE14: test    ecx, ecx
0x91EE16: jz      short loc_91EE20
0x91EE18: mov     esi, [esp+20h+arg_0]
0x91EE1C: add     ecx, esi
0x91EE1E: jmp     short loc_91EE22
0x91EE20: xor     ecx, ecx
0x91EE22: mov     [eax+18h], ecx
0x91EE25: add     eax, 1Ch
0x91EE28: cmp     eax, edx
0x91EE2A: jb      short loc_91EE00
0x91EE2C: xor     edi, edi
0x91EE2E: dec     dword ptr [ebp+6Ch]
0x91EE31: cmp     [ebx+4], di
0x91EE35: jz      short loc_91EE49
0x91EE37: dec     word ptr [ebx+6]
0x91EE3B: cmp     [ebx+6], di
0x91EE3F: jnz     short loc_91EE49
0x91EE41: mov     edx, [ebx]
0x91EE43: push    1
0x91EE45: mov     ecx, ebx
0x91EE47: call    dword ptr [edx]
0x91EE49: pop     edi
0x91EE4A: pop     esi
0x91EE4B: pop     ebp
0x91EE4C: pop     ebx
0x91EE4D: add     esp, 10h
0x91EE50: retn
