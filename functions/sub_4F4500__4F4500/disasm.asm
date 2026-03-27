0x4F4500: mov     ecx, [esp+arg_0]
0x4F4504: sub     esp, 0Ch
0x4F4507: test    ecx, ecx
0x4F4509: jz      short loc_4F4569
0x4F450B: mov     eax, [ecx]
0x4F450D: mov     eax, [eax+0F0h]
0x4F4513: lea     edx, [esp+0Ch+var_C]
0x4F4516: push    edx
0x4F4517: call    eax
0x4F4519: movsx   ecx, [esp+0Ch+arg_4]
0x4F451E: mov     edx, [esp+0Ch+arg_C]
0x4F4522: mov     eax, ecx
0x4F4524: sub     eax, 58h ; 'X'
0x4F4527: jz      short loc_4F453F
0x4F4529: sub     eax, 1
0x4F452C: jz      short loc_4F4539
0x4F452E: sub     eax, 1
0x4F4531: jnz     short loc_4F454A
0x4F4533: fld     [esp+0Ch+var_4]
0x4F4537: jmp     short loc_4F4542
0x4F4539: fld     [esp+0Ch+var_8]
0x4F453D: jmp     short loc_4F4542
0x4F453F: fld     [esp+0Ch+var_C]
0x4F4542: fmul    qword ptr ds:0A30DC8h
0x4F4548: fstp    qword ptr [edx]
0x4F454A: cmp     byte ptr ds:0B361ACh, 0
0x4F4551: jz      short loc_4F4569
0x4F4553: fld     qword ptr [edx]
0x4F4555: sub     esp, 8
0x4F4558: fstp    [esp+14h+var_18+4]
0x4F455B: push    ecx
0x4F455C: push    offset aGetstartingang; "GetStartingAngle: %c >> %0.2f"
0x4F4561: call    Interface_ConsolePrint
0x4F4566: add     esp, 10h
0x4F4569: mov     al, 1
0x4F456B: add     esp, 0Ch
0x4F456E: retn
