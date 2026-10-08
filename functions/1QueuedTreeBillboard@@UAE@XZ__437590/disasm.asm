0x437590: push    0FFFFFFFFh; QueuedTreeBillboard destructor: frees copied billboard context arrays at +0x30 through 0x4B9CF0, then releases QueuedTexture base resources.
0x437592: push    offset ??1QueuedTreeBillboard@@UAE@XZ_SEH
0x437597: mov     eax, large fs:0
0x43759D: push    eax
0x43759E: push    ecx
0x43759F: push    esi
0x4375A0: push    edi; Verified destructor ownership chain: frees both context arrays through DistantTreeBillboardContext_FreeArrays, frees the context, then runs QueuedTexture destructor to release resolved resource/path and queued base.
0x4375A1: mov     eax, ___security_cookie
0x4375A6: xor     eax, esp
0x4375A8: push    eax
0x4375A9: lea     eax, [esp+1Ch+var_C]
0x4375AD: mov     large fs:0, eax
0x4375B3: mov     esi, ecx
0x4375B5: mov     [esp+1Ch+var_10], esi
0x4375B9: mov     dword ptr [esi], offset ??_7QueuedTreeBillboard@@6B@; const QueuedTreeBillboard::`vftable'
0x4375BF: mov     edi, [esi+30h]
0x4375C2: test    edi, edi
0x4375C4: mov     [esp+1Ch+var_4], 0
0x4375CC: jz      short loc_4375DE
0x4375CE: mov     ecx, edi
0x4375D0: call    DistantTreeBillboardContext_FreeArrays; Verified: frees the context's copied NiPoint3 array at +0x14 and float array at +0x18; called by QueuedTreeBillboard destructor before QueuedTexture base cleanup.
0x4375D5: push    edi
0x4375D6: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x4375DB: add     esp, 4
0x4375DE: mov     ecx, esi; this
0x4375E0: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x4375E8: call    QueuedTexture_dtor; QueuedTexture destructor: releases loaded resource at +0x28, frees copied path at +0x20, then chains to queued base.
0x4375ED: mov     ecx, [esp+1Ch+var_C]
0x4375F1: mov     large fs:0, ecx
0x4375F8: pop     ecx
0x4375F9: pop     edi
0x4375FA: pop     esi
0x4375FB: add     esp, 10h
0x4375FE: retn
0x9AC490: mov     ecx, [ebp-10h]; this
0x9AC493: jmp     QueuedTexture_dtor; QueuedTexture destructor: releases loaded resource at +0x28, frees copied path at +0x20, then chains to queued base.
0x9AC498: mov     edx, [esp+arg_4]
0x9AC49C: lea     eax, [edx-0Ch]
0x9AC49F: mov     ecx, [edx-10h]
0x9AC4A2: xor     ecx, eax
0x9AC4A4: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9AC4A9: mov     eax, offset stru_AD915C
0x9AC4AE: jmp     ___CxxFrameHandler3
