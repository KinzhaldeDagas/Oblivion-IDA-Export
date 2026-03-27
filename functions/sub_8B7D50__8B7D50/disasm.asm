0x8B7D50: push    esi
0x8B7D51: mov     esi, ecx
0x8B7D53: call    ??0bhkRefObject@@QAE@XZ; bhkRefObject::bhkRefObject(void)
0x8B7D58: xor     eax, eax
0x8B7D5A: mov     [esi+0Ch], eax
0x8B7D5D: mov     [esi+10h], eax
0x8B7D60: mov     dword ptr [esi], offset ??_7bhkShape@@6B@; const bhkShape::`vftable'
0x8B7D66: mov     eax, 1
0x8B7D6B: add     ds:0BA7D70h, eax
0x8B7D71: mov     dword ptr [esi], offset ??_7bhkSphereRepShape@@6B@; const bhkSphereRepShape::`vftable'
0x8B7D77: add     ds:0BA7F44h, eax
0x8B7D7D: mov     dword ptr [esi], offset ??_7bhkConvexShape@@6B@; const bhkConvexShape::`vftable'
0x8B7D83: add     ds:0BA7F50h, eax
0x8B7D89: mov     dword ptr [esi], offset ??_7bhkBoxShape@@6B@; const bhkBoxShape::`vftable'
0x8B7D8F: add     ds:0BA7FF4h, eax
0x8B7D95: mov     eax, esi
0x8B7D97: pop     esi
0x8B7D98: retn
