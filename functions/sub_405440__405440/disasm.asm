0x405440: push    ecx
0x405441: push    ebx
0x405442: xor     ebx, ebx
0x405444: cmp     byte ptr [esp+8+arg_0], bl
0x405448: jz      loc_405550
0x40544E: call    sub_40FDA0
0x405453: test    al, al
0x405455: jz      short loc_405461
0x405457: call    sub_40FD90
0x40545C: call    sub_40FDD0
0x405461: mov     eax, ObjectPtr
0x405466: cmp     eax, ebx
0x405468: jz      short loc_405479
0x40546A: cmp     [eax+20h], ebx
0x40546D: setnz   al
0x405470: cmp     al, bl
0x405472: jz      short loc_405479
0x405474: call    sub_410B00
0x405479: call    InitBSShaderAccumulator
0x40547E: cmp     eax, ebx
0x405480: jz      short loc_405489
0x405482: mov     ecx, eax
0x405484: call    sub_7A9CF0
0x405489: mov     eax, TES
0x40548E: mov     ecx, [eax+8]
0x405491: push    ebp
0x405492: mov     ebp, [ecx+0Ch]
0x405495: push    esi
0x405496: push    edi
0x405497: xor     edi, edi
0x405499: cmp     ebp, ebx
0x40549B: jle     short loc_4054EB
0x40549D: lea     ecx, [ecx+0]
0x4054A0: xor     esi, esi
0x4054A2: mov     edx, TES
0x4054A8: mov     ecx, [edx+8]
0x4054AB: push    esi
0x4054AC: push    edi
0x4054AD: call    GetGridEntry
0x4054B2: mov     ecx, [eax]
0x4054B4: cmp     ecx, ebx
0x4054B6: jz      short loc_4054DD
0x4054B8: lea     eax, [esp+14h+var_4]
0x4054BC: push    eax
0x4054BD: lea     edx, [esp+18h+arg_0]
0x4054C1: push    edx
0x4054C2: call    sub_4CAFF0
0x4054C7: cmp     [esp+14h+arg_0], ebx
0x4054CB: jz      short loc_4054DD
0x4054CD: mov     eax, [esp+14h+var_4]
0x4054D1: cmp     eax, ebx
0x4054D3: jz      short loc_4054DD
0x4054D5: cmp     [eax+4], ebx
0x4054D8: jz      short loc_4054DD
0x4054DA: mov     [eax+4], ebx
0x4054DD: add     esi, 1
0x4054E0: cmp     esi, ebp
0x4054E2: jl      short loc_4054A2
0x4054E4: add     edi, 1
0x4054E7: cmp     edi, ebp
0x4054E9: jl      short loc_4054A0
0x4054EB: mov     eax, menuRenderedTexture
0x4054F0: cmp     eax, ebx
0x4054F2: jz      short loc_405542
0x4054F4: mov     ecx, g_textureManager; this
0x4054FA: push    eax; a2
0x4054FB: call    sub_7C1EE0
0x405500: mov     esi, menuRenderedTexture
0x405506: cmp     esi, ebx
0x405508: jz      short loc_40552C
0x40550A: lea     eax, [esi+4]
0x40550D: push    eax; lpAddend
0x40550E: call    ds:InterlockedDecrement
0x405514: test    eax, eax
0x405516: jnz     short loc_405526
0x405518: cmp     esi, ebx
0x40551A: jz      short loc_405526
0x40551C: mov     edx, [esi]
0x40551E: mov     eax, [edx]
0x405520: push    1
0x405522: mov     ecx, esi
0x405524: call    eax
0x405526: mov     menuRenderedTexture, ebx
0x40552C: cmp     byte_B42D54, bl
0x405532: jz      short loc_40553C
0x405534: fldz
0x405536: fstp    flt_B42D50
0x40553C: mov     byte_B42D54, bl
0x405542: pop     edi
0x405543: pop     esi
0x405544: pop     ebp
0x405545: mov     byte_B33397, bl
0x40554B: mov     al, 1
0x40554D: pop     ebx
0x40554E: pop     ecx
0x40554F: retn
0x405550: mov     eax, ObjectPtr
0x405555: cmp     eax, ebx
0x405557: jz      short loc_405563
0x405559: cmp     [eax+20h], ebx
0x40555C: setnz   al
0x40555F: cmp     al, bl
0x405561: jnz     short loc_405586
0x405563: push    ebx
0x405564: push    414h
0x405569: call    sub_5790E0
0x40556E: add     esp, 8
0x405571: test    al, al
0x405573: jz      short loc_405586
0x405575: mov     ecx, off_B03094; "Map loop.bik"
0x40557B: push    1
0x40557D: push    ecx
0x40557E: call    sub_410C40
0x405583: add     esp, 8
0x405586: cmp     UseHDR, bl
0x40558C: jz      short loc_405593
0x40558E: call    sub_7C02E0
0x405593: mov     edx, TES
0x405599: mov     ecx, [edx+54h]
0x40559C: cmp     ecx, ebx
0x40559E: jz      short loc_4055BC
0x4055A0: cmp     byte_B0703C, bl
0x4055A6: jz      short loc_4055BC
0x4055A8: push    1
0x4055AA: call    WaterManager__Destroy?
0x4055AF: mov     eax, TES
0x4055B4: mov     ecx, [eax+54h]
0x4055B7: call    sub_498F30
0x4055BC: push    ebx
0x4055BD: call    GetShadowSceneNode
0x4055C2: add     esp, 4
0x4055C5: test    eax, eax
0x4055C7: jz      short loc_4055D5
0x4055C9: call    Sky_CreateOrGetGlobalObject
0x4055CE: mov     byte ptr [eax+100h], 1
0x4055D5: mov     al, 1
0x4055D7: pop     ebx
0x4055D8: pop     ecx
0x4055D9: retn
