0x6F4A70: push    0FFFFFFFFh
0x6F4A72: push    offset SEH_6F4AE0
0x6F4A77: mov     eax, large fs:0
0x6F4A7D: push    eax
0x6F4A7E: sub     esp, 8
0x6F4A81: mov     eax, ds:0B30AACh
0x6F4A86: xor     eax, esp
0x6F4A88: push    eax
0x6F4A89: lea     eax, [esp+18h+var_C]
0x6F4A8D: mov     large fs:0, eax
0x6F4A93: sub     esp, 2Ch
0x6F4A96: mov     eax, esp
0x6F4A98: xor     edx, edx
0x6F4A9A: mov     dword ptr [eax+18h], 0Fh
0x6F4AA1: mov     [eax+14h], edx
0x6F4AA4: mov     [esp+44h+var_10], esp
0x6F4AA8: mov     [eax+4], dl
0x6F4AAB: mov     [eax+20h], edx
0x6F4AAE: mov     [eax+24h], edx
0x6F4AB1: mov     [eax+28h], edx
0x6F4AB4: mov     eax, [esp+44h+arg_0]
0x6F4AB8: push    eax
0x6F4AB9: mov     [esp+48h+var_4], 0FFFFFFFFh
0x6F4AC1: call    sub_6F47F0
0x6F4AC6: mov     ecx, [esp+18h+var_C]
0x6F4ACA: mov     large fs:0, ecx
0x6F4AD1: pop     ecx
0x6F4AD2: add     esp, 14h
0x6F4AD5: retn    4
0x9C8B10: mov     ecx, [ebp-14h]; this
0x9C8B13: jmp     OB_stString28_Dtor_010201A0; Oblivion binary evidence: destructor/reset for the exact 28-byte SSO string. Frees heap storage when capacity is at least 16, restores capacity 15 and size zero, and terminates the inline buffer. Used for IdvFormatString temporaries and folded string owners across the executable.
0x9C8B18: mov     edx, [esp+arg_4]
0x9C8B1C: lea     eax, [edx-8]
0x9C8B1F: mov     ecx, [edx-0Ch]
0x9C8B22: xor     ecx, eax
0x9C8B24: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C8B29: mov     eax, offset stru_AF1470
0x9C8B2E: jmp     ___CxxFrameHandler3
