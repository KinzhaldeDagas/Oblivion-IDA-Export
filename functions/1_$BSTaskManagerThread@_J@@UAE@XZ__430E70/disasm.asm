0x430E70: push    esi
0x430E71: mov     esi, ecx
0x430E73: mov     eax, [esi+4]
0x430E76: push    edi
0x430E77: push    eax; hThread
0x430E78: mov     dword ptr [esi], offset ??_7BSTaskThread@@6B@; const BSTaskThread::`vftable'
0x430E7E: call    ds:SuspendThread
0x430E84: mov     ecx, [esi+4]
0x430E87: mov     edi, ds:CloseHandle
0x430E8D: push    ecx; hObject
0x430E8E: call    edi ; CloseHandle
0x430E90: mov     edx, [esi+20h]
0x430E93: push    edx; hObject
0x430E94: call    edi ; CloseHandle
0x430E96: mov     eax, [esi+14h]
0x430E99: push    eax; hObject
0x430E9A: call    edi ; CloseHandle
0x430E9C: pop     edi
0x430E9D: pop     esi
0x430E9E: retn
