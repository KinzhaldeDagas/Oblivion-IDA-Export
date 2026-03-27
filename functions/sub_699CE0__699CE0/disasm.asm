0x699CE0: push    0FFFFFFFFh
0x699CE2: push    offset SEH_699CE0
0x699CE7: mov     eax, large fs:0
0x699CED: push    eax
0x699CEE: push    ecx
0x699CEF: push    ebx
0x699CF0: push    esi
0x699CF1: mov     eax, ds:0B30AACh
0x699CF6: xor     eax, esp
0x699CF8: push    eax
0x699CF9: lea     eax, [esp+1Ch+var_C]
0x699CFD: mov     large fs:0, eax
0x699D03: mov     esi, ecx
0x699D05: mov     [esp+1Ch+var_10], esi
0x699D09: call    ??0bhkRefObject@@QAE@XZ; bhkRefObject::bhkRefObject(void)
0x699D0E: xor     ebx, ebx
0x699D10: mov     dword ptr [esi], offset ??_7bhkWorldObject@@6B@; const bhkWorldObject::`vftable'
0x699D16: mov     [esi+0Ch], ebx
0x699D19: add     dword ptr ds:0BA7D34h, 1
0x699D20: mov     dword ptr [esi], offset ??_7bhkPhantom@@6B@; const bhkPhantom::`vftable'
0x699D26: add     dword ptr ds:0BA7F5Ch, 1
0x699D2D: mov     [esi+10h], bl
0x699D30: mov     eax, [esp+1Ch+arg_0]
0x699D34: push    eax
0x699D35: mov     ecx, esi
0x699D37: mov     [esp+20h+var_4], ebx
0x699D3B: mov     dword ptr [esi], offset ??_7bhkAabbPhantom@@6B@; const bhkAabbPhantom::`vftable'
0x699D41: call    sub_8BA650
0x699D46: add     dword ptr ds:0BA802Ch, 1
0x699D4D: mov     [esi+10h], bl
0x699D50: mov     eax, esi
0x699D52: mov     ecx, [esp+1Ch+var_C]
0x699D56: mov     large fs:0, ecx
0x699D5D: pop     ecx
0x699D5E: pop     esi
0x699D5F: pop     ebx
0x699D60: add     esp, 10h
0x699D63: retn    4
