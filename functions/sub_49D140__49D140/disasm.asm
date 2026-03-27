0x49D140: push    0FFFFFFFFh
0x49D142: push    offset SEH_49D140
0x49D147: mov     eax, large fs:0
0x49D14D: push    eax
0x49D14E: push    ecx
0x49D14F: push    esi
0x49D150: mov     eax, ds:0B30AACh
0x49D155: xor     eax, esp
0x49D157: push    eax
0x49D158: lea     eax, [esp+18h+var_C]
0x49D15C: mov     large fs:0, eax
0x49D162: mov     esi, ecx
0x49D164: mov     [esp+18h+var_10], esi
0x49D168: xor     eax, eax
0x49D16A: mov     [esi+4], eax
0x49D16D: mov     [esp+18h+var_4], eax
0x49D171: mov     [esi+10h], eax
0x49D174: mov     [esi+1Ch], eax
0x49D177: mov     [esi+20h], eax
0x49D17A: mov     [esi+24h], eax
0x49D17D: mov     byte ptr [esp+18h+var_4], 4
0x49D182: mov     [esi+34h], al
0x49D185: call    sub_49AC60
0x49D18A: mov     eax, esi
0x49D18C: mov     ecx, [esp+18h+var_C]
0x49D190: mov     large fs:0, ecx
0x49D197: pop     ecx
0x49D198: pop     esi
0x49D199: add     esp, 10h
0x49D19C: retn
