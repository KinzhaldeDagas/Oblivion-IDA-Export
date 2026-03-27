0x543D30: push    0FFFFFFFFh
0x543D32: push    offset ??0bhkBallAndSocketConstraint@@QAE@XZ_SEH
0x543D37: mov     eax, large fs:0
0x543D3D: push    eax
0x543D3E: push    ecx
0x543D3F: push    ebx
0x543D40: push    esi
0x543D41: push    edi
0x543D42: mov     eax, ds:0B30AACh
0x543D47: xor     eax, esp
0x543D49: push    eax
0x543D4A: lea     eax, [esp+20h+var_C]
0x543D4E: mov     large fs:0, eax
0x543D54: mov     esi, ecx
0x543D56: push    0DCh ; 'Ü'; Size
0x543D5B: call    FormHeapAlloc
0x543D60: add     esp, 4
0x543D63: mov     [esp+20h+var_10], eax
0x543D67: test    eax, eax
0x543D69: mov     [esp+20h+var_4], 0
0x543D71: jz      short loc_543D80
0x543D73: push    0
0x543D75: mov     ecx, eax; this
0x543D77: call    ??0NiNode@@QAE@XZ; NiNode::NiNode(void)
0x543D7C: mov     ebx, eax
0x543D7E: jmp     short loc_543D82
0x543D80: xor     ebx, ebx
0x543D82: mov     edi, [esi+4]
0x543D85: cmp     edi, ebx
0x543D87: mov     [esp+20h+var_4], 0FFFFFFFFh
0x543D8F: jz      short loc_543DC2
0x543D91: test    edi, edi
0x543D93: jz      short loc_543DB1
0x543D95: lea     eax, [edi+4]
0x543D98: push    eax; lpAddend
0x543D99: call    dword ptr ds:0A2807Ch
0x543D9F: test    eax, eax
0x543DA1: jnz     short loc_543DB1
0x543DA3: test    edi, edi
0x543DA5: jz      short loc_543DB1
0x543DA7: mov     edx, [edi]
0x543DA9: mov     eax, [edx]
0x543DAB: push    1
0x543DAD: mov     ecx, edi
0x543DAF: call    eax
0x543DB1: test    ebx, ebx
0x543DB3: mov     [esi+4], ebx
0x543DB6: jz      short loc_543DC2
0x543DB8: add     ebx, 4
0x543DBB: push    ebx; lpAddend
0x543DBC: call    dword ptr ds:0A28078h
0x543DC2: mov     eax, [esi+4]
0x543DC5: or      word ptr [eax+18h], 2
0x543DCA: mov     eax, [esi+4]
0x543DCD: or      word ptr [eax+18h], 20h
0x543DD2: mov     ecx, [esp+20h+arg_0]
0x543DD6: mov     edx, [ecx]
0x543DD8: mov     eax, [esi+4]
0x543DDB: mov     edx, [edx+84h]
0x543DE1: push    1
0x543DE3: push    eax
0x543DE4: call    edx
0x543DE6: mov     ecx, dword ptr [esp+20h+var_C]
0x543DEA: mov     large fs:0, ecx
0x543DF1: pop     ecx
0x543DF2: pop     edi
0x543DF3: pop     esi
0x543DF4: pop     ebx
0x543DF5: add     esp, 10h
0x543DF8: retn    4
