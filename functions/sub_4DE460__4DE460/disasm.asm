0x4DE460: push    ecx
0x4DE461: push    esi
0x4DE462: mov     esi, ecx
0x4DE464: mov     eax, [esi]
0x4DE466: mov     edx, [eax+170h]
0x4DE46C: call    edx
0x4DE46E: test    eax, eax
0x4DE470: jz      loc_4DE5EC
0x4DE476: mov     eax, [esi]
0x4DE478: mov     edx, [eax+170h]
0x4DE47E: mov     ecx, esi
0x4DE480: call    edx
0x4DE482: cmp     byte ptr [eax+4], 18h
0x4DE486: jnz     loc_4DE5EC
0x4DE48C: push    ebx
0x4DE48D: mov     bl, byte ptr [esp+0Ch+arg_0]
0x4DE491: test    bl, bl
0x4DE493: push    4
0x4DE495: mov     ecx, esi
0x4DE497: jz      short loc_4DE4A0
0x4DE499: call    sub_4D8270
0x4DE49E: jmp     short loc_4DE4A5
0x4DE4A0: call    sub_4D82E0
0x4DE4A5: mov     eax, [esi]
0x4DE4A7: mov     edx, [eax+154h]
0x4DE4AD: mov     ecx, esi
0x4DE4AF: call    edx
0x4DE4B1: test    eax, eax
0x4DE4B3: jz      short loc_4DE4D5
0x4DE4B5: mov     eax, [esi]
0x4DE4B7: mov     edx, [eax+154h]
0x4DE4BD: mov     ecx, esi
0x4DE4BF: call    edx
0x4DE4C1: cmp     word ptr [eax+0B6h], 0
0x4DE4C9: jbe     short loc_4DE4D5
0x4DE4CB: mov     eax, [eax+0B0h]
0x4DE4D1: mov     eax, [eax]
0x4DE4D3: jmp     short loc_4DE4D7
0x4DE4D5: xor     eax, eax
0x4DE4D7: test    eax, eax
0x4DE4D9: jz      short loc_4DE4E0
0x4DE4DB: mov     eax, [eax+0Ch]
0x4DE4DE: jmp     short loc_4DE4E2
0x4DE4E0: xor     eax, eax
0x4DE4E2: push    ebp
0x4DE4E3: push    eax
0x4DE4E4: push    offset stru_B3CAC0
0x4DE4E9: call    NiRTTI_Cast
0x4DE4EE: mov     ebp, eax
0x4DE4F0: add     esp, 8
0x4DE4F3: test    ebp, ebp
0x4DE4F5: jz      loc_4DE62E
0x4DE4FB: push    edi
0x4DE4FC: lea     ecx, [esp+14h+var_4]
0x4DE500: push    ecx
0x4DE501: lea     edi, [ebp+58h]
0x4DE504: push    offset aOpen; "Open"
0x4DE509: mov     ecx, edi
0x4DE50B: call    NiTMap_GetAt
0x4DE510: neg     al
0x4DE512: lea     edx, [esp+14h+var_4]
0x4DE516: push    edx
0x4DE517: push    offset aClose; "Close"
0x4DE51C: mov     ecx, edi
0x4DE51E: sbb     eax, eax
0x4DE520: and     eax, [esp+1Ch+var_4]
0x4DE524: mov     ebx, eax
0x4DE526: call    NiTMap_GetAt
0x4DE52B: neg     al
0x4DE52D: sbb     eax, eax
0x4DE52F: and     eax, [esp+14h+var_4]
0x4DE533: test    ebx, ebx
0x4DE535: jz      loc_4DE5E9
0x4DE53B: test    eax, eax
0x4DE53D: jz      loc_4DE5E9
0x4DE543: cmp     byte ptr [esp+14h+arg_0], 0
0x4DE548: jz      short loc_4DE550
0x4DE54A: mov     edi, ebx
0x4DE54C: mov     ebx, eax
0x4DE54E: jmp     short loc_4DE552
0x4DE550: mov     edi, eax
0x4DE552: fldz
0x4DE554: or      word ptr [ebp+8], 8
0x4DE559: push    0; char
0x4DE55B: push    ecx
0x4DE55C: mov     ecx, ebx
0x4DE55E: fstp    [esp+1Ch+a2]; float
0x4DE561: call    sub_6C9CB0
0x4DE566: fldz
0x4DE568: push    0; int
0x4DE56A: sub     esp, 8
0x4DE56D: cmp     [esp+20h+arg_4], 0
0x4DE572: fstp    [esp+20h+a2]; float
0x4DE576: fld1
0x4DE578: mov     ecx, ebp
0x4DE57A: fstp    [esp+20h+var_20]; float
0x4DE57D: push    0; int
0x4DE57F: push    0; int
0x4DE581: jz      short loc_4DE5F1
0x4DE583: push    ebx; int
0x4DE584: call    sub_470B20
0x4DE589: fld     dword ptr ds:0A7DEB4h
0x4DE58F: fchs
0x4DE591: push    1; a3
0x4DE593: fstp    dword ptr [ebx+48h]
0x4DE596: mov     eax, [esi]
0x4DE598: fld     dword ptr [edi+2Ch]
0x4DE59B: mov     edx, [eax+154h]
0x4DE5A1: fstp    [esp+18h+arg_0]
0x4DE5A5: push    ecx
0x4DE5A6: fld     [esp+1Ch+arg_0]
0x4DE5AA: mov     ecx, esi
0x4DE5AC: fstp    [esp+1Ch+a2]; a2
0x4DE5AF: call    edx
0x4DE5B1: mov     ecx, eax; this
0x4DE5B3: call    NiAVObject_UpdateNiAVObject
0x4DE5B8: fldz
0x4DE5BA: push    0; char
0x4DE5BC: push    ecx
0x4DE5BD: mov     ecx, ebx
0x4DE5BF: fstp    [esp+1Ch+a2]; float
0x4DE5C2: call    sub_6C9CB0
0x4DE5C7: mov     eax, [edi+8]
0x4DE5CA: push    eax
0x4DE5CB: mov     ecx, esi
0x4DE5CD: call    sub_4D90D0
0x4DE5D2: mov     edx, [esi]
0x4DE5D4: mov     eax, [edx+154h]
0x4DE5DA: push    1
0x4DE5DC: mov     ecx, esi
0x4DE5DE: call    eax
0x4DE5E0: push    eax
0x4DE5E1: call    sub_897A20
0x4DE5E6: add     esp, 8
0x4DE5E9: pop     edi
0x4DE5EA: pop     ebp
0x4DE5EB: pop     ebx
0x4DE5EC: pop     esi
0x4DE5ED: pop     ecx
0x4DE5EE: retn    8
0x4DE5F1: push    edi; int
0x4DE5F2: call    sub_470B20
0x4DE5F7: fld     dword ptr ds:0A7DEB4h
0x4DE5FD: fchs
0x4DE5FF: push    1; a3
0x4DE601: fstp    dword ptr [edi+48h]
0x4DE604: mov     edx, [esi]
0x4DE606: fld     dword ptr [edi+2Ch]
0x4DE609: mov     eax, [edx+154h]
0x4DE60F: fstp    [esp+18h+arg_0]
0x4DE613: push    ecx
0x4DE614: fld     [esp+1Ch+arg_0]
0x4DE618: mov     ecx, esi
0x4DE61A: fstp    [esp+1Ch+a2]; a2
0x4DE61D: call    eax
0x4DE61F: mov     ecx, eax; this
0x4DE621: call    NiAVObject_UpdateNiAVObject
0x4DE626: pop     edi
0x4DE627: pop     ebp
0x4DE628: pop     ebx
0x4DE629: pop     esi
0x4DE62A: pop     ecx
0x4DE62B: retn    8
0x4DE62E: test    bl, bl
0x4DE630: mov     ecx, esi
0x4DE632: jz      short loc_4DE645
0x4DE634: push    offset aOpen; "Open"
0x4DE639: call    sub_4D90D0
0x4DE63E: pop     ebp
0x4DE63F: pop     ebx
0x4DE640: pop     esi
0x4DE641: pop     ecx
0x4DE642: retn    8
0x4DE645: push    offset aClose; "Close"
0x4DE64A: call    sub_4D90D0
0x4DE64F: pop     ebp
0x4DE650: pop     ebx
0x4DE651: pop     esi
0x4DE652: pop     ecx
0x4DE653: retn    8
