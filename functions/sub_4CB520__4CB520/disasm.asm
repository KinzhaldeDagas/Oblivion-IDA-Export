0x4CB520: push    ebx
0x4CB521: push    ebp
0x4CB522: mov     ebp, [esp+8+arg_0]
0x4CB526: test    ebp, ebp
0x4CB528: mov     ebx, ecx
0x4CB52A: jz      short loc_4CB581
0x4CB52C: push    esi
0x4CB52D: push    ebx; a2
0x4CB52E: mov     ecx, offset stru_B35C80; this
0x4CB533: call    sub_496EA0
0x4CB538: lea     esi, [ebx+48h]
0x4CB53B: test    esi, esi
0x4CB53D: jz      short loc_4CB575
0x4CB53F: push    edi
0x4CB540: mov     edi, [esi]
0x4CB542: test    edi, edi
0x4CB544: jz      short loc_4CB56D
0x4CB546: mov     eax, [edi]
0x4CB548: mov     edx, [eax+170h]
0x4CB54E: mov     ecx, edi
0x4CB550: call    edx
0x4CB552: cmp     eax, ds:0B35EA8h
0x4CB558: jnz     short loc_4CB56D
0x4CB55A: mov     ecx, edi
0x4CB55C: call    sub_4D7730
0x4CB561: test    eax, eax
0x4CB563: jz      short loc_4CB56D
0x4CB565: push    edi
0x4CB566: mov     ecx, ebp
0x4CB568: call    BSSimpleList_PushFront
0x4CB56D: mov     esi, [esi+4]
0x4CB570: test    esi, esi
0x4CB572: jnz     short loc_4CB540
0x4CB574: pop     edi
0x4CB575: push    ebx; a2
0x4CB576: mov     ecx, offset stru_B35C80; this
0x4CB57B: call    sub_496F50
0x4CB580: pop     esi
0x4CB581: pop     ebp
0x4CB582: pop     ebx
0x4CB583: retn    4
