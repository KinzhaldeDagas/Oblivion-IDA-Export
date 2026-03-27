0x4F8590: mov     eax, [esp+arg_4]
0x4F8594: mov     ecx, ds:0B333C4h
0x4F859A: mov     edx, [ecx+eax*4+658h]
0x4F85A1: fild    dword ptr [ecx+eax*4+658h]
0x4F85A8: test    edx, edx
0x4F85AA: jge     short loc_4F85B2
0x4F85AC: fadd    qword ptr ds:0A30E60h
0x4F85B2: mov     eax, [esp+arg_C]
0x4F85B6: fst     qword ptr [eax]
0x4F85B8: cmp     byte ptr ds:0B361ACh, 0
0x4F85BF: jz      short loc_4F85D7
0x4F85C1: sub     esp, 8
0x4F85C4: fstp    [esp+8+var_8]
0x4F85C7: push    offset aPlayerMiscStatValue_02f; "Player misc stat value %.02f"
0x4F85CC: call    Interface_ConsolePrint
0x4F85D1: add     esp, 0Ch
0x4F85D4: mov     al, 1
0x4F85D6: retn
0x4F85D7: fstp    st
0x4F85D9: mov     al, 1
0x4F85DB: retn
