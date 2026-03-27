0x8C4ED0: sub     esp, 20h
0x8C4ED3: push    ebx
0x8C4ED4: push    ebp
0x8C4ED5: push    esi
0x8C4ED6: push    edi
0x8C4ED7: mov     edi, [esp+30h+arg_0]
0x8C4EDB: mov     esi, ecx
0x8C4EDD: push    1
0x8C4EDF: mov     ebx, 4
0x8C4EE4: mov     eax, 2
0x8C4EE9: lea     ecx, [esp+34h+var_20]
0x8C4EED: push    ecx
0x8C4EEE: mov     [esp+38h+var_1C], eax
0x8C4EF2: mov     [esp+38h+var_18], eax
0x8C4EF6: mov     [esp+38h+var_14], eax
0x8C4EFA: mov     [esp+38h+var_10], eax
0x8C4EFE: mov     eax, [edi+21Ch]
0x8C4F04: push    ebx
0x8C4F05: lea     ebp, [esi+8]
0x8C4F08: mov     [esp+3Ch+var_C], ebx
0x8C4F0C: mov     [esp+3Ch+var_8], ebx
0x8C4F10: mov     [esp+3Ch+var_4], ebx
0x8C4F14: mov     edx, [eax+4]
0x8C4F17: push    ebp
0x8C4F18: push    eax
0x8C4F19: mov     [esp+44h+var_20], ebx
0x8C4F1D: call    edx
0x8C4F1F: mov     eax, [ebp+0]
0x8C4F22: xor     ecx, ecx
0x8C4F24: mov     edx, 14h
0x8C4F29: mul     edx
0x8C4F2B: seto    cl
0x8C4F2E: neg     ecx
0x8C4F30: or      ecx, eax
0x8C4F32: push    ecx; Size
0x8C4F33: call    FormHeapAlloc
0x8C4F38: mov     ebp, [ebp+0]
0x8C4F3B: push    7
0x8C4F3D: lea     edx, [esp+4Ch+var_1C]
0x8C4F41: push    edx
0x8C4F42: lea     edx, [ebp+ebp*4+0]
0x8C4F46: add     edx, edx
0x8C4F48: add     edx, edx
0x8C4F4A: push    edx
0x8C4F4B: mov     [esi+14h], eax
0x8C4F4E: mov     ecx, [edi+21Ch]
0x8C4F54: push    eax
0x8C4F55: mov     eax, [ecx+4]
0x8C4F58: push    ecx
0x8C4F59: call    eax
0x8C4F5B: mov     eax, [edi+21Ch]
0x8C4F61: push    1
0x8C4F63: lea     ecx, [esp+60h+var_20]
0x8C4F67: push    ecx
0x8C4F68: push    ebx
0x8C4F69: lea     ebp, [esi+0Ch]
0x8C4F6C: mov     [esp+68h+arg_0], ebx
0x8C4F70: mov     edx, [eax+4]
0x8C4F73: push    ebp
0x8C4F74: push    eax
0x8C4F75: mov     [esp+70h+var_20], ebx
0x8C4F79: call    edx
0x8C4F7B: mov     eax, [ebp+0]
0x8C4F7E: xor     ecx, ecx
0x8C4F80: add     esp, 40h
0x8C4F83: mov     edx, 0Ch
0x8C4F88: mul     edx
0x8C4F8A: seto    cl
0x8C4F8D: neg     ecx
0x8C4F8F: or      ecx, eax
0x8C4F91: push    ecx; Size
0x8C4F92: call    FormHeapAlloc
0x8C4F97: mov     ebp, [ebp+0]
0x8C4F9A: push    1
0x8C4F9C: lea     edx, [esp+38h+arg_0]
0x8C4FA0: push    edx
0x8C4FA1: lea     edx, [ebp+ebp*2+0]
0x8C4FA5: add     edx, edx
0x8C4FA7: add     edx, edx
0x8C4FA9: mov     [esi+18h], eax
0x8C4FAC: mov     ecx, [edi+21Ch]
0x8C4FB2: push    edx
0x8C4FB3: push    eax
0x8C4FB4: mov     eax, [ecx+4]
0x8C4FB7: push    ecx
0x8C4FB8: call    eax
0x8C4FBA: mov     eax, [edi+21Ch]
0x8C4FC0: mov     edx, [eax+4]
0x8C4FC3: push    1
0x8C4FC5: lea     ecx, [esp+4Ch+var_20]
0x8C4FC9: push    ecx
0x8C4FCA: push    2
0x8C4FCC: lea     ebp, [esi+10h]
0x8C4FCF: push    ebp
0x8C4FD0: push    eax
0x8C4FD1: mov     [esp+5Ch+var_20], 2
0x8C4FD9: call    edx
0x8C4FDB: movzx   eax, word ptr [ebp+0]
0x8C4FDF: xor     ecx, ecx
0x8C4FE1: mov     edx, 0Ch
0x8C4FE6: mul     edx
0x8C4FE8: seto    cl
0x8C4FEB: neg     ecx
0x8C4FED: or      ecx, eax
0x8C4FEF: push    ecx; Size
0x8C4FF0: call    FormHeapAlloc
0x8C4FF5: push    1
0x8C4FF7: lea     ecx, [esp+64h+arg_0]
0x8C4FFB: push    ecx
0x8C4FFC: movzx   ecx, word ptr [ebp+0]
0x8C5000: lea     edx, [ecx+ecx*2]
0x8C5003: add     edx, edx
0x8C5005: add     edx, edx
0x8C5007: push    edx
0x8C5008: mov     [esi+1Ch], eax
0x8C500B: mov     edi, [edi+21Ch]
0x8C5011: push    eax
0x8C5012: mov     eax, [edi+4]
0x8C5015: push    edi
0x8C5016: call    eax
0x8C5018: add     esp, 44h
0x8C501B: pop     edi
0x8C501C: pop     esi
0x8C501D: pop     ebp
0x8C501E: pop     ebx
0x8C501F: add     esp, 20h
0x8C5022: retn    4
