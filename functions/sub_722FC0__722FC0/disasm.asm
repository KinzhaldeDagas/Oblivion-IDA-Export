0x722FC0: push    esi
0x722FC1: mov     esi, [esp+4+arg_0]
0x722FC5: push    edi
0x722FC6: push    esi
0x722FC7: mov     edi, ecx
0x722FC9: call    sub_707A40
0x722FCE: mov     ecx, [edi+0B4h]
0x722FD4: mov     eax, [esi]
0x722FD6: mov     edx, [eax+0B4h]
0x722FDC: push    ecx
0x722FDD: mov     ecx, esi
0x722FDF: call    edx
0x722FE1: mov     eax, [edi+0B8h]
0x722FE7: test    eax, eax
0x722FE9: jz      short loc_72300E
0x722FEB: mov     edx, [esi]
0x722FED: push    eax
0x722FEE: mov     eax, [edx+0C8h]
0x722FF4: mov     ecx, esi
0x722FF6: call    eax
0x722FF8: mov     eax, [edi+0B8h]
0x722FFE: mov     ecx, [eax+0Ch]
0x723001: mov     edx, [esi]
0x723003: mov     edx, [edx+0C4h]
0x723009: push    ecx
0x72300A: mov     ecx, esi
0x72300C: call    edx
0x72300E: pop     edi
0x72300F: pop     esi
0x723010: retn    4
