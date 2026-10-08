0x7118E0: sub     esp, 98h
0x7118E6: push    esi
0x7118E7: push    edi
0x7118E8: mov     edi, ecx
0x7118EA: fld     [esp+0A0h+arg_8]
0x7118F1: fsincos
0x7118F3: fstp    [esp+0A0h+var_94]
0x7118F7: fstp    [esp+0A0h+var_98]
0x7118FB: fld1
0x7118FD: fstp    [esp+0A0h+right.data]
0x711901: fldz
0x711903: fst     [esp+0A0h+right.data+4]
0x711907: fst     [esp+0A0h+right.data+8]
0x71190B: fst     [esp+0A0h+right.data+0Ch]
0x71190F: fld     [esp+0A0h+var_94]
0x711913: fst     [esp+0A0h+right.data+10h]
0x711917: fld     [esp+0A0h+var_98]
0x71191B: fst     [esp+0A0h+right.data+14h]
0x71191F: fxch    st(2)
0x711921: fstp    [esp+0A0h+right.data+18h]
0x711925: fxch    st(1)
0x711927: fchs
0x711929: fstp    [esp+0A0h+right.data+1Ch]
0x71192D: fstp    [esp+0A0h+right.data+20h]
0x711931: fld     [esp+0A0h+arg_4]
0x711938: fsincos
0x71193A: fstp    [esp+0A0h+var_98]
0x71193E: fstp    [esp+0A0h+var_94]
0x711942: fld     [esp+0A0h+var_98]
0x711946: fst     [esp+0A0h+var_90.data]
0x71194A: fldz
0x71194C: fst     [esp+0A0h+var_90.data+4]
0x711950: fld     [esp+0A0h+var_94]
0x711954: fld     st
0x711956: fchs
0x711958: fstp    [esp+0A0h+var_90.data+8]
0x71195C: fxch    st(1)
0x71195E: fst     [esp+0A0h+var_90.data+0Ch]
0x711962: fld1
0x711964: fstp    [esp+0A0h+var_90.data+10h]
0x711968: fst     [esp+0A0h+var_90.data+14h]
0x71196C: fstp    [esp+0A0h+var_90.data+1Ch]
0x711970: fstp    [esp+0A0h+var_90.data+18h]
0x711974: fstp    [esp+0A0h+var_90.data+20h]
0x711978: fld     [esp+0A0h+arg_0]
0x71197F: fsincos
0x711981: fstp    [esp+0A0h+var_98]
0x711985: fstp    [esp+0A0h+var_94]
0x711989: fld     [esp+0A0h+var_98]
0x71198D: lea     eax, [esp+0A0h+right]
0x711991: fst     [esp+0A0h+var_48.data]
0x711995: push    eax; right
0x711996: fld     [esp+0A4h+var_94]
0x71199A: lea     ecx, [esp+0A4h+out]
0x7119A1: fst     [esp+0A4h+var_48.data+4]
0x7119A5: push    ecx; out
0x7119A6: fldz
0x7119A8: lea     ecx, [esp+0A8h+var_90]; this
0x7119AC: fst     [esp+0A8h+var_48.data+8]
0x7119B0: fxch    st(1)
0x7119B2: fchs
0x7119B4: fstp    [esp+0A8h+var_48.data+0Ch]
0x7119B8: fxch    st(1)
0x7119BA: fstp    [esp+0A8h+var_48.data+10h]
0x7119BE: fst     [esp+0A8h+var_48.data+14h]
0x7119C2: fst     [esp+0A8h+var_48.data+18h]
0x7119C6: fstp    [esp+0A8h+var_48.data+1Ch]
0x7119CA: fld1
0x7119CC: fstp    [esp+0A8h+var_48.data+20h]
0x7119D3: call    NiMAtrix33_Multiply; Verified row-major multiplication output is `this * right`; QueuedDistantLOD_ApplyTransform therefore composes BaseRotation, X, Y, then Z matrices in that order.
0x7119D8: push    eax; right
0x7119D9: lea     edx, [esp+0A4h+var_90]
0x7119DD: push    edx; out
0x7119DE: lea     ecx, [esp+0A8h+var_48]; this
0x7119E2: call    NiMAtrix33_Multiply; Verified row-major multiplication output is `this * right`; QueuedDistantLOD_ApplyTransform therefore composes BaseRotation, X, Y, then Z matrices in that order.
0x7119E7: mov     ecx, 9
0x7119EC: mov     esi, eax
0x7119EE: rep movsd
0x7119F0: pop     edi
0x7119F1: pop     esi
0x7119F2: add     esp, 98h
0x7119F8: retn    0Ch
