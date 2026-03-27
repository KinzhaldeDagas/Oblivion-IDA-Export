0x75C120: push    esi
0x75C121: push    edi
0x75C122: push    48h ; 'H'; Size
0x75C124: mov     edi, ecx
0x75C126: call    FormHeapAlloc
0x75C12B: mov     esi, eax
0x75C12D: add     esp, 4
0x75C130: test    esi, esi
0x75C132: jz      short loc_75C155
0x75C134: mov     ecx, esi
0x75C136: call    sub_75F510
0x75C13B: mov     eax, [esp+8+arg_0]
0x75C13F: push    eax
0x75C140: push    esi
0x75C141: mov     ecx, edi
0x75C143: mov     dword ptr [esi], offset ??_7NiPSysAirFieldSpreadCtlr@@6B@; const NiPSysAirFieldSpreadCtlr::`vftable'
0x75C149: call    sub_75F5A0
0x75C14E: pop     edi
0x75C14F: mov     eax, esi
0x75C151: pop     esi
0x75C152: retn    4
0x75C155: mov     eax, [esp+8+arg_0]
0x75C159: push    eax
0x75C15A: xor     esi, esi
0x75C15C: push    esi
0x75C15D: mov     ecx, edi
0x75C15F: call    sub_75F5A0
0x75C164: pop     edi
0x75C165: mov     eax, esi
0x75C167: pop     esi
0x75C168: retn    4
