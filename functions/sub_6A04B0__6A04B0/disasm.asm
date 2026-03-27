0x6A04B0: mov     eax, [esp+Dst]
0x6A04B4: push    esi
0x6A04B5: mov     esi, ecx
0x6A04B7: mov     ecx, [esp+4+arg_0]
0x6A04BB: push    eax
0x6A04BC: push    ecx
0x6A04BD: mov     ecx, esi
0x6A04BF: call    sub_69DBF0
0x6A04C4: mov     ecx, ds:0B33B00h
0x6A04CA: push    4; Size
0x6A04CC: lea     edx, [esi+38h]
0x6A04CF: push    edx; Dst
0x6A04D0: call    SaveLoad_LoadData
0x6A04D5: mov     ecx, ds:0B33B00h
0x6A04DB: cmp     byte ptr [ecx+7Ch], 37h ; '7'
0x6A04DF: jb      short loc_6A053A
0x6A04E1: push    1; Size
0x6A04E3: lea     eax, [esi+28h]
0x6A04E6: push    eax; Dst
0x6A04E7: call    SaveLoad_LoadData
0x6A04EC: push    4; Size
0x6A04EE: lea     ecx, [esi+2Ch]
0x6A04F1: push    ecx; Dst
0x6A04F2: mov     ecx, ds:0B33B00h
0x6A04F8: call    SaveLoad_LoadData
0x6A04FD: mov     ecx, ds:0B33B00h
0x6A0503: push    4; Size
0x6A0505: lea     edx, [esp+8+Dst]
0x6A0509: push    edx; Dst
0x6A050A: call    SaveLoad_LoadFormID
0x6A050F: mov     eax, [esp+0Ch]
0x6A0513: test    eax, eax
0x6A0515: jz      short loc_6A053A
0x6A0517: push    0; int
0x6A0519: push    offset ??_R0?AVTESBoundObject@@@8; struct TypeDescriptor *
0x6A051E: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x6A0523: push    0; int
0x6A0525: push    eax; a1
0x6A0526: call    TESForm_LookupByFormID
0x6A052B: add     esp, 4
0x6A052E: push    eax; void *
0x6A052F: call    OblivionDynamicCast
0x6A0534: add     esp, 14h
0x6A0537: mov     [esi+30h], eax
0x6A053A: pop     esi
0x6A053B: retn    8
