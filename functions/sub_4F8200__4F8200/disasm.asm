0x4F8200: fldz
0x4F8202: mov     eax, [esp+arg_4]
0x4F8206: test    eax, eax
0x4F8208: mov     ecx, [esp+arg_C]
0x4F820C: fst     qword ptr [ecx]
0x4F820E: jz      short loc_4F821F
0x4F8210: movzx   eax, byte ptr [eax+34h]
0x4F8214: shr     eax, 5
0x4F8217: test    al, 1
0x4F8219: jz      short loc_4F821F
0x4F821B: fld1
0x4F821D: fstp    qword ptr [ecx]
0x4F821F: cmp     byte ptr ds:0B361ACh, 0
0x4F8226: jz      short loc_4F8251
0x4F8228: fcomp   qword ptr [ecx]
0x4F822A: fnstsw  ax
0x4F822C: test    ah, 44h
0x4F822F: jnp     short loc_4F8241
0x4F8231: push    offset aPcAttackedAFactionMember_; "PC attacked a faction member."
0x4F8236: call    Interface_ConsolePrint
0x4F823B: add     esp, 4
0x4F823E: mov     al, 1
0x4F8240: retn
0x4F8241: push    offset aPcDidNotAttackAFactionMember_; "PC did not attack a faction member."
0x4F8246: call    Interface_ConsolePrint
0x4F824B: add     esp, 4
0x4F824E: mov     al, 1
0x4F8250: retn
0x4F8251: fstp    st
0x4F8253: mov     al, 1
0x4F8255: retn
