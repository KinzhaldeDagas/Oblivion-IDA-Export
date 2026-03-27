0x5069D0: sub     esp, 10h
0x5069D3: mov     ecx, [esp+28h]
0x5069D7: fldz
0x5069D9: mov     edx, [esp+10h+arg_10]
0x5069DD: fstp    dword ptr [esp+10h+var_C]
0x5069E1: lea     eax, [esp+10h+var_C]
0x5069E5: push    eax; UInt16
0x5069E6: mov     eax, [esp+14h+arg_C]
0x5069EA: push    ecx; l
0x5069EB: mov     ecx, [esp+18h+a4]
0x5069EF: push    edx; a6
0x5069F0: mov     edx, [esp+1Ch+a3]
0x5069F4: push    eax; a5
0x5069F5: mov     eax, [esp+20h+arg_4]
0x5069F9: push    ecx; a4
0x5069FA: mov     ecx, [esp+24h+a1]
0x5069FE: push    edx; a3
0x5069FF: push    eax; a2
0x506A00: push    ecx; a1
0x506A01: call    Script_ExtractArgs
0x506A06: add     esp, 20h
0x506A09: test    al, al
0x506A0B: jnz     short loc_506A11
0x506A0D: add     esp, 10h
0x506A10: retn
0x506A11: fldz
0x506A13: fld     dword ptr [esp+10h+var_C]
0x506A17: fcom    st(1)
0x506A19: fnstsw  ax
0x506A1B: fstp    st(1)
0x506A1D: test    ah, 41h
0x506A20: jnz     short loc_506A8E
0x506A22: fmul    qword ptr ds:0A4BEE0h
0x506A28: push    esi
0x506A29: fnstcw  [esp+14h+var_E]
0x506A2D: mov     ecx, offset FormHeap
0x506A32: movzx   eax, [esp+14h+var_E]
0x506A37: or      eax, 0C00h
0x506A3C: mov     dword ptr [esp+14h+dwSize], eax
0x506A40: fldcw   word ptr [esp+14h+dwSize]
0x506A44: fistp   [esp+14h+dwSize]
0x506A48: mov     esi, dword ptr [esp+14h+dwSize]
0x506A4C: fldcw   [esp+14h+var_E]
0x506A50: call    AviablePhysicalPages
0x506A55: test    eax, eax
0x506A57: mov     dword ptr [esp+14h+dwSize], eax
0x506A5B: fild    dword ptr [esp+14h+dwSize]
0x506A5F: jge     short loc_506A67
0x506A61: fadd    dword ptr ds:0A2FC78h
0x506A67: fmul    qword ptr ds:0A30530h
0x506A6D: sub     esp, 8
0x506A70: fstp    [esp+1Ch+var_1C]
0x506A73: push    offset aFreeMemoryWas_; "Free memory [was]: %.3f MB"
0x506A78: call    Interface_ConsolePrint
0x506A7D: add     esp, 0Ch
0x506A80: push    esi; dwSize
0x506A81: mov     ecx, offset FormHeap
0x506A86: call    AllocateVirtualPage
0x506A8B: pop     esi
0x506A8C: jmp     short loc_506A90
0x506A8E: fstp    st
0x506A90: mov     ecx, offset FormHeap
0x506A95: call    AviablePhysicalPages
0x506A9A: test    eax, eax
0x506A9C: mov     dword ptr [esp+10h+dwSize], eax
0x506AA0: fild    dword ptr [esp+10h+dwSize]
0x506AA4: jge     short loc_506AAC
0x506AA6: fadd    dword ptr ds:0A2FC78h
0x506AAC: fmul    qword ptr ds:0A30530h
0x506AB2: sub     esp, 8
0x506AB5: fstp    [esp+18h+var_1C+4]
0x506AB8: push    offset aFreeMemoryIs_3; "Free memory [is]: %.3f MB"
0x506ABD: call    Interface_ConsolePrint
0x506AC2: add     esp, 0Ch
0x506AC5: mov     al, 1
0x506AC7: add     esp, 10h
0x506ACA: retn
