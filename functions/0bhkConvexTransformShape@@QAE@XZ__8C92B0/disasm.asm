0x8C92B0: push    esi
0x8C92B1: mov     esi, ecx
0x8C92B3: call    ??0bhkRefObject@@QAE@XZ; bhkRefObject::bhkRefObject(void)
0x8C92B8: xor     eax, eax
0x8C92BA: mov     [esi+0Ch], eax
0x8C92BD: mov     [esi+10h], eax
0x8C92C0: mov     dword ptr [esi], offset ??_7bhkShape@@6B@; const bhkShape::`vftable'
0x8C92C6: mov     eax, 1
0x8C92CB: add     ds:0BA7D70h, eax
0x8C92D1: mov     dword ptr [esi], offset ??_7bhkSphereRepShape@@6B@; const bhkSphereRepShape::`vftable'
0x8C92D7: add     ds:0BA7F44h, eax
0x8C92DD: mov     dword ptr [esi], offset ??_7bhkConvexShape@@6B@; const bhkConvexShape::`vftable'
0x8C92E3: add     ds:0BA7F50h, eax
0x8C92E9: mov     dword ptr [esi], offset ??_7bhkConvexTransformShape@@6B@; const bhkConvexTransformShape::`vftable'
0x8C92EF: add     ds:0BA8158h, eax
0x8C92F5: mov     eax, esi
0x8C92F7: pop     esi
0x8C92F8: retn
