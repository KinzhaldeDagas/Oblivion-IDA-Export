0x4302B0: push    0FFFFFFFFh
0x4302B2: push    offset BSFile_DirectRead_SEH
0x4302B7: mov     eax, large fs:0
0x4302BD: push    eax
0x4302BE: push    esi
0x4302BF: mov     eax, ___security_cookie
0x4302C4: xor     eax, esp
0x4302C6: push    eax
0x4302C7: lea     eax, [esp+14h+var_C]
0x4302CB: mov     large fs:0, eax
0x4302D1: mov     esi, ecx
0x4302D3: mov     eax, 1
0x4302D8: test    byte ptr dword_B33A00, al
0x4302DE: jnz     short loc_43030D
0x4302E0: or      dword_B33A00, eax
0x4302E6: mov     ecx, offset stru_B33980; lpCriticalSection
0x4302EB: mov     [esp+14h+var_4], 0
0x4302F3: call    NiInitalizeCriticalSection
0x4302F8: push    offset sub_A17B60; void (__cdecl *)()
0x4302FD: call    _atexit
0x430302: add     esp, 4
0x430305: mov     [esp+14h+var_4], 0FFFFFFFFh
0x43030D: cmp     dword ptr [esi+1Ch], 0
0x430311: jnz     short loc_430320
0x430313: mov     eax, [esi]
0x430315: mov     edx, [eax+18h]
0x430318: push    0
0x43031A: push    0
0x43031C: mov     ecx, esi
0x43031E: call    edx
0x430320: mov     eax, [esp+14h+Count]
0x430324: mov     ecx, [esp+14h+Dst]
0x430328: push    eax; Count
0x430329: push    ecx; Dst
0x43032A: mov     ecx, esi
0x43032C: call    NiFile_DirectRead
0x430331: add     [esi+148h], eax
0x430337: mov     ecx, dword ptr [esp+14h+var_C]
0x43033B: mov     large fs:0, ecx
0x430342: pop     ecx
0x430343: pop     esi
0x430344: add     esp, 0Ch
0x430347: retn    8
