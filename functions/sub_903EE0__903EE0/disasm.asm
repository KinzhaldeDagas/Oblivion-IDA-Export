0x903EE0: sub     esp, 14h
0x903EE3: push    esi
0x903EE4: mov     esi, [esp+18h+arg_0]
0x903EE8: xor     al, al
0x903EEA: push    0FFFFFFFFh
0x903EEC: mov     [esp+1Ch+var_4], al
0x903EF0: mov     [esp+1Ch+var_3], al
0x903EF4: push    1Ah
0x903EF6: lea     eax, [esp+20h+var_14]
0x903EFA: push    eax
0x903EFB: mov     ecx, esi
0x903EFD: mov     [esp+24h+var_14], offset sub_903E20
0x903F05: mov     [esp+24h+var_10], offset sub_903D80
0x903F0D: mov     [esp+24h+var_C], offset nullsub_5
0x903F15: mov     [esp+24h+var_8], offset nullsub_5
0x903F1D: call    sub_8DADD0
0x903F22: push    1Ah
0x903F24: push    0FFFFFFFFh
0x903F26: lea     ecx, [esp+20h+var_14]
0x903F2A: push    ecx
0x903F2B: mov     ecx, esi
0x903F2D: call    sub_8DADD0
0x903F32: pop     esi
0x903F33: add     esp, 14h
0x903F36: retn
