0x4A0400: push    0FFFFFFFFh
0x4A0402: push    offset SEH_8C8970
0x4A0407: mov     eax, large fs:0
0x4A040D: push    eax
0x4A040E: push    ecx
0x4A040F: push    esi
0x4A0410: push    edi
0x4A0411: mov     eax, ds:0B30AACh
0x4A0416: xor     eax, esp
0x4A0418: push    eax
0x4A0419: lea     eax, [esp+1Ch+var_C]
0x4A041D: mov     large fs:0, eax
0x4A0423: mov     edi, ecx
0x4A0425: push    10h; Size
0x4A0427: call    FormHeapAlloc
0x4A042C: add     esp, 4
0x4A042F: mov     [esp+1Ch+var_10], eax
0x4A0433: xor     esi, esi
0x4A0435: cmp     eax, esi
0x4A0437: mov     [esp+1Ch+var_4], esi
0x4A043B: jz      short loc_4A0446
0x4A043D: mov     ecx, eax
0x4A043F: call    sub_4A0200
0x4A0444: mov     esi, eax
0x4A0446: mov     eax, [esp+1Ch+arg_0]
0x4A044A: push    eax
0x4A044B: push    esi
0x4A044C: mov     ecx, edi
0x4A044E: mov     [esp+24h+var_4], 0FFFFFFFFh
0x4A0456: call    sub_721170
0x4A045B: mov     eax, esi
0x4A045D: mov     ecx, [esp+1Ch+var_C]
0x4A0461: mov     large fs:0, ecx
0x4A0468: pop     ecx
0x4A0469: pop     edi
0x4A046A: pop     esi
0x4A046B: add     esp, 10h
0x4A046E: retn    4
