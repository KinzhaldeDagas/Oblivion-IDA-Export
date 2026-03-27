0x4781D0: push    ecx
0x4781D1: mov     eax, [ecx+60h]
0x4781D4: test    eax, eax
0x4781D6: mov     [esp+4+var_4], 0
0x4781DD: jz      short loc_478207
0x4781DF: cmp     eax, 0FFFFFFFFh
0x4781E2: jz      short loc_478207
0x4781E4: mov     eax, [esp+4+arg_8]
0x4781E8: mov     edx, [esp+4+arg_4]
0x4781EC: push    esi
0x4781ED: mov     esi, [esp+8+arg_0]
0x4781F1: push    eax
0x4781F2: push    edx
0x4781F3: push    ecx
0x4781F4: mov     ecx, ds:0B33A1Ch
0x4781FA: push    esi
0x4781FB: call    sub_43BAF0
0x478200: mov     eax, esi
0x478202: pop     esi
0x478203: pop     ecx
0x478204: retn    0Ch
0x478207: mov     eax, [esp+4+arg_0]
0x47820B: mov     dword ptr [eax], 0
0x478211: pop     ecx
0x478212: retn    0Ch
