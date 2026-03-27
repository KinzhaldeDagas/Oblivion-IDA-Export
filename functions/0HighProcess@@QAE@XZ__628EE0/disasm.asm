0x628EE0: push    0FFFFFFFFh
0x628EE2: push    offset ??1HighProcess@@UAE@XZ_SEH
0x628EE7: mov     eax, large fs:0
0x628EED: push    eax
0x628EEE: sub     esp, 8
0x628EF1: push    ebx
0x628EF2: push    ebp
0x628EF3: push    esi
0x628EF4: push    edi
0x628EF5: mov     eax, ds:0B30AACh
0x628EFA: xor     eax, esp
0x628EFC: push    eax
0x628EFD: lea     eax, [esp+28h+var_C]
0x628F01: mov     large fs:0, eax
0x628F07: mov     esi, ecx
0x628F09: mov     [esp+28h+var_10], esi
0x628F0D: call    ??0MiddleHighProcess@@QAE@XZ; MiddleHighProcess::MiddleHighProcess(void)
0x628F12: xor     ebx, ebx
0x628F14: mov     dword ptr [esi], offset ??_7HighProcess@@6B@; const HighProcess::`vftable'
0x628F1A: mov     [esi+190h], ebx
0x628F20: mov     [esi+194h], ebx
0x628F26: mov     [esp+28h+var_4], ebx
0x628F2A: mov     [esi+268h], ebx
0x628F30: fldz
0x628F32: mov     byte ptr [esi+0D0h], 1
0x628F39: mov     [esi+1D4h], ebx
0x628F3F: xor     eax, eax
0x628F41: or      ebp, 0FFFFFFFFh
0x628F44: mov     [esi+90h], ebp
0x628F4A: mov     ds:0B3B928h, ebx
0x628F50: mov     [esi+1BCh], eax
0x628F56: mov     [esi+1C0h], eax
0x628F5C: mov     [esi+1C4h], eax
0x628F62: mov     [esi+1C8h], eax
0x628F68: fst     dword ptr [esi+1D8h]
0x628F6E: fst     dword ptr [esi+1DCh]
0x628F74: mov     [esi+1FCh], bx
0x628F7B: fst     dword ptr [esi+1ACh]
0x628F81: mov     [esi+200h], ebx
0x628F87: fst     dword ptr [esi+204h]
0x628F8D: mov     [esi+208h], bp
0x628F94: fst     dword ptr [esi+198h]
0x628F9A: mov     [esi+1A4h], ebx
0x628FA0: mov     [esi+1ECh], ebx
0x628FA6: mov     [esi+1F0h], ebx
0x628FAC: mov     [esi+1F4h], bp
0x628FB3: mov     [esi+1F8h], ebx
0x628FB9: mov     [esi+218h], ebx
0x628FBF: mov     [esi+1D0h], bl
0x628FC5: mov     [esi+220h], eax
0x628FCB: mov     [esi+224h], eax
0x628FD1: mov     eax, ds:0B3F9A8h
0x628FD6: mov     [esi+20Ch], eax
0x628FDC: mov     ecx, ds:0B3F9ACh
0x628FE2: mov     [esi+210h], ecx
0x628FE8: mov     edx, ds:0B3F9B0h
0x628FEE: fst     dword ptr [esi+21Ch]
0x628FF4: push    ebx; Seed
0x628FF5: fstp    dword ptr [esi+22Ch]
0x628FFB: mov     byte ptr [esp+2Ch+var_4], 1
0x629000: mov     [esi+214h], edx
0x629006: mov     [esi+228h], bl
0x62900C: mov     byte ptr [esi+23Ch], 1
0x629013: mov     [esi+244h], bl
0x629019: mov     [esi+250h], ebx
0x62901F: call    GetRandomLargeInteger?
0x629024: cdq
0x629025: mov     ecx, 1388h
0x62902A: idiv    ecx
0x62902C: push    8; Size
0x62902E: mov     [esi+24Ch], bl
0x629034: mov     [esi+25Ch], bl
0x62903A: mov     [esi+1CCh], ebx
0x629040: mov     [esp+30h+var_14], edx
0x629044: fild    [esp+30h+var_14]
0x629048: fmul    qword ptr ds:0A30E40h
0x62904E: fadd    qword ptr ds:0A3F3E8h
0x629054: fstp    dword ptr [esi+230h]
0x62905A: fldz
0x62905C: fst     dword ptr [esi+248h]
0x629062: fst     dword ptr [esi+234h]
0x629068: fst     dword ptr [esi+1E8h]
0x62906E: fst     dword ptr [esi+1B4h]
0x629074: fstp    dword ptr [esi+1B0h]
0x62907A: call    FormHeapAlloc
0x62907F: add     esp, 8
0x629082: cmp     eax, ebx
0x629084: jz      short loc_62908D
0x629086: mov     [eax], ebx
0x629088: mov     [eax+4], ebx
0x62908B: jmp     short loc_62908F
0x62908D: xor     eax, eax
0x62908F: fld     dword ptr ds:0A417B4h
0x629095: mov     [esi+18Ch], eax
0x62909B: fstp    dword ptr [esi+238h]
0x6290A1: mov     [esi+1E4h], bl
0x6290A7: fldz
0x6290A9: mov     dword ptr [esi+2BCh], 1
0x6290B3: fst     dword ptr [esi+1A8h]
0x6290B9: mov     [esi+2C4h], ebx
0x6290BF: fst     dword ptr [esi+1E0h]
0x6290C5: mov     [esi+25Dh], bl
0x6290CB: fst     dword ptr [esi+240h]
0x6290D1: fst     dword ptr [esi+2C0h]
0x6290D7: fst     dword ptr [esi+1B8h]
0x6290DD: mov     edx, ds:0B3F9A8h
0x6290E3: mov     [esi+27Ch], edx
0x6290E9: mov     eax, ds:0B3F9ACh
0x6290EE: mov     [esi+280h], eax
0x6290F4: mov     ecx, ds:0B3F9B0h
0x6290FA: fst     dword ptr [esi+260h]
0x629100: mov     [esi+284h], ecx
0x629106: fld     dword ptr ds:0B36940h
0x62910C: fstp    dword ptr [esi+19Ch]
0x629112: mov     [esi+288h], ebx
0x629118: fst     dword ptr [esi+264h]
0x62911E: fld1
0x629120: fstp    dword ptr [esi+26Ch]
0x629126: fst     dword ptr [esi+270h]
0x62912C: mov     edi, [esi+268h]
0x629132: cmp     edi, ebx
0x629134: jz      short loc_62915C
0x629136: lea     edx, [edi+4]
0x629139: fstp    st
0x62913B: push    edx; lpAddend
0x62913C: call    dword ptr ds:0A2807Ch
0x629142: test    eax, eax
0x629144: jnz     short loc_629154
0x629146: cmp     edi, ebx
0x629148: jz      short loc_629154
0x62914A: mov     eax, [edi]
0x62914C: mov     edx, [eax]
0x62914E: push    1
0x629150: mov     ecx, edi
0x629152: call    edx
0x629154: fldz
0x629156: mov     [esi+268h], ebx
0x62915C: fst     dword ptr [esi+28Ch]
0x629162: mov     [esi+274h], ebx
0x629168: fld     dword ptr ds:0A30634h
0x62916E: mov     [esi+278h], bl
0x629174: fstp    dword ptr [esi+294h]
0x62917A: mov     [esi+290h], bl
0x629180: mov     [esi+298h], ebp
0x629186: mov     [esi+29Ch], ebp
0x62918C: mov     [esi+2A0h], ebp
0x629192: mov     [esi+2A4h], ebx
0x629198: mov     [esi+2A8h], bl
0x62919E: mov     [esi+2A9h], bl
0x6291A4: xor     eax, eax
0x6291A6: lea     ecx, [esi+2C8h]
0x6291AC: mov     [ecx], ebx
0x6291AE: mov     [esi+eax+2DCh], bl
0x6291B5: add     eax, 1
0x6291B8: add     ecx, 4
0x6291BB: cmp     eax, 5
0x6291BE: jl      short loc_6291AC
0x6291C0: fst     dword ptr [esi+2ACh]
0x6291C6: mov     [esi+2E4h], ebx
0x6291CC: fstp    dword ptr [esi+2B0h]
0x6291D2: mov     [esi+2E8h], bl
0x6291D8: mov     [esi+1A0h], bl
0x6291DE: mov     [esi+2B4h], ebx
0x6291E4: mov     [esi+2B8h], bl
0x6291EA: mov     [esi+258h], ebx
0x6291F0: mov     [esi+1D1h], bl
0x6291F6: mov     [esi+2B9h], bl
0x6291FC: mov     eax, esi
0x6291FE: mov     ecx, dword ptr [esp+28h+var_C]
0x629202: mov     large fs:0, ecx
0x629209: pop     ecx
0x62920A: pop     edi
0x62920B: pop     esi
0x62920C: pop     ebp
0x62920D: pop     ebx
0x62920E: add     esp, 14h
0x629211: retn
