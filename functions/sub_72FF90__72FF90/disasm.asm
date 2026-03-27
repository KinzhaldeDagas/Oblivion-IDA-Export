0x72FF90: push    ecx
0x72FF91: push    esi
0x72FF92: push    edi
0x72FF93: mov     edi, [esp+0Ch+arg_0]
0x72FF97: push    edi
0x72FF98: mov     esi, ecx
0x72FF9A: call    sub_714BA0
0x72FF9F: push    edi
0x72FFA0: lea     ecx, [esi+0Ch]
0x72FFA3: call    sub_714BA0
0x72FFA8: mov     eax, [edi+21Ch]
0x72FFAE: push    1
0x72FFB0: lea     ecx, [esp+10h+arg_0]
0x72FFB4: push    ecx
0x72FFB5: push    4
0x72FFB7: lea     edx, [esi+8]
0x72FFBA: push    edx
0x72FFBB: push    eax
0x72FFBC: mov     eax, [eax+4]
0x72FFBF: mov     [esp+20h+arg_0], 4
0x72FFC7: call    eax
0x72FFC9: mov     eax, [edi+21Ch]
0x72FFCF: push    1
0x72FFD1: lea     ecx, [esp+24h+arg_0]
0x72FFD5: push    ecx
0x72FFD6: push    4
0x72FFD8: lea     edx, [esp+2Ch+var_4]
0x72FFDC: push    edx
0x72FFDD: push    eax
0x72FFDE: mov     eax, [eax+4]
0x72FFE1: mov     [esp+34h+arg_0], 4
0x72FFE9: call    eax
0x72FFEB: mov     ecx, [esp+34h+var_4]
0x72FFEF: add     esp, 28h
0x72FFF2: mov     [esi+44h], ecx
0x72FFF5: push    edi
0x72FFF6: lea     ecx, [esi+14h]
0x72FFF9: call    sub_714BA0
0x72FFFE: pop     edi
0x72FFFF: mov     byte ptr [esi+1Ch], 1
0x730003: pop     esi
0x730004: pop     ecx
0x730005: retn    4
