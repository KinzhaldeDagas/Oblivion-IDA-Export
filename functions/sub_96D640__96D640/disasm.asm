0x96D640: sub     esp, 30h
0x96D643: push    esi
0x96D644: mov     esi, [esp+34h+arg_0]
0x96D648: push    esi
0x96D649: lea     ecx, [esp+38h+var_24]
0x96D64D: call    sub_709430
0x96D652: push    esi
0x96D653: lea     ecx, [esp+38h+var_18]
0x96D657: call    sub_709430
0x96D65C: push    esi
0x96D65D: lea     ecx, [esp+38h+var_C]
0x96D661: call    sub_709430
0x96D666: lea     eax, [esp+34h+var_2C]
0x96D66A: push    eax
0x96D66B: push    esi
0x96D66C: call    sub_6BE9D0
0x96D671: lea     ecx, [esp+3Ch+var_28]
0x96D675: push    ecx
0x96D676: push    esi
0x96D677: call    sub_6BE9D0
0x96D67C: lea     edx, [esp+44h+var_30]
0x96D680: push    edx
0x96D681: push    esi
0x96D682: call    sub_6BE9D0
0x96D687: push    14h; Size
0x96D689: call    FormHeapAlloc
0x96D68E: add     esp, 1Ch
0x96D691: test    eax, eax
0x96D693: pop     esi
0x96D694: jz      short loc_96D6AD
0x96D696: fld     [esp+30h+var_30]
0x96D699: lea     ecx, [esp+30h+var_24]
0x96D69D: push    ecx; int
0x96D69E: push    ecx
0x96D69F: mov     ecx, eax
0x96D6A1: fstp    [esp+38h+var_38]; float
0x96D6A4: call    sub_96C420
0x96D6A9: add     esp, 30h
0x96D6AC: retn
0x96D6AD: xor     eax, eax
0x96D6AF: add     esp, 30h
0x96D6B2: retn
