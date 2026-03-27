0x8F6010: mov     eax, 1020h
0x8F6015: call    __alloca_probe
0x8F601A: mov     eax, ds:0B30AACh
0x8F601F: push    ebx
0x8F6020: push    esi
0x8F6021: mov     [esp+1028h+var_4], eax
0x8F6028: call    dword ptr ds:0A28104h
0x8F602E: mov     esi, eax
0x8F6030: mov     eax, [esp+1028h+arg_4]
0x8F6037: xor     ebx, ebx
0x8F6039: test    eax, eax
0x8F603B: mov     [esp+1028h+var_101C], esi
0x8F603F: jle     loc_8F615D
0x8F6045: push    ebp
0x8F6046: push    edi
0x8F6047: jmp     short loc_8F6050
0x8F6049: align 10h
0x8F6050: mov     eax, [esp+1030h+arg_0]
0x8F6057: mov     ebp, [eax+ebx*4]
0x8F605A: xor     ecx, ecx
0x8F605C: mov     [esp+1030h+var_1004], ecx
0x8F6060: mov     [esp+1030h+var_1000], ecx
0x8F6064: lea     edx, [esp+1030h+var_1004]
0x8F6068: push    edx; _DWORD
0x8F6069: mov     [esp+1034h+var_FFC], ecx
0x8F606D: lea     eax, [esp+1034h+var_1020]
0x8F6071: push    eax; _DWORD
0x8F6072: mov     [esp+1038h+var_FF8], ecx
0x8F6076: mov     [esp+1038h+var_FF4], ecx
0x8F607A: push    ebp; _DWORD
0x8F607B: push    esi; _DWORD
0x8F607C: mov     [esp+1040h+var_FF0], ecx
0x8F6080: mov     [esp+1040h+var_1004], 18h
0x8F6088: mov     [esp+1040h+var_FF4], 7E8h
0x8F6090: mov     [esp+1040h+var_1020], ecx
0x8F6094: call    dword ptr ds:0BA81B4h
0x8F609A: test    eax, eax
0x8F609C: jnz     short loc_8F60BF
0x8F609E: mov     ecx, ds:0A32070h
0x8F60A4: mov     edx, ds:0A32074h
0x8F60AA: mov     ax, ds:0A32078h
0x8F60B0: mov     [esp+1030h+var_FF0], ecx
0x8F60B4: mov     [esp+1030h+var_FEC], edx
0x8F60B8: mov     [esp+1030h+var_FE8], ax
0x8F60BD: jmp     short loc_8F60DB
0x8F60BF: mov     edi, offset aWinmain; "WinMain"
0x8F60C4: lea     esi, [esp+1030h+var_FF0]
0x8F60C8: mov     ecx, 8
0x8F60CD: xor     edx, edx
0x8F60CF: repe cmpsb
0x8F60D1: jz      loc_8F615B
0x8F60D7: mov     esi, [esp+1030h+var_101C]
0x8F60DB: xor     eax, eax
0x8F60DD: mov     [esp+1030h+var_1018], eax
0x8F60E1: lea     ecx, [esp+1030h+var_1018]
0x8F60E5: push    ecx; _DWORD
0x8F60E6: mov     [esp+1034h+var_1014], eax
0x8F60EA: lea     edx, [esp+1034h+var_1020]
0x8F60EE: push    edx; _DWORD
0x8F60EF: mov     [esp+1038h+var_1010], eax
0x8F60F3: push    ebp; _DWORD
0x8F60F4: mov     [esp+103Ch+Format], eax
0x8F60F8: push    esi; _DWORD
0x8F60F9: mov     [esp+1040h+var_1008], eax
0x8F60FD: mov     [esp+1040h+var_1018], 14h
0x8F6105: call    dword ptr ds:0BA81A4h
0x8F610B: mov     ecx, [esp+1030h+var_1010]
0x8F610F: mov     edx, [esp+1030h+Format]
0x8F6113: lea     eax, [esp+1030h+var_FF0]
0x8F6117: push    eax
0x8F6118: push    ecx
0x8F6119: push    edx; Format
0x8F611A: push    offset aSIS_0; "%s(%i):'%s'\n"
0x8F611F: lea     eax, [esp+1040h+Dest]
0x8F6126: push    800h; Count
0x8F612B: push    eax; Dest
0x8F612C: call    __snprintf
0x8F6131: mov     ecx, [esp+1048h+arg_C]
0x8F6138: push    ecx
0x8F6139: lea     edx, [esp+104Ch+Dest]
0x8F6140: push    edx
0x8F6141: call    [esp+1050h+arg_8]
0x8F6148: mov     eax, [esp+1050h+arg_4]
0x8F614F: add     esp, 20h
0x8F6152: inc     ebx
0x8F6153: cmp     ebx, eax
0x8F6155: jl      loc_8F6050
0x8F615B: pop     edi
0x8F615C: pop     ebp
0x8F615D: mov     eax, [esp+1028h+arg_C]
0x8F6164: push    eax
0x8F6165: push    offset asc_A9B3E8; "---------------------------------------"...
0x8F616A: call    [esp+1030h+arg_8]
0x8F6171: mov     ecx, [esp+1030h+var_4]
0x8F6178: add     esp, 8
0x8F617B: pop     esi
0x8F617C: pop     ebx
0x8F617D: call    @__security_check_cookie@4; __security_check_cookie(x)
0x8F6182: add     esp, 1020h
0x8F6188: retn    10h
