0x438870: push    0FFFFFFFFh
0x438872: push    offset SEH_864830
0x438877: mov     eax, large fs:0
0x43887D: push    eax
0x43887E: push    esi
0x43887F: push    edi
0x438880: mov     eax, ___security_cookie
0x438885: xor     eax, esp
0x438887: push    eax
0x438888: lea     eax, [esp+18h+var_C]
0x43888C: mov     large fs:0, eax
0x438892: mov     esi, ecx
0x438894: mov     dword ptr [esi], offset ??_7?$LockFreeQueue@V?$NiPointer@VQueuedReference@@@@@@6B@; const LockFreeQueue<NiPointer<QueuedReference>>::`vftable'
0x43889A: push    8; Size
0x43889C: mov     dword ptr [esi+18h], 0
0x4388A3: call    FormHeapAlloc
0x4388A8: add     esp, 4
0x4388AB: test    eax, eax
0x4388AD: jz      short loc_4388BE
0x4388AF: mov     dword ptr [eax], 0
0x4388B5: mov     dword ptr [eax+4], 0
0x4388BC: jmp     short loc_4388C0
0x4388BE: xor     eax, eax
0x4388C0: mov     edi, [esp+18h+a2]
0x4388C4: mov     [esi+4], eax
0x4388C7: mov     [esi+8], eax
0x4388CA: mov     eax, [esp+18h+arg_4]
0x4388CE: mov     [esi+0Ch], eax
0x4388D1: xor     ecx, ecx
0x4388D3: lea     eax, [edi+edi]
0x4388D6: mov     edx, 4
0x4388DB: mul     edx
0x4388DD: seto    cl
0x4388E0: neg     ecx
0x4388E2: or      ecx, eax
0x4388E4: push    ecx; Size
0x4388E5: call    FormHeapAlloc
0x4388EA: push    10h; Size
0x4388EC: mov     [esi+10h], eax
0x4388EF: call    FormHeapAlloc
0x4388F4: add     esp, 8
0x4388F7: mov     [esp+18h+arg_4], eax
0x4388FB: test    eax, eax
0x4388FD: mov     [esp+18h+var_4], 0
0x438905: jz      short loc_438911
0x438907: push    edi; a2
0x438908: mov     ecx, eax; this
0x43890A: call    ThreadSpecificInterfaceManager__ThreadSpecificInterfaceManager
0x43890F: jmp     short loc_438913
0x438911: xor     eax, eax
0x438913: mov     [esi+14h], eax
0x438916: mov     eax, esi
0x438918: mov     ecx, [esp+18h+var_C]
0x43891C: mov     large fs:0, ecx
0x438923: pop     ecx
0x438924: pop     edi
0x438925: pop     esi
0x438926: add     esp, 0Ch
0x438929: retn    8
