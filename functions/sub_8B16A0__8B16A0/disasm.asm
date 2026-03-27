0x8B16A0: sub     esp, 210h
0x8B16A6: mov     eax, ds:0B30AACh
0x8B16AB: push    ecx
0x8B16AC: mov     [esp+214h+var_4], eax
0x8B16B3: mov     eax, esp
0x8B16B5: mov     byte ptr [eax], 1
0x8B16B8: push    200h
0x8B16BD: lea     eax, [esp+218h+var_204]
0x8B16C1: push    eax
0x8B16C2: lea     ecx, [esp+21Ch+var_210]
0x8B16C6: call    sub_8BBFB0
0x8B16CB: mov     ecx, [esp+210h+arg_0]
0x8B16D2: push    ecx
0x8B16D3: lea     ecx, [esp+214h+var_210]
0x8B16D7: call    sub_8BBDB0
0x8B16DC: mov     ecx, ds:0BA7FB0h
0x8B16E2: mov     edx, [ecx]
0x8B16E4: push    1Bh
0x8B16E6: push    offset a_ErrorHkerror_; ".\\error\\hkError.cpp"
0x8B16EB: lea     eax, [esp+218h+var_204]
0x8B16EF: push    eax
0x8B16F0: push    2636FE25h
0x8B16F5: push    3
0x8B16F7: call    dword ptr [edx+8]
0x8B16FA: lea     ecx, [esp+210h+var_210]
0x8B16FD: call    sub_8BC000
0x8B1702: mov     ecx, [esp+210h+var_4]
0x8B1709: call    @__security_check_cookie@4; __security_check_cookie(x)
0x8B170E: add     esp, 210h
0x8B1714: retn
