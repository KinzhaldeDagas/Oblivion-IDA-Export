0x4F7A41: fld     qword ptr ds:0A3D360h; jumptable 004F7907 default case
0x4F7A47: fstp    qword ptr [esi]
0x4F7A49: cmp     byte ptr ds:0B361ACh, 0
0x4F7A50: jz      short loc_4F7A67
0x4F7A52: fld     qword ptr [esi]
0x4F7A54: sub     esp, 8
0x4F7A57: fstp    [esp+8+var_8]
0x4F7A5A: push    offset aCurrentProcess; "Current Process >> %0.2f"
0x4F7A5F: call    Interface_ConsolePrint
0x4F7A64: add     esp, 0Ch
0x4F7A67: pop     edi
0x4F7A68: mov     al, 1
0x4F7A6A: pop     esi
0x4F7A6B: retn
