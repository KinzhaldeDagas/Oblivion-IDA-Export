0x4F81A0: fldz
0x4F81A2: mov     eax, [esp+arg_4]
0x4F81A6: test    eax, eax
0x4F81A8: mov     ecx, [esp+arg_C]
0x4F81AC: fst     qword ptr [ecx]
0x4F81AE: jz      short loc_4F81BF
0x4F81B0: movzx   eax, byte ptr [eax+34h]
0x4F81B4: shr     eax, 4
0x4F81B7: test    al, 1
0x4F81B9: jz      short loc_4F81BF
0x4F81BB: fld1
0x4F81BD: fstp    qword ptr [ecx]
0x4F81BF: cmp     byte ptr ds:0B361ACh, 0
0x4F81C6: jz      short loc_4F81F1
0x4F81C8: fcomp   qword ptr [ecx]
0x4F81CA: fnstsw  ax
0x4F81CC: test    ah, 44h
0x4F81CF: jnp     short loc_4F81E1
0x4F81D1: push    offset aPcStoleFromFactionOrMember_; "PC stole from faction or member."
0x4F81D6: call    Interface_ConsolePrint
0x4F81DB: add     esp, 4
0x4F81DE: mov     al, 1
0x4F81E0: retn
0x4F81E1: push    offset aPcDidNotStealFromFactionOrMembe; "PC did not steal from faction or member"...
0x4F81E6: call    Interface_ConsolePrint
0x4F81EB: add     esp, 4
0x4F81EE: mov     al, 1
0x4F81F0: retn
0x4F81F1: fstp    st
0x4F81F3: mov     al, 1
0x4F81F5: retn
