0x44D880: push    esi
0x44D881: push    offset stru_B33F00; lpCriticalSection
0x44D886: call    dword ptr ds:0A2806Ch
0x44D88C: call    dword ptr ds:0A2808Ch
0x44D892: mov     ds:0B33F78h, eax
0x44D897: mov     eax, [esp+4+arg_0]
0x44D89B: mov     edx, 1
0x44D8A0: add     ds:0B33F7Ch, edx
0x44D8A6: xor     ecx, ecx
0x44D8A8: mov     [eax+4], ecx
0x44D8AB: mov     esi, ds:0B33EACh
0x44D8B1: mov     [eax], esi
0x44D8B3: sub     ds:0B33F7Ch, edx
0x44D8B9: mov     ds:0B33EACh, eax
0x44D8BE: pop     esi
0x44D8BF: jnz     short loc_44D8C7
0x44D8C1: mov     ds:0B33F78h, ecx
0x44D8C7: mov     [esp+arg_0], offset stru_B33F00
0x44D8CF: jmp     dword ptr ds:0A28074h
