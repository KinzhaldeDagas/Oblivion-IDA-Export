0x6092A0: push    ebp
0x6092A1: mov     ebp, esp
0x6092A3: and     esp, 0FFFFFFF0h
0x6092A6: sub     esp, 164h
0x6092AC: mov     eax, ds:0B30AACh
0x6092B1: xor     eax, esp
0x6092B3: mov     [esp+164h+var_4], eax
0x6092BA: push    ebx
0x6092BB: push    esi
0x6092BC: mov     esi, ecx
0x6092BE: mov     eax, [esi]
0x6092C0: mov     edx, [eax+154h]
0x6092C6: push    edi
0x6092C7: mov     [esp+170h+var_15C], esi
0x6092CB: call    edx
0x6092CD: mov     ebx, eax
0x6092CF: test    ebx, ebx
0x6092D1: jz      short loc_609307
0x6092D3: mov     eax, [esi+8]
0x6092D6: shr     eax, 5
0x6092D9: test    al, 1
0x6092DB: jnz     short loc_609307
0x6092DD: mov     eax, [esi+5Ch]
0x6092E0: test    eax, eax
0x6092E2: jz      short loc_609307
0x6092E4: cmp     dword ptr [eax], 1
0x6092E7: jnz     short loc_609307
0x6092E9: mov     ecx, [eax+2Ch]
0x6092EC: push    ecx
0x6092ED: call    sub_480340
0x6092F2: add     esp, 4
0x6092F5: test    eax, eax
0x6092F7: jnz     short loc_60931E
0x6092F9: mov     edx, [esi]
0x6092FB: mov     eax, [edx+8Ch]
0x609301: push    1
0x609303: mov     ecx, esi
0x609305: call    eax
0x609307: mov     al, 1
0x609309: pop     edi
0x60930A: pop     esi
0x60930B: pop     ebx
0x60930C: mov     ecx, [esp+164h+var_4]
0x609313: xor     ecx, esp
0x609315: call    @__security_check_cookie@4; __security_check_cookie(x)
0x60931A: mov     esp, ebp
0x60931C: pop     ebp
0x60931D: retn
0x60931E: mov     edi, [eax+10h]
0x609321: mov     ecx, edi
0x609323: mov     [esp+170h+var_158], edi
0x609327: call    sub_607880
0x60932C: test    al, al
0x60932E: jnz     short loc_609307
0x609330: mov     ecx, edi
0x609332: call    sub_4B6D90
0x609337: cmp     eax, 6
0x60933A: jnz     loc_609492
0x609340: mov     ecx, [esi+5Ch]
0x609343: mov     esi, [ecx+2Ch]
0x609346: add     esi, 64h ; 'd'
0x609349: mov     ecx, 0Dh
0x60934E: lea     edi, [esp+170h+var_120]
0x609352: rep movsd
0x609354: mov     esi, [esp+170h+var_158]
0x609358: push    esi
0x609359: push    offset dword_BA8018
0x60935E: call    NiRTTI__IsObjectOfRTTIType
0x609363: add     esp, 8
0x609366: test    al, al
0x609368: jz      short loc_6093D3
0x60936A: lea     edx, [esi+20h]
0x60936D: push    edx
0x60936E: lea     ecx, [esp+174h+var_50]
0x609375: call    sub_8B1DD0
0x60937A: movaps  xmm0, xmmword ptr [esi+30h]
0x60937E: lea     eax, [esp+170h+var_50]
0x609385: push    eax
0x609386: lea     ecx, [esp+174h+a3]
0x60938A: push    ecx
0x60938B: movaps  [esp+178h+var_20], xmm0
0x609393: call    sub_6077C0
0x609398: add     esp, 8
0x60939B: lea     edx, [esp+170h+a3]
0x60939F: mov     ecx, 0Dh
0x6093A4: lea     esi, [esp+170h+var_120]
0x6093A8: lea     edi, [esp+170h+var_B8]
0x6093AF: push    edx
0x6093B0: lea     eax, [esp+174h+var_84]
0x6093B7: rep movsd
0x6093B9: push    eax
0x6093BA: lea     ecx, [esp+178h+var_B8]
0x6093C1: call    sub_53D7A0
0x6093C6: mov     ecx, 0Dh
0x6093CB: mov     esi, eax
0x6093CD: lea     edi, [esp+170h+var_120]
0x6093D1: rep movsd
0x6093D3: mov     esi, [esp+170h+var_15C]
0x6093D7: mov     eax, [esi+5Ch]
0x6093DA: fld1
0x6093DC: fst     [esp+170h+var_F0]
0x6093E3: lea     esi, [eax+30h]
0x6093E6: mov     ecx, 9
0x6093EB: lea     edi, [esp+170h+a4]
0x6093F2: rep movsd
0x6093F4: mov     ecx, [eax+4]
0x6093F7: mov     [esp+170h+var_C8], ecx
0x6093FE: mov     edx, [eax+8]
0x609401: mov     [esp+170h+var_C4], edx
0x609408: mov     eax, [eax+0Ch]
0x60940B: lea     ecx, [esp+170h+a4]
0x609412: push    ecx; a4
0x609413: fstp    [esp+174h+var_BC]
0x60941A: lea     edx, [esp+174h+a3]
0x60941E: push    edx; a3
0x60941F: lea     ecx, [esp+178h+var_120]
0x609423: mov     [esp+178h+var_C0], eax
0x60942A: call    sub_53D7A0
0x60942F: mov     esi, [esp+170h+var_130]
0x609433: mov     edi, [esp+170h+var_12C]
0x609437: mov     ecx, [esp+170h+var_128]
0x60943B: sub     esp, 0Ch
0x60943E: mov     eax, esp
0x609440: mov     [eax], esi
0x609442: mov     [eax+4], edi
0x609445: mov     [eax+8], ecx
0x609448: mov     ecx, [esp+17Ch+var_15C]; this
0x60944C: call    TESObjectREFR_SetPosition
0x609451: mov     edx, [esp+170h+var_128]
0x609455: fldz
0x609457: mov     [ebx+54h], esi
0x60945A: mov     [ebx+58h], edi
0x60945D: lea     edi, [ebx+30h]
0x609460: mov     ecx, 9
0x609465: lea     esi, [esp+170h+a3]
0x609469: rep movsd
0x60946B: push    0; a3
0x60946D: push    ecx
0x60946E: mov     ecx, ebx; this
0x609470: mov     [ebx+5Ch], edx
0x609473: fstp    [esp+178h+a2]; a2
0x609476: call    NiAVObject_UpdateNiAVObject
0x60947B: mov     ecx, [esp+170h+var_4]
0x609482: pop     edi
0x609483: pop     esi
0x609484: pop     ebx
0x609485: xor     ecx, esp
0x609487: xor     al, al
0x609489: call    @__security_check_cookie@4; __security_check_cookie(x)
0x60948E: mov     esp, ebp
0x609490: pop     ebp
0x609491: retn
0x609492: test    edi, edi
0x609494: jz      short loc_60949B
0x609496: mov     edi, [edi+8]
0x609499: jmp     short loc_60949D
0x60949B: xor     edi, edi
0x60949D: mov     ecx, [edi+50h]
0x6094A0: add     ecx, 10h
0x6094A3: push    ecx
0x6094A4: lea     edx, [esp+174h+var_120]
0x6094A8: push    edx
0x6094A9: call    sub_6077C0
0x6094AE: add     esp, 8
0x6094B1: jmp     loc_6093D7
