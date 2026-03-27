0x43E760: sub     esp, 3F0h
0x43E766: mov     eax, ___security_cookie
0x43E76B: xor     eax, esp
0x43E76D: mov     [esp+3F0h+var_4], eax
0x43E774: push    ebx
0x43E775: push    esi
0x43E776: mov     esi, [esp+3F8h+arg_0]
0x43E77D: mov     al, [esi]
0x43E77F: test    al, al
0x43E781: push    edi
0x43E782: mov     ebx, ecx
0x43E784: lea     edi, [esp+3FCh+Comperand]
0x43E788: jz      short loc_43E7AA
0x43E78A: lea     ebx, [ebx+0]
0x43E790: movsx   eax, al
0x43E793: push    eax; C
0x43E794: call    _tolower
0x43E799: add     esi, 1
0x43E79C: mov     [edi], al
0x43E79E: mov     al, [esi]
0x43E7A0: add     esp, 4
0x43E7A3: add     edi, 1
0x43E7A6: test    al, al
0x43E7A8: jnz     short loc_43E790
0x43E7AA: mov     esi, [ebx+14h]
0x43E7AD: mov     eax, [esp+3FCh+arg_4]
0x43E7B4: mov     byte ptr [edi], 0
0x43E7B7: mov     ecx, [esi+4]
0x43E7BA: push    ecx; dwTlsIndex
0x43E7BB: mov     [esp+400h+var_3F0], eax
0x43E7BF: call    ds:TlsGetValue
0x43E7C5: test    eax, eax
0x43E7C7: jnz     short loc_43E7D1
0x43E7C9: push    ebx; a2
0x43E7CA: mov     ecx, esi; this
0x43E7CC: call    ThreadSpecificInterfaceManager_AddInterface
0x43E7D1: mov     edx, dword ptr [esp+3FCh+arg_8]
0x43E7D8: mov     esi, eax
0x43E7DA: mov     ecx, [esi]
0x43E7DC: push    edx; char
0x43E7DD: lea     eax, [esp+400h+var_3F0]
0x43E7E1: push    eax; int
0x43E7E2: mov     eax, [ecx]
0x43E7E4: mov     eax, [eax+1Ch]
0x43E7E7: lea     edx, [esp+404h+Comperand]
0x43E7EB: push    edx; Comperand
0x43E7EC: push    edx
0x43E7ED: call    eax
0x43E7EF: push    eax; LONG
0x43E7F0: mov     ecx, esi
0x43E7F2: call    sub_55F120
0x43E7F7: mov     ecx, [esp+3FCh+var_4]
0x43E7FE: pop     edi
0x43E7FF: pop     esi
0x43E800: pop     ebx
0x43E801: xor     ecx, esp
0x43E803: call    @__security_check_cookie@4; __security_check_cookie(x)
0x43E808: add     esp, 3F0h
0x43E80E: retn    0Ch
