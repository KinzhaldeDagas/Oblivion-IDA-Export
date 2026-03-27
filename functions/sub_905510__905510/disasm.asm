0x905510: push    ebp
0x905511: mov     ebp, esp
0x905513: and     esp, 0FFFFFFF0h
0x905516: sub     esp, 234h
0x90551C: mov     eax, ds:0B30AACh
0x905521: mov     edx, ds:0BA9DE4h
0x905527: push    ebx
0x905528: push    esi
0x905529: push    edi
0x90552A: mov     edi, ecx
0x90552C: mov     ecx, large fs:2Ch
0x905533: mov     [esp+240h+var_4], eax
0x90553A: mov     eax, [ecx+edx*4]
0x90553D: mov     esi, [eax+1A4h]
0x905543: cmp     esi, [eax+1A8h]
0x905549: mov     [esp+240h+var_224], edi
0x90554D: jnb     short loc_905573
0x90554F: mov     ebx, eax
0x905551: mov     esi, [ebx+1A4h]
0x905557: mov     dword ptr [esi], offset aTtshapecollect; "TtShapeCollection"
0x90555D: rdtsc
0x90555F: mov     [esp+240h+var_228], eax
0x905563: mov     eax, [esp+240h+var_228]
0x905567: mov     [esi+4], eax
0x90556A: add     esi, 0Ch
0x90556D: mov     [ebx+1A4h], esi
0x905573: mov     eax, [ebp+arg_0]
0x905576: mov     edx, [eax+8]
0x905579: mov     ebx, [eax]
0x90557B: mov     edi, [edi+0Ch]
0x90557E: mov     [esp+240h+var_214], eax
0x905582: mov     eax, [esp+240h+var_224]
0x905586: mov     eax, [eax+10h]
0x905589: dec     eax
0x90558A: mov     [esp+240h+var_218], edx
0x90558E: mov     [esp+240h+var_228], eax
0x905592: js      short loc_9055E0
0x905594: mov     esi, [edi]
0x905596: mov     edx, [ebx]
0x905598: lea     eax, [esp+240h+var_210]
0x90559C: push    eax
0x90559D: push    esi
0x90559E: mov     ecx, ebx
0x9055A0: call    dword ptr [edx+28h]
0x9055A3: mov     [esp+240h+var_220], eax
0x9055A7: mov     eax, [ebp+arg_8]
0x9055AA: mov     [esp+240h+var_21C], esi
0x9055AE: mov     esi, [ebp+arg_C]
0x9055B1: mov     ecx, [edi+4]
0x9055B4: mov     edx, [ecx]
0x9055B6: push    esi
0x9055B7: push    eax
0x9055B8: mov     eax, [ebp+arg_4]
0x9055BB: push    eax
0x9055BC: lea     eax, [esp+24Ch+var_220]
0x9055C0: push    eax
0x9055C1: call    dword ptr [edx+8]
0x9055C4: mov     al, [esi+4]
0x9055C7: test    al, al
0x9055C9: jnz     short loc_9055D9
0x9055CB: mov     eax, [esp+240h+var_228]
0x9055CF: add     edi, 8
0x9055D2: dec     eax
0x9055D3: mov     [esp+240h+var_228], eax
0x9055D7: jns     short loc_905594
0x9055D9: mov     ecx, large fs:2Ch
0x9055E0: mov     edx, ds:0BA9DE4h
0x9055E6: mov     eax, [ecx+edx*4]
0x9055E9: mov     esi, [eax+1A4h]
0x9055EF: cmp     esi, [eax+1A8h]
0x9055F5: jnb     short loc_90561B
0x9055F7: mov     esi, eax
0x9055F9: mov     ecx, [esi+1A4h]
0x9055FF: mov     dword ptr [ecx], offset aEt; "Et"
0x905605: rdtsc
0x905607: mov     [esp+240h+var_224], eax
0x90560B: mov     edx, [esp+240h+var_224]
0x90560F: mov     [ecx+4], edx
0x905612: add     ecx, 0Ch
0x905615: mov     [esi+1A4h], ecx
0x90561B: mov     ecx, [esp+240h+var_4]
0x905622: call    @__security_check_cookie@4; __security_check_cookie(x)
0x905627: pop     edi
0x905628: pop     esi
0x905629: pop     ebx
0x90562A: mov     esp, ebp
0x90562C: pop     ebp
0x90562D: retn    10h
