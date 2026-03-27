0x6D9390: push    esi
0x6D9391: mov     esi, [esp+4+arg_0]
0x6D9395: push    edi
0x6D9396: push    esi
0x6D9397: call    sub_716140
0x6D939C: mov     eax, ds:0B3DBDCh
0x6D93A1: push    eax; ArgList
0x6D93A2: call    TESOutput_PrintString
0x6D93A7: movzx   edi, word ptr [esi+0Ah]
0x6D93AB: movzx   ecx, word ptr [esi+8]
0x6D93AF: add     esp, 4
0x6D93B2: cmp     edi, ecx
0x6D93B4: mov     [esp+8+arg_0], eax
0x6D93B8: jb      short loc_6D93C8
0x6D93BA: movzx   edx, word ptr [esi+0Eh]
0x6D93BE: add     edx, edi
0x6D93C0: push    edx
0x6D93C1: mov     ecx, esi
0x6D93C3: call    NiTArray_SetSize
0x6D93C8: lea     eax, [esp+8+arg_0]
0x6D93CC: push    eax
0x6D93CD: push    edi
0x6D93CE: mov     ecx, esi
0x6D93D0: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x6D93D5: pop     edi
0x6D93D6: pop     esi
0x6D93D7: retn    4
