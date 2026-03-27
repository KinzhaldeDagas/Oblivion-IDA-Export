0x5BF0A0: mov     ecx, [esi+0D8h]; jumptable 005BF036 default case
0x5BF0A6: call    sub_5E12B0
0x5BF0AB: mov     byte ptr [eax+1DBh], 1
0x5BF0B2: jmp     short loc_5BF0DE
0x5BF0B4: mov     edx, [esi+0D8h]
0x5BF0BA: fldz
0x5BF0BC: mov     dword ptr [edx+70h], 7
0x5BF0C3: mov     eax, [esi+0D8h]
0x5BF0C9: fstp    dword ptr [eax+74h]
0x5BF0CC: mov     ecx, [esi+0D8h]
0x5BF0D2: call    sub_5E12B0
0x5BF0D7: mov     byte ptr [eax+1DBh], 0
0x5BF0DE: xor     ebx, ebx
0x5BF0E0: mov     esi, [esi+0D8h]
0x5BF0E6: fldz
0x5BF0E8: mov     edx, [esi]
0x5BF0EA: mov     eax, [edx+304h]
0x5BF0F0: push    ebx
0x5BF0F1: push    ecx
0x5BF0F2: mov     ecx, esi
0x5BF0F4: fstp    [esp+8+var_8]
0x5BF0F7: call    eax
0x5BF0F9: mov     ecx, [esp+8+arg_30]
0x5BF0FD: mov     large fs:0, ecx
0x5BF104: pop     ecx
0x5BF105: pop     edi
0x5BF106: pop     esi
0x5BF107: pop     ebp
0x5BF108: pop     ebx
0x5BF109: add     esp, 34h
0x5BF10C: retn
