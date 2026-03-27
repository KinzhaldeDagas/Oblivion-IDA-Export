0x43D3F0: push    0FFFFFFFFh
0x43D3F2: push    offset SEH_43D3F0
0x43D3F7: mov     eax, large fs:0
0x43D3FD: push    eax
0x43D3FE: sub     esp, 8
0x43D401: push    ebx
0x43D402: push    ebp
0x43D403: push    esi
0x43D404: push    edi
0x43D405: mov     eax, ___security_cookie
0x43D40A: xor     eax, esp
0x43D40C: push    eax
0x43D40D: lea     eax, [esp+28h+var_C]
0x43D411: mov     large fs:0, eax
0x43D417: mov     ebp, ecx
0x43D419: mov     ecx, [ebp+14h]; this
0x43D41C: lea     eax, [esp+28h+a2]
0x43D420: push    eax; a2
0x43D421: call    IOManager_43C030
0x43D426: mov     ecx, [esp+28h+a2]
0x43D42A: test    ecx, ecx
0x43D42C: mov     ebx, ds:InterlockedDecrement
0x43D432: mov     [esp+28h+var_4], 0
0x43D43A: jz      loc_43D4CA
0x43D440: mov     edx, [ecx]
0x43D442: mov     eax, [edx+14h]
0x43D445: call    eax
0x43D447: lea     ecx, [esp+28h+var_10]
0x43D44B: push    ecx; a2
0x43D44C: mov     ecx, [ebp+14h]; this
0x43D44F: call    IOManager_43C030
0x43D454: mov     edi, eax
0x43D456: mov     ecx, [esp+28h+a2]
0x43D45A: cmp     ecx, [edi]
0x43D45C: mov     byte ptr [esp+28h+var_4], 1
0x43D461: jz      short loc_43D499
0x43D463: test    ecx, ecx
0x43D465: jz      short loc_43D481
0x43D467: mov     esi, ecx
0x43D469: add     ecx, 8
0x43D46C: push    ecx; lpAddend
0x43D46D: call    ebx ; InterlockedDecrement
0x43D46F: test    eax, eax
0x43D471: jnz     short loc_43D481
0x43D473: test    esi, esi
0x43D475: jz      short loc_43D481
0x43D477: mov     edx, [esi]
0x43D479: mov     eax, [edx]
0x43D47B: push    1
0x43D47D: mov     ecx, esi
0x43D47F: call    eax
0x43D481: mov     ecx, [edi]
0x43D483: test    ecx, ecx
0x43D485: mov     [esp+28h+a2], ecx
0x43D489: jz      short loc_43D499
0x43D48B: add     ecx, 8
0x43D48E: push    ecx; lpAddend
0x43D48F: call    ds:InterlockedIncrement
0x43D495: mov     ecx, [esp+28h+a2]
0x43D499: mov     esi, [esp+28h+var_10]
0x43D49D: test    esi, esi
0x43D49F: mov     byte ptr [esp+28h+var_4], 0
0x43D4A4: jz      short loc_43D4C2
0x43D4A6: lea     ecx, [esi+8]
0x43D4A9: push    ecx; lpAddend
0x43D4AA: call    ebx ; InterlockedDecrement
0x43D4AC: test    eax, eax
0x43D4AE: jnz     short loc_43D4BE
0x43D4B0: test    esi, esi
0x43D4B2: jz      short loc_43D4BE
0x43D4B4: mov     edx, [esi]
0x43D4B6: mov     eax, [edx]
0x43D4B8: push    1
0x43D4BA: mov     ecx, esi
0x43D4BC: call    eax
0x43D4BE: mov     ecx, [esp+28h+a2]
0x43D4C2: test    ecx, ecx
0x43D4C4: jnz     loc_43D440
0x43D4CA: test    ecx, ecx
0x43D4CC: mov     [esp+28h+var_4], 0FFFFFFFFh
0x43D4D4: jz      short loc_43D4F0
0x43D4D6: mov     esi, ecx
0x43D4D8: add     ecx, 8
0x43D4DB: push    ecx; lpAddend
0x43D4DC: call    ebx ; InterlockedDecrement
0x43D4DE: test    eax, eax
0x43D4E0: jnz     short loc_43D4F0
0x43D4E2: test    esi, esi
0x43D4E4: jz      short loc_43D4F0
0x43D4E6: mov     edx, [esi]
0x43D4E8: mov     eax, [edx]
0x43D4EA: push    1
0x43D4EC: mov     ecx, esi
0x43D4EE: call    eax
0x43D4F0: mov     ecx, [esp+28h+var_C]
0x43D4F4: mov     large fs:0, ecx
0x43D4FB: pop     ecx
0x43D4FC: pop     edi
0x43D4FD: pop     esi
0x43D4FE: pop     ebp
0x43D4FF: pop     ebx
0x43D500: add     esp, 14h
0x43D503: retn
