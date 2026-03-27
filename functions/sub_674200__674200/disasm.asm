0x674200: sub     esp, 10h
0x674203: push    ebx
0x674204: push    ebp
0x674205: push    esi
0x674206: mov     ebx, ecx
0x674208: call    sub_7616D0
0x67420D: mov     ebp, eax
0x67420F: xor     esi, esi
0x674211: cmp     [ebp+0], esi
0x674214: mov     [esp+1Ch+var_D], 1
0x674219: jz      loc_6744E9
0x67421F: push    edi
0x674220: push    8; Size
0x674222: call    FormHeapAlloc
0x674227: add     esp, 4
0x67422A: cmp     eax, esi
0x67422C: jz      short loc_67423B
0x67422E: mov     edi, eax
0x674230: mov     [eax], esi
0x674232: mov     [eax+4], esi
0x674235: mov     [esp+20h+var_C], edi
0x674239: jmp     short loc_674241
0x67423B: mov     [esp+20h+var_C], esi
0x67423F: mov     edi, esi
0x674241: mov     eax, [ebp+4]
0x674244: test    eax, eax
0x674246: jnz     short loc_674251
0x674248: cmp     [ebp+0], eax
0x67424B: jz      loc_674497
0x674251: mov     esi, [ebp+0]
0x674254: test    esi, esi
0x674256: mov     ebp, eax
0x674258: jz      loc_67448F
0x67425E: mov     eax, [esi+8]
0x674261: mov     ecx, eax
0x674263: shr     ecx, 15h
0x674266: test    cl, 1
0x674269: jnz     loc_67448F
0x67426F: mov     edx, eax
0x674271: shr     edx, 0Bh
0x674274: test    dl, 1
0x674277: jnz     loc_67444A
0x67427D: shr     eax, 5
0x674280: test    al, 1
0x674282: jnz     loc_67444A
0x674288: mov     ecx, esi; this
0x67428A: call    Actor__GetProcessLevel
0x67428F: cmp     eax, 1
0x674292: jnz     loc_67444A
0x674298: mov     ecx, esi; this
0x67429A: call    sub_6599B0; Noope the struct asosciated to the this pointer is bigger
0x67429F: fstp    [esp+20h+var_8]
0x6742A3: mov     ecx, offset TimeGlobals
0x6742A8: call    TimeGlobals_GetGameHour
0x6742AD: fstp    [esp+20h+var_4]
0x6742B1: fld     dword ptr ds:0A30634h
0x6742B7: mov     ecx, esi
0x6742B9: fcomp   [esp+20h+var_8]
0x6742BD: fnstsw  ax
0x6742BF: test    ah, 44h
0x6742C2: jp      short loc_6742CB
0x6742C4: call    sub_659A20
0x6742C9: jmp     short loc_674314
0x6742CB: mov     eax, [esi]
0x6742CD: mov     edx, [eax+190h]
0x6742D3: xor     edi, edi
0x6742D5: call    edx
0x6742D7: test    al, al
0x6742D9: jz      short loc_6742DD
0x6742DB: mov     edi, esi
0x6742DD: fld     [esp+20h+var_4]
0x6742E1: fld     st
0x6742E3: fld     [esp+20h+var_8]
0x6742E7: fld     st
0x6742E9: fsubp   st(2), st
0x6742EB: fxch    st(1)
0x6742ED: fcomp   qword ptr ds:0A74560h
0x6742F3: fnstsw  ax
0x6742F5: test    ah, 1
0x6742F8: jz      short loc_674369
0x6742FA: fcompp
0x6742FC: fnstsw  ax
0x6742FE: test    ah, 41h
0x674301: jz      short loc_67436D
0x674303: fldz
0x674305: fcomp   [esp+20h+arg_0]
0x674309: fnstsw  ax
0x67430B: test    ah, 44h
0x67430E: jp      short loc_67436D
0x674310: mov     edi, [esp+20h+var_C]
0x674314: cmp     [esp+20h+var_D], 0
0x674319: jz      loc_67448F
0x67431F: mov     ecx, ebx; this
0x674321: call    sub_7616D0
0x674326: test    eax, eax
0x674328: jz      loc_67448A
0x67432E: mov     ecx, ebx; this
0x674330: call    sub_7616D0
0x674335: cmp     dword ptr [eax+4], 0
0x674339: jnz     short loc_674340
0x67433B: cmp     dword ptr [eax], 0
0x67433E: jz      short loc_67435B
0x674340: mov     ecx, ebx; this
0x674342: call    sub_7616D0
0x674347: cmp     [eax], esi
0x674349: jnz     short loc_67435B
0x67434B: mov     ecx, ebx; this
0x67434D: call    sub_7616D0
0x674352: cmp     [eax+4], ebp
0x674355: jz      loc_67448A
0x67435B: mov     ecx, ebx; this
0x67435D: call    sub_7616D0
0x674362: mov     ebp, eax
0x674364: jmp     loc_67448F
0x674369: fstp    st(1)
0x67436B: fstp    st
0x67436D: mov     ecx, [esi+58h]
0x674370: mov     eax, [ecx]
0x674372: mov     edx, [eax+168h]
0x674378: call    edx
0x67437A: fstp    dword ptr [esp+1Ch]
0x67437E: fldz
0x674380: fld     dword ptr [esp+1Ch]
0x674384: fcom    st(1)
0x674386: fnstsw  ax
0x674388: fstp    st(1)
0x67438A: test    ah, 41h
0x67438D: jnz     short loc_6743B3
0x67438F: fsub    dword ptr ds:0B33E9Ch
0x674395: mov     ecx, [esi+58h]
0x674398: mov     eax, [ecx]
0x67439A: mov     edx, [eax+164h]
0x6743A0: fstp    dword ptr [esp+1Ch]
0x6743A4: push    ecx
0x6743A5: fld     dword ptr [esp+20h]
0x6743A9: fstp    [esp+20h+var_20]
0x6743AC: call    edx
0x6743AE: jmp     loc_674310
0x6743B3: test    edi, edi
0x6743B5: fstp    st
0x6743B7: jz      short loc_6743E0
0x6743B9: mov     ecx, edi; this
0x6743BB: call    MobileObject_GetCharProxy
0x6743C0: test    eax, eax
0x6743C2: jnz     short loc_6743E0
0x6743C4: mov     eax, [edi]
0x6743C6: mov     edx, [eax+154h]
0x6743CC: mov     ecx, edi
0x6743CE: call    edx
0x6743D0: test    eax, eax
0x6743D2: jz      short loc_6743E0
0x6743D4: mov     eax, [edi]
0x6743D6: mov     edx, [eax+148h]
0x6743DC: mov     ecx, edi
0x6743DE: call    edx
0x6743E0: mov     eax, [esi]
0x6743E2: fld     [esp+1Ch+arg_4]
0x6743E6: mov     edx, [eax+1C0h]
0x6743EC: push    ecx
0x6743ED: mov     ecx, esi
0x6743EF: fstp    [esp+20h+var_20]
0x6743F2: call    edx
0x6743F4: call    sub_4F9FA0
0x6743F9: test    al, al
0x6743FB: jz      short loc_674404
0x6743FD: mov     ecx, esi
0x6743FF: call    RunScripts
0x674404: test    edi, edi
0x674406: jz      short loc_674433
0x674408: mov     ecx, edi; this
0x67440A: call    ?GetAnonymousScheduleGroup@SchedulerBase@details@Concurrency@@QAEPAVScheduleGroupBase@23@XZ; Concurrency::details::SchedulerBase::GetAnonymousScheduleGroup(void)
0x67440F: cmp     eax, 1
0x674412: jnz     short loc_674433
0x674414: push    0
0x674416: push    esi
0x674417: mov     ecx, ebx
0x674419: call    sub_67B320
0x67441E: push    0
0x674420: push    0
0x674422: push    1
0x674424: push    esi
0x674425: mov     ecx, ebx
0x674427: call    sub_67B260
0x67442C: xor     ebp, ebp
0x67442E: mov     [esp+20h+var_D], 0
0x674433: mov     ecx, esi; this
0x674435: call    Actor__GetProcessLevel
0x67443A: cmp     eax, 1
0x67443D: jz      loc_674310
0x674443: xor     ebp, ebp
0x674445: jmp     loc_674310
0x67444A: cmp     dword ptr [edi], 0
0x67444D: jz      short loc_674483
0x67444F: push    8; Size
0x674451: call    FormHeapAlloc
0x674456: add     esp, 4
0x674459: test    eax, eax
0x67445B: jz      short loc_674478
0x67445D: mov     ecx, [edi]
0x67445F: mov     [eax], ecx
0x674461: mov     dword ptr [eax+4], 0
0x674468: mov     edx, [edi+4]
0x67446B: mov     [eax+4], edx
0x67446E: mov     [edi+4], eax
0x674471: mov     [edi], esi
0x674473: jmp     loc_674314
0x674478: mov     edx, [edi+4]
0x67447B: xor     eax, eax
0x67447D: mov     [eax+4], edx
0x674480: mov     [edi+4], eax
0x674483: mov     [edi], esi
0x674485: jmp     loc_674314
0x67448A: mov     [esp+20h+var_D], 0
0x67448F: test    ebp, ebp
0x674491: jnz     loc_674241
0x674497: mov     ecx, ebx; this
0x674499: call    sub_7616D0
0x67449E: mov     ebp, [esp+20h+var_C]
0x6744A2: test    ebp, ebp
0x6744A4: jz      short loc_6744D8
0x6744A6: mov     esi, [edi]
0x6744A8: test    esi, esi
0x6744AA: jz      short loc_6744D8
0x6744AC: push    0
0x6744AE: push    esi
0x6744AF: mov     ecx, ebx
0x6744B1: call    sub_67B320
0x6744B6: mov     eax, [esi]
0x6744B8: mov     edx, [eax+1FCh]
0x6744BE: mov     ecx, esi
0x6744C0: call    edx
0x6744C2: test    al, al
0x6744C4: jz      short loc_6744D1
0x6744C6: mov     eax, [esi]
0x6744C8: mov     edx, [eax+10h]
0x6744CB: push    1
0x6744CD: mov     ecx, esi
0x6744CF: call    edx
0x6744D1: mov     edi, [edi+4]
0x6744D4: test    edi, edi
0x6744D6: jnz     short loc_6744A6
0x6744D8: mov     ecx, ebp
0x6744DA: call    BSSimpleList_Clear
0x6744DF: push    ebp
0x6744E0: call    FormHeapFree
0x6744E5: add     esp, 4
0x6744E8: pop     edi
0x6744E9: pop     esi
0x6744EA: pop     ebp
0x6744EB: pop     ebx
0x6744EC: add     esp, 10h
0x6744EF: retn    8
