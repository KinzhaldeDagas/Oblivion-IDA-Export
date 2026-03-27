0x8D2770: push    0FFFFFFFFh
0x8D2772: push    offset SEH_8D2770
0x8D2777: mov     eax, large fs:0
0x8D277D: push    eax
0x8D277E: sub     esp, 20h
0x8D2781: push    esi
0x8D2782: mov     eax, ds:0B30AACh
0x8D2787: xor     eax, esp
0x8D2789: push    eax
0x8D278A: lea     eax, [esp+34h+var_C]
0x8D278E: mov     large fs:0, eax
0x8D2794: xor     esi, esi
0x8D2796: mov     eax, 80000000h
0x8D279B: mov     [esp+34h+var_2C], esi
0x8D279F: mov     [esp+34h+var_24], esi
0x8D27A3: mov     [esp+34h+var_20], esi
0x8D27A7: mov     [esp+34h+var_1C], eax
0x8D27AB: mov     [esp+34h+var_18], esi
0x8D27AF: mov     [esp+34h+var_14], esi
0x8D27B3: mov     [esp+34h+var_10], eax
0x8D27B7: fld     dword ptr ds:0B2EFC4h
0x8D27BD: mov     eax, [esp+34h+arg_0]
0x8D27C1: fstp    [esp+34h+var_28]
0x8D27C5: cmp     [eax+4], esi
0x8D27C8: mov     [esp+34h+var_4], esi
0x8D27CC: jz      short loc_8D2803
0x8D27CE: lea     ecx, [esp+34h+var_24]
0x8D27D2: push    ecx
0x8D27D3: lea     edx, [esp+38h+var_18]
0x8D27D7: push    edx
0x8D27D8: push    eax
0x8D27D9: call    sub_917820
0x8D27DE: push    14h; Size
0x8D27E0: call    FormHeapAlloc
0x8D27E5: add     esp, 10h
0x8D27E8: mov     [esp+34h+arg_0], eax
0x8D27EC: cmp     eax, esi
0x8D27EE: mov     byte ptr [esp+34h+var_4], 1
0x8D27F3: jz      short loc_8D2803
0x8D27F5: lea     ecx, [esp+34h+var_2C]
0x8D27F9: push    ecx
0x8D27FA: mov     ecx, eax
0x8D27FC: call    sub_8D26C0
0x8D2801: mov     esi, eax
0x8D2803: lea     ecx, [esp+34h+var_2C]
0x8D2807: mov     [esp+34h+var_4], 0FFFFFFFFh
0x8D280F: call    sub_8C8DB0
0x8D2814: mov     eax, esi
0x8D2816: mov     ecx, [esp+34h+var_C]
0x8D281A: mov     large fs:0, ecx
0x8D2821: pop     ecx
0x8D2822: pop     esi
0x8D2823: add     esp, 2Ch
0x8D2826: retn
