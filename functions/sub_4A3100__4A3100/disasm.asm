0x4A3100: mov     ecx, ds:0B33B00h
0x4A3106: sub     esp, 0Ch
0x4A3109: push    esi
0x4A310A: push    2; Size
0x4A310C: lea     eax, [esp+14h+Dst]
0x4A3110: push    eax; Dst
0x4A3111: call    SaveLoad_LoadData
0x4A3116: xor     esi, esi
0x4A3118: cmp     word ptr [esp+10h+Dst], si
0x4A311D: jbe     short loc_4A318D
0x4A311F: nop
0x4A3120: fldz
0x4A3122: push    4; Size
0x4A3124: lea     ecx, [esp+14h+var_8]
0x4A3128: fstp    [esp+14h+var_4]
0x4A312C: push    ecx; Dst
0x4A312D: mov     ecx, ds:0B33B00h
0x4A3133: mov     [esp+18h+var_8], 0
0x4A313B: call    SaveLoad_LoadFormID
0x4A3140: mov     ecx, ds:0B33B00h
0x4A3146: push    4; Size
0x4A3148: lea     edx, [esp+1Ch+Dst]
0x4A314C: push    edx; Dst
0x4A314D: call    SaveLoad_LoadData
0x4A3152: mov     eax, [esp+18h+a1]
0x4A3156: push    0; int
0x4A3158: push    offset ??_R0?AVTESRegion@@@8; struct TypeDescriptor *
0x4A315D: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4A3162: push    0; int
0x4A3164: push    eax; a1
0x4A3165: call    TESForm_LookupByFormID
0x4A316A: add     esp, 4
0x4A316D: push    eax; void *
0x4A316E: call    OblivionDynamicCast
0x4A3173: add     esp, 14h
0x4A3176: test    eax, eax
0x4A3178: jz      short loc_4A3181
0x4A317A: fld     [esp+18h+Dst]
0x4A317E: fstp    dword ptr [eax+28h]
0x4A3181: movzx   ecx, [esp+18h+var_14]
0x4A3186: add     esi, 1
0x4A3189: cmp     esi, ecx
0x4A318B: jb      short loc_4A3120
0x4A318D: pop     esi
0x4A318E: add     esp, 0Ch
0x4A3191: retn
