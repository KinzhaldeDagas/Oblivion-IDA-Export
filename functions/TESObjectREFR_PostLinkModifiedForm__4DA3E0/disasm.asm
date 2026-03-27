0x4DA3E0: sub     esp, 24h
0x4DA3E3: push    ebx
0x4DA3E4: push    esi
0x4DA3E5: mov     esi, [esp+2Ch+arg_0]
0x4DA3E9: test    esi, 8000000h
0x4DA3EF: mov     ebx, ecx
0x4DA3F1: jz      short loc_4DA40D
0x4DA3F3: call    TESObjectREFR_GetContainer
0x4DA3F8: test    eax, eax
0x4DA3FA: jz      short loc_4DA40D
0x4DA3FC: push    eax
0x4DA3FD: push    ebx; a1
0x4DA3FE: call    ContainerExtraData_GetContainerExtraDataForRef
0x4DA403: add     esp, 8
0x4DA406: mov     ecx, eax
0x4DA408: call    ExtraContainerChanges_RunScripts
0x4DA40D: push    ebp
0x4DA40E: mov     ebp, [ebx+3Ch]
0x4DA411: test    ebp, ebp
0x4DA413: jz      short loc_4DA46C
0x4DA415: mov     eax, [ebx]
0x4DA417: mov     edx, [eax+174h]
0x4DA41D: push    edi
0x4DA41E: mov     ecx, ebx
0x4DA420: call    edx
0x4DA422: mov     ecx, [eax]
0x4DA424: mov     [ebp+54h], ecx
0x4DA427: mov     edx, [eax+4]
0x4DA42A: mov     [ebp+58h], edx
0x4DA42D: mov     eax, [eax+8]
0x4DA430: lea     ecx, [esp+34h+var_24]
0x4DA434: push    ecx
0x4DA435: mov     ecx, ebx
0x4DA437: mov     [ebp+5Ch], eax
0x4DA43A: call    sub_4D7AF0
0x4DA43F: push    0
0x4DA441: mov     esi, eax
0x4DA443: push    1
0x4DA445: lea     edi, [ebp+30h]
0x4DA448: mov     ecx, 9
0x4DA44D: push    ebp
0x4DA44E: rep movsd
0x4DA450: call    sub_88CDC0
0x4DA455: add     esp, 0Ch
0x4DA458: fldz
0x4DA45A: push    0; a3
0x4DA45C: push    ecx
0x4DA45D: mov     ecx, ebp; this
0x4DA45F: fstp    [esp+3Ch+a2]; a2
0x4DA462: call    NiAVObject_UpdateNiAVObject
0x4DA467: mov     esi, [esp+34h+arg_0]
0x4DA46B: pop     edi
0x4DA46C: test    esi, 80000h
0x4DA472: pop     ebp
0x4DA473: jz      short loc_4DA4B9
0x4DA475: test    esi, esi
0x4DA477: mov     eax, esi
0x4DA479: jnz     short loc_4DA488
0x4DA47B: mov     ecx, ds:0B33B00h
0x4DA481: push    esi
0x4DA482: push    ebx
0x4DA483: call    sub_4533F0
0x4DA488: test    eax, 40000h
0x4DA48D: push    8
0x4DA48F: lea     ecx, [ebx+44h]
0x4DA492: jz      short loc_4DA4A0
0x4DA494: call    sub_41F830
0x4DA499: test    al, al
0x4DA49B: setz    al
0x4DA49E: jmp     short loc_4DA4A5
0x4DA4A0: call    sub_41F830
0x4DA4A5: test    al, al
0x4DA4A7: push    4
0x4DA4A9: mov     ecx, ebx
0x4DA4AB: jz      short loc_4DA4B4
0x4DA4AD: call    sub_4D82E0
0x4DA4B2: jmp     short loc_4DA4B9
0x4DA4B4: call    sub_4D8270
0x4DA4B9: test    esi, 177577E0h
0x4DA4BF: jnz     short loc_4DA4D1
0x4DA4C1: mov     edx, [ebx]
0x4DA4C3: mov     eax, [edx+190h]
0x4DA4C9: mov     ecx, ebx
0x4DA4CB: call    eax
0x4DA4CD: test    al, al
0x4DA4CF: jz      short loc_4DA4E0
0x4DA4D1: mov     ecx, [esp+2Ch+arg_4]
0x4DA4D5: push    ebx
0x4DA4D6: push    ecx
0x4DA4D7: push    esi
0x4DA4D8: lea     ecx, [ebx+44h]
0x4DA4DB: call    TESObjectREFR_PostLinkModifiedExtraList
0x4DA4E0: and     dword ptr [ebx+8], 0FFDFFFFFh
0x4DA4E7: pop     esi
0x4DA4E8: pop     ebx
0x4DA4E9: add     esp, 24h
0x4DA4EC: retn    8
