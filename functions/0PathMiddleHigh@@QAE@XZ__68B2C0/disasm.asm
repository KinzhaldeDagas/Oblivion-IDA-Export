0x68B2C0: push    0FFFFFFFFh
0x68B2C2: push    offset ??0PathMiddleHigh@@QAE@XZ_SEH
0x68B2C7: mov     eax, large fs:0
0x68B2CD: push    eax
0x68B2CE: push    ecx
0x68B2CF: push    esi
0x68B2D0: mov     eax, ds:0B30AACh
0x68B2D5: xor     eax, esp
0x68B2D7: push    eax
0x68B2D8: lea     eax, [esp+18h+var_C]
0x68B2DC: mov     large fs:0, eax
0x68B2E2: mov     esi, ecx
0x68B2E4: mov     [esp+18h+var_10], esi
0x68B2E8: call    sub_68A9F0
0x68B2ED: lea     ecx, [esi+14h]
0x68B2F0: mov     [esp+18h+var_4], 0
0x68B2F8: mov     dword ptr [esi], offset ??_7PathMiddleHigh@@6B@; const PathMiddleHigh::`vftable'
0x68B2FE: call    sub_68C040
0x68B303: mov     eax, esi
0x68B305: mov     ecx, [esp+18h+var_C]
0x68B309: mov     large fs:0, ecx
0x68B310: pop     ecx
0x68B311: pop     esi
0x68B312: add     esp, 10h
0x68B315: retn
