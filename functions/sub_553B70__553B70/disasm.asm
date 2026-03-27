0x553B70: push    edi
0x553B71: mov     edi, [esp+4+arg_8]
0x553B75: test    edi, edi
0x553B77: jz      short loc_553BAC
0x553B79: push    esi
0x553B7A: mov     esi, [esp+8+arg_4]
0x553B7E: test    esi, esi
0x553B80: jz      short loc_553BAB
0x553B82: cmp     dword ptr ds:0B39B80h, 0
0x553B89: jnz     short loc_553B90
0x553B8B: call    sub_553550
0x553B90: fld     [esp+8+arg_0]
0x553B94: push    edi; int
0x553B95: push    esi; int
0x553B96: push    ecx
0x553B97: mov     ecx, ds:0B39B80h
0x553B9D: fstp    [esp+14h+var_14]; float
0x553BA0: add     ecx, 0C8h ; 'È'
0x553BA6: call    sub_6EE010
0x553BAB: pop     esi
0x553BAC: pop     edi
0x553BAD: retn
