0x4F60E0: mov     eax, [esp+arg_0]
0x4F60E4: test    eax, eax
0x4F60E6: push    esi
0x4F60E7: mov     esi, [esp+4+arg_C]
0x4F60EB: jz      short loc_4F610D
0x4F60ED: fldz
0x4F60EF: fstp    qword ptr [esi]
0x4F60F1: mov     ecx, [eax+8]
0x4F60F4: shr     ecx, 0Bh
0x4F60F7: test    cl, 1
0x4F60FA: jnz     short loc_4F6109
0x4F60FC: push    eax
0x4F60FD: call    sub_4FA560
0x4F6102: add     esp, 4
0x4F6105: test    al, al
0x4F6107: jz      short loc_4F6128
0x4F6109: fld1
0x4F610B: jmp     short loc_4F6126
0x4F610D: mov     eax, [esp+4+arg_4]
0x4F6111: test    eax, eax
0x4F6113: jz      short loc_4F6128
0x4F6115: mov     dl, [eax+4]
0x4F6118: and     dl, 1
0x4F611B: movzx   eax, dl
0x4F611E: mov     [esp+4+arg_0], eax
0x4F6122: fild    [esp+4+arg_0]
0x4F6126: fstp    qword ptr [esi]
0x4F6128: cmp     byte ptr ds:0B361ACh, 0
0x4F612F: jz      short loc_4F6146
0x4F6131: fld     qword ptr [esi]
0x4F6133: sub     esp, 8
0x4F6136: fstp    [esp+0Ch+var_C]
0x4F6139: push    offset aGetdisabled0_f; "GetDisabled >> %0.f"
0x4F613E: call    Interface_ConsolePrint
0x4F6143: add     esp, 0Ch
0x4F6146: mov     al, 1
0x4F6148: pop     esi
0x4F6149: retn
