0x42FD50: push    esi
0x42FD51: mov     esi, ecx
0x42FD53: mov     eax, [esi+40h]
0x42FD56: push    edi
0x42FD57: mov     edi, ds:CloseHandle
0x42FD5D: push    eax; hObject
0x42FD5E: mov     dword ptr [esi], offset ??_7BackgroundLoaderThread@@6B@; const BackgroundLoaderThread::`vftable'
0x42FD64: mov     dword ptr [esi+1Ch], 0
0x42FD6B: call    edi ; CloseHandle
0x42FD6D: mov     ecx, [esi+34h]
0x42FD70: push    ecx; hObject
0x42FD71: call    edi ; CloseHandle
0x42FD73: mov     edx, [esi+28h]
0x42FD76: push    edx; hObject
0x42FD77: call    edi ; CloseHandle
0x42FD79: mov     ecx, esi
0x42FD7B: call    sub_47D0B0
0x42FD80: test    [esp+8+arg_0], 1
0x42FD85: jz      short loc_42FD90
0x42FD87: push    esi
0x42FD88: call    FormHeapFree
0x42FD8D: add     esp, 4
0x42FD90: pop     edi
0x42FD91: mov     eax, esi
0x42FD93: pop     esi
0x42FD94: retn    4
