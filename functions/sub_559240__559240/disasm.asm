0x559240: push    ebx
0x559241: push    ebp
0x559242: mov     ebp, [esp+8+arg_4]
0x559246: test    ebp, ebp
0x559248: push    esi
0x559249: mov     esi, ecx
0x55924B: jz      short loc_559253
0x55924D: cmp     ebp, [esp+0Ch+arg_C]
0x559251: jz      short loc_559258
0x559253: call    __invalid_parameter_noinfo
0x559258: mov     ebx, [esp+0Ch+arg_8]
0x55925C: mov     eax, [esp+0Ch+arg_10]
0x559260: cmp     ebx, eax
0x559262: jz      short loc_559289
0x559264: mov     ecx, [esi+8]
0x559267: push    edi
0x559268: push    ebx
0x559269: push    ecx
0x55926A: push    eax
0x55926B: call    sub_5585B0
0x559270: mov     edx, [esp+1Ch+arg_0]
0x559274: push    edx
0x559275: mov     edi, eax
0x559277: mov     eax, [esi+8]
0x55927A: push    esi
0x55927B: push    eax
0x55927C: push    edi
0x55927D: call    sub_557430
0x559282: add     esp, 1Ch
0x559285: mov     [esi+8], edi
0x559288: pop     edi
0x559289: mov     eax, [esp+0Ch+arg_0]
0x55928D: pop     esi
0x55928E: mov     [eax], ebp
0x559290: pop     ebp
0x559291: mov     [eax+4], ebx
0x559294: pop     ebx
0x559295: retn    14h
