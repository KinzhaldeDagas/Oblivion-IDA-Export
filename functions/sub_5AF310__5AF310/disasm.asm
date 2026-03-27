0x5AF310: push    esi
0x5AF311: mov     esi, ecx
0x5AF313: call    ??0Menu@@QAE@XZ; Menu::Menu(void)
0x5AF318: fld     dword ptr ds:0A58E1Ch
0x5AF31E: fstp    dword ptr [esi+60h]
0x5AF321: xor     ecx, ecx
0x5AF323: fld     dword ptr ds:0A46B10h
0x5AF329: mov     dword ptr [esi], offset ??_7LockPickMenu@@6B@; const LockPickMenu::`vftable'
0x5AF32F: fstp    dword ptr [esi+64h]
0x5AF332: mov     [esi+28h], ecx
0x5AF335: fldz
0x5AF337: mov     [esi+2Ch], ecx
0x5AF33A: fld     dword ptr ds:0A35AA4h
0x5AF340: mov     [esi+34h], ecx
0x5AF343: fld1
0x5AF345: mov     [esi+30h], ecx
0x5AF348: mov     [esi+38h], ecx
0x5AF34B: mov     [esi+3Ch], ecx
0x5AF34E: mov     [esi+48h], ecx
0x5AF351: mov     [esi+4Ch], ecx
0x5AF354: mov     [esi+144h], ecx
0x5AF35A: lea     eax, [esi+90h]
0x5AF360: mov     edx, 5
0x5AF365: jmp     short loc_5AF36B
0x5AF367: fxch    st(2)
0x5AF369: fxch    st(1)
0x5AF36B: fxch    st(2)
0x5AF36D: mov     [eax+5], cl
0x5AF370: fst     dword ptr [eax-14h]
0x5AF373: mov     [eax+4], cl
0x5AF376: fst     dword ptr [eax]
0x5AF378: mov     [eax+6], cl
0x5AF37B: mov     [eax+0Ch], ecx
0x5AF37E: fst     dword ptr [esi+78h]
0x5AF381: fxch    st(1)
0x5AF383: add     eax, 28h ; '('
0x5AF386: sub     edx, 1
0x5AF389: fst     dword ptr [eax-30h]
0x5AF38C: fxch    st(2)
0x5AF38E: fst     dword ptr [eax-2Ch]
0x5AF391: fxch    st(1)
0x5AF393: fst     dword ptr [esi+58h]
0x5AF396: jnz     short loc_5AF367
0x5AF398: fstp    st(2)
0x5AF39A: mov     [esi+160h], ecx
0x5AF3A0: fxch    st(1)
0x5AF3A2: mov     dword ptr [esi+168h], 0FFFFFFFFh
0x5AF3AC: fst     dword ptr [esi+148h]
0x5AF3B2: mov     [esi+150h], ecx
0x5AF3B8: fst     dword ptr [esi+14Ch]
0x5AF3BE: mov     [esi+174h], ecx
0x5AF3C4: fld     dword ptr ds:0A31E2Ch
0x5AF3CA: mov     [esi+178h], ecx
0x5AF3D0: fstp    dword ptr [esi+154h]
0x5AF3D6: fstp    dword ptr [esi+158h]
0x5AF3DC: fstp    dword ptr [esi+15Ch]
0x5AF3E2: mov     eax, ds:0B33EA0h
0x5AF3E7: mov     [esi+40h], eax
0x5AF3EA: mov     edx, eax
0x5AF3EC: mov     [esi+44h], edx
0x5AF3EF: mov     ds:0B3B3F7h, cl
0x5AF3F5: mov     ds:0B3B3F6h, cl
0x5AF3FB: mov     ds:0B3B3F5h, cl
0x5AF401: mov     [esi+17Ch], cl
0x5AF407: mov     eax, esi
0x5AF409: pop     esi
0x5AF40A: retn
