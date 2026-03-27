0x8DF050: mov     eax, [esp+arg_0]
0x8DF054: mov     edx, [eax+4]
0x8DF057: cmp     byte ptr [edx+18h], 1
0x8DF05B: jnz     short locret_8DF071
0x8DF05D: mov     eax, [edx+10h]
0x8DF060: add     eax, edx
0x8DF062: jz      short locret_8DF071
0x8DF064: mov     edx, [ecx-0Ch]
0x8DF067: add     ecx, 0FFFFFFF4h
0x8DF06A: mov     [esp+arg_0], eax
0x8DF06E: jmp     dword ptr [edx+8]
0x8DF071: retn    4
