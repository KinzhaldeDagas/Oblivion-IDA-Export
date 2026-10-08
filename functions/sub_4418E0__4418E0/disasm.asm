0x4418E0: push    0FFFFFFFFh
0x4418E2: push    offset SEH_680DC0
0x4418E7: mov     eax, large fs:0
0x4418ED: push    eax
0x4418EE: push    ecx
0x4418EF: mov     eax, ds:0B30AACh
0x4418F4: xor     eax, esp
0x4418F6: push    eax
0x4418F7: lea     eax, [esp+14h+var_C]
0x4418FB: mov     large fs:0, eax
0x441901: mov     eax, ecx
0x441903: mov     dword ptr [eax], 0
0x441909: mov     dword ptr [eax+4], 0
0x441910: mov     ecx, [esp+14h+var_C]
0x441914: mov     large fs:0, ecx
0x44191B: pop     ecx
0x44191C: add     esp, 10h
0x44191F: retn
0x9C4BD0: mov     ecx, [ebp-10h]; slot
0x9C4BD3: jmp     NiPointerSlot_Release
0x9C4BD8: mov     edx, [esp+arg_4]
0x9C4BDC: lea     eax, [edx-4]
0x9C4BDF: mov     ecx, [edx-8]
0x9C4BE2: xor     ecx, eax
0x9C4BE4: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C4BE9: mov     eax, offset stru_AED4D0
0x9C4BEE: jmp     ___CxxFrameHandler3
