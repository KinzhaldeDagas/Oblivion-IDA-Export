0x7177E0: push    0FFFFFFFFh
0x7177E2: push    offset SEH_8C62B0
0x7177E7: mov     eax, large fs:0
0x7177ED: push    eax
0x7177EE: push    ecx
0x7177EF: push    esi
0x7177F0: mov     eax, ds:0B30AACh
0x7177F5: xor     eax, esp
0x7177F7: push    eax
0x7177F8: lea     eax, [esp+18h+var_C]
0x7177FC: mov     large fs:0, eax
0x717802: mov     esi, ecx
0x717804: push    44h ; 'D'; Size
0x717806: call    FormHeapAlloc
0x71780B: add     esp, 4
0x71780E: mov     [esp+18h+var_10], eax
0x717812: test    eax, eax
0x717814: mov     [esp+18h+var_4], 0
0x71781C: jz      short loc_71784A
0x71781E: mov     ecx, [esp+18h+arg_18]
0x717822: mov     edx, [esp+18h+arg_14]
0x717826: push    ecx
0x717827: mov     ecx, [esp+1Ch+arg_10]
0x71782B: push    edx
0x71782C: mov     edx, [esp+20h+arg_C]
0x717830: push    ecx
0x717831: mov     ecx, [esp+24h+arg_8]
0x717835: push    edx
0x717836: mov     edx, [esp+28h+arg_4]
0x71783A: push    ecx
0x71783B: mov     ecx, [esp+2Ch+arg_0]
0x71783F: push    edx
0x717840: push    ecx
0x717841: mov     ecx, eax
0x717843: call    sub_732A30
0x717848: jmp     short loc_71784C
0x71784A: xor     eax, eax
0x71784C: push    eax; a2
0x71784D: mov     ecx, esi; this
0x71784F: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x717857: call    NiGeometry__NiGeometry
0x71785C: mov     dword ptr [esi], offset ??_7NiLines@@6B@; const NiLines::`vftable'
0x717862: mov     eax, esi
0x717864: mov     ecx, [esp+18h+var_C]
0x717868: mov     large fs:0, ecx
0x71786F: pop     ecx
0x717870: pop     esi
0x717871: add     esp, 10h
0x717874: retn    1Ch
