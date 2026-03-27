0x437590: push    0FFFFFFFFh
0x437592: push    offset ??1QueuedTreeBillboard@@UAE@XZ_SEH
0x437597: mov     eax, large fs:0
0x43759D: push    eax
0x43759E: push    ecx
0x43759F: push    esi
0x4375A0: push    edi
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
0x4375D0: call    sub_4B9CF0
0x4375D5: push    edi
0x4375D6: call    FormHeapFree
0x4375DB: add     esp, 4
0x4375DE: mov     ecx, esi; this
0x4375E0: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x4375E8: call    ??1QueuedTexture@@UAE@XZ; QueuedTexture::~QueuedTexture(void)
0x4375ED: mov     ecx, [esp+1Ch+var_C]
0x4375F1: mov     large fs:0, ecx
0x4375F8: pop     ecx
0x4375F9: pop     edi
0x4375FA: pop     esi
0x4375FB: add     esp, 10h
0x4375FE: retn
