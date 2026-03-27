0x496C00: sub     esp, 34h
0x496C03: push    ebx
0x496C04: mov     ebx, ds:0A28290h
0x496C0A: push    esi
0x496C0B: push    edi
0x496C0C: mov     esi, ecx
0x496C0E: mov     eax, [esi+14h]
0x496C11: mov     ecx, [esi+0Ch]
0x496C14: push    eax; lParam
0x496C15: push    0; wParam
0x496C17: push    1109h; Msg
0x496C1C: push    ecx; hWnd
0x496C1D: call    ebx ; SendMessageA
0x496C1F: mov     eax, [esp+40h+arg_4]
0x496C23: test    eax, eax
0x496C25: mov     [esp+40h+var_30], 0FFFF0002h
0x496C2D: mov     [esp+40h+var_2C], 27h ; '''
0x496C35: mov     [esp+40h+lParam], 0FFFF0000h
0x496C3D: jz      short loc_496C45
0x496C3F: mov     [esp+40h+var_1C], eax
0x496C43: jmp     short loc_496C4C
0x496C45: mov     edx, [esi+1Ch]
0x496C48: mov     [esp+40h+var_1C], edx
0x496C4C: mov     ecx, [esi+0Ch]
0x496C4F: mov     edi, [esp+40h+arg_0]
0x496C53: lea     eax, [esp+40h+lParam]
0x496C57: push    eax; lParam
0x496C58: push    0; wParam
0x496C5A: push    1100h; Msg
0x496C5F: push    ecx; hWnd
0x496C60: mov     [esp+50h+var_14], 0
0x496C68: mov     [esp+50h+var_10], 0
0x496C70: mov     [esp+50h+var_8], edi
0x496C74: call    ebx ; SendMessageA
0x496C76: push    edi
0x496C77: push    eax
0x496C78: mov     ecx, esi
0x496C7A: mov     [esi+10h], eax
0x496C7D: call    sub_4964F0
0x496C82: mov     edx, [esi+8]
0x496C85: push    0Ah; nCmdShow
0x496C87: push    edx; hWnd
0x496C88: call    dword ptr ds:0A2828Ch
0x496C8E: mov     eax, [esi+8]
0x496C91: push    eax; hWnd
0x496C92: call    dword ptr ds:0A2827Ch
0x496C98: pop     edi
0x496C99: pop     esi
0x496C9A: pop     ebx
0x496C9B: add     esp, 34h
0x496C9E: retn    8
