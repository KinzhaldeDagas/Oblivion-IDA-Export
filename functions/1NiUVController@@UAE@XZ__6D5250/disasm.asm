0x6D5250: push    0FFFFFFFFh
0x6D5252: push    offset ??1NiUVController@@UAE@XZ_SEH
0x6D5257: mov     eax, large fs:0
0x6D525D: push    eax
0x6D525E: push    ecx
0x6D525F: push    ebp
0x6D5260: push    esi
0x6D5261: push    edi
0x6D5262: mov     eax, ds:0B30AACh
0x6D5267: xor     eax, esp
0x6D5269: push    eax
0x6D526A: lea     eax, [esp+20h+var_C]
0x6D526E: mov     large fs:0, eax
0x6D5274: mov     edi, ecx
0x6D5276: mov     [esp+20h+var_10], edi
0x6D527A: mov     dword ptr [edi], offset ??_7NiUVController@@6B@; const NiUVController::`vftable'
0x6D5280: mov     esi, [edi+50h]
0x6D5283: test    esi, esi
0x6D5285: mov     ebp, ds:0A2807Ch
0x6D528B: mov     [esp+20h+var_4], 1
0x6D5293: jz      short loc_6D52B4
0x6D5295: lea     eax, [esi+4]
0x6D5298: push    eax; lpAddend
0x6D5299: call    ebp ; InterlockedDecrement
0x6D529B: test    eax, eax
0x6D529D: jnz     short loc_6D52AD
0x6D529F: test    esi, esi
0x6D52A1: jz      short loc_6D52AD
0x6D52A3: mov     edx, [esi]
0x6D52A5: mov     eax, [edx]
0x6D52A7: push    1
0x6D52A9: mov     ecx, esi
0x6D52AB: call    eax
0x6D52AD: mov     dword ptr [edi+50h], 0
0x6D52B4: mov     esi, [edi+50h]
0x6D52B7: test    esi, esi
0x6D52B9: mov     byte ptr [esp+20h+var_4], 0
0x6D52BE: jz      short loc_6D52D8
0x6D52C0: lea     ecx, [esi+4]
0x6D52C3: push    ecx; lpAddend
0x6D52C4: call    ebp ; InterlockedDecrement
0x6D52C6: test    eax, eax
0x6D52C8: jnz     short loc_6D52D8
0x6D52CA: test    esi, esi
0x6D52CC: jz      short loc_6D52D8
0x6D52CE: mov     edx, [esi]
0x6D52D0: mov     eax, [edx]
0x6D52D2: push    1
0x6D52D4: mov     ecx, esi
0x6D52D6: call    eax
0x6D52D8: mov     ecx, edi; this
0x6D52DA: mov     [esp+20h+var_4], 0FFFFFFFFh
0x6D52E2: call    ??1NiPSysResetOnLoopCtlr@@UAE@XZ; NiPSysResetOnLoopCtlr::~NiPSysResetOnLoopCtlr(void)
0x6D52E7: mov     ecx, [esp+20h+var_C]
0x6D52EB: mov     large fs:0, ecx
0x6D52F2: pop     ecx
0x6D52F3: pop     edi
0x6D52F4: pop     esi
0x6D52F5: pop     ebp
0x6D52F6: add     esp, 10h
0x6D52F9: retn
