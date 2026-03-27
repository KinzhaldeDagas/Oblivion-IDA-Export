0x62F4E0: sub     esp, 24h
0x62F4E3: mov     eax, [ecx]
0x62F4E5: mov     edx, [eax+184h]
0x62F4EB: push    ebx
0x62F4EC: push    esi
0x62F4ED: push    edi
0x62F4EE: mov     [esp+30h+var_1C], ecx
0x62F4F2: call    edx
0x62F4F4: mov     ebx, eax
0x62F4F6: mov     ecx, ebx
0x62F4F8: call    sub_779480
0x62F4FD: mov     ecx, ebx
0x62F4FF: mov     esi, eax
0x62F501: call    NiDX9TextureData__GetLevels
0x62F506: xor     ecx, ecx
0x62F508: cmp     esi, ecx
0x62F50A: mov     edi, eax
0x62F50C: jz      loc_62F7EF
0x62F512: cmp     edi, ecx
0x62F514: jz      loc_62F7EF
0x62F51A: mov     eax, [esi]
0x62F51C: mov     edx, [eax+18Ch]
0x62F522: push    ebp
0x62F523: mov     ecx, esi
0x62F525: call    edx
0x62F527: test    eax, eax
0x62F529: jnz     loc_62F615
0x62F52F: cmp     esi, [esp+34h+arg_0]
0x62F533: jz      loc_62F615
0x62F539: mov     eax, [esi]
0x62F53B: mov     edx, [eax+174h]
0x62F541: mov     ecx, esi
0x62F543: call    edx
0x62F545: mov     ebp, eax
0x62F547: mov     eax, [edi]
0x62F549: mov     edx, [eax+174h]
0x62F54F: mov     ecx, edi
0x62F551: call    edx
0x62F553: fld     dword ptr [eax+4]
0x62F556: fsub    dword ptr [ebp+4]
0x62F559: fstp    [esp+34h+var_20]
0x62F55D: fld     dword ptr [eax+8]
0x62F560: fsub    dword ptr [ebp+8]
0x62F563: fstp    [esp+34h+var_24]
0x62F567: fld     dword ptr [eax]
0x62F569: lea     eax, [esp+34h+var_C]
0x62F56D: fsub    dword ptr [ebp+0]
0x62F570: push    eax
0x62F571: fstp    [esp+38h+var_C]
0x62F575: fld     [esp+38h+var_20]
0x62F579: fstp    [esp+38h+var_8]
0x62F57D: fld     [esp+38h+var_24]
0x62F581: fstp    [esp+38h+var_4]
0x62F585: call    sub_683CB0
0x62F58A: fstp    [esp+38h+var_20]
0x62F58E: add     esp, 4
0x62F591: fldz
0x62F593: lea     ecx, [esp+34h+var_18]
0x62F597: push    ecx; int
0x62F598: fstp    [esp+38h+var_18]
0x62F59C: fld     [esp+38h+var_20]
0x62F5A0: push    ecx
0x62F5A1: fstp    [esp+3Ch+var_3C]; float
0x62F5A4: push    edi; int
0x62F5A5: call    sub_683D80
0x62F5AA: fstp    [esp+40h+var_14]
0x62F5AE: fild    dword ptr ds:0B36C10h
0x62F5B4: add     esp, 0Ch
0x62F5B7: mov     ecx, edi
0x62F5B9: fmul    qword ptr ds:0A31C78h
0x62F5BF: fstp    [esp+34h+var_24]
0x62F5C3: call    sub_5E0590
0x62F5C8: test    al, al
0x62F5CA: jz      short loc_62F5DC
0x62F5CC: fild    dword ptr ds:0B36C18h
0x62F5D2: fmul    qword ptr ds:0A31C78h
0x62F5D8: fstp    [esp+34h+var_24]
0x62F5DC: fld     [esp+34h+var_14]
0x62F5E0: fabs
0x62F5E2: fstp    [esp+34h+var_14]
0x62F5E6: fld     [esp+34h+var_14]
0x62F5EA: fld     [esp+34h+var_24]
0x62F5EE: fcompp
0x62F5F0: fnstsw  ax
0x62F5F2: test    ah, 5
0x62F5F5: jp      short loc_62F60C
0x62F5F7: fld     [esp+34h+var_20]
0x62F5FB: push    1; char
0x62F5FD: push    ecx
0x62F5FE: fstp    [esp+3Ch+var_3C]; float
0x62F601: push    esi; Concurrency::details::SchedulerBase *
0x62F602: call    sub_685530
0x62F607: add     esp, 0Ch
0x62F60A: jmp     short loc_62F615
0x62F60C: push    30h ; '0'
0x62F60E: mov     ecx, esi
0x62F610: call    sub_5E05F0
0x62F615: mov     edx, [edi]
0x62F617: mov     eax, [edx+18Ch]
0x62F61D: mov     ecx, edi
0x62F61F: call    eax
0x62F621: test    eax, eax
0x62F623: jnz     loc_62F70D
0x62F629: cmp     edi, esi
0x62F62B: jz      loc_62F70D
0x62F631: mov     edx, [edi]
0x62F633: mov     eax, [edx+174h]
0x62F639: mov     ecx, edi
0x62F63B: call    eax
0x62F63D: mov     edx, [esi]
0x62F63F: mov     ebp, eax
0x62F641: mov     eax, [edx+174h]
0x62F647: mov     ecx, esi
0x62F649: call    eax
0x62F64B: fld     dword ptr [eax+4]
0x62F64E: fsub    dword ptr [ebp+4]
0x62F651: lea     ecx, [esp+34h+var_C]
0x62F655: push    ecx
0x62F656: fstp    [esp+38h+var_14]
0x62F65A: fld     dword ptr [eax+8]
0x62F65D: fsub    dword ptr [ebp+8]
0x62F660: fstp    [esp+38h+var_18]
0x62F664: fld     dword ptr [eax]
0x62F666: fsub    dword ptr [ebp+0]
0x62F669: fstp    [esp+38h+var_C]
0x62F66D: fld     [esp+38h+var_14]
0x62F671: fstp    [esp+38h+var_8]
0x62F675: fld     [esp+38h+var_18]
0x62F679: fstp    [esp+38h+var_4]
0x62F67D: call    sub_683CB0
0x62F682: fstp    [esp+38h+var_24]
0x62F686: add     esp, 4
0x62F689: fldz
0x62F68B: lea     edx, [esp+34h+var_10]
0x62F68F: push    edx; int
0x62F690: fstp    [esp+38h+var_10]
0x62F694: fld     [esp+38h+var_24]
0x62F698: push    ecx
0x62F699: fstp    [esp+3Ch+var_3C]; float
0x62F69C: push    esi; int
0x62F69D: call    sub_683D80
0x62F6A2: fstp    [esp+40h+var_14]
0x62F6A6: fild    dword ptr ds:0B36C10h
0x62F6AC: add     esp, 0Ch
0x62F6AF: mov     ecx, esi
0x62F6B1: fmul    qword ptr ds:0A31C78h
0x62F6B7: fstp    [esp+34h+var_20]
0x62F6BB: call    sub_5E0590
0x62F6C0: test    al, al
0x62F6C2: jz      short loc_62F6D4
0x62F6C4: fild    dword ptr ds:0B36C18h
0x62F6CA: fmul    qword ptr ds:0A31C78h
0x62F6D0: fstp    [esp+34h+var_20]
0x62F6D4: fld     [esp+34h+var_14]
0x62F6D8: fabs
0x62F6DA: fstp    [esp+34h+var_14]
0x62F6DE: fld     [esp+34h+var_14]
0x62F6E2: fld     [esp+34h+var_20]
0x62F6E6: fcompp
0x62F6E8: fnstsw  ax
0x62F6EA: test    ah, 5
0x62F6ED: jp      short loc_62F704
0x62F6EF: fld     [esp+34h+var_24]
0x62F6F3: push    1; char
0x62F6F5: push    ecx
0x62F6F6: fstp    [esp+3Ch+var_3C]; float
0x62F6F9: push    edi; Concurrency::details::SchedulerBase *
0x62F6FA: call    sub_685530
0x62F6FF: add     esp, 0Ch
0x62F702: jmp     short loc_62F70D
0x62F704: push    30h ; '0'
0x62F706: mov     ecx, edi
0x62F708: call    sub_5E05F0
0x62F70D: fldz
0x62F70F: fcomp   dword ptr [ebx+44h]
0x62F712: fnstsw  ax
0x62F714: test    ah, 5
0x62F717: jp      short loc_62F72F
0x62F719: fld     dword ptr [ebx+44h]
0x62F71C: fsub    dword ptr ds:0B33E9Ch
0x62F722: fstp    dword ptr [ebx+44h]
0x62F725: pop     ebp
0x62F726: pop     edi
0x62F727: pop     esi
0x62F728: pop     ebx
0x62F729: add     esp, 24h
0x62F72C: retn    4
0x62F72F: mov     ecx, [esp+34h+var_1C]
0x62F733: mov     eax, [ecx]
0x62F735: mov     edx, [eax+0C0h]
0x62F73B: call    edx
0x62F73D: test    al, al
0x62F73F: jz      loc_62F7C8
0x62F745: mov     ecx, [ebx+3Ch]
0x62F748: test    ecx, ecx
0x62F74A: jz      short loc_62F755
0x62F74C: call    sub_6B7260
0x62F751: test    al, al
0x62F753: jnz     short loc_62F7C8
0x62F755: mov     ecx, edi
0x62F757: xor     bl, bl
0x62F759: call    sub_5E0380
0x62F75E: mov     ecx, esi
0x62F760: mov     ebp, eax
0x62F762: call    sub_5E0380
0x62F767: cmp     eax, ebp
0x62F769: jnz     short loc_62F76D
0x62F76B: mov     bl, 1
0x62F76D: mov     ebp, [esp+34h+arg_0]
0x62F771: mov     eax, [ebp+0]
0x62F774: mov     edx, [eax+30Ch]
0x62F77A: mov     ecx, ebp
0x62F77C: call    edx
0x62F77E: push    30h ; '0'
0x62F780: mov     ecx, esi
0x62F782: call    sub_5E05F0
0x62F787: test    bl, bl
0x62F789: jz      short loc_62F7B2
0x62F78B: cmp     edi, ebp
0x62F78D: jz      short loc_62F791
0x62F78F: mov     esi, edi
0x62F791: mov     ecx, [esi+58h]
0x62F794: test    ecx, ecx
0x62F796: jz      short loc_62F7B2
0x62F798: mov     eax, [ecx]
0x62F79A: mov     edx, [eax+8]
0x62F79D: call    edx
0x62F79F: test    eax, eax
0x62F7A1: jnz     short loc_62F7B2
0x62F7A3: mov     esi, [esi+58h]
0x62F7A6: test    esi, esi
0x62F7A8: jz      short loc_62F7B2
0x62F7AA: fldz
0x62F7AC: fstp    dword ptr [esi+1ACh]
0x62F7B2: fldz
0x62F7B4: mov     eax, [esp+34h+var_1C]
0x62F7B8: pop     ebp
0x62F7B9: fstp    dword ptr [eax+1ACh]
0x62F7BF: pop     edi
0x62F7C0: pop     esi
0x62F7C1: pop     ebx
0x62F7C2: add     esp, 24h
0x62F7C5: retn    4
0x62F7C8: mov     ecx, [ebx+3Ch]
0x62F7CB: test    ecx, ecx
0x62F7CD: jz      short loc_62F7DC
0x62F7CF: call    sub_6B7260
0x62F7D4: test    al, al
0x62F7D6: jnz     loc_62F725
0x62F7DC: push    1; AnimSequenceSingle *
0x62F7DE: mov     ecx, ebx
0x62F7E0: call    sub_6267A0
0x62F7E5: pop     ebp
0x62F7E6: pop     edi
0x62F7E7: pop     esi
0x62F7E8: pop     ebx
0x62F7E9: add     esp, 24h
0x62F7EC: retn    4
0x62F7EF: mov     eax, [esp+30h+arg_0]
0x62F7F3: mov     edx, [eax+58h]
0x62F7F6: pop     edi
0x62F7F7: mov     [edx+8], ecx
0x62F7FA: mov     eax, [eax+58h]
0x62F7FD: pop     esi
0x62F7FE: mov     [eax+4], ecx
0x62F801: pop     ebx
0x62F802: add     esp, 24h
0x62F805: retn    4
