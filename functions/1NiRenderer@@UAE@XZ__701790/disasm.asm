0x701790: push    0FFFFFFFFh
0x701792: push    offset ??1NiScreenPolygon@@UAE@XZ_SEH
0x701797: mov     eax, large fs:0
0x70179D: push    eax
0x70179E: push    ecx
0x70179F: push    esi
0x7017A0: push    edi
0x7017A1: mov     eax, ds:0B30AACh
0x7017A6: xor     eax, esp
0x7017A8: push    eax
0x7017A9: lea     eax, [esp+1Ch+var_C]
0x7017AD: mov     large fs:0, eax
0x7017B3: mov     esi, ecx
0x7017B5: mov     [esp+1Ch+var_10], esi
0x7017B9: mov     dword ptr [esi], offset ??_7NiRenderer@@6B@; const NiRenderer::`vftable'
0x7017BF: mov     edi, ds:0A28068h
0x7017C5: lea     eax, [esi+180h]
0x7017CB: push    eax; lpCriticalSection
0x7017CC: mov     [esp+20h+var_4], 0
0x7017D4: mov     dword ptr ds:0B3F928h, 0
0x7017DE: call    edi ; DeleteCriticalSection
0x7017E0: lea     ecx, [esi+100h]
0x7017E6: push    ecx; lpCriticalSection
0x7017E7: call    edi ; DeleteCriticalSection
0x7017E9: lea     edx, [esi+80h]
0x7017EF: push    edx; lpCriticalSection
0x7017F0: call    edi ; DeleteCriticalSection
0x7017F2: mov     edi, [esi+8]
0x7017F5: test    edi, edi
0x7017F7: jz      short loc_701815
0x7017F9: lea     eax, [edi+4]
0x7017FC: push    eax; lpAddend
0x7017FD: call    dword ptr ds:0A2807Ch
0x701803: test    eax, eax
0x701805: jnz     short loc_701815
0x701807: test    edi, edi
0x701809: jz      short loc_701815
0x70180B: mov     edx, [edi]
0x70180D: mov     eax, [edx]
0x70180F: push    1
0x701811: mov     ecx, edi
0x701813: call    eax
0x701815: mov     ecx, esi
0x701817: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x70181F: call    NiRefObject_destr
0x701824: mov     ecx, dword ptr [esp+1Ch+var_C]
0x701828: mov     large fs:0, ecx
0x70182F: pop     ecx
0x701830: pop     edi
0x701831: pop     esi
0x701832: add     esp, 10h
0x701835: retn
