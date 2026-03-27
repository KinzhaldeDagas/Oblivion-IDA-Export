0x8C9E20: sub     esp, 210h
0x8C9E26: mov     eax, ds:0B30AACh
0x8C9E2B: push    esi
0x8C9E2C: mov     esi, ecx
0x8C9E2E: mov     [esp+214h+var_4], eax
0x8C9E35: mov     eax, [esi+8]
0x8C9E38: test    eax, eax
0x8C9E3A: jnz     loc_8C9EC6
0x8C9E40: call    dword ptr ds:0B3004Ch
0x8C9E46: test    eax, eax
0x8C9E48: mov     [esi+8], eax
0x8C9E4B: jz      short loc_8C9E9B
0x8C9E4D: mov     esi, dword ptr [esp+214h+Args]
0x8C9E54: mov     edx, [eax]
0x8C9E56: push    esi
0x8C9E57: mov     ecx, eax
0x8C9E59: call    dword ptr [edx+1Ch]
0x8C9E5C: push    ecx
0x8C9E5D: mov     eax, esp
0x8C9E5F: mov     byte ptr [eax], 1
0x8C9E62: push    200h
0x8C9E67: lea     eax, [esp+21Ch+var_204]
0x8C9E6B: push    eax
0x8C9E6C: lea     ecx, [esp+220h+var_210]
0x8C9E70: call    sub_8BBFB0
0x8C9E75: push    offset aEveryFrame; " every frame"
0x8C9E7A: push    esi; Args
0x8C9E7B: push    offset aServerCreatedA; "Server created and will poll for new cl"...
0x8C9E80: lea     ecx, [esp+220h+var_210]
0x8C9E84: call    sub_8BBDB0
0x8C9E89: mov     ecx, eax
0x8C9E8B: call    sub_8BBE00
0x8C9E90: mov     ecx, eax
0x8C9E92: call    sub_8BBDB0
0x8C9E97: push    6Ah ; 'j'
0x8C9E99: jmp     short loc_8C9EEF
0x8C9E9B: push    ecx
0x8C9E9C: mov     eax, esp
0x8C9E9E: push    200h
0x8C9EA3: lea     ecx, [esp+21Ch+var_204]
0x8C9EA7: push    ecx
0x8C9EA8: lea     ecx, [esp+220h+var_210]
0x8C9EAC: mov     byte ptr [eax], 1
0x8C9EAF: call    sub_8BBFB0
0x8C9EB4: push    offset aServerCouldNot; "Server could not be created, please che"...
0x8C9EB9: lea     ecx, [esp+218h+var_210]
0x8C9EBD: call    sub_8BBDB0
0x8C9EC2: push    6Eh ; 'n'
0x8C9EC4: jmp     short loc_8C9EEF
0x8C9EC6: push    ecx
0x8C9EC7: mov     eax, esp
0x8C9EC9: push    200h
0x8C9ECE: lea     ecx, [esp+21Ch+var_204]
0x8C9ED2: push    ecx
0x8C9ED3: lea     ecx, [esp+220h+var_210]
0x8C9ED7: mov     byte ptr [eax], 1
0x8C9EDA: call    sub_8BBFB0
0x8C9EDF: push    offset aServerHasAlrea; "Server has already been created, only o"...
0x8C9EE4: lea     ecx, [esp+218h+var_210]
0x8C9EE8: call    sub_8BBDB0
0x8C9EED: push    73h ; 's'
0x8C9EEF: mov     ecx, ds:0BA7FB0h
0x8C9EF5: mov     edx, [ecx]
0x8C9EF7: push    offset a_Hkvisualdebug; ".\\hkVisualDebugger.cpp"
0x8C9EFC: lea     eax, [esp+21Ch+var_204]
0x8C9F00: push    eax
0x8C9F01: push    0FFFFFFFFh
0x8C9F03: push    0
0x8C9F05: call    dword ptr [edx+8]
0x8C9F08: lea     ecx, [esp+214h+var_210]
0x8C9F0C: call    sub_8BC000
0x8C9F11: mov     ecx, [esp+214h+var_4]
0x8C9F18: call    @__security_check_cookie@4; __security_check_cookie(x)
0x8C9F1D: pop     esi
0x8C9F1E: add     esp, 210h
0x8C9F24: retn    4
