0x8C3C00: push    esi
0x8C3C01: mov     esi, ecx
0x8C3C03: call    ??0bhkRefObject@@QAE@XZ; bhkRefObject::bhkRefObject(void)
0x8C3C08: xor     eax, eax
0x8C3C0A: mov     [esi+0Ch], eax
0x8C3C0D: mov     [esi+10h], eax
0x8C3C10: mov     dword ptr [esi], offset ??_7bhkShape@@6B@; const bhkShape::`vftable'
0x8C3C16: mov     eax, 1
0x8C3C1B: add     ds:0BA7D70h, eax
0x8C3C21: mov     dword ptr [esi], offset ??_7bhkSphereRepShape@@6B@; const bhkSphereRepShape::`vftable'
0x8C3C27: add     ds:0BA7F44h, eax
0x8C3C2D: mov     dword ptr [esi], offset ??_7bhkConvexShape@@6B@; const bhkConvexShape::`vftable'
0x8C3C33: add     ds:0BA7F50h, eax
0x8C3C39: mov     dword ptr [esi], offset ??_7bhkTriangleShape@@6B@; const bhkTriangleShape::`vftable'
0x8C3C3F: add     ds:0BA8100h, eax
0x8C3C45: mov     eax, esi
0x8C3C47: pop     esi
0x8C3C48: retn
