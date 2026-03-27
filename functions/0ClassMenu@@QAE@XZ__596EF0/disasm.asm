0x596EF0: push    0FFFFFFFFh
0x596EF2: push    offset ??0ClassMenu@@QAE@XZ_SEH
0x596EF7: mov     eax, large fs:0
0x596EFD: push    eax
0x596EFE: push    ecx
0x596EFF: push    ebx
0x596F00: push    esi
0x596F01: mov     eax, ds:0B30AACh
0x596F06: xor     eax, esp
0x596F08: push    eax
0x596F09: lea     eax, [esp+1Ch+var_C]
0x596F0D: mov     large fs:0, eax
0x596F13: mov     esi, ecx
0x596F15: mov     [esp+1Ch+var_10], esi
0x596F19: call    ??0Menu@@QAE@XZ; Menu::Menu(void)
0x596F1E: xor     ebx, ebx
0x596F20: mov     dword ptr [esi], offset ??_7ClassMenu@@6B@; const ClassMenu::`vftable'
0x596F26: mov     [esp+1Ch+var_4], ebx
0x596F2A: mov     [esi+84h], ebx
0x596F30: mov     [esi+88h], bx
0x596F37: mov     [esi+8Ah], bx
0x596F3E: mov     [esi+28h], ebx
0x596F41: mov     [esi+2Ch], ebx
0x596F44: mov     [esi+30h], ebx
0x596F47: mov     [esi+34h], ebx
0x596F4A: mov     [esi+38h], ebx
0x596F4D: mov     [esi+3Ch], ebx
0x596F50: mov     eax, ds:0B37C88h
0x596F55: mov     ecx, ds:0B33A98h
0x596F5B: push    eax
0x596F5C: mov     byte ptr [esp+20h+var_4], 1
0x596F61: call    TESDataHandler_LookupTESClassByFormID
0x596F66: mov     [esi+40h], eax
0x596F69: or      eax, 0FFFFFFFFh
0x596F6C: mov     [esi+5Ch], eax
0x596F6F: mov     [esi+64h], eax
0x596F72: mov     [esi+60h], eax
0x596F75: mov     [esi+44h], ebx
0x596F78: mov     [esi+58h], ebx
0x596F7B: mov     [esi+54h], bl
0x596F7E: mov     [esi+68h], eax
0x596F81: mov     [esi+6Ch], eax
0x596F84: mov     [esi+70h], eax
0x596F87: mov     [esi+74h], eax
0x596F8A: mov     [esi+78h], eax
0x596F8D: mov     [esi+7Ch], eax
0x596F90: mov     [esi+80h], eax
0x596F96: mov     [esi+48h], eax
0x596F99: mov     [esi+4Ch], eax
0x596F9C: mov     [esi+50h], eax
0x596F9F: mov     eax, esi
0x596FA1: mov     ecx, [esp+1Ch+var_C]
0x596FA5: mov     large fs:0, ecx
0x596FAC: pop     ecx
0x596FAD: pop     esi
0x596FAE: pop     ebx
0x596FAF: add     esp, 10h
0x596FB2: retn
