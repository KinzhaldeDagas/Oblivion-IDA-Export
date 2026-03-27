0x904EB0: push    ebp
0x904EB1: mov     ebp, esp
0x904EB3: and     esp, 0FFFFFFF0h
0x904EB6: sub     esp, 234h
0x904EBC: mov     eax, ds:0B30AACh
0x904EC1: push    ebx
0x904EC2: push    esi
0x904EC3: push    edi
0x904EC4: mov     edi, large fs:2Ch
0x904ECB: mov     [esp+240h+var_224], ecx
0x904ECF: mov     ecx, ds:0BA9DE4h
0x904ED5: mov     [esp+240h+var_4], eax
0x904EDC: mov     eax, [edi+ecx*4]
0x904EDF: mov     edx, [eax+1A4h]
0x904EE5: cmp     edx, [eax+1A8h]
0x904EEB: jnb     short loc_904F11
0x904EED: mov     ebx, eax
0x904EEF: mov     esi, [ebx+1A4h]
0x904EF5: mov     dword ptr [esi], offset aTtshapecollect; "TtShapeCollection"
0x904EFB: rdtsc
0x904EFD: mov     [esp+240h+var_228], eax
0x904F01: mov     eax, [esp+240h+var_228]
0x904F05: mov     [esi+4], eax
0x904F08: add     esi, 0Ch
0x904F0B: mov     [ebx+1A4h], esi
0x904F11: mov     eax, [ebp+arg_0]
0x904F14: mov     edx, [eax+8]
0x904F17: mov     ebx, [eax]
0x904F19: mov     [esp+240h+var_214], eax
0x904F1D: mov     eax, [esp+240h+var_224]
0x904F21: mov     esi, [eax+0Ch]
0x904F24: mov     eax, [eax+10h]
0x904F27: dec     eax
0x904F28: mov     [esp+240h+var_218], edx
0x904F2C: js      short loc_904F7E
0x904F2E: inc     eax
0x904F2F: mov     [esp+240h+var_228], eax
0x904F33: mov     edi, [esi]
0x904F35: mov     eax, [ebx]
0x904F37: lea     ecx, [esp+240h+var_210]
0x904F3B: push    ecx
0x904F3C: push    edi
0x904F3D: mov     ecx, ebx
0x904F3F: call    dword ptr [eax+28h]
0x904F42: mov     [esp+240h+var_220], eax
0x904F46: mov     eax, [ebp+arg_C]
0x904F49: push    eax
0x904F4A: mov     eax, [ebp+arg_8]
0x904F4D: push    eax
0x904F4E: mov     eax, [ebp+arg_4]
0x904F51: mov     [esp+248h+var_21C], edi
0x904F55: mov     ecx, [esi+4]
0x904F58: mov     edx, [ecx]
0x904F5A: push    eax
0x904F5B: lea     eax, [esp+24Ch+var_220]
0x904F5F: push    eax
0x904F60: call    dword ptr [edx+14h]
0x904F63: mov     eax, [esp+240h+var_228]
0x904F67: add     esi, 8
0x904F6A: dec     eax
0x904F6B: mov     [esp+240h+var_228], eax
0x904F6F: jnz     short loc_904F33
0x904F71: mov     ecx, ds:0BA9DE4h
0x904F77: mov     edi, large fs:2Ch
0x904F7E: mov     eax, [edi+ecx*4]
0x904F81: mov     edx, [eax+1A4h]
0x904F87: cmp     edx, [eax+1A8h]
0x904F8D: jnb     short loc_904FB3
0x904F8F: mov     edi, eax
0x904F91: mov     ecx, [edi+1A4h]
0x904F97: mov     dword ptr [ecx], offset aEt; "Et"
0x904F9D: rdtsc
0x904F9F: mov     [esp+240h+var_224], eax
0x904FA3: mov     eax, [esp+240h+var_224]
0x904FA7: mov     [ecx+4], eax
0x904FAA: add     ecx, 0Ch
0x904FAD: mov     [edi+1A4h], ecx
0x904FB3: mov     ecx, [esp+240h+var_4]
0x904FBA: call    @__security_check_cookie@4; __security_check_cookie(x)
0x904FBF: pop     edi
0x904FC0: pop     esi
0x904FC1: pop     ebx
0x904FC2: mov     esp, ebp
0x904FC4: pop     ebp
0x904FC5: retn    10h
