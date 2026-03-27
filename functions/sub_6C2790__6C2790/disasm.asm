0x6C2790: push    0FFFFFFFFh
0x6C2792: push    offset SEH_6C2790
0x6C2797: mov     eax, large fs:0
0x6C279D: push    eax
0x6C279E: sub     esp, 14h
0x6C27A1: push    ebx
0x6C27A2: push    ebp
0x6C27A3: push    esi
0x6C27A4: push    edi
0x6C27A5: mov     eax, ds:0B30AACh
0x6C27AA: xor     eax, esp
0x6C27AC: push    eax
0x6C27AD: lea     eax, [esp+34h+var_C]
0x6C27B1: mov     large fs:0, eax
0x6C27B7: mov     ebp, [esp+34h+arg_8]
0x6C27BB: fld     [esp+34h+arg_0]
0x6C27BF: mov     eax, [esp+34h+arg_4]
0x6C27C3: mov     edx, [ebp+0]
0x6C27C6: mov     edi, [eax]
0x6C27C8: push    10h; char
0x6C27CA: lea     ecx, [esp+38h+var_20]
0x6C27CE: push    ecx; int
0x6C27CF: push    edx; int
0x6C27D0: push    edi; int
0x6C27D1: push    ecx
0x6C27D2: fstp    [esp+48h+var_48]; float
0x6C27D5: call    sub_6D31B0
0x6C27DA: add     esp, 14h
0x6C27DD: test    al, al
0x6C27DF: jz      loc_6C2904
0x6C27E5: mov     esi, [ebp+0]
0x6C27E8: add     esi, 1
0x6C27EB: xor     ecx, ecx
0x6C27ED: mov     eax, esi
0x6C27EF: mov     edx, 10h
0x6C27F4: mul     edx
0x6C27F6: seto    cl
0x6C27F9: neg     ecx
0x6C27FB: or      ecx, eax
0x6C27FD: xor     eax, eax
0x6C27FF: add     ecx, 4
0x6C2802: setb    al
0x6C2805: neg     eax
0x6C2807: or      eax, ecx
0x6C2809: push    eax; Size
0x6C280A: call    FormHeapAlloc
0x6C280F: add     esp, 4
0x6C2812: mov     [esp+34h+var_1C], eax
0x6C2816: test    eax, eax
0x6C2818: mov     [esp+34h+var_4], 0
0x6C2820: jz      short loc_6C283E
0x6C2822: push    offset ?ClearComponentReferences@TESTexture@@UAEXXZ?; a5
0x6C2827: push    offset sub_7616D0; a4
0x6C282C: push    esi; size
0x6C282D: lea     ebx, [eax+4]
0x6C2830: push    10h; a2
0x6C2832: push    ebx; a1
0x6C2833: mov     [eax], esi
0x6C2835: call    ArrayConstructor
0x6C283A: mov     esi, ebx
0x6C283C: jmp     short loc_6C2840
0x6C283E: xor     esi, esi
0x6C2840: mov     ecx, [esp+34h+var_20]
0x6C2844: shl     ecx, 4
0x6C2847: push    ecx; Size
0x6C2848: push    edi; Src
0x6C2849: push    esi; Dst
0x6C284A: mov     [esp+40h+var_4], 0FFFFFFFFh
0x6C2852: call    _memcpy
0x6C2857: mov     eax, [ebp+0]
0x6C285A: mov     edx, [esp+40h+var_20]
0x6C285E: add     esp, 0Ch
0x6C2861: cmp     eax, edx
0x6C2863: jbe     short loc_6C2881
0x6C2865: sub     eax, edx
0x6C2867: mov     ecx, edx
0x6C2869: shl     ecx, 4
0x6C286C: shl     eax, 4
0x6C286F: push    eax; Size
0x6C2870: lea     edx, [ecx+edi]
0x6C2873: push    edx; Src
0x6C2874: lea     eax, [ecx+esi+10h]
0x6C2878: push    eax; Dst
0x6C2879: call    _memcpy
0x6C287E: add     esp, 0Ch
0x6C2881: mov     ecx, [ebp+0]
0x6C2884: fld     [esp+34h+arg_0]
0x6C2888: push    10h; char
0x6C288A: push    ecx; int
0x6C288B: push    5; int
0x6C288D: push    edi; int
0x6C288E: push    ecx
0x6C288F: lea     edx, [esp+48h+var_18]
0x6C2893: fstp    [esp+48h+var_48]; float
0x6C2896: push    edx; int
0x6C2897: call    sub_6BBDC0
0x6C289C: fld     [esp+4Ch+arg_0]
0x6C28A0: mov     eax, [esp+4Ch+var_20]
0x6C28A4: shl     eax, 4
0x6C28A7: add     eax, esi
0x6C28A9: fstp    dword ptr [eax]
0x6C28AB: mov     ecx, [esp+4Ch+var_18]
0x6C28AF: mov     [eax+4], ecx
0x6C28B2: mov     edx, [esp+4Ch+var_14]
0x6C28B6: mov     [eax+8], edx
0x6C28B9: mov     ecx, [esp+4Ch+var_10]
0x6C28BD: mov     [eax+0Ch], ecx
0x6C28C0: add     dword ptr [ebp+0], 1
0x6C28C4: add     esp, 18h
0x6C28C7: test    edi, edi
0x6C28C9: jz      short loc_6C28E8
0x6C28CB: mov     edx, [edi-4]
0x6C28CE: push    offset ?ClearComponentReferences@TESTexture@@UAEXXZ?; void (__thiscall *)(void *)
0x6C28D3: lea     ebx, [edi-4]
0x6C28D6: push    edx; int
0x6C28D7: push    10h; unsigned int
0x6C28D9: push    edi; void *
0x6C28DA: call    $LN21
0x6C28DF: push    ebx
0x6C28E0: call    FormHeapFree
0x6C28E5: add     esp, 4
0x6C28E8: mov     eax, [esp+34h+arg_4]
0x6C28EC: mov     [eax], esi
0x6C28EE: mov     al, 1
0x6C28F0: mov     ecx, [esp+34h+var_C]
0x6C28F4: mov     large fs:0, ecx
0x6C28FB: pop     ecx
0x6C28FC: pop     edi
0x6C28FD: pop     esi
0x6C28FE: pop     ebp
0x6C28FF: pop     ebx
0x6C2900: add     esp, 20h
0x6C2903: retn
0x6C2904: xor     al, al
0x6C2906: mov     ecx, [esp+34h+var_C]
0x6C290A: mov     large fs:0, ecx
0x6C2911: pop     ecx
0x6C2912: pop     edi
0x6C2913: pop     esi
0x6C2914: pop     ebp
0x6C2915: pop     ebx
0x6C2916: add     esp, 20h
0x6C2919: retn
