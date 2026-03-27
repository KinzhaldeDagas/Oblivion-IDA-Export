0x4C4C00: push    0FFFFFFFFh
0x4C4C02: push    offset ??0TESObjectANIO@@QAE@XZ_SEH
0x4C4C07: mov     eax, large fs:0
0x4C4C0D: push    eax
0x4C4C0E: push    ecx
0x4C4C0F: push    ebx
0x4C4C10: push    esi
0x4C4C11: mov     eax, ds:0B30AACh
0x4C4C16: xor     eax, esp
0x4C4C18: push    eax
0x4C4C19: lea     eax, [esp+1Ch+var_C]
0x4C4C1D: mov     large fs:0, eax
0x4C4C23: mov     esi, ecx
0x4C4C25: mov     [esp+1Ch+var_10], esi
0x4C4C29: call    TESForm_constr
0x4C4C2E: mov     dword ptr [esi+18h], offset ??_7TESChildCell@@6B@; const TESChildCell::`vftable'
0x4C4C35: xor     ebx, ebx
0x4C4C37: mov     dword ptr [esi], offset ??_7TESObjectLAND@@6BTESObjectLAND@@@; const TESObjectLAND::`vftable'{for `TESObjectLAND'}
0x4C4C3D: mov     dword ptr [esi+18h], offset ??_7TESObjectLAND@@6BTESChildCell@@@; const TESObjectLAND::`vftable'{for `TESChildCell'}
0x4C4C44: cmp     ds:0B35BDCh, bl
0x4C4C4A: mov     [esp+1Ch+var_4], ebx
0x4C4C4E: jnz     short loc_4C4C55
0x4C4C50: call    sub_4C1840
0x4C4C55: mov     [esi+1Ch], ebx
0x4C4C58: mov     [esi+20h], ebx
0x4C4C5B: mov     byte ptr [esi+4], 36h ; '6'
0x4C4C5F: mov     [esi+24h], ebx
0x4C4C62: add     dword ptr ds:0B35BE0h, 1
0x4C4C69: mov     eax, esi
0x4C4C6B: mov     ecx, [esp+1Ch+var_C]
0x4C4C6F: mov     large fs:0, ecx
0x4C4C76: pop     ecx
0x4C4C77: pop     esi
0x4C4C78: pop     ebx
0x4C4C79: add     esp, 10h
0x4C4C7C: retn
