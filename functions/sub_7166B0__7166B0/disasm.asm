0x7166B0: push    ecx
0x7166B1: push    esi
0x7166B2: mov     esi, [esp+8+arg_0]
0x7166B6: push    edi
0x7166B7: push    esi
0x7166B8: mov     edi, ecx
0x7166BA: call    sub_6EBA80
0x7166BF: mov     ecx, esi
0x7166C1: call    sub_712A90
0x7166C6: push    1
0x7166C8: lea     ecx, [esp+10h+var_4]
0x7166CC: push    ecx
0x7166CD: mov     [edi+1Ch], eax
0x7166D0: mov     eax, [esi+21Ch]
0x7166D6: push    4
0x7166D8: lea     edx, [esp+18h+arg_0]
0x7166DC: push    edx
0x7166DD: mov     [esp+1Ch+arg_0], 0
0x7166E5: push    eax
0x7166E6: mov     eax, [eax+4]
0x7166E9: mov     [esp+20h+var_4], 4
0x7166F1: call    eax
0x7166F3: add     esp, 14h
0x7166F6: cmp     [esp+0Ch+arg_0], 0
0x7166FB: jbe     short loc_71674B
0x7166FD: lea     ecx, [ecx+0]
0x716700: sub     [esp+0Ch+arg_0], 1
0x716705: lea     ecx, [esp+0Ch+var_4]
0x716709: push    ecx
0x71670A: mov     ecx, esi
0x71670C: mov     [esp+10h+var_4], 0
0x716714: call    sub_713620
0x716719: mov     ecx, esi
0x71671B: call    sub_712A90
0x716720: mov     ecx, [esp+0Ch+var_4]
0x716724: test    ecx, ecx
0x716726: jz      short loc_71673B
0x716728: test    eax, eax
0x71672A: jz      short loc_71673B
0x71672C: mov     edx, [edi]
0x71672E: push    eax
0x71672F: mov     eax, [edx+50h]
0x716732: push    ecx
0x716733: mov     ecx, edi
0x716735: call    eax
0x716737: mov     ecx, [esp+0Ch+var_4]
0x71673B: push    ecx
0x71673C: call    FormHeapFree
0x716741: add     esp, 4
0x716744: cmp     [esp+0Ch+arg_0], 0
0x716749: ja      short loc_716700
0x71674B: pop     edi
0x71674C: pop     esi
0x71674D: pop     ecx
0x71674E: retn    4
