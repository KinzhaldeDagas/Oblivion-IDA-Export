0x4F7030: push    esi
0x4F7031: mov     esi, [esp+4+arg_0]
0x4F7035: cmp     ds:0B361A4h, esi
0x4F703B: push    edi
0x4F703C: mov     edi, [esp+8+arg_C]
0x4F7040: jnz     short loc_4F704C
0x4F7042: fld     dword ptr ds:0B361A8h
0x4F7048: fstp    qword ptr [edi]
0x4F704A: jmp     short loc_4F7098
0x4F704C: test    esi, esi
0x4F704E: fldz
0x4F7050: fstp    qword ptr [edi]
0x4F7052: jz      short loc_4F708A
0x4F7054: mov     eax, [esi]
0x4F7056: mov     edx, [eax+170h]
0x4F705C: mov     ecx, esi
0x4F705E: call    edx
0x4F7060: cmp     byte ptr [eax+4], 23h ; '#'
0x4F7064: jnz     short loc_4F708A
0x4F7066: mov     eax, [esi]
0x4F7068: mov     edx, [eax+170h]
0x4F706E: mov     ecx, esi
0x4F7070: call    edx
0x4F7072: test    eax, eax
0x4F7074: jz      short loc_4F708A
0x4F7076: mov     eax, [eax+0E8h]
0x4F707C: test    eax, eax
0x4F707E: jz      short loc_4F708A
0x4F7080: test    byte ptr [eax+70h], 1
0x4F7084: jz      short loc_4F708A
0x4F7086: fld1
0x4F7088: fstp    qword ptr [edi]
0x4F708A: fld     qword ptr [edi]
0x4F708C: mov     ds:0B361A4h, esi
0x4F7092: fstp    dword ptr ds:0B361A8h
0x4F7098: cmp     byte ptr ds:0B361ACh, 0
0x4F709F: jz      short loc_4F70B6
0x4F70A1: fld     qword ptr [edi]
0x4F70A3: sub     esp, 8
0x4F70A6: fstp    [esp+10h+var_10]
0x4F70A9: push    offset aGetisplayabler; "GetIsPlayableRace >> %0.2f"
0x4F70AE: call    Interface_ConsolePrint
0x4F70B3: add     esp, 0Ch
0x4F70B6: pop     edi
0x4F70B7: mov     al, 1
0x4F70B9: pop     esi
0x4F70BA: retn
