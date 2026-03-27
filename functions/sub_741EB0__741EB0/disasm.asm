0x741EB0: push    ecx
0x741EB1: push    esi
0x741EB2: push    edi
0x741EB3: mov     edi, [esp+0Ch+arg_0]
0x741EB7: push    edi
0x741EB8: mov     esi, ecx
0x741EBA: call    sub_6FE000
0x741EBF: mov     al, [esi+0Ch]
0x741EC2: push    1
0x741EC4: lea     ecx, [esp+10h+var_4]
0x741EC8: push    ecx
0x741EC9: mov     byte ptr [esp+14h+arg_0], al
0x741ECD: mov     eax, [edi+220h]
0x741ED3: push    1
0x741ED5: lea     edx, [esp+18h+arg_0]
0x741ED9: push    edx
0x741EDA: push    eax
0x741EDB: mov     eax, [eax+8]
0x741EDE: mov     [esp+20h+var_4], 1
0x741EE6: call    eax
0x741EE8: add     esp, 14h
0x741EEB: pop     edi
0x741EEC: pop     esi
0x741EED: pop     ecx
0x741EEE: retn    4
