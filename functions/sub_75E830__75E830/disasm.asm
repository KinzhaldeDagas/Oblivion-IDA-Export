0x75E830: mov     eax, [esp+arg_4]
0x75E834: push    esi
0x75E835: push    edi
0x75E836: mov     edi, [esp+8+arg_0]
0x75E83A: push    eax
0x75E83B: push    edi
0x75E83C: mov     esi, ecx
0x75E83E: call    sub_752C40
0x75E843: mov     ecx, [esi+18h]
0x75E846: mov     [edi+18h], ecx
0x75E849: fld     dword ptr [esi+1Ch]
0x75E84C: fstp    dword ptr [edi+1Ch]
0x75E84F: fld     dword ptr [esi+20h]
0x75E852: fstp    dword ptr [edi+20h]
0x75E855: mov     dl, [esi+24h]
0x75E858: mov     [edi+24h], dl
0x75E85B: fld     dword ptr [esi+28h]
0x75E85E: fstp    dword ptr [edi+28h]
0x75E861: fld     dword ptr [esi+2Ch]
0x75E864: fstp    dword ptr [edi+2Ch]
0x75E867: pop     edi
0x75E868: pop     esi
0x75E869: retn    8
