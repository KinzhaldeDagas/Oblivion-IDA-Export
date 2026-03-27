0x6EC810: push    0FFFFFFFFh
0x6EC812: push    offset ??1NiRollController@@UAE@XZ_SEH
0x6EC817: mov     eax, large fs:0
0x6EC81D: push    eax
0x6EC81E: push    ecx
0x6EC81F: push    ebp
0x6EC820: push    esi
0x6EC821: push    edi
0x6EC822: mov     eax, ds:0B30AACh
0x6EC827: xor     eax, esp
0x6EC829: push    eax
0x6EC82A: lea     eax, [esp+20h+var_C]
0x6EC82E: mov     large fs:0, eax
0x6EC834: mov     edi, ecx
0x6EC836: mov     [esp+20h+var_10], edi
0x6EC83A: mov     dword ptr [edi], offset ??_7NiFloatController@@6B@; const NiFloatController::`vftable'
0x6EC840: mov     esi, [edi+40h]
0x6EC843: test    esi, esi
0x6EC845: mov     ebp, ds:0A2807Ch
0x6EC84B: mov     [esp+20h+var_4], 1
0x6EC853: jz      short loc_6EC874
0x6EC855: lea     eax, [esi+4]
0x6EC858: push    eax; lpAddend
0x6EC859: call    ebp ; InterlockedDecrement
0x6EC85B: test    eax, eax
0x6EC85D: jnz     short loc_6EC86D
0x6EC85F: test    esi, esi
0x6EC861: jz      short loc_6EC86D
0x6EC863: mov     edx, [esi]
0x6EC865: mov     eax, [edx]
0x6EC867: push    1
0x6EC869: mov     ecx, esi
0x6EC86B: call    eax
0x6EC86D: mov     dword ptr [edi+40h], 0
0x6EC874: mov     esi, [edi+40h]
0x6EC877: test    esi, esi
0x6EC879: mov     byte ptr [esp+20h+var_4], 0
0x6EC87E: jz      short loc_6EC898
0x6EC880: lea     ecx, [esi+4]
0x6EC883: push    ecx; lpAddend
0x6EC884: call    ebp ; InterlockedDecrement
0x6EC886: test    eax, eax
0x6EC888: jnz     short loc_6EC898
0x6EC88A: test    esi, esi
0x6EC88C: jz      short loc_6EC898
0x6EC88E: mov     edx, [esi]
0x6EC890: mov     eax, [edx]
0x6EC892: push    1
0x6EC894: mov     ecx, esi
0x6EC896: call    eax
0x6EC898: mov     ecx, edi; this
0x6EC89A: mov     [esp+20h+var_4], 0FFFFFFFFh
0x6EC8A2: call    ??1NiPSysResetOnLoopCtlr@@UAE@XZ; NiPSysResetOnLoopCtlr::~NiPSysResetOnLoopCtlr(void)
0x6EC8A7: mov     ecx, [esp+20h+var_C]
0x6EC8AB: mov     large fs:0, ecx
0x6EC8B2: pop     ecx
0x6EC8B3: pop     edi
0x6EC8B4: pop     esi
0x6EC8B5: pop     ebp
0x6EC8B6: add     esp, 10h
0x6EC8B9: retn
