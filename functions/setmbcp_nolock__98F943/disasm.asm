0x98F943: push    ebp
0x98F944: mov     ebp, esp
0x98F946: sub     esp, 20h
0x98F949: mov     eax, ___security_cookie
0x98F94E: xor     eax, ebp
0x98F950: mov     [ebp+var_4], eax
0x98F953: push    ebx
0x98F954: mov     ebx, [ebp+arg_4]
0x98F957: push    esi
0x98F958: mov     esi, [ebp+arg_0]
0x98F95B: push    edi; struct threadmbcinfostruct *
0x98F95C: call    ?getSystemCP@@YAHH@Z
0x98F961: mov     edi, eax
0x98F963: xor     esi, esi
0x98F965: cmp     edi, esi
0x98F967: mov     [ebp+arg_0], edi
0x98F96A: jnz     short loc_98F97A
0x98F96C: mov     eax, ebx
0x98F96E: call    ?setSBCS@@YAXPAUthreadmbcinfostruct@@@Z
0x98F973: xor     eax, eax
0x98F975: jmp     loc_98FADF
0x98F97A: mov     [ebp+var_1C], esi
0x98F97D: xor     eax, eax
0x98F97F: cmp     dword_B317C0[eax], edi
0x98F985: jz      short loc_98F9EE
0x98F987: inc     [ebp+var_1C]
0x98F98A: add     eax, 30h ; '0'
0x98F98D: cmp     eax, 0F0h ; 'ð'
0x98F992: jb      short loc_98F97F
0x98F994: lea     eax, [ebp+CPInfo]
0x98F997: push    eax; lpCPInfo
0x98F998: push    edi; CodePage
0x98F999: call    ds:GetCPInfo
0x98F99F: test    eax, eax
0x98F9A1: jz      loc_98FAD0
0x98F9A7: push    101h
0x98F9AC: lea     eax, [ebx+1Ch]
0x98F9AF: push    esi
0x98F9B0: push    eax
0x98F9B1: call    __memset
0x98F9B6: xor     edx, edx
0x98F9B8: inc     edx
0x98F9B9: add     esp, 0Ch
0x98F9BC: cmp     [ebp+CPInfo.MaxCharSize], edx
0x98F9BF: mov     [ebx+4], edi
0x98F9C2: mov     [ebx+0Ch], esi
0x98F9C5: jbe     loc_98FAC3
0x98F9CB: cmp     [ebp+CPInfo.LeadByte], 0
0x98F9CF: jz      loc_98FAA4
0x98F9D5: lea     esi, [ebp+CPInfo.LeadByte+1]
0x98F9D8: mov     cl, [esi]
0x98F9DA: test    cl, cl
0x98F9DC: jz      loc_98FAA4
0x98F9E2: movzx   eax, byte ptr [esi-1]
0x98F9E6: movzx   ecx, cl
0x98F9E9: jmp     loc_98FA94
0x98F9EE: push    101h
0x98F9F3: lea     eax, [ebx+1Ch]
0x98F9F6: push    esi
0x98F9F7: push    eax
0x98F9F8: call    __memset
0x98F9FD: mov     ecx, [ebp+var_1C]
0x98FA00: add     esp, 0Ch
0x98FA03: imul    ecx, 30h ; '0'
0x98FA06: mov     [ebp+var_20], esi
0x98FA09: lea     esi, unk_B317D0[ecx]
0x98FA0F: mov     [ebp+var_1C], esi
0x98FA12: jmp     short loc_98FA3E
0x98FA14: mov     al, [esi+1]
0x98FA17: test    al, al
0x98FA19: jz      short loc_98FA43
0x98FA1B: movzx   edi, byte ptr [esi]
0x98FA1E: movzx   eax, al
0x98FA21: jmp     short loc_98FA35
0x98FA23: mov     eax, [ebp+var_20]
0x98FA26: mov     al, byte_B317BC[eax]
0x98FA2C: or      [ebx+edi+1Dh], al
0x98FA30: movzx   eax, byte ptr [esi+1]
0x98FA34: inc     edi
0x98FA35: cmp     edi, eax
0x98FA37: jbe     short loc_98FA23
0x98FA39: mov     edi, [ebp+arg_0]
0x98FA3C: inc     esi
0x98FA3D: inc     esi
0x98FA3E: cmp     byte ptr [esi], 0
0x98FA41: jnz     short loc_98FA14
0x98FA43: mov     esi, [ebp+var_1C]
0x98FA46: inc     [ebp+var_20]
0x98FA49: add     esi, 8
0x98FA4C: cmp     [ebp+var_20], 4
0x98FA50: mov     [ebp+var_1C], esi
0x98FA53: jb      short loc_98FA3E
0x98FA55: mov     eax, edi
0x98FA57: mov     [ebx+4], edi
0x98FA5A: mov     dword ptr [ebx+8], 1
0x98FA61: call    _CPtoLCID
0x98FA66: push    6
0x98FA68: mov     [ebx+0Ch], eax
0x98FA6B: lea     eax, [ebx+10h]
0x98FA6E: lea     ecx, unk_B317C4[ecx]
0x98FA74: pop     edx
0x98FA75: mov     si, [ecx]
0x98FA78: inc     ecx
0x98FA79: mov     [eax], si
0x98FA7C: inc     ecx
0x98FA7D: inc     eax
0x98FA7E: inc     eax
0x98FA7F: dec     edx
0x98FA80: jnz     short loc_98FA75
0x98FA82: mov     esi, ebx
0x98FA84: call    ?setSBUpLow@@YAXPAUthreadmbcinfostruct@@@Z
0x98FA89: jmp     loc_98F973
0x98FA8E: or      byte ptr [ebx+eax+1Dh], 4
0x98FA93: inc     eax
0x98FA94: cmp     eax, ecx
0x98FA96: jbe     short loc_98FA8E
0x98FA98: inc     esi
0x98FA99: inc     esi
0x98FA9A: cmp     byte ptr [esi-1], 0
0x98FA9E: jnz     loc_98F9D8
0x98FAA4: lea     eax, [ebx+1Eh]
0x98FAA7: mov     ecx, 0FEh ; 'þ'
0x98FAAC: or      byte ptr [eax], 8
0x98FAAF: inc     eax
0x98FAB0: dec     ecx
0x98FAB1: jnz     short loc_98FAAC
0x98FAB3: mov     eax, [ebx+4]
0x98FAB6: call    _CPtoLCID
0x98FABB: mov     [ebx+0Ch], eax
0x98FABE: mov     [ebx+8], edx
0x98FAC1: jmp     short loc_98FAC6
0x98FAC3: mov     [ebx+8], esi
0x98FAC6: xor     eax, eax
0x98FAC8: lea     edi, [ebx+10h]
0x98FACB: stosd
0x98FACC: stosd
0x98FACD: stosd
0x98FACE: jmp     short loc_98FA82
0x98FAD0: cmp     dword_BAA604, esi
0x98FAD6: jnz     loc_98F96C
0x98FADC: or      eax, 0FFFFFFFFh
0x98FADF: mov     ecx, [ebp+var_4]
0x98FAE2: pop     edi
0x98FAE3: pop     esi
0x98FAE4: xor     ecx, ebp
0x98FAE6: pop     ebx
0x98FAE7: call    @__security_check_cookie@4
0x98FAEC: leave
0x98FAED: retn
