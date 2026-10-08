0x401160: add     ecx, 8
0x401163: jmp     loc_4010C0
0x4010C0: push    0FFFFFFFFh
0x4010C2: push    offset loc_9A9D5B
0x4010C7: mov     eax, large fs:0
0x4010CD: push    eax
0x4010CE: push    ecx
0x4010CF: push    ebp
0x4010D0: push    esi
0x4010D1: push    edi
0x4010D2: mov     eax, ___security_cookie
0x4010D7: xor     eax, esp
0x4010D9: push    eax
0x4010DA: lea     eax, [esp+20h+var_C]
0x4010DE: mov     large fs:0, eax
0x4010E4: mov     edi, ecx
0x4010E6: mov     [esp+20h+var_10], edi
0x4010EA: mov     esi, [edi+0Ch]
0x4010ED: test    esi, esi
0x4010EF: mov     ebp, ds:InterlockedDecrement
0x4010F5: mov     [esp+20h+var_4], 0
0x4010FD: jz      short loc_40111E
0x4010FF: lea     eax, [esi+4]
0x401102: push    eax; lpAddend
0x401103: call    ebp ; InterlockedDecrement
0x401105: test    eax, eax
0x401107: jnz     short loc_401117
0x401109: test    esi, esi
0x40110B: jz      short loc_401117
0x40110D: mov     edx, [esi]
0x40110F: mov     eax, [edx]
0x401111: push    1
0x401113: mov     ecx, esi
0x401115: call    eax
0x401117: mov     dword ptr [edi+0Ch], 0
0x40111E: mov     esi, [edi+0Ch]
0x401121: test    esi, esi
0x401123: mov     [esp+20h+var_4], 0FFFFFFFFh
0x40112B: jz      short loc_401145
0x40112D: lea     ecx, [esi+4]
0x401130: push    ecx; lpAddend
0x401131: call    ebp ; InterlockedDecrement
0x401133: test    eax, eax
0x401135: jnz     short loc_401145
0x401137: test    esi, esi
0x401139: jz      short loc_401145
0x40113B: mov     edx, [esi]
0x40113D: mov     eax, [edx]
0x40113F: push    1
0x401141: mov     ecx, esi
0x401143: call    eax
0x401145: mov     ecx, [esp+20h+var_C]
0x401149: mov     large fs:0, ecx
0x401150: pop     ecx
0x401151: pop     edi
0x401152: pop     esi
0x401153: pop     ebp
0x401154: add     esp, 10h
0x401157: retn
0x9A9D50: mov     ecx, [ebp-10h]
0x9A9D53: add     ecx, 0Ch; slot
0x9A9D56: jmp     NiPointerSlot_Release
0x9A9D5B: mov     edx, [esp+arg_4]
0x9A9D5F: lea     eax, [edx-10h]
0x9A9D62: mov     ecx, [edx-14h]
0x9A9D65: xor     ecx, eax
0x9A9D67: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9A9D6C: mov     eax, offset stru_AD6E18
0x9A9D71: jmp     ___CxxFrameHandler3
