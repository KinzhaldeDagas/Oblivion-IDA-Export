0x8AF2C0: push    esi
0x8AF2C1: mov     esi, ecx
0x8AF2C3: call    ??0bhkRefObject@@QAE@XZ; bhkRefObject::bhkRefObject(void)
0x8AF2C8: xor     eax, eax
0x8AF2CA: mov     [esi+0Ch], eax
0x8AF2CD: mov     [esi+10h], eax
0x8AF2D0: mov     dword ptr [esi], offset ??_7bhkShape@@6B@; const bhkShape::`vftable'
0x8AF2D6: mov     eax, 1
0x8AF2DB: add     ds:0BA7D70h, eax
0x8AF2E1: mov     dword ptr [esi], offset ??_7bhkSphereRepShape@@6B@; const bhkSphereRepShape::`vftable'
0x8AF2E7: add     ds:0BA7F44h, eax
0x8AF2ED: mov     dword ptr [esi], offset ??_7bhkConvexShape@@6B@; const bhkConvexShape::`vftable'
0x8AF2F3: add     ds:0BA7F50h, eax
0x8AF2F9: mov     dword ptr [esi], offset ??_7bhkSphereShape@@6B@; const bhkSphereShape::`vftable'
0x8AF2FF: add     ds:0BA7F80h, eax
0x8AF305: mov     eax, esi
0x8AF307: pop     esi
0x8AF308: retn
