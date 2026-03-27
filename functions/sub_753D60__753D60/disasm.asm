0x753D60: push    esi
0x753D61: push    edi
0x753D62: push    3Ch ; '<'; Size
0x753D64: mov     edi, ecx
0x753D66: call    FormHeapAlloc
0x753D6B: mov     esi, eax
0x753D6D: add     esp, 4
0x753D70: test    esi, esi
0x753D72: jz      short loc_753D9D
0x753D74: mov     ecx, esi; this
0x753D76: call    ??0NiTimeController@@QAE@XZ; NiTimeController::NiTimeController(void)
0x753D7B: fldz
0x753D7D: mov     eax, [esp+8+arg_0]
0x753D81: fst     dword ptr [esi+18h]
0x753D84: push    eax
0x753D85: fstp    dword ptr [esi+14h]
0x753D88: push    esi
0x753D89: mov     ecx, edi
0x753D8B: mov     dword ptr [esi], offset ??_7NiPSysUpdateCtlr@@6B@; const NiPSysUpdateCtlr::`vftable'
0x753D91: call    sub_715D80
0x753D96: pop     edi
0x753D97: mov     eax, esi
0x753D99: pop     esi
0x753D9A: retn    4
0x753D9D: mov     eax, [esp+8+arg_0]
0x753DA1: push    eax
0x753DA2: xor     esi, esi
0x753DA4: push    esi
0x753DA5: mov     ecx, edi
0x753DA7: call    sub_715D80
0x753DAC: pop     edi
0x753DAD: mov     eax, esi
0x753DAF: pop     esi
0x753DB0: retn    4
