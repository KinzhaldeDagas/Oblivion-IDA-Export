0x752DC0: push    ecx
0x752DC1: push    esi
0x752DC2: push    edi
0x752DC3: mov     edi, [esp+0Ch+a2]
0x752DC7: push    edi; a2
0x752DC8: mov     esi, ecx
0x752DCA: call    sub_7008A0
0x752DCF: lea     eax, [esi+8]
0x752DD2: push    eax
0x752DD3: mov     ecx, edi
0x752DD5: call    sub_713620
0x752DDA: mov     eax, [edi+21Ch]
0x752DE0: push    1
0x752DE2: lea     ecx, [esp+10h+var_4]
0x752DE6: push    ecx
0x752DE7: push    4
0x752DE9: lea     edx, [esi+0Ch]
0x752DEC: push    edx
0x752DED: push    eax
0x752DEE: mov     eax, [eax+4]
0x752DF1: mov     [esp+20h+var_4], 4
0x752DF9: call    eax
0x752DFB: add     esp, 14h
0x752DFE: mov     ecx, edi
0x752E00: call    sub_712A20
0x752E05: mov     edi, [edi+21Ch]
0x752E0B: mov     eax, [edi+4]
0x752E0E: push    1
0x752E10: lea     ecx, [esp+10h+var_4]
0x752E14: push    ecx
0x752E15: push    1
0x752E17: lea     edx, [esp+18h+a2]
0x752E1B: push    edx
0x752E1C: push    edi
0x752E1D: mov     [esp+20h+var_4], 1
0x752E25: call    eax
0x752E27: add     esp, 14h
0x752E2A: cmp     byte ptr [esp+0Ch+a2], 0
0x752E2F: pop     edi
0x752E30: setnz   cl
0x752E33: mov     [esi+14h], cl
0x752E36: pop     esi
0x752E37: pop     ecx
0x752E38: retn    4
