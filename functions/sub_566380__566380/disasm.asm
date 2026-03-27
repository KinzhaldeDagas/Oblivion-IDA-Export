0x566380: mov     eax, [esp+arg_0]
0x566384: push    esi
0x566385: push    edi
0x566386: push    0; int
0x566388: push    offset ??_R0?AVTESPackage@@@8; struct TypeDescriptor *
0x56638D: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x566392: push    0; int
0x566394: push    eax; void *
0x566395: mov     edi, ecx
0x566397: call    OblivionDynamicCast
0x56639C: mov     esi, eax
0x56639E: add     esp, 14h
0x5663A1: test    esi, esi
0x5663A3: jz      short loc_5663F1
0x5663A5: push    esi; a2
0x5663A6: mov     ecx, edi; this
0x5663A8: call    TESForm_CopyAllComponentsFrom
0x5663AD: mov     ecx, [esi+24h]
0x5663B0: push    ecx
0x5663B1: mov     ecx, edi
0x5663B3: call    TESPackage_SetLocation
0x5663B8: mov     edx, [esi+28h]
0x5663BB: push    edx
0x5663BC: mov     ecx, edi
0x5663BE: call    TESPackage_SetTarget
0x5663C3: lea     eax, [esi+2Ch]
0x5663C6: push    eax
0x5663C7: mov     ecx, edi
0x5663C9: call    sub_565F80
0x5663CE: mov     ecx, [esi+1Ch]
0x5663D1: lea     edx, [esi+34h]
0x5663D4: mov     [edi+1Ch], ecx
0x5663D7: push    edx
0x5663D8: mov     ecx, edi
0x5663DA: call    sub_566010
0x5663DF: movsx   eax, byte ptr [esi+20h]
0x5663E3: push    eax
0x5663E4: mov     ecx, edi
0x5663E6: call    TESPackage_SetType?
0x5663EB: mov     ecx, [esi+18h]
0x5663EE: mov     [edi+18h], ecx
0x5663F1: pop     edi
0x5663F2: pop     esi
0x5663F3: retn    4
