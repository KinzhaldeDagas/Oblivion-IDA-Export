0x495D10: sub     esp, 40h
0x495D13: push    esi
0x495D14: push    edi
0x495D15: lea     eax, [esp+48h+picce]
0x495D19: push    eax; picce
0x495D1A: mov     esi, ecx
0x495D1C: mov     [esp+4Ch+picce.dwSize], 8
0x495D24: mov     [esp+4Ch+picce.dwICC], 2
0x495D2C: call    dword ptr ds:0A28024h
0x495D32: mov     ecx, [esi]
0x495D34: push    7F00h; lpIconName
0x495D39: push    0; hInstance
0x495D3B: mov     [esp+50h+WndClass.style], 3
0x495D43: mov     [esp+50h+WndClass.lpfnWndProc], offset sub_4955B0
0x495D4B: mov     [esp+50h+WndClass.cbClsExtra], 0
0x495D53: mov     [esp+50h+WndClass.cbWndExtra], 0
0x495D5B: mov     [esp+50h+WndClass.hInstance], ecx
0x495D5F: call    dword ptr ds:0A282A4h
0x495D65: push    7F00h; lpCursorName
0x495D6A: push    0; hInstance
0x495D6C: mov     [esp+50h+WndClass.hIcon], eax
0x495D70: call    dword ptr ds:0A28280h
0x495D76: push    0; i
0x495D78: mov     [esp+4Ch+WndClass.hCursor], eax
0x495D7C: call    dword ptr ds:0A2803Ch
0x495D82: lea     edx, [esp+48h+WndClass]
0x495D86: push    edx; lpWndClass
0x495D87: mov     [esp+4Ch+WndClass.hbrBackground], eax
0x495D8B: mov     [esp+4Ch+WndClass.lpszClassName], offset ClassName; "NiTreeCtrl" ...
0x495D93: mov     [esp+4Ch+WndClass.lpszMenuName], 0
0x495D9B: call    dword ptr ds:0A282A8h
0x495DA1: mov     eax, [esi]
0x495DA3: mov     ecx, [esp+48h+nHeight]
0x495DA7: mov     edx, [esp+48h+nWidth]
0x495DAB: push    0; lpParam
0x495DAD: mov     edi, ds:0A28270h
0x495DB3: push    eax; hInstance
0x495DB4: mov     eax, [esp+50h+Y]
0x495DB8: push    0; hMenu
0x495DBA: push    0; hWndParent
0x495DBC: push    ecx; nHeight
0x495DBD: mov     ecx, [esp+5Ch+X]
0x495DC1: push    edx; nWidth
0x495DC2: mov     edx, [esi+1Ch]
0x495DC5: push    eax; Y
0x495DC6: push    ecx; X
0x495DC7: push    0CE0200h; dwStyle
0x495DCC: push    edx; lpWindowName
0x495DCD: push    offset ClassName; "NiTreeCtrl"
0x495DD2: push    0; dwExStyle
0x495DD4: call    edi ; CreateWindowExA
0x495DD6: lea     ecx, [esp+48h+Rect]
0x495DDA: push    ecx; lpRect
0x495DDB: push    eax; hWnd
0x495DDC: mov     [esi+8], eax
0x495DDF: call    dword ptr ds:0A28298h
0x495DE5: mov     edx, [esi]
0x495DE7: mov     ecx, [esp+48h+Rect.bottom]
0x495DEB: sub     ecx, [esp+48h+Rect.top]
0x495DEF: mov     eax, [esi+8]
0x495DF2: push    0; lpParam
0x495DF4: push    edx; hInstance
0x495DF5: mov     edx, [esp+50h+Rect.right]
0x495DF9: sub     edx, [esp+50h+Rect.left]
0x495DFD: push    0; hMenu
0x495DFF: push    eax; hWndParent
0x495E00: add     ecx, 1
0x495E03: push    ecx; nHeight
0x495E04: add     edx, 1
0x495E07: push    edx; nWidth
0x495E08: push    0; Y
0x495E0A: push    0; X
0x495E0C: push    50010007h; dwStyle
0x495E11: push    offset EmptyString; lpWindowName
0x495E16: push    offset aSystreeview32; "SysTreeView32"
0x495E1B: push    0; dwExStyle
0x495E1D: call    edi ; CreateWindowExA
0x495E1F: pop     edi
0x495E20: mov     [esi+0Ch], eax
0x495E23: pop     esi
0x495E24: add     esp, 40h
0x495E27: retn    10h
