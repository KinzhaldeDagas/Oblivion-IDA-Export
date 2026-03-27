0x757C30: push    esi
0x757C31: push    48h ; 'H'; Size
0x757C33: call    FormHeapAlloc
0x757C38: mov     esi, eax
0x757C3A: add     esp, 4
0x757C3D: test    esi, esi
0x757C3F: jz      short loc_757C52
0x757C41: mov     ecx, esi
0x757C43: call    sub_75F510
0x757C48: mov     dword ptr [esi], offset ??_7NiPSysEmitterSpeedCtlr@@6B@; const NiPSysEmitterSpeedCtlr::`vftable'
0x757C4E: mov     eax, esi
0x757C50: pop     esi
0x757C51: retn
0x757C52: xor     eax, eax
0x757C54: pop     esi
0x757C55: retn
