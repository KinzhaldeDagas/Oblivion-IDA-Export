0x731AE0: push    esi
0x731AE1: mov     esi, ecx
0x731AE3: mov     dword ptr [esi], offset ??_7NiDynamicEffectState@@6B@; const NiDynamicEffectState::`vftable'
0x731AE9: cmp     dword ptr [esi+0Ch], 0
0x731AED: jz      short loc_731B07
0x731AEF: nop
0x731AF0: mov     eax, [esi+0Ch]
0x731AF3: mov     ecx, [eax]
0x731AF5: push    eax
0x731AF6: mov     [esi+0Ch], ecx
0x731AF9: call    FormHeapFree
0x731AFE: add     esp, 4
0x731B01: cmp     dword ptr [esi+0Ch], 0
0x731B05: jnz     short loc_731AF0
0x731B07: cmp     dword ptr [esi+10h], 0
0x731B0B: jz      short loc_731B27
0x731B0D: lea     ecx, [ecx+0]
0x731B10: mov     eax, [esi+10h]
0x731B13: mov     edx, [eax]
0x731B15: push    eax
0x731B16: mov     [esi+10h], edx
0x731B19: call    FormHeapFree
0x731B1E: add     esp, 4
0x731B21: cmp     dword ptr [esi+10h], 0
0x731B25: jnz     short loc_731B10
0x731B27: cmp     dword ptr [esi+14h], 0
0x731B2B: jz      short loc_731B47
0x731B2D: lea     ecx, [ecx+0]
0x731B30: mov     eax, [esi+14h]
0x731B33: mov     ecx, [eax]
0x731B35: push    eax
0x731B36: mov     [esi+14h], ecx
0x731B39: call    FormHeapFree
0x731B3E: add     esp, 4
0x731B41: cmp     dword ptr [esi+14h], 0
0x731B45: jnz     short loc_731B30
0x731B47: push    offset NiRefObject_objcount; lpAddend
0x731B4C: mov     dword ptr [esi], offset ??_7NiRefObject@@6B@; const NiRefObject::`vftable'
0x731B52: call    dword ptr ds:0A2807Ch
0x731B58: pop     esi
0x731B59: retn
