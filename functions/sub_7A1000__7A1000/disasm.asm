0x7A1000: push    ecx
0x7A1001: mov     ecx, [esp+4+arg_8]
0x7A1005: mov     edx, [esp+4+arg_8]
0x7A1009: push    ebx
0x7A100A: mov     ebx, [esp+8+arg_0]
0x7A100E: push    esi
0x7A100F: mov     esi, [esp+0Ch+arg_4]
0x7A1013: push    edi
0x7A1014: mov     edi, [esp+10h+arg_8]
0x7A1018: mov     byte ptr [esp+10h+var_4], 0
0x7A101D: mov     eax, [esp+10h+var_4]
0x7A1021: push    eax
0x7A1022: push    ecx
0x7A1023: push    edx
0x7A1024: push    edi
0x7A1025: push    esi
0x7A1026: push    ebx
0x7A1027: call    sub_7A0E60
0x7A102C: sub     esi, ebx
0x7A102E: add     esp, 18h
0x7A1031: sar     esi, 4
0x7A1034: shl     esi, 4
0x7A1037: mov     eax, edi
0x7A1039: pop     edi
0x7A103A: sub     eax, esi
0x7A103C: pop     esi
0x7A103D: pop     ebx
0x7A103E: pop     ecx
0x7A103F: retn
