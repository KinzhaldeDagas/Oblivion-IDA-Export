0x714BA0: push    esi
0x714BA1: push    edi
0x714BA2: mov     edi, [esp+8+arg_0]
0x714BA6: mov     eax, [edi+21Ch]
0x714BAC: mov     edx, [eax+4]
0x714BAF: mov     esi, ecx
0x714BB1: push    1
0x714BB3: lea     ecx, [esp+0Ch+arg_0]
0x714BB7: push    ecx
0x714BB8: push    4
0x714BBA: push    esi
0x714BBB: push    eax
0x714BBC: mov     [esp+1Ch+arg_0], 4
0x714BC4: call    edx
0x714BC6: mov     eax, [edi+21Ch]
0x714BCC: mov     edx, [eax+4]
0x714BCF: push    1
0x714BD1: lea     ecx, [esp+20h+arg_0]
0x714BD5: push    ecx
0x714BD6: push    4
0x714BD8: add     esi, 4
0x714BDB: push    esi
0x714BDC: push    eax
0x714BDD: mov     [esp+30h+arg_0], 4
0x714BE5: call    edx
0x714BE7: add     esp, 28h
0x714BEA: pop     edi
0x714BEB: pop     esi
0x714BEC: retn    4
