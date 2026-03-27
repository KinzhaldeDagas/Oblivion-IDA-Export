0x68BED0: push    0FFFFFFFFh
0x68BED2: push    offset SEH_8C8970
0x68BED7: mov     eax, large fs:0
0x68BEDD: push    eax
0x68BEDE: push    ecx
0x68BEDF: push    esi
0x68BEE0: push    edi
0x68BEE1: mov     eax, ds:0B30AACh
0x68BEE6: xor     eax, esp
0x68BEE8: push    eax
0x68BEE9: lea     eax, [esp+1Ch+var_C]
0x68BEED: mov     large fs:0, eax
0x68BEF3: mov     edi, ecx
0x68BEF5: push    14h; Size
0x68BEF7: call    FormHeapAlloc
0x68BEFC: add     esp, 4
0x68BEFF: mov     [esp+1Ch+var_10], eax
0x68BF03: test    eax, eax
0x68BF05: mov     [esp+1Ch+var_4], 0
0x68BF0D: jz      short loc_68BF1A
0x68BF0F: mov     ecx, eax
0x68BF11: call    sub_68CB30
0x68BF16: mov     esi, eax
0x68BF18: jmp     short loc_68BF1C
0x68BF1A: xor     esi, esi
0x68BF1C: mov     eax, [esp+1Ch+arg_0]
0x68BF20: push    eax
0x68BF21: mov     ecx, esi
0x68BF23: mov     [esp+20h+var_4], 0FFFFFFFFh
0x68BF2B: call    TeleportData__SetTeleportPosition
0x68BF30: mov     ecx, [edi+4]
0x68BF33: test    ecx, ecx
0x68BF35: jz      short loc_68BF3F
0x68BF37: push    esi
0x68BF38: call    sub_6A2FD0
0x68BF3D: jmp     short loc_68BF41
0x68BF3F: mov     [edi], esi
0x68BF41: mov     eax, esi
0x68BF43: mov     [edi+4], esi
0x68BF46: mov     ecx, [esp+1Ch+var_C]
0x68BF4A: mov     large fs:0, ecx
0x68BF51: pop     ecx
0x68BF52: pop     edi
0x68BF53: pop     esi
0x68BF54: add     esp, 10h
0x68BF57: retn    4
