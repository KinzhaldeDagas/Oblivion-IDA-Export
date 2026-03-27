0x759C50: push    esi
0x759C51: push    edi
0x759C52: push    68h ; 'h'; Size
0x759C54: call    FormHeapAlloc
0x759C59: mov     esi, eax
0x759C5B: xor     edi, edi
0x759C5D: add     esp, 4
0x759C60: cmp     esi, edi
0x759C62: jz      short loc_759C84
0x759C64: mov     ecx, esi
0x759C66: call    sub_73EE80
0x759C6B: mov     [esi+5Ch], edi
0x759C6E: mov     [esi+60h], edi
0x759C71: mov     [esi+64h], di
0x759C75: mov     [esi+66h], di
0x759C79: pop     edi
0x759C7A: mov     dword ptr [esi], offset ??_7NiPSysData@@6B@; const NiPSysData::`vftable'
0x759C80: mov     eax, esi
0x759C82: pop     esi
0x759C83: retn
0x759C84: pop     edi
0x759C85: xor     eax, eax
0x759C87: pop     esi
0x759C88: retn
