0x4F5880: fldz
0x4F5882: push    esi
0x4F5883: push    edi
0x4F5884: mov     edi, [esp+8+arg_C]
0x4F5888: fstp    qword ptr [edi]
0x4F588A: mov     ecx, ds:0B333C4h
0x4F5890: call    Actor_GetDefaultClass
0x4F5895: mov     ecx, ds:0B333C4h
0x4F589B: mov     esi, eax
0x4F589D: call    Actor_GetBaseClass
0x4F58A2: cmp     eax, esi
0x4F58A4: jnz     short loc_4F58AE
0x4F58A6: fld     qword ptr ds:0A3D0C0h
0x4F58AC: jmp     short loc_4F58D5
0x4F58AE: test    esi, esi
0x4F58B0: jz      short loc_4F58D7
0x4F58B2: mov     ecx, ds:0B333C4h
0x4F58B8: push    ebx
0x4F58B9: call    Actor_GetBaseClass
0x4F58BE: mov     ecx, eax; this
0x4F58C0: call    TESObjectREFR_GetParentCell
0x4F58C5: mov     ecx, esi; this
0x4F58C7: mov     ebx, eax
0x4F58C9: call    TESObjectREFR_GetParentCell
0x4F58CE: cmp     eax, ebx
0x4F58D0: pop     ebx
0x4F58D1: jnz     short loc_4F58D7
0x4F58D3: fld1
0x4F58D5: fstp    qword ptr [edi]
0x4F58D7: cmp     byte ptr ds:0B361ACh, 0
0x4F58DE: jz      short loc_4F58F5
0x4F58E0: fld     qword ptr [edi]
0x4F58E2: sub     esp, 8
0x4F58E5: fstp    [esp+10h+var_10]
0x4F58E8: push    offset aGetismyclassde; "GetIsMyClassDefault >> %0.2f"
0x4F58ED: call    Interface_ConsolePrint
0x4F58F2: add     esp, 0Ch
0x4F58F5: pop     edi
0x4F58F6: mov     al, 1
0x4F58F8: pop     esi
0x4F58F9: retn
