0x4F80E0: fldz
0x4F80E2: mov     eax, [esp+arg_4]
0x4F80E6: test    eax, eax
0x4F80E8: mov     ecx, [esp+arg_C]
0x4F80EC: fst     qword ptr [ecx]
0x4F80EE: jz      short loc_4F80FF
0x4F80F0: movzx   eax, byte ptr [eax+34h]
0x4F80F4: shr     eax, 3
0x4F80F7: test    al, 1
0x4F80F9: jz      short loc_4F80FF
0x4F80FB: fld1
0x4F80FD: fstp    qword ptr [ecx]
0x4F80FF: cmp     byte ptr ds:0B361ACh, 0
0x4F8106: jz      short loc_4F8131
0x4F8108: fcomp   qword ptr [ecx]
0x4F810A: fnstsw  ax
0x4F810C: test    ah, 44h
0x4F810F: jnp     short loc_4F8121
0x4F8111: push    offset aPcIsExpelled_; "PC is expelled."
0x4F8116: call    Interface_ConsolePrint
0x4F811B: add     esp, 4
0x4F811E: mov     al, 1
0x4F8120: retn
0x4F8121: push    offset aPcIsNotExpelled_; "PC is not expelled."
0x4F8126: call    Interface_ConsolePrint
0x4F812B: add     esp, 4
0x4F812E: mov     al, 1
0x4F8130: retn
0x4F8131: fstp    st
0x4F8133: mov     al, 1
0x4F8135: retn
