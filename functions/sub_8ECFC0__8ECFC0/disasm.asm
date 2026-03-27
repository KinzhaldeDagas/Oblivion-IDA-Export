0x8ECFC0: mov     eax, [esp+arg_4]
0x8ECFC4: push    esi
0x8ECFC5: mov     esi, ecx
0x8ECFC7: mov     ecx, [esp+4+arg_0]
0x8ECFCB: push    eax
0x8ECFCC: push    ecx
0x8ECFCD: mov     ecx, esi
0x8ECFCF: call    sub_8ABC40
0x8ECFD4: mov     edx, [esp+4+arg_8]
0x8ECFD8: mov     dword ptr [esi], offset off_A9AFFC
0x8ECFDE: xor     eax, eax
0x8ECFE0: mov     [esi+120h], eax
0x8ECFE6: mov     [esi+124h], eax
0x8ECFEC: mov     dword ptr [esi+128h], 80000000h
0x8ECFF6: mov     [esi+30h], edx
0x8ECFF9: mov     eax, esi
0x8ECFFB: pop     esi
0x8ECFFC: retn    0Ch
