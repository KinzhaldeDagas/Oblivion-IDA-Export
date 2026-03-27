0x6EDCD0: sub     esp, 8
0x6EDCD3: mov     edx, [esp+8+arg_8]
0x6EDCD7: push    ebx
0x6EDCD8: mov     ebx, [esp+0Ch+arg_0]
0x6EDCDC: push    esi
0x6EDCDD: mov     esi, [esp+10h+arg_4]
0x6EDCE1: push    edi
0x6EDCE2: mov     edi, [esp+14h+arg_8]
0x6EDCE6: xor     al, al
0x6EDCE8: mov     byte ptr [esp+14h+var_4], al
0x6EDCEC: mov     ecx, [esp+14h+var_4]
0x6EDCF0: mov     byte ptr [esp+14h+var_8], al
0x6EDCF4: mov     eax, [esp+14h+var_8]
0x6EDCF8: push    eax
0x6EDCF9: push    ecx
0x6EDCFA: push    edx
0x6EDCFB: push    edi
0x6EDCFC: push    esi
0x6EDCFD: push    ebx
0x6EDCFE: call    sub_6EDBD0
0x6EDD03: sub     esi, ebx
0x6EDD05: mov     eax, 4EC4EC4Fh
0x6EDD0A: imul    esi
0x6EDD0C: sar     edx, 4
0x6EDD0F: mov     eax, edx
0x6EDD11: shr     eax, 1Fh
0x6EDD14: add     eax, edx
0x6EDD16: mov     ecx, eax
0x6EDD18: imul    ecx, 34h ; '4'
0x6EDD1B: add     esp, 18h
0x6EDD1E: mov     eax, edi
0x6EDD20: pop     edi
0x6EDD21: pop     esi
0x6EDD22: sub     eax, ecx
0x6EDD24: pop     ebx
0x6EDD25: add     esp, 8
0x6EDD28: retn
