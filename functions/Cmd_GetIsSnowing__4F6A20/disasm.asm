0x4F6A20: push    ecx
0x4F6A21: call    Sky_CreateOrGetGlobalObject
0x4F6A26: mov     ecx, eax
0x4F6A28: call    sub_4F5F70
0x4F6A2D: test    al, al
0x4F6A2F: jz      short loc_4F6A35
0x4F6A31: fld1
0x4F6A33: jmp     short loc_4F6A37
0x4F6A35: fldz
0x4F6A37: mov     eax, [esp+4+arg_C]
0x4F6A3B: fstp    [esp+4+var_4]
0x4F6A3E: fld     [esp+4+var_4]
0x4F6A41: fst     qword ptr [eax]
0x4F6A43: cmp     byte ptr ds:0B361ACh, 0
0x4F6A4A: jz      short loc_4F6A63
0x4F6A4C: sub     esp, 8
0x4F6A4F: fstp    [esp+0Ch+var_C]
0x4F6A52: push    offset aGetissnowing0_; "GetIsSnowing >> %0.2f"
0x4F6A57: call    Interface_ConsolePrint
0x4F6A5C: add     esp, 0Ch
0x4F6A5F: mov     al, 1
0x4F6A61: pop     ecx
0x4F6A62: retn
0x4F6A63: fstp    st
0x4F6A65: mov     al, 1
0x4F6A67: pop     ecx
0x4F6A68: retn
