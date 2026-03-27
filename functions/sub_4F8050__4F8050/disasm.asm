0x4F8050: fldz
0x4F8052: mov     eax, [esp+arg_C]
0x4F8056: fstp    qword ptr [eax]
0x4F8058: mov     ecx, ds:0B333C4h
0x4F805E: cmp     byte ptr [ecx+594h], 0
0x4F8065: jz      short loc_4F806B
0x4F8067: fld1
0x4F8069: jmp     short loc_4F806D
0x4F806B: fldz
0x4F806D: fstp    [esp+arg_C]
0x4F8071: fld     [esp+arg_C]
0x4F8075: fst     qword ptr [eax]
0x4F8077: cmp     byte ptr ds:0B361ACh, 0
0x4F807E: jz      short loc_4F8096
0x4F8080: sub     esp, 8
0x4F8083: fstp    [esp+8+var_8]
0x4F8086: push    offset aIsplayersleeping0_2f; "IsPlayerSleeping >> %0.2f"
0x4F808B: call    Interface_ConsolePrint
0x4F8090: add     esp, 0Ch
0x4F8093: mov     al, 1
0x4F8095: retn
0x4F8096: fstp    st
0x4F8098: mov     al, 1
0x4F809A: retn
