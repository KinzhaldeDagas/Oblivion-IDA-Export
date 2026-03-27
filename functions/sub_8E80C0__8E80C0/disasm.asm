0x8E80C0: push    ecx
0x8E80C1: push    esi
0x8E80C2: push    edi
0x8E80C3: mov     edi, [esp+0Ch+arg_4]
0x8E80C7: mov     eax, [edi]
0x8E80C9: mov     edx, [eax+0Ch]
0x8E80CC: mov     ecx, edi
0x8E80CE: call    edx
0x8E80D0: push    eax
0x8E80D1: mov     [esp+10h+var_4], eax
0x8E80D5: call    sub_8E7E60
0x8E80DA: add     esp, 4
0x8E80DD: mov     esi, eax
0x8E80DF: push    edi
0x8E80E0: mov     ecx, esi
0x8E80E2: call    sub_8A0200
0x8E80E7: mov     edi, [esp+0Ch+arg_0]
0x8E80EB: mov     eax, [edi+220h]
0x8E80F1: push    1
0x8E80F3: lea     ecx, [esp+10h+arg_4]
0x8E80F7: push    ecx
0x8E80F8: push    4
0x8E80FA: lea     edx, [esp+18h+var_4]
0x8E80FE: push    edx
0x8E80FF: push    eax
0x8E8100: mov     eax, [eax+8]
0x8E8103: mov     [esp+20h+arg_4], 4
0x8E810B: call    eax
0x8E810D: mov     edx, [esi]
0x8E810F: mov     eax, [edx+8]
0x8E8112: add     esp, 14h
0x8E8115: push    edi
0x8E8116: mov     ecx, esi
0x8E8118: call    eax
0x8E811A: push    0
0x8E811C: mov     ecx, esi
0x8E811E: mov     dword ptr [esi], offset ??_7hkConstraintCinfo@@6B@; const hkConstraintCinfo::`vftable'
0x8E8124: call    sub_8A0200
0x8E8129: push    esi
0x8E812A: call    FormHeapFree
0x8E812F: add     esp, 4
0x8E8132: pop     edi
0x8E8133: pop     esi
0x8E8134: pop     ecx
0x8E8135: retn
