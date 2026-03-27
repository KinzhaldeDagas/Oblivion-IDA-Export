0x4F8890: mov     eax, [esp+arg_0]
0x4F8894: sub     esp, 0Ch
0x4F8897: test    eax, eax
0x4F8899: jz      short loc_4F88FF
0x4F889B: mov     ecx, [eax+20h]
0x4F889E: mov     edx, [eax+24h]
0x4F88A1: mov     eax, [eax+28h]
0x4F88A4: mov     [esp+0Ch+var_C], ecx
0x4F88A7: movsx   ecx, [esp+0Ch+arg_4]
0x4F88AC: mov     [esp+0Ch+var_4], eax
0x4F88B0: mov     eax, ecx
0x4F88B2: sub     eax, 58h ; 'X'
0x4F88B5: mov     [esp+0Ch+var_8], edx
0x4F88B9: mov     edx, [esp+0Ch+arg_C]
0x4F88BD: jz      short loc_4F88D5
0x4F88BF: sub     eax, 1
0x4F88C2: jz      short loc_4F88CF
0x4F88C4: sub     eax, 1
0x4F88C7: jnz     short loc_4F88E0
0x4F88C9: fld     [esp+0Ch+var_4]
0x4F88CD: jmp     short loc_4F88D8
0x4F88CF: fld     [esp+0Ch+var_8]
0x4F88D3: jmp     short loc_4F88D8
0x4F88D5: fld     [esp+0Ch+var_C]
0x4F88D8: fmul    qword ptr ds:0A30DC8h
0x4F88DE: fstp    qword ptr [edx]
0x4F88E0: cmp     byte ptr ds:0B361ACh, 0
0x4F88E7: jz      short loc_4F88FF
0x4F88E9: fld     qword ptr [edx]
0x4F88EB: sub     esp, 8
0x4F88EE: fstp    [esp+14h+var_14]
0x4F88F1: push    ecx
0x4F88F2: push    offset aGetangleC0_2f; "GetAngle: %c >> %0.2f"
0x4F88F7: call    Interface_ConsolePrint
0x4F88FC: add     esp, 10h
0x4F88FF: mov     al, 1
0x4F8901: add     esp, 0Ch
0x4F8904: retn
