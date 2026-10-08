0x7237D0: push    0FFFFFFFFh
0x7237D2: push    offset ??1NiLODNode@@UAE@XZ_SEH
0x7237D7: mov     eax, large fs:0
0x7237DD: push    eax
0x7237DE: push    ecx
0x7237DF: push    esi
0x7237E0: push    edi
0x7237E1: mov     eax, ds:0B30AACh
0x7237E6: xor     eax, esp
0x7237E8: push    eax
0x7237E9: lea     eax, [esp+1Ch+var_C]
0x7237ED: mov     large fs:0, eax
0x7237F3: mov     edi, ecx
0x7237F5: mov     [esp+1Ch+var_10], edi
0x7237F9: mov     dword ptr [edi], offset ??_7NiLODNode@@6B@; const NiLODNode::`vftable'
0x7237FF: mov     esi, [edi+0FCh]
0x723805: test    esi, esi
0x723807: mov     [esp+1Ch+var_4], 0
0x72380F: jz      short loc_72382D
0x723811: lea     eax, [esi+4]
0x723814: push    eax; lpAddend
0x723815: call    dword ptr ds:0A2807Ch
0x72381B: test    eax, eax
0x72381D: jnz     short loc_72382D
0x72381F: test    esi, esi
0x723821: jz      short loc_72382D
0x723823: mov     edx, [esi]
0x723825: mov     eax, [edx]
0x723827: push    1
0x723829: mov     ecx, esi
0x72382B: call    eax
0x72382D: mov     ecx, [edi+0F0h]
0x723833: push    ecx
0x723834: mov     [esp+20h+var_4], 0FFFFFFFFh
0x72383C: mov     dword ptr [edi+0ECh], offset ??_7?$NiTArray@I@@6B@; const NiTArray<uint>::`vftable'
0x723846: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x72384B: add     esp, 4
0x72384E: mov     ecx, edi; this
0x723850: call    ??1NiBSPNode@@UAE@XZ; NiBSPNode::~NiBSPNode(void)
0x723855: mov     ecx, dword ptr [esp+1Ch+var_C]
0x723859: mov     large fs:0, ecx
0x723860: pop     ecx
0x723861: pop     edi
0x723862: pop     esi
0x723863: add     esp, 10h
0x723866: retn
0x7237A0: push    esi
0x7237A1: mov     esi, ecx
0x7237A3: mov     eax, [esi+0F0h]
0x7237A9: push    eax
0x7237AA: mov     dword ptr [esi+0ECh], offset ??_7?$NiTArray@I@@6B@; const NiTArray<uint>::`vftable'
0x7237B4: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x7237B9: add     esp, 4
0x7237BC: mov     ecx, esi; this
0x7237BE: pop     esi
0x7237BF: jmp     ??1NiBSPNode@@UAE@XZ; NiBSPNode::~NiBSPNode(void)
0x9CA450: mov     ecx, [ebp-10h]
0x9CA453: jmp     loc_7237A0
0x9CA458: mov     edx, [esp+arg_4]
0x9CA45C: lea     eax, [edx-0Ch]
0x9CA45F: mov     ecx, [edx-10h]
0x9CA462: xor     ecx, eax
0x9CA464: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CA469: mov     eax, offset stru_AF2B50
0x9CA46E: jmp     ___CxxFrameHandler3
