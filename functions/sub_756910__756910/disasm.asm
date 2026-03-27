0x756910: push    esi
0x756911: push    edi
0x756912: push    48h ; 'H'; Size
0x756914: mov     edi, ecx
0x756916: call    FormHeapAlloc
0x75691B: mov     esi, eax
0x75691D: add     esp, 4
0x756920: test    esi, esi
0x756922: jz      short loc_756945
0x756924: mov     ecx, esi
0x756926: call    sub_75F510
0x75692B: mov     eax, [esp+8+arg_0]
0x75692F: push    eax
0x756930: push    esi
0x756931: mov     ecx, edi
0x756933: mov     dword ptr [esi], offset ??_7NiPSysInitialRotSpeedVarCtlr@@6B@; const NiPSysInitialRotSpeedVarCtlr::`vftable'
0x756939: call    sub_75F5A0
0x75693E: pop     edi
0x75693F: mov     eax, esi
0x756941: pop     esi
0x756942: retn    4
0x756945: mov     eax, [esp+8+arg_0]
0x756949: push    eax
0x75694A: xor     esi, esi
0x75694C: push    esi
0x75694D: mov     ecx, edi
0x75694F: call    sub_75F5A0
0x756954: pop     edi
0x756955: mov     eax, esi
0x756957: pop     esi
0x756958: retn    4
