0x8C7FB0: push    esi
0x8C7FB1: mov     esi, ecx
0x8C7FB3: call    ??0bhkRefObject@@QAE@XZ; bhkRefObject::bhkRefObject(void)
0x8C7FB8: xor     eax, eax
0x8C7FBA: mov     [esi+0Ch], eax
0x8C7FBD: mov     [esi+10h], eax
0x8C7FC0: mov     dword ptr [esi], offset ??_7bhkShape@@6B@; const bhkShape::`vftable'
0x8C7FC6: mov     eax, 1
0x8C7FCB: add     ds:0BA7D70h, eax
0x8C7FD1: mov     dword ptr [esi], offset ??_7bhkSphereRepShape@@6B@; const bhkSphereRepShape::`vftable'
0x8C7FD7: add     ds:0BA7F44h, eax
0x8C7FDD: mov     dword ptr [esi], offset ??_7bhkConvexShape@@6B@; const bhkConvexShape::`vftable'
0x8C7FE3: add     ds:0BA7F50h, eax
0x8C7FE9: mov     dword ptr [esi], offset ??_7bhkCylinderShape@@6B@; const bhkCylinderShape::`vftable'
0x8C7FEF: add     ds:0BA8140h, eax
0x8C7FF5: mov     eax, esi
0x8C7FF7: pop     esi
0x8C7FF8: retn
