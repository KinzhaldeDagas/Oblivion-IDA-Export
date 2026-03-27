0x7170D0: push    ebp
0x7170D1: mov     ebp, esp
0x7170D3: push    0FFFFFFFEh
0x7170D5: push    offset stru_AF2678
0x7170DA: push    offset __except_handler4
0x7170DF: mov     eax, large fs:0
0x7170E5: push    eax
0x7170E6: sub     esp, 8
0x7170E9: push    ebx
0x7170EA: push    esi
0x7170EB: push    edi
0x7170EC: mov     eax, ds:0B30AACh
0x7170F1: xor     [ebp+ms_exc.registration.ScopeTable], eax
0x7170F4: xor     eax, ebp
0x7170F6: push    eax
0x7170F7: lea     eax, [ebp+ms_exc.registration]
0x7170FA: mov     large fs:0, eax
0x717100: mov     [ebp+ms_exc.old_esp], esp
0x717103: mov     byte ptr ds:0B3FCCCh, 1
0x71710A: mov     [ebp+ms_exc.registration.TryLevel], 0
0x717111: mov     eax, 80000000h
0x717116: cpuid
0x717118: mov     ds:0B3FCD0h, eax
0x71711D: mov     [ebp+ms_exc.registration.TryLevel], 0FFFFFFFEh
0x717124: jmp     short loc_71714C
0x717126: mov     eax, 1
0x71712B: retn
0x71712C: mov     esp, [ebp+ms_exc.old_esp]
0x71712F: mov     dword ptr ds:0B3FCC8h, 0
0x717139: mov     [ebp+ms_exc.registration.TryLevel], 0FFFFFFFEh
0x717140: jmp     loc_717261
0x717145: mov     [ebp+ms_exc.registration.TryLevel], 0FFFFFFFEh
0x71714C: mov     eax, ds:0B3FCD0h
0x717151: and     eax, 80000000h
0x717156: jz      short loc_7171AB
0x717158: mov     [ebp+ms_exc.registration.TryLevel], 1
0x71715F: mov     edx, 80000001h
0x717164: cpuid
0x717166: mov     ds:0B3FCD0h, eax
0x71716B: mov     [ebp+ms_exc.registration.TryLevel], 0FFFFFFFEh
0x717172: jmp     short loc_71718E
0x717174: mov     eax, 1
0x717179: retn
0x71717A: mov     esp, [ebp+ms_exc.old_esp]
0x71717D: mov     dword ptr ds:0B3FCD0h, 0
0x717187: mov     [ebp+ms_exc.registration.TryLevel], 0FFFFFFFEh
0x71718E: mov     ecx, ds:0B3FCD0h
0x717194: and     ecx, 80000000h
0x71719A: jz      short loc_7171AB
0x71719C: mov     dword ptr ds:0B3FCC8h, 6
0x7171A6: jmp     loc_717261
0x7171AB: mov     [ebp+ms_exc.registration.TryLevel], 2
0x7171B2: mov     eax, 1
0x7171B7: cpuid
0x7171B9: mov     ds:0B3FCD0h, edx
0x7171BF: mov     [ebp+ms_exc.registration.TryLevel], 0FFFFFFFEh
0x7171C6: jmp     short loc_7171EB
0x7171C8: mov     eax, 1
0x7171CD: retn
0x7171CE: mov     esp, [ebp+ms_exc.old_esp]
0x7171D1: mov     dword ptr ds:0B3FCC8h, 0
0x7171DB: mov     [ebp+ms_exc.registration.TryLevel], 0FFFFFFFEh
0x7171E2: jmp     short loc_717261
0x7171E4: mov     [ebp+ms_exc.registration.TryLevel], 0FFFFFFFEh
0x7171EB: mov     edx, ds:0B3FCD0h
0x7171F1: and     edx, offset loc_800000
0x7171F7: jnz     short loc_717221
0x7171F9: mov     eax, ds:0B3FCD0h
0x7171FE: and     eax, 8000h
0x717203: jnz     short loc_717213
0x717205: mov     dword ptr ds:0B3FCC8h, 1
0x71720F: jmp     short loc_717261
0x717211: jmp     short loc_71721F
0x717213: mov     dword ptr ds:0B3FCC8h, 3
0x71721D: jmp     short loc_717261
0x71721F: jmp     short loc_717247
0x717221: mov     ecx, ds:0B3FCD0h
0x717227: and     ecx, 8000h
0x71722D: jnz     short loc_71723D
0x71722F: mov     dword ptr ds:0B3FCC8h, 2
0x717239: jmp     short loc_717261
0x71723B: jmp     short loc_717247
0x71723D: mov     dword ptr ds:0B3FCC8h, 4
0x717247: mov     edx, ds:0B3FCD0h
0x71724D: and     edx, 2000000h
0x717253: jnz     short loc_717257
0x717255: jmp     short loc_717261
0x717257: mov     dword ptr ds:0B3FCC8h, 5
0x717261: mov     ecx, [ebp+ms_exc.registration.Next]
0x717264: mov     large fs:0, ecx
0x71726B: pop     ecx
0x71726C: pop     edi
0x71726D: pop     esi
0x71726E: pop     ebx
0x71726F: mov     esp, ebp
0x717271: pop     ebp
0x717272: retn
