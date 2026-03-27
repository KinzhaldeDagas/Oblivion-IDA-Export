0x943070: push    ebx
0x943071: push    ebp
0x943072: push    esi
0x943073: push    edi
0x943074: mov     edi, ecx
0x943076: mov     ebp, 1
0x94307B: mov     [edi+6], bp
0x94307F: mov     dword ptr [edi], offset off_AA2768
0x943085: mov     ecx, ds:0BA7D98h
0x94308B: mov     eax, [ecx]
0x94308D: push    12h
0x94308F: push    14h
0x943091: call    dword ptr [eax+10h]
0x943094: mov     esi, eax
0x943096: lea     ecx, [esi+8]
0x943099: mov     word ptr [esi+4], 14h
0x94309F: mov     [esi+6], bp
0x9430A3: mov     dword ptr [esi], offset off_AA2738
0x9430A9: call    sub_942B70
0x9430AE: mov     [edi+8], esi
0x9430B1: mov     eax, ds:0A9AA48h
0x9430B6: test    eax, eax
0x9430B8: mov     ebx, offset off_A9AA48
0x9430BD: jz      short loc_9430D4
0x9430BF: nop
0x9430C0: mov     edx, [esi]
0x9430C2: push    0
0x9430C4: push    eax
0x9430C5: mov     ecx, esi
0x9430C7: call    dword ptr [edx+8]
0x9430CA: mov     eax, [ebx+4]
0x9430CD: add     ebx, 4
0x9430D0: test    eax, eax
0x9430D2: jnz     short loc_9430C0
0x9430D4: mov     ecx, ds:0BA7D98h
0x9430DA: mov     eax, [ecx]
0x9430DC: push    12h
0x9430DE: push    14h
0x9430E0: call    dword ptr [eax+10h]
0x9430E3: mov     esi, eax
0x9430E5: lea     ecx, [esi+8]
0x9430E8: mov     word ptr [esi+4], 14h
0x9430EE: mov     [esi+6], bp
0x9430F2: mov     dword ptr [esi], offset off_AA2748
0x9430F8: call    sub_942B70
0x9430FD: mov     [edi+0Ch], esi
0x943100: mov     eax, ds:0A9A910h
0x943105: test    eax, eax
0x943107: mov     ebx, offset off_A9A910
0x94310C: jz      short loc_943122
0x94310E: mov     edi, edi
0x943110: mov     edx, [esi]
0x943112: push    eax
0x943113: mov     ecx, esi
0x943115: call    dword ptr [edx+8]
0x943118: mov     eax, [ebx+4]
0x94311B: add     ebx, 4
0x94311E: test    eax, eax
0x943120: jnz     short loc_943110
0x943122: mov     ecx, ds:0BA7D98h
0x943128: mov     eax, [ecx]
0x94312A: push    12h
0x94312C: push    14h
0x94312E: call    dword ptr [eax+10h]
0x943131: mov     esi, eax
0x943133: lea     ecx, [esi+8]
0x943136: mov     word ptr [esi+4], 14h
0x94313C: mov     [esi+6], bp
0x943140: mov     dword ptr [esi], offset off_AA2758
0x943146: call    sub_8B0E10
0x94314B: push    offset off_A9AA48
0x943150: push    offset off_A9A910
0x943155: mov     ecx, esi
0x943157: mov     [edi+10h], esi
0x94315A: call    sub_9546D0
0x94315F: mov     eax, edi
0x943161: pop     edi
0x943162: pop     esi
0x943163: pop     ebp
0x943164: pop     ebx
0x943165: retn
