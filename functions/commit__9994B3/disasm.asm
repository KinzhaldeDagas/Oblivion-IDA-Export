0x9994B3: push    10h
0x9994B5: push    offset stru_B00008
0x9994BA: call    __SEH_prolog4
0x9994BF: mov     eax, [ebp+arg_0]
0x9994C2: cmp     eax, 0FFFFFFFEh
0x9994C5: jnz     short loc_9994DA
0x9994C7: call    __errno
0x9994CC: mov     dword ptr [eax], 9
0x9994D2: or      eax, 0FFFFFFFFh
0x9994D5: jmp     loc_999584
0x9994DA: xor     ebx, ebx
0x9994DC: cmp     eax, ebx
0x9994DE: jl      short loc_9994E8
0x9994E0: cmp     eax, uNumber
0x9994E6: jb      short loc_999502
0x9994E8: call    __errno
0x9994ED: mov     dword ptr [eax], 9
0x9994F3: push    ebx
0x9994F4: push    ebx
0x9994F5: push    ebx
0x9994F6: push    ebx
0x9994F7: push    ebx
0x9994F8: call    __invalid_parameter
0x9994FD: add     esp, 14h
0x999500: jmp     short loc_9994D2
0x999502: mov     ecx, eax
0x999504: sar     ecx, 5
0x999507: lea     edi, ds:0BAAAC0h[ecx*4]
0x99950E: mov     esi, eax
0x999510: and     esi, 1Fh
0x999513: imul    esi, 28h ; '('
0x999516: mov     ecx, [edi]
0x999518: movzx   ecx, byte ptr [esi+ecx+4]
0x99951D: and     ecx, 1
0x999520: jz      short loc_9994E8
0x999522: push    eax
0x999523: call    ___lock_fhandle
0x999528: pop     ecx
0x999529: mov     [ebp+ms_exc.registration.TryLevel], ebx
0x99952C: mov     eax, [edi]
0x99952E: test    byte ptr [esi+eax+4], 1
0x999533: jz      short loc_999566
0x999535: push    [ebp+arg_0]; int
0x999538: call    __get_osfhandle
0x99953D: pop     ecx
0x99953E: push    eax; hFile
0x99953F: call    ds:FlushFileBuffers
0x999545: test    eax, eax
0x999547: jnz     short loc_999554
0x999549: call    ds:GetLastError
0x99954F: mov     [ebp+var_1C], eax
0x999552: jmp     short loc_999557
0x999554: mov     [ebp+var_1C], ebx
0x999557: cmp     [ebp+var_1C], ebx
0x99955A: jz      short __commit___$good$25045
0x99955C: call    ___doserrno
0x999561: mov     ecx, [ebp+var_1C]
0x999564: mov     [eax], ecx
0x999566: call    __errno
0x99956B: mov     dword ptr [eax], 9
0x999571: or      [ebp+var_1C], 0FFFFFFFFh
