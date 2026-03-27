0x735920: push    esi
0x735921: mov     esi, [esp+4+arg_0]
0x735925: push    offset a_sgi; ".sgi"
0x73592A: push    esi
0x73592B: call    j_CRT_strcmp
0x735930: add     esp, 8
0x735933: test    eax, eax
0x735935: jz      short loc_735985
0x735937: push    offset a_rgb; ".rgb"
0x73593C: push    esi
0x73593D: call    j_CRT_strcmp
0x735942: add     esp, 8
0x735945: test    eax, eax
0x735947: jz      short loc_735985
0x735949: push    offset a_rgba; ".rgba"
0x73594E: push    esi
0x73594F: call    j_CRT_strcmp
0x735954: add     esp, 8
0x735957: test    eax, eax
0x735959: jz      short loc_735985
0x73595B: push    offset a_int; ".int"
0x735960: push    esi
0x735961: call    j_CRT_strcmp
0x735966: add     esp, 8
0x735969: test    eax, eax
0x73596B: jz      short loc_735985
0x73596D: push    offset a_inta; ".inta"
0x735972: push    esi
0x735973: call    j_CRT_strcmp
0x735978: add     esp, 8
0x73597B: test    eax, eax
0x73597D: jz      short loc_735985
0x73597F: xor     al, al
0x735981: pop     esi
0x735982: retn    4
0x735985: mov     al, 1
0x735987: pop     esi
0x735988: retn    4
