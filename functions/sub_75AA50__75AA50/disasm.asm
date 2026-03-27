0x75AA50: push    esi
0x75AA51: mov     esi, ecx
0x75AA53: mov     eax, [esi+1Ch]
0x75AA56: push    eax
0x75AA57: mov     dword ptr [esi], offset ??_7NiPSysBoundUpdateModifier@@6B@; const NiPSysBoundUpdateModifier::`vftable'
0x75AA5D: call    FormHeapFree
0x75AA62: add     esp, 4
0x75AA65: mov     ecx, esi; this
0x75AA67: call    ??1NiPSysFieldModifier@@UAE@XZ; NiPSysFieldModifier::~NiPSysFieldModifier(void)
0x75AA6C: test    [esp+4+arg_0], 1
0x75AA71: jz      short loc_75AA7C
0x75AA73: push    esi
0x75AA74: call    FormHeapFree
0x75AA79: add     esp, 4
0x75AA7C: mov     eax, esi
0x75AA7E: pop     esi
0x75AA7F: retn    4
