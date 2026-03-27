0x4F8140: fldz
0x4F8142: mov     eax, [esp+arg_4]
0x4F8146: test    eax, eax
0x4F8148: mov     ecx, [esp+arg_C]
0x4F814C: fst     qword ptr [ecx]
0x4F814E: jz      short loc_4F815F
0x4F8150: movzx   eax, byte ptr [eax+34h]
0x4F8154: shr     eax, 6
0x4F8157: test    al, 1
0x4F8159: jz      short loc_4F815F
0x4F815B: fld1
0x4F815D: fstp    qword ptr [ecx]
0x4F815F: cmp     byte ptr ds:0B361ACh, 0
0x4F8166: jz      short loc_4F8191
0x4F8168: fcomp   qword ptr [ecx]
0x4F816A: fnstsw  ax
0x4F816C: test    ah, 44h
0x4F816F: jnp     short loc_4F8181
0x4F8171: push    offset aPcMurderedAFactionMember_; "PC murdered a faction member."
0x4F8176: call    Interface_ConsolePrint
0x4F817B: add     esp, 4
0x4F817E: mov     al, 1
0x4F8180: retn
0x4F8181: push    offset aPcDidNotMurderAFactionMember_; "PC did not Murder a faction member."
0x4F8186: call    Interface_ConsolePrint
0x4F818B: add     esp, 4
0x4F818E: mov     al, 1
0x4F8190: retn
0x4F8191: fstp    st
0x4F8193: mov     al, 1
0x4F8195: retn
