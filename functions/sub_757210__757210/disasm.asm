0x757210: push    esi
0x757211: push    edi
0x757212: push    48h ; 'H'; Size
0x757214: mov     edi, ecx
0x757216: call    FormHeapAlloc
0x75721B: mov     esi, eax
0x75721D: add     esp, 4
0x757220: test    esi, esi
0x757222: jz      short loc_757245
0x757224: mov     ecx, esi
0x757226: call    sub_75F510
0x75722B: mov     eax, [esp+8+arg_0]
0x75722F: push    eax
0x757230: push    esi
0x757231: mov     ecx, edi
0x757233: mov     dword ptr [esi], offset ??_7NiPSysGravityStrengthCtlr@@6B@; const NiPSysGravityStrengthCtlr::`vftable'
0x757239: call    sub_75F5A0
0x75723E: pop     edi
0x75723F: mov     eax, esi
0x757241: pop     esi
0x757242: retn    4
0x757245: mov     eax, [esp+8+arg_0]
0x757249: push    eax
0x75724A: xor     esi, esi
0x75724C: push    esi
0x75724D: mov     ecx, edi
0x75724F: call    sub_75F5A0
0x757254: pop     edi
0x757255: mov     eax, esi
0x757257: pop     esi
0x757258: retn    4
