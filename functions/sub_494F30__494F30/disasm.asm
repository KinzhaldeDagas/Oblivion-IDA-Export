0x494F30: push    esi
0x494F31: mov     esi, ecx
0x494F33: mov     eax, [esi+1Ch]
0x494F36: push    edi
0x494F37: push    eax
0x494F38: call    FormHeapFree
0x494F3D: mov     ecx, [esi+0Ch]
0x494F40: add     esp, 4
0x494F43: push    0FFFF0000h; lParam
0x494F48: push    0; wParam
0x494F4A: push    1101h; Msg
0x494F4F: push    ecx; hWnd
0x494F50: call    dword ptr ds:0A28290h
0x494F56: mov     edx, [esi+14h]
0x494F59: push    edx; himl
0x494F5A: call    dword ptr ds:0A2801Ch
0x494F60: mov     eax, [esi+0Ch]
0x494F63: mov     edi, ds:0A28294h
0x494F69: push    eax; hWnd
0x494F6A: call    edi ; DestroyWindow
0x494F6C: mov     ecx, [esi+8]
0x494F6F: push    ecx; hWnd
0x494F70: call    edi ; DestroyWindow
0x494F72: pop     edi
0x494F73: mov     dword ptr ds:0B3CC34h, 0
0x494F7D: mov     dword ptr ds:0B3CC30h, 0
0x494F87: pop     esi
0x494F88: retn
