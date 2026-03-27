0x495270: push    0FFFFFFFFh
0x495272: push    offset SEH_495270
0x495277: mov     eax, large fs:0
0x49527D: push    eax
0x49527E: sub     esp, 13Ch
0x495284: mov     eax, ds:0B30AACh
0x495289: xor     eax, esp
0x49528B: mov     [esp+148h+var_10], eax
0x495292: push    ebx
0x495293: push    ebp
0x495294: push    esi
0x495295: push    edi
0x495296: mov     eax, ds:0B30AACh
0x49529B: xor     eax, esp
0x49529D: push    eax
0x49529E: lea     eax, [esp+15Ch+var_C]
0x4952A5: mov     large fs:0, eax
0x4952AB: mov     edi, [esp+15Ch+arg_4]
0x4952B2: test    edi, edi
0x4952B4: mov     ebx, [esp+15Ch+arg_0]
0x4952BB: mov     ebp, ecx
0x4952BD: jz      loc_495464
0x4952C3: push    10h; Size
0x4952C5: call    FormHeapAlloc
0x4952CA: mov     esi, eax
0x4952CC: add     esp, 4
0x4952CF: mov     [esp+15Ch+var_148], esi
0x4952D3: xor     ecx, ecx
0x4952D5: cmp     esi, ecx
0x4952D7: mov     [esp+15Ch+var_4], ecx
0x4952DE: jz      short loc_495319
0x4952E0: mov     eax, 80h ; '€'
0x4952E5: mov     [esi+8], ax
0x4952E9: mov     [esi+0Eh], ax
0x4952ED: mov     edx, 4
0x4952F2: mul     edx
0x4952F4: mov     [esi+0Ah], cx
0x4952F8: mov     [esi+0Ch], cx
0x4952FC: seto    cl
0x4952FF: mov     dword ptr [esi], offset ??_7?$NiTArray@PAD@@6B@; const NiTArray<char *>::`vftable'
0x495305: neg     ecx
0x495307: or      ecx, eax
0x495309: push    ecx; Size
0x49530A: call    FormHeapAlloc
0x49530F: add     esp, 4
0x495312: mov     [esi+4], eax
0x495315: xor     ecx, ecx
0x495317: jmp     short loc_49531B
0x495319: xor     esi, esi
0x49531B: mov     eax, [edi+44h]
0x49531E: cmp     eax, 6; switch 7 cases
0x495321: mov     [esp+15Ch+var_4], 0FFFFFFFFh
0x49532C: mov     [esp+15Ch+var_140], 0FFFF0002h
0x495334: mov     [esp+15Ch+var_13C], 27h ; '''
0x49533C: mov     [esp+15Ch+var_118], edi
0x495340: ja      short def_495342
0x495342: jmp     ds:jpt_495342[eax*4]; switch jump
0x495349: mov     ecx, offset aInactive; jumptable 00495342 case 0
0x49534E: jmp     short def_495342
0x495350: mov     ecx, offset aAnimating; jumptable 00495342 case 1
0x495355: jmp     short def_495342
0x495357: mov     ecx, offset aEasein; jumptable 00495342 case 2
0x49535C: jmp     short def_495342
0x49535E: mov     ecx, offset aEaseout; jumptable 00495342 case 3
0x495363: jmp     short def_495342
0x495365: mov     ecx, offset aTranssource; jumptable 00495342 case 4
0x49536A: jmp     short def_495342
0x49536C: mov     ecx, offset aTransdest; jumptable 00495342 case 5
0x495371: jmp     short def_495342
0x495373: mov     ecx, offset aMorphsource; jumptable 00495342 case 6
