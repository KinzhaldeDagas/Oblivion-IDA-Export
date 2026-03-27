0x643180: push    0FFFFFFFFh
0x643182: push    offset SEH_643180
0x643187: mov     eax, large fs:0
0x64318D: push    eax
0x64318E: push    ebx
0x64318F: push    esi
0x643190: push    edi
0x643191: mov     eax, ds:0B30AACh
0x643196: xor     eax, esp
0x643198: push    eax
0x643199: lea     eax, [esp+1Ch+var_C]
0x64319D: mov     large fs:0, eax
0x6431A3: mov     esi, ecx
0x6431A5: mov     edi, [esi+14h]
0x6431A8: mov     eax, [edi+4]
0x6431AB: push    eax; dwTlsIndex
0x6431AC: mov     [esp+20h+var_4], 0
0x6431B4: call    dword ptr ds:0A28150h
0x6431BA: test    eax, eax
0x6431BC: jnz     short loc_6431C6
0x6431BE: push    esi; a2
0x6431BF: mov     ecx, edi; this
0x6431C1: call    ThreadSpecificInterfaceManager_AddInterface
0x6431C6: mov     ecx, dword ptr [esp+1Ch+arg_C]
0x6431CA: push    ecx; char
0x6431CB: mov     ecx, [esp+20h+Comperand]
0x6431CF: lea     edx, [esp+20h+arg_8]
0x6431D3: push    edx; int
0x6431D4: mov     edx, [esp+24h+arg_0]
0x6431D8: push    ecx; Comperand
0x6431D9: push    edx; LONG
0x6431DA: mov     ecx, eax
0x6431DC: call    sub_643000
0x6431E1: mov     esi, [esp+1Ch+arg_8]
0x6431E5: test    esi, esi
0x6431E7: mov     bl, al
0x6431E9: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x6431F1: jz      short loc_64320B
0x6431F3: lea     eax, [esi+8]
0x6431F6: push    eax; lpAddend
0x6431F7: call    dword ptr ds:0A2807Ch
0x6431FD: test    eax, eax
0x6431FF: jnz     short loc_64320B
0x643201: mov     edx, [esi]
0x643203: mov     eax, [edx]
0x643205: push    1
0x643207: mov     ecx, esi
0x643209: call    eax
0x64320B: mov     al, bl
0x64320D: mov     ecx, dword ptr [esp+1Ch+var_C]
0x643211: mov     large fs:0, ecx
0x643218: pop     ecx
0x643219: pop     edi
0x64321A: pop     esi
0x64321B: pop     ebx
0x64321C: add     esp, 0Ch
0x64321F: retn    10h
