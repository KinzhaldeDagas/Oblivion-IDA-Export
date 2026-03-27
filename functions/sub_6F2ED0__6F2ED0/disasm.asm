0x6F2ED0: sub     esp, 8
0x6F2ED3: mov     edx, [esp+8+arg_8]
0x6F2ED7: push    ebx
0x6F2ED8: mov     ebx, [esp+0Ch+arg_0]
0x6F2EDC: push    esi
0x6F2EDD: mov     esi, [esp+10h+arg_4]
0x6F2EE1: push    edi
0x6F2EE2: mov     edi, [esp+14h+arg_8]
0x6F2EE6: xor     al, al
0x6F2EE8: mov     byte ptr [esp+14h+var_4], al
0x6F2EEC: mov     ecx, [esp+14h+var_4]
0x6F2EF0: mov     byte ptr [esp+14h+var_8], al
0x6F2EF4: mov     eax, [esp+14h+var_8]
0x6F2EF8: push    eax
0x6F2EF9: push    ecx
0x6F2EFA: push    edx
0x6F2EFB: push    edi
0x6F2EFC: push    esi
0x6F2EFD: push    ebx
0x6F2EFE: call    sub_6F2970
0x6F2F03: sub     esi, ebx
0x6F2F05: mov     eax, 2E8BA2E9h
0x6F2F0A: imul    esi
0x6F2F0C: sar     edx, 3
0x6F2F0F: mov     eax, edx
0x6F2F11: shr     eax, 1Fh
0x6F2F14: add     eax, edx
0x6F2F16: mov     ecx, eax
0x6F2F18: imul    ecx, 2Ch ; ','
0x6F2F1B: add     esp, 18h
0x6F2F1E: mov     eax, edi
0x6F2F20: pop     edi
0x6F2F21: pop     esi
0x6F2F22: sub     eax, ecx
0x6F2F24: pop     ebx
0x6F2F25: add     esp, 8
0x6F2F28: retn
