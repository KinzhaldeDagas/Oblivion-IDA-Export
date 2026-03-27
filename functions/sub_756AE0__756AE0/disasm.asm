0x756AE0: push    esi
0x756AE1: push    48h ; 'H'; Size
0x756AE3: call    FormHeapAlloc
0x756AE8: mov     esi, eax
0x756AEA: add     esp, 4
0x756AED: test    esi, esi
0x756AEF: jz      short loc_756B02
0x756AF1: mov     ecx, esi
0x756AF3: call    sub_75F510
0x756AF8: mov     dword ptr [esi], offset ??_7NiPSysInitialRotAngleVarCtlr@@6B@; const NiPSysInitialRotAngleVarCtlr::`vftable'
0x756AFE: mov     eax, esi
0x756B00: pop     esi
0x756B01: retn
0x756B02: xor     eax, eax
0x756B04: pop     esi
0x756B05: retn
