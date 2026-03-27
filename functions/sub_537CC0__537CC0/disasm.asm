0x537CC0: push    0FFFFFFFFh
0x537CC2: push    offset SEH_8C8900
0x537CC7: mov     eax, large fs:0
0x537CCD: push    eax
0x537CCE: push    ecx
0x537CCF: mov     eax, ds:0B30AACh
0x537CD4: xor     eax, esp
0x537CD6: push    eax
0x537CD7: lea     eax, [esp+14h+var_C]
0x537CDB: mov     large fs:0, eax
0x537CE1: mov     eax, ds:0B3659Ch
0x537CE6: test    eax, eax
0x537CE8: jnz     short loc_537D27
0x537CEA: push    2Ch ; ','; Size
0x537CEC: call    FormHeapAlloc
0x537CF1: add     esp, 4
0x537CF4: mov     [esp+14h+var_10], eax
0x537CF8: test    eax, eax
0x537CFA: mov     [esp+14h+var_4], 0
0x537D02: jz      short loc_537D20
0x537D04: mov     ecx, eax
0x537D06: call    sub_537830
0x537D0B: mov     ds:0B3659Ch, eax
0x537D10: mov     ecx, [esp+14h+var_C]
0x537D14: mov     large fs:0, ecx
0x537D1B: pop     ecx
0x537D1C: add     esp, 10h
0x537D1F: retn
0x537D20: xor     eax, eax
0x537D22: mov     ds:0B3659Ch, eax
0x537D27: mov     ecx, [esp+14h+var_C]
0x537D2B: mov     large fs:0, ecx
0x537D32: pop     ecx
0x537D33: add     esp, 10h
0x537D36: retn
