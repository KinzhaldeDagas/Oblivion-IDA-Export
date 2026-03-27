0x4F8260: fldz
0x4F8262: mov     eax, [esp+arg_4]
0x4F8266: test    eax, eax
0x4F8268: mov     ecx, [esp+arg_C]
0x4F826C: fst     qword ptr [ecx]
0x4F826E: jz      short loc_4F827F
0x4F8270: movzx   eax, byte ptr [eax+34h]
0x4F8274: shr     eax, 7
0x4F8277: test    al, 1
0x4F8279: jz      short loc_4F827F
0x4F827B: fld1
0x4F827D: fstp    qword ptr [ecx]
0x4F827F: cmp     byte ptr ds:0B361ACh, 0
0x4F8286: jz      short loc_4F82B1
0x4F8288: fcomp   qword ptr [ecx]
0x4F828A: fnstsw  ax
0x4F828C: test    ah, 44h
0x4F828F: jnp     short loc_4F82A1
0x4F8291: push    offset aPcSubmitedToAuthority_; "PC submited to authority."
0x4F8296: call    Interface_ConsolePrint
0x4F829B: add     esp, 4
0x4F829E: mov     al, 1
0x4F82A0: retn
0x4F82A1: push    offset aPcHasNotSubmittedToAuthority_; "PC has not submitted to authority."
0x4F82A6: call    Interface_ConsolePrint
0x4F82AB: add     esp, 4
0x4F82AE: mov     al, 1
0x4F82B0: retn
0x4F82B1: fstp    st
0x4F82B3: mov     al, 1
0x4F82B5: retn
