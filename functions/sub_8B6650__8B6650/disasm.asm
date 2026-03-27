0x8B6650: push    esi
0x8B6651: mov     esi, ecx
0x8B6653: call    ??0bhkRefObject@@QAE@XZ; bhkRefObject::bhkRefObject(void)
0x8B6658: xor     eax, eax
0x8B665A: mov     [esi+0Ch], eax
0x8B665D: mov     [esi+10h], eax
0x8B6660: mov     dword ptr [esi], offset ??_7bhkShape@@6B@; const bhkShape::`vftable'
0x8B6666: mov     eax, 1
0x8B666B: add     ds:0BA7D70h, eax
0x8B6671: mov     dword ptr [esi], offset ??_7bhkSphereRepShape@@6B@; const bhkSphereRepShape::`vftable'
0x8B6677: add     ds:0BA7F44h, eax
0x8B667D: mov     dword ptr [esi], offset ??_7bhkConvexShape@@6B@; const bhkConvexShape::`vftable'
0x8B6683: add     ds:0BA7F50h, eax
0x8B6689: mov     dword ptr [esi], offset ??_7bhkCapsuleShape@@6B@; const bhkCapsuleShape::`vftable'
0x8B668F: add     ds:0BA7FD4h, eax
0x8B6695: mov     eax, esi
0x8B6697: pop     esi
0x8B6698: retn
