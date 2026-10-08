0x6CCDE0: push    0FFFFFFFFh
0x6CCDE2: push    offset SEH_680DC0
0x6CCDE7: mov     eax, large fs:0
0x6CCDED: push    eax
0x6CCDEE: push    ecx
0x6CCDEF: mov     eax, ds:0B30AACh
0x6CCDF4: xor     eax, esp
0x6CCDF6: push    eax
0x6CCDF7: lea     eax, [esp+14h+var_C]
0x6CCDFB: mov     large fs:0, eax
0x6CCE01: mov     eax, ecx
0x6CCE03: mov     dword ptr [eax], 0
0x6CCE09: fldz
0x6CCE0B: fst     dword ptr [eax+4]
0x6CCE0E: mov     byte ptr [eax+0Ch], 0
0x6CCE12: fst     dword ptr [eax+8]
0x6CCE15: fstp    dword ptr [eax+10h]
0x6CCE18: fld     dword ptr ds:0A79F00h
0x6CCE1E: fstp    dword ptr [eax+14h]
0x6CCE21: mov     ecx, [esp+14h+var_C]
0x6CCE25: mov     large fs:0, ecx
0x6CCE2C: pop     ecx
0x6CCE2D: add     esp, 10h
0x6CCE30: retn
0x9C4BD0: mov     ecx, [ebp-10h]; slot
0x9C4BD3: jmp     NiPointerSlot_Release
0x9C4BD8: mov     edx, [esp+arg_4]
0x9C4BDC: lea     eax, [edx-4]
0x9C4BDF: mov     ecx, [edx-8]
0x9C4BE2: xor     ecx, eax
0x9C4BE4: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C4BE9: mov     eax, offset stru_AED4D0
0x9C4BEE: jmp     ___CxxFrameHandler3
