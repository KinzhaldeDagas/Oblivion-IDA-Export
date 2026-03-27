0x4F6960: call    Sky_CreateOrGetGlobalObject
0x4F6965: fldz
0x4F6967: mov     ecx, [eax+10h]
0x4F696A: test    ecx, ecx
0x4F696C: jz      short loc_4F697C
0x4F696E: test    byte ptr [ecx+53h], 2
0x4F6972: jz      short loc_4F697C
0x4F6974: fld     dword ptr [eax+0D8h]
0x4F697A: jmp     short loc_4F697E
0x4F697C: fld     st
0x4F697E: mov     edx, [esp+arg_C]
0x4F6982: fst     qword ptr [edx]
0x4F6984: mov     ecx, [eax+14h]
0x4F6987: test    ecx, ecx
0x4F6989: jz      short loc_4F699F
0x4F698B: test    byte ptr [ecx+53h], 2
0x4F698F: jz      short loc_4F699F
0x4F6991: fstp    st(1)
0x4F6993: fld     dword ptr [eax+0D8h]
0x4F6999: fld1
0x4F699B: fsubrp  st(1), st
0x4F699D: jmp     short loc_4F69A1
0x4F699F: fxch    st(1)
0x4F69A1: faddp   st(1), st
0x4F69A3: fst     qword ptr [edx]
0x4F69A5: cmp     byte ptr ds:0B361ACh, 0
0x4F69AC: jz      short loc_4F69C4
0x4F69AE: sub     esp, 8
0x4F69B1: fstp    [esp+8+var_8]
0x4F69B4: push    offset aGetiscloudy0_2; "GetIsCloudy >> %0.2f"
0x4F69B9: call    Interface_ConsolePrint
0x4F69BE: add     esp, 0Ch
0x4F69C1: mov     al, 1
0x4F69C3: retn
0x4F69C4: fstp    st
0x4F69C6: mov     al, 1
0x4F69C8: retn
