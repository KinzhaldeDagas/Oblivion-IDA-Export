0x73B5E0: push    esi
0x73B5E1: push    edi
0x73B5E2: mov     edi, [esp+8+arg_0]
0x73B5E6: push    edi
0x73B5E7: mov     esi, ecx
0x73B5E9: call    sub_71A130
0x73B5EE: mov     eax, [edi+21Ch]
0x73B5F4: push    1
0x73B5F6: lea     ecx, [esp+0Ch+arg_0]
0x73B5FA: push    ecx
0x73B5FB: push    2
0x73B5FD: lea     edx, [esi+50h]
0x73B600: push    edx
0x73B601: push    eax
0x73B602: mov     eax, [eax+4]
0x73B605: mov     [esp+1Ch+arg_0], 2
0x73B60D: call    eax
0x73B60F: mov     edi, [edi+21Ch]
0x73B615: mov     edx, [edi+4]
0x73B618: push    1
0x73B61A: lea     ecx, [esp+20h+arg_0]
0x73B61E: push    ecx
0x73B61F: push    2
0x73B621: add     esi, 52h ; 'R'
0x73B624: push    esi
0x73B625: push    edi
0x73B626: mov     [esp+30h+arg_0], 2
0x73B62E: call    edx
0x73B630: add     esp, 28h
0x73B633: pop     edi
0x73B634: pop     esi
0x73B635: retn    4
