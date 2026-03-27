0x60A230: push    ebp
0x60A231: mov     ebp, esp
0x60A233: and     esp, 0FFFFFFF0h
0x60A236: push    0FFFFFFFFh
0x60A238: push    offset SEH_60A230
0x60A23D: mov     eax, large fs:0
0x60A243: push    eax
0x60A244: sub     esp, 0E8h
0x60A24A: mov     eax, ds:0B30AACh
0x60A24F: xor     eax, esp
0x60A251: mov     [esp+0F4h+var_14], eax
0x60A258: push    ebx
0x60A259: push    esi
0x60A25A: push    edi
0x60A25B: mov     eax, ds:0B30AACh
0x60A260: xor     eax, esp
0x60A262: push    eax
0x60A263: lea     eax, [esp+104h+var_C]
0x60A26A: mov     large fs:0, eax
0x60A270: mov     eax, [ebp+arg_0]
0x60A273: mov     edi, ecx
0x60A275: cmp     dword ptr [edi+58h], 0
0x60A279: mov     [esp+104h+var_E8], eax
0x60A27D: jz      loc_60A60B
0x60A283: mov     ecx, [edi+58h]
0x60A286: mov     edx, [ecx]
0x60A288: mov     eax, [edx+8]
0x60A28B: call    eax
0x60A28D: test    eax, eax
0x60A28F: jnz     loc_60A60B
0x60A295: mov     ecx, edi; this
0x60A297: call    MobileObject_GetCharProxy
0x60A29C: mov     ecx, edi; this
0x60A29E: mov     esi, eax
0x60A2A0: call    TESObjectREFR_GetParentCell
0x60A2A5: mov     ebx, eax
0x60A2A7: test    ebx, ebx
0x60A2A9: mov     [esp+104h+var_E0], ebx
0x60A2AD: jz      short loc_60A2D2
0x60A2AF: mov     ecx, ebx; this
0x60A2B1: call    TESObjectCELL_IsInterior
0x60A2B6: test    al, al
0x60A2B8: jz      short loc_60A2CA
0x60A2BA: lea     ecx, [ebx+28h]
0x60A2BD: call    sub_424180
0x60A2C2: mov     ebx, eax
0x60A2C4: mov     [esp+104h+a1], eax
0x60A2C8: jmp     short loc_60A2D8
0x60A2CA: mov     ebx, ds:0B35C24h
0x60A2D0: jmp     short loc_60A2D4
0x60A2D2: xor     ebx, ebx
0x60A2D4: mov     [esp+104h+a1], ebx
0x60A2D8: test    esi, esi
0x60A2DA: jnz     loc_60A4C3
0x60A2E0: push    1
0x60A2E2: lea     ecx, [esp+108h+var_D0]
0x60A2E6: call    sub_890C00
0x60A2EB: fldz
0x60A2ED: mov     [esp+104h+var_4], esi
0x60A2F4: fstp    [esp+104h+var_54]
0x60A2FB: mov     esi, [esp+104h+var_E8]
0x60A2FF: test    esi, esi
0x60A301: jz      short loc_60A344
0x60A303: mov     edx, [esi]
0x60A305: mov     eax, [edx+284h]
0x60A30B: push    7
0x60A30D: mov     ecx, esi
0x60A30F: call    eax
0x60A311: mov     edx, [esi]
0x60A313: push    eax
0x60A314: mov     eax, [edx+284h]
0x60A31A: push    1Ch; int
0x60A31C: mov     ecx, esi
0x60A31E: call    eax
0x60A320: mov     [esp+108h+var_E8], eax
0x60A324: fild    [esp+108h+var_E8]
0x60A328: sub     esp, 8
0x60A32B: fstp    [esp+110h+var_10C]; float
0x60A32F: fld     [ebp+arg_4]
0x60A332: fstp    [esp+110h+var_110]; float
0x60A335: call    sub_547700
0x60A33A: fstp    [esp+110h+var_50]
0x60A341: add     esp, 0Ch
0x60A344: mov     edx, [edi]
0x60A346: mov     eax, [edx+154h]
0x60A34C: mov     ecx, edi
0x60A34E: call    eax
0x60A350: mov     edx, [edi]
0x60A352: mov     [esp+104h+var_60], eax
0x60A359: mov     eax, [edx+174h]
0x60A35F: mov     ecx, edi
0x60A361: call    eax
0x60A363: fld     dword ptr [eax]
0x60A365: fld     qword ptr ds:0A39088h
0x60A36B: push    14h; Size
0x60A36D: fmul    st(1), st
0x60A36F: fxch    st(1)
0x60A371: fstp    [esp+108h+var_D0]
0x60A375: fld     dword ptr [eax+4]
0x60A378: fmul    st, st(1)
0x60A37A: fstp    [esp+108h+var_CC]
0x60A37E: fmul    dword ptr [eax+8]
0x60A381: mov     [esp+108h+var_58], ebx
0x60A388: fstp    [esp+108h+var_C8]
0x60A38C: call    FormHeapAlloc
0x60A391: add     esp, 4
0x60A394: mov     [esp+104h+var_E8], eax
0x60A398: test    eax, eax
0x60A39A: mov     byte ptr [esp+104h+var_4], 1
0x60A3A2: jz      short loc_60A3B9
0x60A3A4: fld     dword ptr ds:0A2FAACh
0x60A3AA: push    1; float
0x60A3AC: push    ecx
0x60A3AD: mov     ecx, eax
0x60A3AF: fstp    [esp+10Ch+var_10C]; float
0x60A3B2: call    sub_532090
0x60A3B7: jmp     short loc_60A3BB
0x60A3B9: xor     eax, eax
0x60A3BB: push    eax
0x60A3BC: lea     ecx, [esp+108h+var_D0]
0x60A3C0: mov     byte ptr [esp+108h+var_4], 0
0x60A3C8: call    sub_608AE0
0x60A3CD: test    esi, esi
0x60A3CF: mov     [esp+104h+var_4C], 0
0x60A3D7: jz      short loc_60A3EB
0x60A3D9: lea     ecx, [esp+104h+var_E8]
0x60A3DD: push    ecx
0x60A3DE: mov     ecx, esi
0x60A3E0: call    sub_65ABE0
0x60A3E5: movzx   eax, word ptr [eax+2]
0x60A3E9: jmp     short loc_60A3F0
0x60A3EB: call    sub_607B60
0x60A3F0: shl     eax, 10h
0x60A3F3: push    1
0x60A3F5: or      eax, 6
0x60A3F8: push    3F0h
0x60A3FD: mov     ecx, offset FormHeap
0x60A402: mov     [esp+10Ch+var_5C], eax
0x60A409: mov     [esp+10Ch+var_48], 6
0x60A414: call    j_MemoryHeap_Alloc
0x60A419: mov     dl, al
0x60A41B: and     dl, 0Fh
0x60A41E: mov     cl, 10h
0x60A420: sub     cl, dl
0x60A422: movzx   edx, cl
0x60A425: add     eax, edx
0x60A427: mov     [eax-1], cl
0x60A42A: mov     [esp+104h+var_E8], eax
0x60A42E: push    edi
0x60A42F: lea     ecx, [esp+108h+var_D0]
0x60A433: push    ecx
0x60A434: mov     ecx, eax
0x60A436: mov     byte ptr [esp+10Ch+var_4], 2
0x60A43E: call    sub_60D8B0
0x60A443: fld1
0x60A445: mov     esi, eax
0x60A447: fstp    dword ptr [esi+324h]
0x60A44D: mov     byte ptr [esp+104h+var_4], 0
0x60A455: cmp     byte ptr ds:0B333B8h, 0
0x60A45C: jz      short loc_60A46A
0x60A45E: or      dword ptr [esi+1F4h], 100000h
0x60A468: jmp     short loc_60A474
0x60A46A: and     dword ptr [esi+1F4h], 0FFEFFFFFh
0x60A474: or      dword ptr [esi+1F4h], 80000h
0x60A47E: push    ecx
0x60A47F: mov     eax, esp
0x60A481: lea     edx, [esi+4]
0x60A484: mov     [esp+108h+var_E8], esp
0x60A488: push    edx; lpAddend
0x60A489: mov     [eax], esi
0x60A48B: call    dword ptr ds:0A28078h
0x60A491: mov     ecx, [edi+58h]
0x60A494: mov     eax, [ecx]
0x60A496: mov     edx, [eax+190h]
0x60A49C: call    edx
0x60A49E: push    edi
0x60A49F: push    3E8h
0x60A4A4: mov     ecx, esi
0x60A4A6: call    sub_8910F0
0x60A4AB: lea     ecx, [esp+104h+var_D0]
0x60A4AF: mov     [esp+104h+var_4], 0FFFFFFFFh
0x60A4BA: call    sub_890F70
0x60A4BF: mov     ebx, [esp+104h+a1]
0x60A4C3: mov     ecx, [esp+104h+var_E0]
0x60A4C7: test    ecx, ecx
0x60A4C9: jz      short loc_60A4DC
0x60A4CB: test    ebx, ebx
0x60A4CD: jz      short loc_60A4DC
0x60A4CF: call    TESObjectCELL_GetWaterHeight
0x60A4D4: fmul    qword ptr ds:0A39088h
0x60A4DA: jmp     short loc_60A4E2
0x60A4DC: fld     dword ptr ds:0A6F374h
0x60A4E2: mov     ecx, [esi+8]
0x60A4E5: fstp    dword ptr [esi+318h]
0x60A4EB: test    ecx, ecx
0x60A4ED: jz      short loc_60A4F6
0x60A4EF: call    sub_8AC0C0
0x60A4F4: jmp     short loc_60A4F8
0x60A4F6: xor     eax, eax
0x60A4F8: mov     eax, [eax+8]
0x60A4FB: test    eax, eax
0x60A4FD: jz      short loc_60A50B
0x60A4FF: mov     eax, [eax+2B0h]
0x60A505: mov     [esp+104h+var_E8], eax
0x60A509: jmp     short loc_60A513
0x60A50B: mov     [esp+104h+var_E8], 0
0x60A513: push    ebx
0x60A514: mov     ecx, esi
0x60A516: call    sub_895060
0x60A51B: mov     edx, [edi]
0x60A51D: mov     eax, [edx+154h]
0x60A523: mov     ecx, edi
0x60A525: call    eax
0x60A527: mov     ecx, [esi+364h]
0x60A52D: test    ecx, ecx
0x60A52F: mov     [esp+104h+a1], eax
0x60A533: jz      short loc_60A53E
0x60A535: push    0
0x60A537: call    sub_89F6B0
0x60A53C: jmp     short loc_60A540
0x60A53E: xor     eax, eax
0x60A540: mov     edx, [esp+104h+a1]
0x60A544: cmp     eax, edx
0x60A546: jz      short loc_60A585
0x60A548: mov     ecx, [esi+364h]
0x60A54E: test    ecx, ecx
0x60A550: jz      short loc_60A55A
0x60A552: push    0
0x60A554: push    edx
0x60A555: call    sub_89F650
0x60A55A: test    ebx, ebx
0x60A55C: jz      short loc_60A572
0x60A55E: cmp     byte ptr [ebx+1Ah], 0
0x60A562: jz      short loc_60A572
0x60A564: mov     edx, [esi]
0x60A566: mov     eax, [edx+88h]
0x60A56C: push    0
0x60A56E: mov     ecx, esi
0x60A570: call    eax
0x60A572: mov     ecx, [esp+104h+a1]
0x60A576: push    0; a4
0x60A578: push    1; a3
0x60A57A: push    6; a2
0x60A57C: push    ecx; a1
0x60A57D: call    sub_88D070
0x60A582: add     esp, 10h
0x60A585: mov     edx, [edi]
0x60A587: mov     eax, [edx+174h]
0x60A58D: mov     ecx, edi
0x60A58F: call    eax
0x60A591: mov     ecx, [eax]
0x60A593: mov     edx, [eax+4]
0x60A596: mov     eax, [eax+8]
0x60A599: mov     [esp+104h+var_D4], eax
0x60A59D: mov     eax, [esp+104h+var_E8]
0x60A5A1: cmp     eax, ebx
0x60A5A3: mov     [esp+104h+a2], ecx
0x60A5A7: mov     [esp+104h+var_D8], edx
0x60A5AB: jz      short loc_60A5D0
0x60A5AD: test    eax, eax
0x60A5AF: jz      short loc_60A5C2
0x60A5B1: mov     ecx, [esp+104h+a1]
0x60A5B5: push    0
0x60A5B7: push    1
0x60A5B9: push    ecx
0x60A5BA: call    sub_88CD50
0x60A5BF: add     esp, 0Ch
0x60A5C2: fld     [esp+104h+var_D4]
0x60A5C6: fadd    qword ptr ds:0A49310h
0x60A5CC: fstp    [esp+104h+var_D4]
0x60A5D0: test    ebx, ebx
0x60A5D2: jz      short loc_60A60B
0x60A5D4: lea     edx, [esp+104h+a2]
0x60A5D8: push    edx; a2
0x60A5D9: mov     ecx, esi; this
0x60A5DB: call    sub_452A10
0x60A5E0: lea     eax, [esp+104h+var_E0]
0x60A5E4: push    eax
0x60A5E5: mov     ecx, esi
0x60A5E7: call    sub_57E270
0x60A5EC: mov     eax, [esp+104h+var_E0]
0x60A5F0: mov     ecx, [esp+104h+a1]
0x60A5F4: mov     edx, [ebx]
0x60A5F6: mov     edx, [edx+90h]
0x60A5FC: push    0
0x60A5FE: shr     eax, 10h
0x60A601: push    eax
0x60A602: push    0
0x60A604: push    1
0x60A606: push    ecx
0x60A607: mov     ecx, ebx
0x60A609: call    edx
0x60A60B: mov     ecx, dword ptr [esp+104h+var_C]
0x60A612: mov     large fs:0, ecx
0x60A619: pop     ecx
0x60A61A: pop     edi
0x60A61B: pop     esi
0x60A61C: pop     ebx
0x60A61D: mov     ecx, [esp+0F4h+var_14]
0x60A624: xor     ecx, esp
0x60A626: call    @__security_check_cookie@4; __security_check_cookie(x)
0x60A62B: mov     esp, ebp
0x60A62D: pop     ebp
0x60A62E: retn    8
