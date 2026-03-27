0x753BB0: push    esi
0x753BB1: push    3Ch ; '<'; Size
0x753BB3: call    FormHeapAlloc
0x753BB8: mov     esi, eax
0x753BBA: add     esp, 4
0x753BBD: test    esi, esi
0x753BBF: jz      short loc_753BDA
0x753BC1: mov     ecx, esi; this
0x753BC3: call    ??0NiTimeController@@QAE@XZ; NiTimeController::NiTimeController(void)
0x753BC8: fldz
0x753BCA: fst     dword ptr [esi+18h]
0x753BCD: mov     dword ptr [esi], offset ??_7NiPSysUpdateCtlr@@6B@; const NiPSysUpdateCtlr::`vftable'
0x753BD3: fstp    dword ptr [esi+14h]
0x753BD6: mov     eax, esi
0x753BD8: pop     esi
0x753BD9: retn
0x753BDA: xor     eax, eax
0x753BDC: pop     esi
0x753BDD: retn
