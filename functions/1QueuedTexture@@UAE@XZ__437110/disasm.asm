0x437110: push    0FFFFFFFFh
0x437112: push    offset ??1DistantLODLoaderTask@@UAE@XZ_SEH
0x437117: mov     eax, large fs:0
0x43711D: push    eax
0x43711E: push    ecx
0x43711F: push    esi
0x437120: push    edi
0x437121: mov     eax, ___security_cookie
0x437126: xor     eax, esp
0x437128: push    eax
0x437129: lea     eax, [esp+1Ch+var_C]
0x43712D: mov     large fs:0, eax
0x437133: mov     edi, ecx
0x437135: mov     [esp+1Ch+var_10], edi
0x437139: mov     esi, [edi+28h]
0x43713C: test    esi, esi
0x43713E: mov     [esp+1Ch+var_4], 0
0x437146: jz      short loc_437164
0x437148: lea     eax, [esi+4]
0x43714B: push    eax; lpAddend
0x43714C: call    ds:InterlockedDecrement
0x437152: test    eax, eax
0x437154: jnz     short loc_437164
0x437156: test    esi, esi
0x437158: jz      short loc_437164
0x43715A: mov     edx, [esi]
0x43715C: mov     eax, [edx]
0x43715E: push    1
0x437160: mov     ecx, esi
0x437162: call    eax
0x437164: mov     ecx, [edi+20h]
0x437167: push    ecx
0x437168: mov     [esp+20h+var_4], 0FFFFFFFFh
0x437170: mov     dword ptr [edi], offset ??_7QueuedFileEntry@@6B@; const QueuedFileEntry::`vftable'
0x437176: call    FormHeapFree
0x43717B: add     esp, 4
0x43717E: mov     ecx, edi; this
0x437180: call    ??1QueuedMagicItem@@UAE@XZ; QueuedMagicItem::~QueuedMagicItem(void)
0x437185: mov     ecx, dword ptr [esp+1Ch+var_C]
0x437189: mov     large fs:0, ecx
0x437190: pop     ecx
0x437191: pop     edi
0x437192: pop     esi
0x437193: add     esp, 10h
0x437196: retn
