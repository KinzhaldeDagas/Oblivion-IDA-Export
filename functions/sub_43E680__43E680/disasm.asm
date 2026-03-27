0x43E680: sub     esp, 3ECh
0x43E686: mov     eax, ___security_cookie
0x43E68B: xor     eax, esp
0x43E68D: mov     [esp+3ECh+var_4], eax
0x43E694: push    ebx
0x43E695: push    ebp
0x43E696: mov     ebp, [esp+3F4h+arg_4]
0x43E69D: push    esi
0x43E69E: mov     esi, [esp+3F8h+arg_0]
0x43E6A5: mov     al, [esi]
0x43E6A7: test    al, al
0x43E6A9: push    edi
0x43E6AA: mov     ebx, ecx
0x43E6AC: lea     edi, [esp+3FCh+var_3EC]
0x43E6B0: jz      short loc_43E6CC
0x43E6B2: movsx   eax, al
0x43E6B5: push    eax; C
0x43E6B6: call    _tolower
0x43E6BB: add     esi, 1
0x43E6BE: mov     [edi], al
0x43E6C0: mov     al, [esi]
0x43E6C2: add     esp, 4
0x43E6C5: add     edi, 1
0x43E6C8: test    al, al
0x43E6CA: jnz     short loc_43E6B2
0x43E6CC: mov     esi, [ebx+14h]
0x43E6CF: mov     byte ptr [edi], 0
0x43E6D2: mov     eax, [esi+4]
0x43E6D5: push    eax; dwTlsIndex
0x43E6D6: call    ds:TlsGetValue
0x43E6DC: test    eax, eax
0x43E6DE: jnz     short loc_43E6E8
0x43E6E0: push    ebx; a2
0x43E6E1: mov     ecx, esi; this
0x43E6E3: call    ThreadSpecificInterfaceManager_AddInterface
0x43E6E8: mov     esi, eax
0x43E6EA: mov     ecx, [esi]
0x43E6EC: mov     eax, [ecx]
0x43E6EE: mov     eax, [eax+1Ch]
0x43E6F1: push    ebp; int
0x43E6F2: lea     edx, [esp+400h+var_3EC]
0x43E6F6: push    edx; int
0x43E6F7: push    edx
0x43E6F8: call    eax
0x43E6FA: push    eax; Comperand
0x43E6FB: mov     ecx, esi
0x43E6FD: call    sub_43A780
0x43E702: mov     ecx, [esp+3FCh+var_4]
0x43E709: pop     edi
0x43E70A: pop     esi
0x43E70B: pop     ebp
0x43E70C: pop     ebx
0x43E70D: xor     ecx, esp
0x43E70F: call    @__security_check_cookie@4; __security_check_cookie(x)
0x43E714: add     esp, 3ECh
0x43E71A: retn    8
