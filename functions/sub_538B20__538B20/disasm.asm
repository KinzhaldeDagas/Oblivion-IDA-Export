0x538B20: push    0FFFFFFFFh
0x538B22: push    offset SEH_680DC0
0x538B27: mov     eax, large fs:0
0x538B2D: push    eax
0x538B2E: push    ecx
0x538B2F: mov     eax, ds:0B30AACh
0x538B34: xor     eax, esp
0x538B36: push    eax
0x538B37: lea     eax, [esp+14h+var_C]
0x538B3B: mov     large fs:0, eax
0x538B41: mov     eax, ecx
0x538B43: xor     ecx, ecx
0x538B45: mov     [eax], ecx
0x538B47: mov     [eax+4], cl
0x538B4A: mov     [eax+8], ecx
0x538B4D: mov     ecx, [esp+14h+var_C]
0x538B51: mov     large fs:0, ecx
0x538B58: pop     ecx
0x538B59: add     esp, 10h
0x538B5C: retn
0x9C4BD0: mov     ecx, [ebp-10h]; slot
0x9C4BD3: jmp     NiPointerSlot_Release
0x9C4BD8: mov     edx, [esp+arg_4]
0x9C4BDC: lea     eax, [edx-4]
0x9C4BDF: mov     ecx, [edx-8]
0x9C4BE2: xor     ecx, eax
0x9C4BE4: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C4BE9: mov     eax, offset stru_AED4D0
0x9C4BEE: jmp     ___CxxFrameHandler3
