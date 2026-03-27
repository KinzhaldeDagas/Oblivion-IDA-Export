0x537ED0: push    esi
0x537ED1: mov     esi, ecx
0x537ED3: mov     eax, [esi+18h]
0x537ED6: push    eax
0x537ED7: mov     dword ptr [esi], offset ??_7TESWaterListener@@6B@; const TESWaterListener::`vftable'
0x537EDD: call    FormHeapFree
0x537EE2: add     esp, 4
0x537EE5: mov     ecx, esi; this
0x537EE7: call    ??1bhkWaterListener@@UAE@XZ; bhkWaterListener::~bhkWaterListener(void)
0x537EEC: test    [esp+4+arg_0], 1
0x537EF1: jz      short loc_537EFC
0x537EF3: push    esi
0x537EF4: call    FormHeapFree
0x537EF9: add     esp, 4
0x537EFC: mov     eax, esi
0x537EFE: pop     esi
0x537EFF: retn    4
