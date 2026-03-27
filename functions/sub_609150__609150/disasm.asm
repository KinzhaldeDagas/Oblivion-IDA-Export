0x609150: push    ebp
0x609151: mov     ebp, esp
0x609153: and     esp, 0FFFFFFF0h
0x609156: sub     esp, 24h
0x609159: mov     eax, ds:0B30AACh
0x60915E: xor     eax, esp
0x609160: mov     [esp+24h+var_4], eax
0x609164: push    ebx
0x609165: mov     ebx, [ebp+arg_0]
0x609168: push    esi
0x609169: mov     esi, ecx
0x60916B: mov     eax, [esi]
0x60916D: mov     edx, [eax+1C8h]
0x609173: push    edi; ArgList
0x609174: call    edx
0x609176: mov     eax, [esi+5Ch]
0x609179: cmp     dword ptr [eax+28h], 0
0x60917D: jz      loc_609272
0x609183: mov     eax, [eax+2Ch]
0x609186: push    eax
0x609187: call    sub_480340
0x60918C: add     esp, 4
0x60918F: test    eax, eax
0x609191: jz      loc_60927F
0x609197: mov     edx, [esi]
0x609199: mov     edi, [eax+10h]
0x60919C: mov     eax, [edx+154h]
0x6091A2: push    0; a4
0x6091A4: push    1; a3
0x6091A6: push    6; a2
0x6091A8: mov     ecx, esi
0x6091AA: call    eax
0x6091AC: push    eax; a1
0x6091AD: call    sub_88D070
0x6091B2: add     esp, 10h
0x6091B5: test    edi, edi
0x6091B7: jz      short loc_6091CA
0x6091B9: mov     eax, [edi+8]
0x6091BC: test    eax, eax
0x6091BE: jz      short loc_6091CA
0x6091C0: add     eax, 14h
0x6091C3: jz      short loc_6091CA
0x6091C5: mov     eax, [eax+1Ch]
0x6091C8: jmp     short loc_6091CC
0x6091CA: xor     eax, eax
0x6091CC: and     eax, 0FFFF0006h
0x6091D1: or      eax, 6
0x6091D4: test    edi, edi
0x6091D6: jz      short loc_6091E9
0x6091D8: mov     ecx, [edi+8]
0x6091DB: test    ecx, ecx
0x6091DD: jz      short loc_6091E9
0x6091DF: add     ecx, 14h
0x6091E2: jz      short loc_6091E9
0x6091E4: mov     ecx, [ecx+1Ch]
0x6091E7: jmp     short loc_6091EB
0x6091E9: xor     ecx, ecx
0x6091EB: and     cl, 3Fh
0x6091EE: cmp     cl, 4
0x6091F1: jz      short loc_6091F9
0x6091F3: and     eax, 0FFFFFFCFh
0x6091F6: or      eax, 0Fh
0x6091F9: test    ebx, ebx
0x6091FB: jz      short loc_60920C
0x6091FD: mov     ecx, [ebx+8]
0x609200: test    ecx, ecx
0x609202: jz      short loc_60920C
0x609204: add     ecx, 14h
0x609207: jz      short loc_60920C
0x609209: mov     [ecx+1Ch], eax
0x60920C: mov     edx, [ebx]
0x60920E: mov     eax, [edx+80h]
0x609214: mov     ecx, ebx
0x609216: call    eax
0x609218: push    esi
0x609219: mov     ecx, offset ActorProcessManager_ptr.unk4C
0x60921E: call    BSSimpleList_PushFront
0x609223: mov     ecx, edi
0x609225: call    sub_535AC0
0x60922A: fcomp   dword ptr ds:0A2FAA8h
0x609230: fnstsw  ax
0x609232: test    ah, 41h
0x609235: jnz     short loc_60925C
0x609237: mov     edx, [ebx]
0x609239: mov     edx, [edx+0A8h]
0x60923F: lea     eax, [esp+30h+var_20]
0x609243: push    eax
0x609244: mov     ecx, ebx
0x609246: call    edx
0x609248: mov     eax, [esi+5Ch]
0x60924B: mov     ecx, [eax+2Ch]
0x60924E: push    ecx
0x60924F: lea     edx, [esp+34h+var_20]
0x609253: push    edx
0x609254: call    sub_535BE0
0x609259: add     esp, 8
0x60925C: mov     al, 1
0x60925E: pop     edi
0x60925F: pop     esi
0x609260: pop     ebx
0x609261: mov     ecx, [esp+24h+var_4]
0x609265: xor     ecx, esp
0x609267: call    @__security_check_cookie@4; __security_check_cookie(x)
0x60926C: mov     esp, ebp
0x60926E: pop     ebp
0x60926F: retn    4
0x609272: push    offset aAnArrowThinksI; "An arrow thinks it is colliding with an"...
0x609277: call    PrintError
0x60927C: add     esp, 4
0x60927F: mov     ecx, [esp+30h+var_4]
0x609283: pop     edi
0x609284: pop     esi
0x609285: pop     ebx
0x609286: xor     ecx, esp
0x609288: xor     al, al
0x60928A: call    @__security_check_cookie@4; __security_check_cookie(x)
0x60928F: mov     esp, ebp
0x609291: pop     ebp
0x609292: retn    4
