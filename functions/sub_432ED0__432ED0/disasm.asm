0x432ED0: push    ebx
0x432ED1: mov     ebx, [esp+4+arg_4]
0x432ED5: push    ebp
0x432ED6: push    esi
0x432ED7: push    edi
0x432ED8: mov     esi, ecx
0x432EDA: lea     ebx, [ebx+0]
0x432EE0: mov     eax, [ebx+4]
0x432EE3: mov     ecx, [ebx]
0x432EE5: mov     edx, [esp+10h+Comperand]
0x432EE9: push    eax; int
0x432EEA: push    ecx; int
0x432EEB: push    edx; Comperand
0x432EEC: mov     ecx, esi
0x432EEE: call    sub_432A60
0x432EF3: test    al, al
0x432EF5: jz      loc_432F94
0x432EFB: mov     eax, [esi+18h]
0x432EFE: test    eax, 0FFFFFFFEh
0x432F03: jz      loc_433071
0x432F09: mov     eax, [esi+18h]
0x432F0C: and     eax, 0FFFFFFFEh
0x432F0F: mov     ecx, [eax+0Ch]
0x432F12: test    cl, 1
0x432F15: jnz     short loc_432EE0
0x432F17: mov     eax, [ebx+4]
0x432F1A: mov     ecx, [esi]
0x432F1C: mov     edx, [ecx]
0x432F1E: mov     edx, [edx+20h]
0x432F21: push    eax
0x432F22: mov     eax, [ebx]
0x432F24: push    eax
0x432F25: call    edx
0x432F27: mov     eax, [esi+18h]
0x432F2A: mov     ecx, [esi]
0x432F2C: mov     edx, [ecx]
0x432F2E: mov     edx, [edx+24h]
0x432F31: and     eax, 0FFFFFFFEh
0x432F34: mov     edi, [eax+4]
0x432F37: mov     eax, [eax]
0x432F39: push    edi
0x432F3A: push    eax
0x432F3B: call    edx
0x432F3D: mov     [ebx], eax
0x432F3F: mov     eax, [esp+10h+arg_8]
0x432F43: mov     [ebx+4], edx
0x432F46: mov     edi, [esi+18h]
0x432F49: mov     ebp, [eax]
0x432F4B: and     edi, 0FFFFFFFEh
0x432F4E: add     edi, 8
0x432F51: cmp     ebp, [edi]
0x432F53: jz      short loc_432F8C
0x432F55: test    ebp, ebp
0x432F57: jz      short loc_432F76
0x432F59: lea     ecx, [ebp+8]
0x432F5C: push    ecx; lpAddend
0x432F5D: call    ds:InterlockedDecrement
0x432F63: test    eax, eax
0x432F65: jnz     short loc_432F76
0x432F67: test    ebp, ebp
0x432F69: jz      short loc_432F76
0x432F6B: mov     edx, [ebp+0]
0x432F6E: mov     eax, [edx]
0x432F70: push    1
0x432F72: mov     ecx, ebp
0x432F74: call    eax
0x432F76: mov     edi, [edi]
0x432F78: test    edi, edi
0x432F7A: mov     ecx, [esp+10h+arg_8]
0x432F7E: mov     [ecx], edi
0x432F80: jz      short loc_432F8C
0x432F82: add     edi, 8
0x432F85: push    edi; lpAddend
0x432F86: call    ds:InterlockedIncrement
0x432F8C: mov     ecx, [esi+18h]
0x432F8F: jmp     loc_43302C
0x432F94: mov     edx, [esi+14h]
0x432F97: test    edx, 0FFFFFFFEh
0x432F9D: jz      loc_433071
0x432FA3: mov     eax, [esi+14h]
0x432FA6: and     eax, 0FFFFFFFEh
0x432FA9: mov     eax, [eax+0Ch]
0x432FAC: test    al, 1
0x432FAE: jnz     loc_432EE0
0x432FB4: mov     eax, [ebx+4]
0x432FB7: mov     ecx, [esi]
0x432FB9: mov     edx, [ecx]
0x432FBB: mov     edx, [edx+20h]
0x432FBE: push    eax
0x432FBF: mov     eax, [ebx]
0x432FC1: push    eax
0x432FC2: call    edx
0x432FC4: mov     eax, [esi+14h]
0x432FC7: mov     ecx, [esi]
0x432FC9: mov     edx, [ecx]
0x432FCB: mov     edx, [edx+24h]
0x432FCE: and     eax, 0FFFFFFFEh
0x432FD1: mov     edi, [eax+4]
0x432FD4: mov     eax, [eax]
0x432FD6: push    edi
0x432FD7: push    eax
0x432FD8: call    edx
0x432FDA: mov     [ebx], eax
0x432FDC: mov     eax, [esp+10h+arg_8]
0x432FE0: mov     [ebx+4], edx
0x432FE3: mov     edi, [esi+14h]
0x432FE6: mov     ebp, [eax]
0x432FE8: and     edi, 0FFFFFFFEh
0x432FEB: add     edi, 8
0x432FEE: cmp     ebp, [edi]
0x432FF0: jz      short loc_433029
0x432FF2: test    ebp, ebp
0x432FF4: jz      short loc_433013
0x432FF6: lea     ecx, [ebp+8]
0x432FF9: push    ecx; lpAddend
0x432FFA: call    ds:InterlockedDecrement
0x433000: test    eax, eax
0x433002: jnz     short loc_433013
0x433004: test    ebp, ebp
0x433006: jz      short loc_433013
0x433008: mov     edx, [ebp+0]
0x43300B: mov     eax, [edx]
0x43300D: push    1
0x43300F: mov     ecx, ebp
0x433011: call    eax
0x433013: mov     edi, [edi]
0x433015: test    edi, edi
0x433017: mov     ecx, [esp+10h+arg_8]
0x43301B: mov     [ecx], edi
0x43301D: jz      short loc_433029
0x43301F: add     edi, 8
0x433022: push    edi; lpAddend
0x433023: call    ds:InterlockedIncrement
0x433029: mov     ecx, [esi+14h]
0x43302C: and     ecx, 0FFFFFFFEh
0x43302F: mov     edx, [ecx+0Ch]
0x433032: mov     al, 1
0x433034: test    al, dl
0x433036: jz      short loc_433073
0x433038: mov     eax, [esp+10h+arg_8]
0x43303C: mov     edi, [eax]
0x43303E: test    edi, edi
0x433040: jz      loc_432EE0
0x433046: lea     ecx, [edi+8]
0x433049: push    ecx; lpAddend
0x43304A: call    ds:InterlockedDecrement
0x433050: test    eax, eax
0x433052: jnz     short loc_433062
0x433054: test    edi, edi
0x433056: jz      short loc_433062
0x433058: mov     edx, [edi]
0x43305A: mov     eax, [edx]
0x43305C: push    1
0x43305E: mov     ecx, edi
0x433060: call    eax
0x433062: mov     ecx, [esp+10h+arg_8]
0x433066: mov     dword ptr [ecx], 0
0x43306C: jmp     loc_432EE0
0x433071: xor     al, al
0x433073: mov     edx, [esi+4]
0x433076: mov     dword ptr [edx], 0
0x43307C: mov     ecx, [esi+8]
0x43307F: pop     edi
0x433080: mov     dword ptr [ecx], 0
0x433086: mov     edx, [esi+0Ch]
0x433089: pop     esi
0x43308A: pop     ebp
0x43308B: mov     dword ptr [edx], 0
0x433091: pop     ebx
0x433092: retn    0Ch
