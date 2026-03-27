0x8A7720: push    ecx
0x8A7721: push    ebp
0x8A7722: mov     ebp, ecx
0x8A7724: push    ebp; lpCriticalSection
0x8A7725: call    dword ptr ds:0A28070h
0x8A772B: test    eax, eax
0x8A772D: jnz     loc_8A77CC
0x8A7733: push    ebx
0x8A7734: mov     ebx, ds:0BA9DE4h
0x8A773A: push    esi
0x8A773B: push    edi
0x8A773C: mov     edi, large fs:2Ch
0x8A7743: mov     esi, [edi+ebx*4]
0x8A7746: mov     eax, [esi+1B4h]
0x8A774C: test    eax, eax
0x8A774E: jz      short loc_8A77C2
0x8A7750: mov     eax, esi
0x8A7752: mov     ecx, [eax+1A4h]
0x8A7758: cmp     ecx, [eax+1A8h]
0x8A775E: jnb     short loc_8A7782
0x8A7760: mov     ecx, [esi+1A4h]
0x8A7766: mov     dword ptr [ecx], offset aTtcriticallock; "TtCriticalLock"
0x8A776C: rdtsc
0x8A776E: mov     [esp+14h+var_4], eax
0x8A7772: mov     edx, [esp+14h+var_4]
0x8A7776: mov     [ecx+4], edx
0x8A7779: add     ecx, 0Ch
0x8A777C: mov     [esi+1A4h], ecx
0x8A7782: push    ebp; lpCriticalSection
0x8A7783: call    dword ptr ds:0A2806Ch
0x8A7789: mov     eax, [edi+ebx*4]
0x8A778C: mov     ecx, [eax+1A4h]
0x8A7792: cmp     ecx, [eax+1A8h]
0x8A7798: jnb     short loc_8A77C9
0x8A779A: mov     ecx, [esi+1A4h]
0x8A77A0: mov     dword ptr [ecx], offset aEt; "Et"
0x8A77A6: rdtsc
0x8A77A8: mov     [esp+14h+var_4], eax
0x8A77AC: mov     edx, [esp+14h+var_4]
0x8A77B0: mov     [ecx+4], edx
0x8A77B3: pop     edi
0x8A77B4: add     ecx, 0Ch
0x8A77B7: mov     [esi+1A4h], ecx
0x8A77BD: pop     esi
0x8A77BE: pop     ebx
0x8A77BF: pop     ebp
0x8A77C0: pop     ecx
0x8A77C1: retn
0x8A77C2: push    ebp; lpCriticalSection
0x8A77C3: call    dword ptr ds:0A2806Ch
0x8A77C9: pop     edi
0x8A77CA: pop     esi
0x8A77CB: pop     ebx
0x8A77CC: pop     ebp
0x8A77CD: pop     ecx
0x8A77CE: retn
