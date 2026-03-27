0x5254D0: push    ebx
0x5254D1: push    ebp
0x5254D2: push    esi
0x5254D3: mov     ebx, 1
0x5254D8: test    ds:0B362F8h, bl
0x5254DE: push    edi
0x5254DF: mov     esi, ecx
0x5254E1: jnz     short loc_525500
0x5254E3: or      ds:0B362F8h, ebx
0x5254E9: push    offset sub_A1C190; void (__cdecl *)()
0x5254EE: mov     dword ptr ds:0B362F4h, 0
0x5254F8: call    _atexit
0x5254FD: add     esp, 4
0x525500: movzx   ecx, word ptr [esi+0Ah]
0x525504: mov     eax, [esp+10h+arg_0]
0x525508: cmp     eax, ecx
0x52550A: mov     ebp, [esp+10h+arg_4]
0x52550E: jb      short loc_525528
0x525510: lea     edx, [eax+1]
0x525513: mov     [esi+0Ah], dx
0x525517: mov     ecx, [ebp+0]
0x52551A: cmp     ecx, ds:0B362F4h
0x525520: jz      short loc_52554C
0x525522: add     [esi+0Ch], bx
0x525526: jmp     short loc_52554C
0x525528: mov     ecx, ds:0B362F4h
0x52552E: cmp     [ebp+0], ecx
0x525531: mov     edx, [esi+4]
0x525534: jz      short loc_525541
0x525536: cmp     [edx+eax*4], ecx
0x525539: jnz     short loc_52554C
0x52553B: add     [esi+0Ch], bx
0x52553F: jmp     short loc_52554C
0x525541: cmp     [edx+eax*4], ecx
0x525544: jz      short loc_52554C
0x525546: add     word ptr [esi+0Ch], 0FFFFh
0x52554C: mov     ecx, [esi+4]
0x52554F: mov     esi, [ecx+eax*4]
0x525552: cmp     esi, [ebp+0]
0x525555: lea     edi, [ecx+eax*4]
0x525558: jz      short loc_52558C
0x52555A: test    esi, esi
0x52555C: jz      short loc_525579
0x52555E: lea     edx, [esi+4]
0x525561: push    edx; lpAddend
0x525562: call    dword ptr ds:0A2807Ch
0x525568: test    eax, eax
0x52556A: jnz     short loc_525579
0x52556C: test    esi, esi
0x52556E: jz      short loc_525579
0x525570: mov     eax, [esi]
0x525572: mov     edx, [eax]
0x525574: push    ebx
0x525575: mov     ecx, esi
0x525577: call    edx
0x525579: mov     eax, [ebp+0]
0x52557C: test    eax, eax
0x52557E: mov     [edi], eax
0x525580: jz      short loc_52558C
0x525582: add     eax, 4
0x525585: push    eax; lpAddend
0x525586: call    dword ptr ds:0A28078h
0x52558C: pop     edi
0x52558D: pop     esi
0x52558E: pop     ebp
0x52558F: pop     ebx
0x525590: retn    8
