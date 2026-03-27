0x65E1C0: mov     eax, [esp+arg_4]
0x65E1C4: push    ebx
0x65E1C5: push    ebp
0x65E1C6: mov     ebp, [esp+8+arg_8]
0x65E1CA: push    esi
0x65E1CB: push    edi
0x65E1CC: mov     edi, [esp+10h+a2]
0x65E1D0: push    ebp
0x65E1D1: push    eax
0x65E1D2: push    edi
0x65E1D3: mov     esi, ecx
0x65E1D5: call    sub_5E2510
0x65E1DA: cmp     edi, 0FFFFFFFFh
0x65E1DD: mov     ebx, eax
0x65E1DF: mov     [esp+10h+arg_4], ebx
0x65E1E3: fild    [esp+10h+arg_4]
0x65E1E7: fstp    [esp+10h+arg_4]
0x65E1EB: fld     [esp+10h+arg_4]
0x65E1EF: fstp    [esp+10h+arg_8]
0x65E1F3: jz      short loc_65E21B
0x65E1F5: fld     [esp+10h+arg_8]
0x65E1F9: push    1; int
0x65E1FB: sub     esp, 8
0x65E1FE: fstp    [esp+1Ch+var_18]; float
0x65E202: fld     dword ptr [esi+edi*4+204h]
0x65E209: fstp    [esp+1Ch+var_1C]; float
0x65E20C: call    Player_ModAVNode
0x65E211: fstp    dword ptr [esi+edi*4+204h]
0x65E218: add     esp, 0Ch
0x65E21B: push    edi; a2
0x65E21C: call    sub_57A6F0
0x65E221: add     esp, 4
0x65E224: cmp     edi, 8
0x65E227: jnz     short loc_65E242
0x65E229: test    ebx, ebx
0x65E22B: jge     short loc_65E242
0x65E22D: mov     edx, [esi]
0x65E22F: fld     [esp+10h+arg_4]
0x65E233: mov     eax, [edx+3B8h]
0x65E239: push    ecx
0x65E23A: fstp    [esp+14h+var_14]
0x65E23D: push    ebp
0x65E23E: mov     ecx, esi
0x65E240: call    eax
0x65E242: push    0
0x65E244: push    edi
0x65E245: mov     ecx, esi
0x65E247: call    sub_5E2670
0x65E24C: pop     edi
0x65E24D: pop     esi
0x65E24E: pop     ebp
0x65E24F: pop     ebx
0x65E250: retn    0Ch
