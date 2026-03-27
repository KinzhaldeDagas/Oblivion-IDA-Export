0x6C6610: push    0FFFFFFFFh
0x6C6612: push    offset SEH_6C6610
0x6C6617: mov     eax, large fs:0
0x6C661D: push    eax
0x6C661E: push    ecx
0x6C661F: push    ebx
0x6C6620: push    esi
0x6C6621: push    edi
0x6C6622: mov     eax, ds:0B30AACh
0x6C6627: xor     eax, esp
0x6C6629: push    eax
0x6C662A: lea     eax, [esp+20h+var_C]
0x6C662E: mov     large fs:0, eax
0x6C6634: mov     edi, ecx
0x6C6636: mov     esi, [esp+20h+arg_4]
0x6C663A: mov     [esp+20h+var_10], 0
0x6C6642: mov     eax, [edi+14h]
0x6C6645: mov     ebx, [esp+20h+arg_0]
0x6C6649: shl     esi, 4
0x6C664C: add     eax, esi
0x6C664E: mov     eax, [eax]
0x6C6650: test    eax, eax
0x6C6652: mov     [ebx], eax
0x6C6654: jz      short loc_6C6660
0x6C6656: add     eax, 4
0x6C6659: push    eax; lpAddend
0x6C665A: call    dword ptr ds:0A28078h
0x6C6660: mov     ecx, [edi+14h]
0x6C6663: add     ecx, esi
0x6C6665: mov     [esp+20h+var_4], 0
0x6C666D: mov     [esp+20h+var_10], 1
0x6C6675: call    sub_6C6300
0x6C667A: mov     eax, [edi+18h]
0x6C667D: add     eax, esi
0x6C667F: mov     ecx, 0FFFFh
0x6C6684: mov     [eax+4], cx
0x6C6688: mov     [eax+6], cx
0x6C668C: mov     [eax+8], cx
0x6C6690: mov     [eax+0Ah], cx
0x6C6694: mov     [eax+0Ch], cx
0x6C6698: mov     eax, ebx
0x6C669A: mov     ecx, [esp+20h+var_C]
0x6C669E: mov     large fs:0, ecx
0x6C66A5: pop     ecx
0x6C66A6: pop     edi
0x6C66A7: pop     esi
0x6C66A8: pop     ebx
0x6C66A9: add     esp, 10h
0x6C66AC: retn    8
