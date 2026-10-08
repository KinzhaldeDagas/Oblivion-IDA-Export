0x7117C0: sub     esp, 98h; Writes a NiMatrix33 from Euler angles in Z*(X*Y) order: yawZ, pitchX, rollY. All observed callers use the written matrix and ignore incidental EAX.
0x7117C6: push    esi
0x7117C7: push    edi
0x7117C8: mov     edi, ecx
0x7117CA: fld     [esp+0A0h+pitchX]
0x7117D1: fsincos
0x7117D3: fstp    [esp+0A0h+var_94]
0x7117D7: fstp    [esp+0A0h+var_98]
0x7117DB: fld1
0x7117DD: fstp    [esp+0A0h+var_90.data]
0x7117E1: fldz
0x7117E3: fst     [esp+0A0h+var_90.data+4]
0x7117E7: fst     [esp+0A0h+var_90.data+8]
0x7117EB: fst     [esp+0A0h+var_90.data+0Ch]
0x7117EF: fld     [esp+0A0h+var_94]
0x7117F3: fst     [esp+0A0h+var_90.data+10h]
0x7117F7: fld     [esp+0A0h+var_98]
0x7117FB: fst     [esp+0A0h+var_90.data+14h]
0x7117FF: fxch    st(2)
0x711801: fstp    [esp+0A0h+var_90.data+18h]
0x711805: fxch    st(1)
0x711807: fchs
0x711809: fstp    [esp+0A0h+var_90.data+1Ch]
0x71180D: fstp    [esp+0A0h+var_90.data+20h]
0x711811: fld     [esp+0A0h+rollY]
0x711818: fsincos
0x71181A: fstp    [esp+0A0h+var_98]
0x71181E: fstp    [esp+0A0h+var_94]
0x711822: fld     [esp+0A0h+var_98]
0x711826: fst     [esp+0A0h+right.data]
0x71182A: fldz
0x71182C: fst     [esp+0A0h+right.data+4]
0x711830: fld     [esp+0A0h+var_94]
0x711834: fld     st
0x711836: fchs
0x711838: fstp    [esp+0A0h+right.data+8]
0x71183C: fxch    st(1)
0x71183E: fst     [esp+0A0h+right.data+0Ch]
0x711842: fld1
0x711844: fstp    [esp+0A0h+right.data+10h]
0x711848: fst     [esp+0A0h+right.data+14h]
0x71184C: fstp    [esp+0A0h+right.data+1Ch]
0x711850: fstp    [esp+0A0h+right.data+18h]
0x711854: fstp    [esp+0A0h+right.data+20h]
0x711858: fld     [esp+0A0h+yawZ]
0x71185F: fsincos
0x711861: fstp    [esp+0A0h+var_98]
0x711865: fstp    [esp+0A0h+var_94]
0x711869: fld     [esp+0A0h+var_98]
0x71186D: lea     eax, [esp+0A0h+right]
0x711871: fst     [esp+0A0h+var_48.data]
0x711875: push    eax; right
0x711876: fld     [esp+0A4h+var_94]
0x71187A: lea     ecx, [esp+0A4h+out]
0x711881: fst     [esp+0A4h+var_48.data+4]
0x711885: push    ecx; out
0x711886: fldz
0x711888: lea     ecx, [esp+0A8h+var_90]; this
0x71188C: fst     [esp+0A8h+var_48.data+8]
0x711890: fxch    st(1)
0x711892: fchs
0x711894: fstp    [esp+0A8h+var_48.data+0Ch]
0x711898: fxch    st(1)
0x71189A: fstp    [esp+0A8h+var_48.data+10h]
0x71189E: fst     [esp+0A8h+var_48.data+14h]
0x7118A2: fst     [esp+0A8h+var_48.data+18h]
0x7118A6: fstp    [esp+0A8h+var_48.data+1Ch]
0x7118AA: fld1
0x7118AC: fstp    [esp+0A8h+var_48.data+20h]
0x7118B3: call    NiMAtrix33_Multiply; Verified row-major multiplication output is `this * right`; QueuedDistantLOD_ApplyTransform therefore composes BaseRotation, X, Y, then Z matrices in that order.
0x7118B8: push    eax; right
0x7118B9: lea     edx, [esp+0A4h+var_90]
0x7118BD: push    edx; out
0x7118BE: lea     ecx, [esp+0A8h+var_48]; this
0x7118C2: call    NiMAtrix33_Multiply; Verified row-major multiplication output is `this * right`; QueuedDistantLOD_ApplyTransform therefore composes BaseRotation, X, Y, then Z matrices in that order.
0x7118C7: mov     ecx, 9
0x7118CC: mov     esi, eax
0x7118CE: rep movsd
0x7118D0: pop     edi
0x7118D1: pop     esi
0x7118D2: add     esp, 98h
0x7118D8: retn    0Ch
