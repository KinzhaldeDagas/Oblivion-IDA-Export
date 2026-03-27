0x902930: mov     ecx, ds:0BA7D98h
0x902936: push    edi
0x902937: mov     edi, [esp+4+arg_C]
0x90293B: test    edi, edi
0x90293D: jz      short loc_902976
0x90293F: mov     eax, [ecx]
0x902941: push    esi
0x902942: push    1Ch
0x902944: push    90h
0x902949: call    dword ptr [eax+10h]
0x90294C: mov     ecx, [esp+8+arg_8]
0x902950: mov     edx, [esp+8+arg_0]
0x902954: push    edi
0x902955: push    ecx
0x902956: mov     esi, eax
0x902958: mov     eax, [esp+10h+arg_4]
0x90295C: push    edx
0x90295D: push    eax
0x90295E: mov     ecx, esi
0x902960: mov     word ptr [esi+4], 90h
0x902966: call    sub_901FF0
0x90296B: mov     dword ptr [esi], offset off_A9BC38
0x902971: mov     eax, esi
0x902973: pop     esi
0x902974: pop     edi
0x902975: retn
0x902976: mov     edx, [ecx]
0x902978: push    1Ch
0x90297A: push    30h ; '0'
0x90297C: call    dword ptr [edx+10h]
0x90297F: mov     ecx, [esp+4+arg_4]
0x902983: mov     edx, [esp+4+arg_0]
0x902987: push    0
0x902989: push    ecx
0x90298A: push    edx
0x90298B: mov     ecx, eax
0x90298D: mov     word ptr [eax+4], 30h ; '0'
0x902993: call    sub_93F0E0
0x902998: pop     edi
0x902999: retn
