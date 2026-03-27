0x8520C0: push    0FFFFFFFFh
0x8520C2: push    offset SEH_852030
0x8520C7: mov     eax, large fs:0
0x8520CD: push    eax
0x8520CE: push    ecx
0x8520CF: push    ebx
0x8520D0: push    esi
0x8520D1: push    edi
0x8520D2: mov     eax, ds:0B30AACh
0x8520D7: xor     eax, esp
0x8520D9: push    eax
0x8520DA: lea     eax, [esp+20h+var_C]
0x8520DE: mov     large fs:0, eax
0x8520E4: mov     esi, ecx
0x8520E6: mov     edi, ds:0B455A8h
0x8520EC: test    edi, edi
0x8520EE: mov     [esp+20h+var_10], edi
0x8520F2: mov     ebx, 1
0x8520F7: jz      short loc_8520FC
0x8520F9: add     [edi+60h], ebx
0x8520FC: mov     ecx, [esi+38h]
0x8520FF: lea     eax, [esp+20h+var_10]
0x852103: push    eax
0x852104: push    ecx
0x852105: lea     ecx, [esi+40h]
0x852108: mov     [esp+28h+var_4], 0
0x852110: call    sub_76CE40
0x852115: or      eax, 0FFFFFFFFh
0x852118: test    edi, edi
0x85211A: mov     [esp+20h+var_4], eax
0x85211E: jz      short loc_85212C
0x852120: add     [edi+60h], eax
0x852123: jnz     short loc_85212C
0x852125: mov     ecx, edi
0x852127: call    sub_7604D0
0x85212C: add     [esi+38h], ebx
0x85212F: mov     ecx, [esp+20h+var_C]
0x852133: mov     large fs:0, ecx
0x85213A: pop     ecx
0x85213B: pop     edi
0x85213C: pop     esi
0x85213D: pop     ebx
0x85213E: add     esp, 10h
0x852141: retn    10h
