0x8B9820: push    0FFFFFFFFh
0x8B9822: push    offset SEH_8B9820
0x8B9827: mov     eax, large fs:0
0x8B982D: push    eax
0x8B982E: push    ecx
0x8B982F: push    ebx
0x8B9830: push    esi
0x8B9831: mov     eax, ds:0B30AACh
0x8B9836: xor     eax, esp
0x8B9838: push    eax
0x8B9839: lea     eax, [esp+1Ch+var_C]
0x8B983D: mov     large fs:0, eax
0x8B9843: mov     esi, ecx
0x8B9845: push    offset stru_BA7C80; lpCriticalSection
0x8B984A: call    dword ptr ds:0A2806Ch
0x8B9850: call    dword ptr ds:0A2808Ch
0x8B9856: add     dword ptr ds:0BA7CFCh, 1
0x8B985D: push    1
0x8B985F: push    50h ; 'P'
0x8B9861: mov     ecx, offset FormHeap
0x8B9866: mov     ds:0BA7CF8h, eax
0x8B986B: call    j_MemoryHeap_Alloc
0x8B9870: mov     ebx, eax
0x8B9872: mov     cl, bl
0x8B9874: and     cl, 0Fh
0x8B9877: mov     al, 10h
0x8B9879: sub     al, cl
0x8B987B: movzx   edx, al
0x8B987E: add     ebx, edx
0x8B9880: mov     [ebx-1], al
0x8B9883: mov     [esp+1Ch+var_10], ebx
0x8B9887: mov     ecx, ebx
0x8B9889: mov     [esp+1Ch+var_4], 0
0x8B9891: call    sub_8A4150
0x8B9896: mov     eax, [esp+1Ch+arg_0]
0x8B989A: push    eax
0x8B989B: mov     dword ptr [ebx], offset ??_7bhkRigidBodyT@@6B@; const bhkRigidBodyT::`vftable'
0x8B98A1: mov     dword ptr [ebx+18h], 0
0x8B98A8: add     dword ptr ds:0BA8014h, 1
0x8B98AF: push    ebx
0x8B98B0: mov     ecx, esi
0x8B98B2: mov     [esp+24h+var_4], 0FFFFFFFFh
0x8B98BA: call    sub_8B8E70
0x8B98BF: sub     dword ptr ds:0BA7CFCh, 1
0x8B98C6: jnz     short loc_8B98D2
0x8B98C8: mov     dword ptr ds:0BA7CF8h, 0
0x8B98D2: push    offset stru_BA7C80; lpCriticalSection
0x8B98D7: call    dword ptr ds:0A28074h
0x8B98DD: mov     eax, ebx
0x8B98DF: mov     ecx, [esp+1Ch+var_C]
0x8B98E3: mov     large fs:0, ecx
0x8B98EA: pop     ecx
0x8B98EB: pop     esi
0x8B98EC: pop     ebx
0x8B98ED: add     esp, 10h
0x8B98F0: retn    4
