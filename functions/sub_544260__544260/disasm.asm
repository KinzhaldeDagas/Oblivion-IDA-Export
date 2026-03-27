0x544260: push    ecx
0x544261: push    esi
0x544262: mov     esi, ecx
0x544264: mov     eax, [esi]
0x544266: mov     edx, [eax+28h]
0x544269: push    edi
0x54426A: call    edx
0x54426C: mov     edi, ds:0B33A10h
0x544272: push    ecx
0x544273: mov     eax, esp
0x544275: mov     [eax], esi
0x544277: mov     [esp+10h+var_4], esp
0x54427B: add     esi, 8
0x54427E: push    esi; lpAddend
0x54427F: call    dword ptr ds:0A28078h
0x544285: mov     ecx, [edi+34h]
0x544288: call    sub_43A5F0
0x54428D: pop     edi
0x54428E: pop     esi
0x54428F: pop     ecx
0x544290: retn
