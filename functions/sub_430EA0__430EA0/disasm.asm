0x430EA0: push    esi
0x430EA1: mov     esi, ecx
0x430EA3: mov     eax, [esi+4]
0x430EA6: push    edi
0x430EA7: push    eax; hThread
0x430EA8: mov     dword ptr [esi], offset ??_7BSTaskThread@@6B@; const BSTaskThread::`vftable'
0x430EAE: call    ds:SuspendThread
0x430EB4: mov     ecx, [esi+4]
0x430EB7: mov     edi, ds:CloseHandle
0x430EBD: push    ecx; hObject
0x430EBE: call    edi ; CloseHandle
0x430EC0: mov     edx, [esi+20h]
0x430EC3: push    edx; hObject
0x430EC4: call    edi ; CloseHandle
0x430EC6: mov     eax, [esi+14h]
0x430EC9: push    eax; hObject
0x430ECA: call    edi ; CloseHandle
0x430ECC: test    [esp+8+arg_0], 1
0x430ED1: jz      short loc_430EDC
0x430ED3: push    esi
0x430ED4: call    FormHeapFree
0x430ED9: add     esp, 4
0x430EDC: pop     edi
0x430EDD: mov     eax, esi
0x430EDF: pop     esi
0x430EE0: retn    4
