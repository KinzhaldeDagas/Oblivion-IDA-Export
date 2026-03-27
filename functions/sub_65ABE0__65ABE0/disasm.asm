0x65ABE0: push    ecx
0x65ABE1: call    MobileObject_GetCharProxy
0x65ABE6: test    eax, eax
0x65ABE8: jz      short loc_65AC01
0x65ABEA: lea     ecx, [esp+4+var_4]
0x65ABED: push    ecx
0x65ABEE: mov     ecx, eax
0x65ABF0: call    sub_57E270
0x65ABF5: mov     edx, [eax]
0x65ABF7: mov     eax, [esp+4+arg_0]
0x65ABFB: mov     [eax], edx
0x65ABFD: pop     ecx
0x65ABFE: retn    4
0x65AC01: lea     eax, [esp+4+var_4]
0x65AC04: mov     [esp+4+var_4], 0
0x65AC0B: mov     edx, [eax]
0x65AC0D: mov     eax, [esp+4+arg_0]
0x65AC11: mov     [eax], edx
0x65AC13: pop     ecx
0x65AC14: retn    4
