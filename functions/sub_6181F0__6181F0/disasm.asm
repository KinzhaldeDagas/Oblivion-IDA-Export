0x6181F0: push    ecx
0x6181F1: mov     ecx, ds:0B33B00h
0x6181F7: push    ebp
0x6181F8: push    2; Size
0x6181FA: lea     eax, [esp+0Ch+Dst]
0x6181FE: xor     ebp, ebp
0x618200: push    eax; Dst
0x618201: mov     [esp+10h+Dst], ebp
0x618205: call    SaveLoad_LoadData
0x61820A: cmp     word ptr [esp+8+Dst], bp
0x61820F: jz      short loc_61827C
0x618211: push    8; Size
0x618213: call    FormHeapAlloc
0x618218: add     esp, 4
0x61821B: cmp     eax, ebp
0x61821D: jz      short loc_618226
0x61821F: mov     [eax], ebp
0x618221: mov     [eax+4], ebp
0x618224: jmp     short loc_618228
0x618226: xor     eax, eax
0x618228: push    ebx
0x618229: mov     ebx, [esp+0Ch+arg_0]
0x61822D: push    edi
0x61822E: xor     edi, edi
0x618230: cmp     word ptr [esp+10h+Dst], bp
0x618235: mov     [ebx], eax
0x618237: jbe     short loc_618275
0x618239: push    esi
0x61823A: lea     ebx, [ebx+0]
0x618240: push    8; Size
0x618242: call    FormHeapAlloc
0x618247: add     esp, 4
0x61824A: cmp     eax, ebp
0x61824C: jz      short loc_618257
0x61824E: mov     [eax], ebp
0x618250: mov     [eax+4], ebp
0x618253: mov     esi, eax
0x618255: jmp     short loc_618259
0x618257: xor     esi, esi
0x618259: mov     ecx, esi
0x61825B: call    sub_614DB0
0x618260: mov     ecx, [ebx]
0x618262: push    esi
0x618263: call    BSSimpleList_PushBack
0x618268: movzx   ecx, word ptr [esp+14h+Dst]
0x61826D: add     edi, 1
0x618270: cmp     edi, ecx
0x618272: jl      short loc_618240
0x618274: pop     esi
0x618275: pop     edi
0x618276: pop     ebx
0x618277: pop     ebp
0x618278: pop     ecx
0x618279: retn    4
0x61827C: mov     edx, [esp+8+arg_0]
0x618280: mov     [edx], ebp
0x618282: pop     ebp
0x618283: pop     ecx
0x618284: retn    4
