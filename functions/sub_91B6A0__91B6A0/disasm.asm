0x91B6A0: sub     esp, 234h
0x91B6A6: mov     eax, ds:0B30AACh
0x91B6AB: push    ebx
0x91B6AC: push    ebp
0x91B6AD: mov     ebp, [esp+23Ch+arg_0]
0x91B6B4: mov     [esp+23Ch+var_4], eax
0x91B6BB: mov     eax, [ebp+14h]
0x91B6BE: test    eax, eax
0x91B6C0: push    esi
0x91B6C1: push    edi
0x91B6C2: mov     ebx, ecx
0x91B6C4: jz      loc_91B8A7
0x91B6CA: mov     ecx, [ebx+0Ch]
0x91B6CD: mov     esi, [ebp+8]
0x91B6D0: xor     eax, eax
0x91B6D2: test    ecx, ecx
0x91B6D4: jle     loc_91B8A7
0x91B6DA: mov     edx, [ebx+8]
0x91B6DD: lea     ecx, [ecx+0]
0x91B6E0: mov     edi, [edx]
0x91B6E2: cmp     [edi], esi
0x91B6E4: jz      short loc_91B6F3
0x91B6E6: inc     eax
0x91B6E7: add     edx, 4
0x91B6EA: cmp     eax, ecx
0x91B6EC: jl      short loc_91B6E0
0x91B6EE: jmp     loc_91B8A7
0x91B6F3: xor     edi, edi
0x91B6F5: cmp     eax, edi
0x91B6F7: jl      loc_91B8A7
0x91B6FD: mov     ecx, [ebx+8]
0x91B700: mov     edx, [ecx+eax*4]
0x91B703: lea     ecx, [esp+244h+var_224]
0x91B707: mov     [esp+244h+var_228], edx
0x91B70B: mov     [esp+244h+var_234], edi
0x91B70F: mov     [esp+244h+var_230], edi
0x91B713: mov     [esp+244h+var_22C], 80000000h
0x91B71B: call    sub_94B840
0x91B720: lea     eax, [esp+244h+var_224]
0x91B724: push    eax
0x91B725: lea     ecx, [esp+248h+var_214]
0x91B729: call    sub_94B850
0x91B72E: mov     edx, [ebp+14h]
0x91B731: lea     ecx, [esp+244h+var_234]
0x91B735: push    ecx
0x91B736: push    edx
0x91B737: lea     ecx, [esp+24Ch+var_214]
0x91B73B: call    sub_94CC50
0x91B740: mov     esi, [esp+244h+var_230]
0x91B744: dec     esi
0x91B745: cmp     esi, edi
0x91B747: jl      short loc_91B7C7
0x91B749: mov     edi, 6
0x91B74E: mov     edi, edi
0x91B750: mov     eax, [esp+244h+var_234]
0x91B754: mov     eax, [eax+esi*4]
0x91B757: cmp     [eax+54h], edi
0x91B75A: jnz     short loc_91B7C4
0x91B75C: mov     ecx, [eax+50h]
0x91B75F: test    ecx, ecx
0x91B761: jnz     short loc_91B7C4
0x91B763: push    ecx
0x91B764: mov     eax, esp
0x91B766: push    200h
0x91B76B: lea     ecx, [esp+24Ch+var_204]
0x91B76F: push    ecx
0x91B770: lea     ecx, [esp+250h+var_220]
0x91B774: mov     byte ptr [eax], 1
0x91B777: call    sub_8BBFB0
0x91B77C: push    offset aUnableToBuildD; "Unable to build display geometry from h"...
0x91B781: lea     ecx, [esp+248h+var_220]
0x91B785: call    sub_8BBDB0
0x91B78A: mov     ecx, ds:0BA7FB0h
0x91B790: mov     edx, [ecx]
0x91B792: push    0A6h ; '¦'
0x91B797: push    offset a_Visualdebug_1; ".\\visualdebugger\\viewer\\hkConvexRadi"...
0x91B79C: lea     eax, [esp+24Ch+var_204]
0x91B7A0: push    eax
0x91B7A1: push    0FFFFFFFFh
0x91B7A3: push    0
0x91B7A5: call    dword ptr [edx+8]
0x91B7A8: lea     ecx, [esp+244h+var_220]
0x91B7AC: call    sub_8BC000
0x91B7B1: mov     eax, [esp+244h+var_230]
0x91B7B5: mov     ecx, [esp+244h+var_234]
0x91B7B9: dec     eax
0x91B7BA: mov     [esp+244h+var_230], eax
0x91B7BE: mov     edx, [ecx+eax*4]
0x91B7C1: mov     [ecx+esi*4], edx
0x91B7C4: dec     esi
0x91B7C5: jns     short loc_91B750
0x91B7C7: mov     eax, [esp+244h+var_230]
0x91B7CB: test    eax, eax
0x91B7CD: jle     short loc_91B841
0x91B7CF: mov     esi, [esp+244h+var_228]
0x91B7D3: mov     eax, [esi+0Ch]
0x91B7D6: mov     ecx, [esi+8]
0x91B7D9: add     esi, 4
0x91B7DC: and     eax, 3FFFFFFFh
0x91B7E1: cmp     ecx, eax
0x91B7E3: lea     edi, [ebp+17h]
0x91B7E6: jnz     short loc_91B7F3
0x91B7E8: push    4
0x91B7EA: push    esi
0x91B7EB: call    sub_8A6EE0
0x91B7F0: add     esp, 8
0x91B7F3: mov     ecx, [esi+4]
0x91B7F6: mov     edx, [esi]
0x91B7F8: mov     [edx+ecx*4], edi
0x91B7FB: inc     dword ptr [esi+4]
0x91B7FE: mov     edx, ds:0BA842Ch
0x91B804: mov     ecx, [ebx-10h]
0x91B807: mov     eax, [ecx]
0x91B809: push    edx
0x91B80A: mov     edx, [ebp+50h]
0x91B80D: push    edi
0x91B80E: add     edx, 10h
0x91B811: push    edx
0x91B812: lea     edx, [esp+250h+var_234]
0x91B816: push    edx
0x91B817: call    dword ptr [eax+4]
0x91B81A: mov     edx, ds:0BA842Ch
0x91B820: mov     al, [ebp+91h]
0x91B826: mov     ecx, [ebx-10h]
0x91B829: push    edx
0x91B82A: mov     edx, ds:0BA8430h
0x91B830: test    al, al
0x91B832: mov     eax, [ecx]
0x91B834: push    edi
0x91B835: jnz     short loc_91B83D
0x91B837: mov     edx, ds:0BA8434h
0x91B83D: push    edx
0x91B83E: call    dword ptr [eax+8]
0x91B841: mov     eax, [esp+244h+var_230]
0x91B845: xor     esi, esi
0x91B847: test    eax, eax
0x91B849: jle     short loc_91B86A
0x91B84B: jmp     short loc_91B850
0x91B84D: align 10h
0x91B850: mov     eax, [esp+244h+var_234]
0x91B854: mov     ecx, [eax+esi*4]
0x91B857: test    ecx, ecx
0x91B859: jz      short loc_91B861
0x91B85B: mov     edx, [ecx]
0x91B85D: push    1
0x91B85F: call    dword ptr [edx]
0x91B861: mov     eax, [esp+244h+var_230]
0x91B865: inc     esi
0x91B866: cmp     esi, eax
0x91B868: jl      short loc_91B850
0x91B86A: mov     eax, [esp+244h+var_22C]
0x91B86E: test    eax, eax
0x91B870: js      short loc_91B8A7
0x91B872: mov     ecx, ds:0BA9DE4h
0x91B878: mov     edx, large fs:2Ch
0x91B87F: mov     ecx, [edx+ecx*4]
0x91B882: mov     ecx, [ecx+19Ch]
0x91B888: test    ecx, ecx
0x91B88A: jnz     short loc_91B892
0x91B88C: mov     ecx, ds:0BA7D9Ch
0x91B892: mov     edx, [esp+244h+var_234]
0x91B896: and     eax, 3FFFFFFFh
0x91B89B: push    14h
0x91B89D: shl     eax, 2
0x91B8A0: push    eax
0x91B8A1: push    edx
0x91B8A2: call    sub_8A75D0
0x91B8A7: mov     ecx, [esp+244h+var_4]
0x91B8AE: call    @__security_check_cookie@4; __security_check_cookie(x)
0x91B8B3: pop     edi
0x91B8B4: pop     esi
0x91B8B5: pop     ebp
0x91B8B6: pop     ebx
0x91B8B7: add     esp, 234h
0x91B8BD: retn    4
