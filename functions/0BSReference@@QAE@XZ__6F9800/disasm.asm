0x6F9800: push    0FFFFFFFFh
0x6F9802: push    offset SEH_7F1810
0x6F9807: mov     eax, large fs:0
0x6F980D: push    eax
0x6F980E: push    ecx
0x6F980F: push    esi
0x6F9810: mov     eax, ds:0B30AACh
0x6F9815: xor     eax, esp
0x6F9817: push    eax
0x6F9818: lea     eax, [esp+18h+var_C]
0x6F981C: mov     large fs:0, eax
0x6F9822: mov     esi, ecx
0x6F9824: mov     [esp+18h+var_10], esi
0x6F9828: call    NiObject_constr
0x6F982D: xor     eax, eax
0x6F982F: mov     [esp+18h+var_4], eax
0x6F9833: mov     [esi+8], eax
0x6F9836: mov     eax, [esp+18h+arg_0]
0x6F983A: push    eax
0x6F983B: mov     ecx, esi
0x6F983D: mov     dword ptr [esi], offset ??_7BSReference@@6B@; const BSReference::`vftable'
0x6F9843: call    sub_6FDF10
0x6F9848: mov     eax, esi
0x6F984A: mov     ecx, [esp+18h+var_C]
0x6F984E: mov     large fs:0, ecx
0x6F9855: pop     ecx
0x6F9856: pop     esi
0x6F9857: add     esp, 10h
0x6F985A: retn    4
