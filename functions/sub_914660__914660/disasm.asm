0x914660: push    esi
0x914661: mov     esi, [esp+4+arg_0]
0x914665: mov     eax, [esi]
0x914667: push    edi
0x914668: mov     edi, ecx
0x91466A: push    edi
0x91466B: push    1
0x91466D: push    offset aMoppshape; "MoppShape"
0x914672: mov     ecx, esi
0x914674: call    dword ptr [eax]
0x914676: mov     eax, [edi+0Ch]
0x914679: mov     edx, [esi]
0x91467B: push    eax
0x91467C: push    1
0x91467E: push    offset aMesh; "Mesh"
0x914683: mov     ecx, esi
0x914685: call    dword ptr [edx+8]
0x914688: mov     edi, [edi+10h]
0x91468B: mov     eax, [edi+24h]
0x91468E: mov     edx, [esi]
0x914690: push    0
0x914692: push    eax
0x914693: push    edi
0x914694: push    1
0x914696: push    offset aMopp; "Mopp"
0x91469B: mov     ecx, esi
0x91469D: call    dword ptr [edx+4]
0x9146A0: mov     edx, [esi]
0x9146A2: mov     ecx, esi
0x9146A4: call    dword ptr [edx+14h]
0x9146A7: pop     edi
0x9146A8: pop     esi
0x9146A9: retn    4
