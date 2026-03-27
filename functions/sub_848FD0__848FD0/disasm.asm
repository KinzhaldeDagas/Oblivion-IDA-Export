0x848FD0: push    esi
0x848FD1: mov     esi, [esp+4+arg_0]
0x848FD5: mov     eax, [esi]
0x848FD7: mov     edx, [eax+8Ch]
0x848FDD: push    edi
0x848FDE: mov     edi, [esp+8+arg_4]
0x848FE2: push    edi
0x848FE3: mov     ecx, esi
0x848FE5: call    edx
0x848FE7: test    eax, eax
0x848FE9: jz      short loc_848FFD
0x848FEB: mov     eax, [esi]
0x848FED: mov     edx, [eax+8Ch]
0x848FF3: push    edi
0x848FF4: mov     ecx, esi
0x848FF6: call    edx
0x848FF8: pop     edi
0x848FF9: pop     esi
0x848FFA: retn    8
0x848FFD: test    dword ptr [esi+1Ch], 80h
0x849004: mov     eax, ds:0B430F0h
0x849009: ja      short loc_849010
0x84900B: mov     eax, ds:0B430DCh
0x849010: pop     edi
0x849011: pop     esi
0x849012: retn    8
