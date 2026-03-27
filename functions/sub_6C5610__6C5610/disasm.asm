0x6C5610: push    0FFFFFFFFh
0x6C5612: push    offset SEH_6C5610
0x6C5617: mov     eax, large fs:0
0x6C561D: push    eax
0x6C561E: push    ecx
0x6C561F: push    ebx
0x6C5620: push    ebp
0x6C5621: push    esi
0x6C5622: push    edi
0x6C5623: mov     eax, ds:0B30AACh
0x6C5628: xor     eax, esp
0x6C562A: push    eax
0x6C562B: lea     eax, [esp+24h+var_C]
0x6C562F: mov     large fs:0, eax
0x6C5635: mov     esi, ecx
0x6C5637: mov     [esp+24h+var_10], esi
0x6C563B: call    ??0NiTimeController@@QAE@XZ; NiTimeController::NiTimeController(void)
0x6C5640: xor     ebx, ebx
0x6C5642: mov     dword ptr [esi], offset ??_7NiControllerManager@@6B@; const NiControllerManager::`vftable'
0x6C5648: mov     [esp+24h+var_4], ebx
0x6C564C: mov     dword ptr [esi+3Ch], offset ??_7?$NiTArray@V?$NiPointer@VNiControllerSequence@@@@@@6B@; const NiTArray<NiPointer<NiControllerSequence>>::`vftable'
0x6C5653: mov     [esi+44h], bx
0x6C5657: mov     word ptr [esi+4Ah], 0Ah
0x6C565D: mov     [esi+46h], bx
0x6C5661: mov     [esi+48h], bx
0x6C5665: mov     [esi+40h], ebx
0x6C5668: mov     [esi+4Ch], ebx
0x6C566B: mov     [esi+50h], ebx
0x6C566E: mov     [esi+54h], ebx
0x6C5671: xor     ecx, ecx
0x6C5673: mov     eax, 25h ; '%'
0x6C5678: mov     [esi+5Ch], eax
0x6C567B: mov     edx, 4
0x6C5680: mul     edx
0x6C5682: seto    cl
0x6C5685: mov     byte ptr [esp+24h+var_4], 3
0x6C568A: mov     dword ptr [esi+58h], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@PBDPAVNiControllerSequence@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,char const *,NiControllerSequence *>::`vftable'
0x6C5691: mov     [esi+64h], ebx
0x6C5694: neg     ecx
0x6C5696: or      ecx, eax
0x6C5698: push    ecx; Size
0x6C5699: call    FormHeapAlloc
0x6C569E: mov     ecx, [esi+5Ch]
0x6C56A1: add     ecx, ecx
0x6C56A3: add     ecx, ecx
0x6C56A5: push    ecx
0x6C56A6: push    ebx
0x6C56A7: push    eax
0x6C56A8: mov     [esi+60h], eax
0x6C56AB: call    __memset
0x6C56B0: add     esp, 10h
0x6C56B3: mov     [esi+68h], bl
0x6C56B6: mov     dword ptr [esi+58h], offset ??_7?$NiTStringPointerMap@PAVNiControllerSequence@@@@6B@; const NiTStringPointerMap<NiControllerSequence *>::`vftable'
0x6C56BD: mov     dl, byte ptr [esp+24h+arg_4]
0x6C56C1: mov     [esi+6Ch], dl
0x6C56C4: mov     [esi+70h], ebx
0x6C56C7: mov     [esi+74h], ebx
0x6C56CA: mov     [esi+78h], ebx
0x6C56CD: mov     [esi+7Ch], ebx
0x6C56D0: mov     edi, [esp+24h+arg_0]
0x6C56D4: push    edi
0x6C56D5: mov     ecx, esi
0x6C56D7: mov     byte ptr [esp+28h+var_4], 7
0x6C56DC: call    NiTimeController__SetTarget
0x6C56E1: push    20h ; ' '; Size
0x6C56E3: call    FormHeapAlloc
0x6C56E8: add     esp, 4
0x6C56EB: mov     [esp+24h+arg_4], eax
0x6C56EF: cmp     eax, ebx
0x6C56F1: mov     byte ptr [esp+24h+var_4], 8
0x6C56F6: jz      short loc_6C5704
0x6C56F8: push    edi
0x6C56F9: mov     ecx, eax; this
0x6C56FB: call    ??0NiDefaultAVObjectPalette@@QAE@XZ; NiDefaultAVObjectPalette::NiDefaultAVObjectPalette(void)
0x6C5700: mov     ebp, eax
0x6C5702: jmp     short loc_6C5706
0x6C5704: xor     ebp, ebp
0x6C5706: mov     edi, [esi+7Ch]
0x6C5709: cmp     edi, ebp
0x6C570B: mov     byte ptr [esp+24h+var_4], 7
0x6C5710: jz      short loc_6C5743
0x6C5712: cmp     edi, ebx
0x6C5714: jz      short loc_6C5732
0x6C5716: lea     eax, [edi+4]
0x6C5719: push    eax; lpAddend
0x6C571A: call    dword ptr ds:0A2807Ch
0x6C5720: test    eax, eax
0x6C5722: jnz     short loc_6C5732
0x6C5724: cmp     edi, ebx
0x6C5726: jz      short loc_6C5732
0x6C5728: mov     edx, [edi]
0x6C572A: mov     eax, [edx]
0x6C572C: push    1
0x6C572E: mov     ecx, edi
0x6C5730: call    eax
0x6C5732: cmp     ebp, ebx
0x6C5734: mov     [esi+7Ch], ebp
0x6C5737: jz      short loc_6C5743
0x6C5739: add     ebp, 4
0x6C573C: push    ebp; lpAddend
0x6C573D: call    dword ptr ds:0A28078h
0x6C5743: mov     eax, esi
0x6C5745: mov     ecx, dword ptr [esp+24h+var_C]
0x6C5749: mov     large fs:0, ecx
0x6C5750: pop     ecx
0x6C5751: pop     edi
0x6C5752: pop     esi
0x6C5753: pop     ebp
0x6C5754: pop     ebx
0x6C5755: add     esp, 10h
0x6C5758: retn    8
