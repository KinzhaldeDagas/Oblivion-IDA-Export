0x4F4490: mov     ecx, [esp+arg_0]
0x4F4494: sub     esp, 0Ch
0x4F4497: test    ecx, ecx
0x4F4499: jz      short loc_4F44F3
0x4F449B: mov     eax, [ecx]
0x4F449D: mov     eax, [eax+0F4h]
0x4F44A3: lea     edx, [esp+0Ch+var_C]
0x4F44A6: push    edx
0x4F44A7: call    eax
0x4F44A9: movsx   ecx, [esp+0Ch+arg_4]
0x4F44AE: mov     edx, [esp+0Ch+arg_C]
0x4F44B2: mov     eax, ecx
0x4F44B4: sub     eax, 58h ; 'X'
0x4F44B7: jz      short loc_4F44CF
0x4F44B9: sub     eax, 1
0x4F44BC: jz      short loc_4F44C9
0x4F44BE: sub     eax, 1
0x4F44C1: jnz     short loc_4F44D4
0x4F44C3: fld     [esp+0Ch+var_4]
0x4F44C7: jmp     short loc_4F44D2
0x4F44C9: fld     [esp+0Ch+var_8]
0x4F44CD: jmp     short loc_4F44D2
0x4F44CF: fld     [esp+0Ch+var_C]
0x4F44D2: fstp    qword ptr [edx]
0x4F44D4: cmp     byte ptr ds:0B361ACh, 0
0x4F44DB: jz      short loc_4F44F3
0x4F44DD: fld     qword ptr [edx]
0x4F44DF: sub     esp, 8
0x4F44E2: fstp    [esp+14h+var_18+4]
0x4F44E5: push    ecx
0x4F44E6: push    offset aGetstartingpos; "GetStartingPos: %c >> %0.2f"
0x4F44EB: call    Interface_ConsolePrint
0x4F44F0: add     esp, 10h
0x4F44F3: mov     al, 1
0x4F44F5: add     esp, 0Ch
0x4F44F8: retn
