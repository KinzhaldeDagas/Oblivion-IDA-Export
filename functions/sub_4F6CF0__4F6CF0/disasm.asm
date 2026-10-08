0x4F6CF0: fldz; GetInSameCell checks pointer identity of both resolved cell objects. This differs from GetInCell's case-insensitive editor-name prefix comparison; Fallout's analogous handler x4y6:0x823B61A0 also uses parent-cell pointer equality.
0x4F6CF2: mov     eax, [esp+arg_4]
0x4F6CF6: push    ebx
0x4F6CF7: mov     ebx, [esp+4+arg_C]
0x4F6CFB: push    esi
0x4F6CFC: fstp    qword ptr [ebx]
0x4F6CFE: xor     esi, esi
0x4F6D00: test    eax, eax
0x4F6D02: jz      short loc_4F6D12
0x4F6D04: movzx   ecx, byte ptr [eax+4]
0x4F6D08: add     ecx, 0FFFFFFCFh
0x4F6D0B: cmp     ecx, 2
0x4F6D0E: ja      short loc_4F6D12
0x4F6D10: mov     esi, eax
0x4F6D12: mov     ecx, [esp+8+arg_0]; this
0x4F6D16: test    ecx, ecx
0x4F6D18: push    edi
0x4F6D19: jz      short loc_4F6D24
0x4F6D1B: call    Shared_GetDwordAtOffset40; Linker-folded two-instruction accessor shared by unrelated classes: returns the dword at this+0x40. The field meaning is determined by each call context; on TESClass it is specialization, while on TESObjectREFR it may be parentCell.
0x4F6D20: mov     edi, eax
0x4F6D22: jmp     short loc_4F6D26
0x4F6D24: xor     edi, edi
0x4F6D26: test    esi, esi
0x4F6D28: jz      short loc_4F6D33
0x4F6D2A: mov     ecx, esi; this
0x4F6D2C: call    Shared_GetDwordAtOffset40; Linker-folded two-instruction accessor shared by unrelated classes: returns the dword at this+0x40. The field meaning is determined by each call context; on TESClass it is specialization, while on TESObjectREFR it may be parentCell.
0x4F6D31: jmp     short loc_4F6D35
0x4F6D33: xor     eax, eax
0x4F6D35: test    edi, edi
0x4F6D37: jz      short loc_4F6D45
0x4F6D39: test    eax, eax
0x4F6D3B: jz      short loc_4F6D45
0x4F6D3D: cmp     edi, eax
0x4F6D3F: jnz     short loc_4F6D45
0x4F6D41: fld1
0x4F6D43: fstp    qword ptr [ebx]
0x4F6D45: cmp     byte ptr ds:0B361ACh, 0
0x4F6D4C: pop     edi
0x4F6D4D: jz      short loc_4F6D64
0x4F6D4F: fld     qword ptr [ebx]
0x4F6D51: sub     esp, 8
0x4F6D54: fstp    [esp+10h+var_10]
0x4F6D57: push    offset aGetinsamecell0; "GetInSameCell >> %0.2f"
0x4F6D5C: call    Interface_ConsolePrint
0x4F6D61: add     esp, 0Ch
0x4F6D64: pop     esi
0x4F6D65: mov     al, 1
0x4F6D67: pop     ebx
0x4F6D68: retn
