0x553B30: cmp     dword ptr ds:0B39B80h, 0
0x553B37: jnz     short loc_553B3E
0x553B39: call    sub_553550
0x553B3E: mov     eax, [esp+arg_0]
0x553B42: mov     ecx, [esp+arg_8]
0x553B46: mov     edx, [esp+arg_4]
0x553B4A: push    eax
0x553B4B: push    ecx
0x553B4C: mov     ecx, ds:0B39B80h
0x553B52: push    edx
0x553B53: push    0
0x553B55: add     ecx, 0C8h ; 'È'
0x553B5B: call    sub_6EDD30
0x553B60: retn
