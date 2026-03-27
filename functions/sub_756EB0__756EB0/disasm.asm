0x756EB0: push    esi
0x756EB1: push    edi
0x756EB2: mov     edi, [esp+8+arg_0]
0x756EB6: push    edi
0x756EB7: mov     esi, ecx
0x756EB9: call    sub_752DC0
0x756EBE: mov     eax, [edi+21Ch]
0x756EC4: push    1
0x756EC6: lea     ecx, [esp+0Ch+arg_0]
0x756ECA: push    ecx
0x756ECB: push    4
0x756ECD: lea     edx, [esi+18h]
0x756ED0: push    edx
0x756ED1: push    eax
0x756ED2: mov     eax, [eax+4]
0x756ED5: mov     [esp+1Ch+arg_0], 4
0x756EDD: call    eax
0x756EDF: mov     eax, [edi+21Ch]
0x756EE5: push    1
0x756EE7: lea     ecx, [esp+20h+arg_0]
0x756EEB: push    ecx
0x756EEC: push    2
0x756EEE: lea     edx, [esi+1Ch]
0x756EF1: push    edx
0x756EF2: push    eax
0x756EF3: mov     eax, [eax+4]
0x756EF6: mov     [esp+30h+arg_0], 2
0x756EFE: call    eax
0x756F00: mov     eax, [edi+21Ch]
0x756F06: push    1
0x756F08: lea     ecx, [esp+34h+arg_0]
0x756F0C: push    ecx
0x756F0D: push    4
0x756F0F: lea     edx, [esi+20h]
0x756F12: push    edx
0x756F13: push    eax
0x756F14: mov     eax, [eax+4]
0x756F17: mov     [esp+44h+arg_0], 4
0x756F1F: call    eax
0x756F21: mov     edi, [edi+21Ch]
0x756F27: mov     edx, [edi+4]
0x756F2A: push    1
0x756F2C: lea     ecx, [esp+48h+arg_0]
0x756F30: push    ecx
0x756F31: push    2
0x756F33: add     esi, 24h ; '$'
0x756F36: push    esi
0x756F37: push    edi
0x756F38: mov     [esp+58h+arg_0], 2
0x756F40: call    edx
0x756F42: add     esp, 50h
0x756F45: pop     edi
0x756F46: pop     esi
0x756F47: retn    4
