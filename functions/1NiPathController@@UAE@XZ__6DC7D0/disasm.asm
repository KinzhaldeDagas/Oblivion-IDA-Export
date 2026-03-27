0x6DC7D0: push    0FFFFFFFFh
0x6DC7D2: push    offset ??1NiPathController@@UAE@XZ_SEH
0x6DC7D7: mov     eax, large fs:0
0x6DC7DD: push    eax
0x6DC7DE: push    ecx
0x6DC7DF: push    ebp
0x6DC7E0: push    esi
0x6DC7E1: push    edi
0x6DC7E2: mov     eax, ds:0B30AACh
0x6DC7E7: xor     eax, esp
0x6DC7E9: push    eax
0x6DC7EA: lea     eax, [esp+20h+var_C]
0x6DC7EE: mov     large fs:0, eax
0x6DC7F4: mov     esi, ecx
0x6DC7F6: mov     [esp+20h+var_10], esi
0x6DC7FA: mov     dword ptr [esi], offset ??_7NiPathController@@6B@; const NiPathController::`vftable'
0x6DC800: mov     edi, [esi+48h]
0x6DC803: test    edi, edi
0x6DC805: mov     ebp, ds:0A2807Ch
0x6DC80B: mov     [esp+20h+var_4], 2
0x6DC813: jz      short loc_6DC834
0x6DC815: lea     eax, [edi+4]
0x6DC818: push    eax; lpAddend
0x6DC819: call    ebp ; InterlockedDecrement
0x6DC81B: test    eax, eax
0x6DC81D: jnz     short loc_6DC82D
0x6DC81F: test    edi, edi
0x6DC821: jz      short loc_6DC82D
0x6DC823: mov     edx, [edi]
0x6DC825: mov     eax, [edx]
0x6DC827: push    1
0x6DC829: mov     ecx, edi
0x6DC82B: call    eax
0x6DC82D: mov     dword ptr [esi+48h], 0
0x6DC834: mov     edi, [esi+4Ch]
0x6DC837: test    edi, edi
0x6DC839: jz      short loc_6DC85A
0x6DC83B: lea     ecx, [edi+4]
0x6DC83E: push    ecx; lpAddend
0x6DC83F: call    ebp ; InterlockedDecrement
0x6DC841: test    eax, eax
0x6DC843: jnz     short loc_6DC853
0x6DC845: test    edi, edi
0x6DC847: jz      short loc_6DC853
0x6DC849: mov     edx, [edi]
0x6DC84B: mov     eax, [edx]
0x6DC84D: push    1
0x6DC84F: mov     ecx, edi
0x6DC851: call    eax
0x6DC853: mov     dword ptr [esi+4Ch], 0
0x6DC85A: mov     eax, [esi+50h]
0x6DC85D: push    eax
0x6DC85E: call    FormHeapFree
0x6DC863: mov     edi, [esi+4Ch]
0x6DC866: add     esp, 4
0x6DC869: test    edi, edi
0x6DC86B: mov     byte ptr [esp+20h+var_4], 1
0x6DC870: jz      short loc_6DC88A
0x6DC872: lea     ecx, [edi+4]
0x6DC875: push    ecx; lpAddend
0x6DC876: call    ebp ; InterlockedDecrement
0x6DC878: test    eax, eax
0x6DC87A: jnz     short loc_6DC88A
0x6DC87C: test    edi, edi
0x6DC87E: jz      short loc_6DC88A
0x6DC880: mov     edx, [edi]
0x6DC882: mov     eax, [edx]
0x6DC884: push    1
0x6DC886: mov     ecx, edi
0x6DC888: call    eax
0x6DC88A: mov     edi, [esi+48h]
0x6DC88D: test    edi, edi
0x6DC88F: mov     byte ptr [esp+20h+var_4], 0
0x6DC894: jz      short loc_6DC8AE
0x6DC896: lea     ecx, [edi+4]
0x6DC899: push    ecx; lpAddend
0x6DC89A: call    ebp ; InterlockedDecrement
0x6DC89C: test    eax, eax
0x6DC89E: jnz     short loc_6DC8AE
0x6DC8A0: test    edi, edi
0x6DC8A2: jz      short loc_6DC8AE
0x6DC8A4: mov     edx, [edi]
0x6DC8A6: mov     eax, [edx]
0x6DC8A8: push    1
0x6DC8AA: mov     ecx, edi
0x6DC8AC: call    eax
0x6DC8AE: mov     ecx, esi; this
0x6DC8B0: mov     [esp+20h+var_4], 0FFFFFFFFh
0x6DC8B8: call    ??1NiPSysResetOnLoopCtlr@@UAE@XZ; NiPSysResetOnLoopCtlr::~NiPSysResetOnLoopCtlr(void)
0x6DC8BD: mov     ecx, dword ptr [esp+20h+var_C]
0x6DC8C1: mov     large fs:0, ecx
0x6DC8C8: pop     ecx
0x6DC8C9: pop     edi
0x6DC8CA: pop     esi
0x6DC8CB: pop     ebp
0x6DC8CC: add     esp, 10h
0x6DC8CF: retn
