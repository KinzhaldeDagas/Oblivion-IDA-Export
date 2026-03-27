0x6C0880: push    esi
0x6C0881: push    edi
0x6C0882: mov     edi, [esp+8+arg_0]
0x6C0886: push    edi
0x6C0887: mov     esi, ecx
0x6C0889: call    sub_6BC1C0
0x6C088E: mov     eax, [edi+21Ch]
0x6C0894: push    1
0x6C0896: lea     ecx, [esp+0Ch+arg_0]
0x6C089A: push    ecx
0x6C089B: push    4
0x6C089D: lea     edx, [esi+10h]
0x6C08A0: push    edx
0x6C08A1: push    eax
0x6C08A2: mov     eax, [eax+4]
0x6C08A5: mov     [esp+1Ch+arg_0], 4
0x6C08AD: call    eax
0x6C08AF: mov     eax, [edi+21Ch]
0x6C08B5: push    1
0x6C08B7: lea     ecx, [esp+20h+arg_0]
0x6C08BB: push    ecx
0x6C08BC: push    4
0x6C08BE: lea     edx, [esi+14h]
0x6C08C1: push    edx
0x6C08C2: push    eax
0x6C08C3: mov     eax, [eax+4]
0x6C08C6: mov     [esp+30h+arg_0], 4
0x6C08CE: call    eax
0x6C08D0: mov     edi, [edi+21Ch]
0x6C08D6: mov     edx, [edi+4]
0x6C08D9: push    1
0x6C08DB: lea     ecx, [esp+34h+arg_0]
0x6C08DF: push    ecx
0x6C08E0: push    4
0x6C08E2: add     esi, 18h
0x6C08E5: push    esi
0x6C08E6: push    edi
0x6C08E7: mov     [esp+44h+arg_0], 4
0x6C08EF: call    edx
0x6C08F1: add     esp, 3Ch
0x6C08F4: pop     edi
0x6C08F5: pop     esi
0x6C08F6: retn    4
