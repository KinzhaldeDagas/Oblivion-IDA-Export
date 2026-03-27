0x7FA580: push    0FFFFFFFFh
0x7FA582: push    offset SEH_7FA580
0x7FA587: mov     eax, large fs:0
0x7FA58D: push    eax
0x7FA58E: sub     esp, 0Ch
0x7FA591: push    ebp
0x7FA592: push    esi
0x7FA593: push    edi
0x7FA594: mov     eax, ds:0B30AACh
0x7FA599: xor     eax, esp
0x7FA59B: push    eax
0x7FA59C: lea     eax, [esp+28h+var_C]
0x7FA5A0: mov     large fs:0, eax
0x7FA5A6: mov     esi, ecx
0x7FA5A8: call    sub_8025F0
0x7FA5AD: push    0C0h ; 'À'; Size
0x7FA5B2: mov     [esp+2Ch+var_15], al
0x7FA5B6: call    FormHeapAlloc
0x7FA5BB: mov     edi, eax
0x7FA5BD: add     esp, 4
0x7FA5C0: mov     [esp+28h+var_14], edi
0x7FA5C4: test    edi, edi
0x7FA5C6: mov     [esp+28h+var_4], 0
0x7FA5CE: jz      short loc_7FA623
0x7FA5D0: push    70h ; 'p'; Size
0x7FA5D2: call    FormHeapAlloc
0x7FA5D7: add     esp, 4
0x7FA5DA: mov     [esp+28h+var_10], eax
0x7FA5DE: test    eax, eax
0x7FA5E0: mov     byte ptr [esp+28h+var_4], 1
0x7FA5E5: jz      short loc_7FA611
0x7FA5E7: push    1; a10
0x7FA5E9: push    2; a9
0x7FA5EB: push    1; a8
0x7FA5ED: push    4; a7
0x7FA5EF: push    1; a6
0x7FA5F1: push    1; a5
0x7FA5F3: push    1; a4
0x7FA5F5: push    0; a3
0x7FA5F7: push    0; a2
0x7FA5F9: mov     ecx, eax; this
0x7FA5FB: call    NiScreenElementsData__Construct
0x7FA600: push    eax; a2
0x7FA601: mov     ecx, edi; this
0x7FA603: mov     byte ptr [esp+2Ch+var_4], 0
0x7FA608: call    NiScreenElements__NiScreenElements
0x7FA60D: mov     ebp, eax
0x7FA60F: jmp     short loc_7FA625
0x7FA611: xor     eax, eax
0x7FA613: push    eax; a2
0x7FA614: mov     ecx, edi; this
0x7FA616: mov     byte ptr [esp+2Ch+var_4], al
0x7FA61A: call    NiScreenElements__NiScreenElements
0x7FA61F: mov     ebp, eax
0x7FA621: jmp     short loc_7FA625
0x7FA623: xor     ebp, ebp
0x7FA625: mov     edi, [esi+0BCh]
0x7FA62B: cmp     edi, ebp
0x7FA62D: mov     [esp+28h+var_4], 0FFFFFFFFh
0x7FA635: jz      short loc_7FA66B
0x7FA637: test    edi, edi
0x7FA639: jz      short loc_7FA657
0x7FA63B: lea     eax, [edi+4]
0x7FA63E: push    eax; lpAddend
0x7FA63F: call    dword ptr ds:0A2807Ch
0x7FA645: test    eax, eax
0x7FA647: jnz     short loc_7FA657
0x7FA649: test    edi, edi
0x7FA64B: jz      short loc_7FA657
0x7FA64D: mov     edx, [edi]
0x7FA64F: mov     eax, [edx]
0x7FA651: push    1
0x7FA653: mov     ecx, edi
0x7FA655: call    eax
0x7FA657: test    ebp, ebp
0x7FA659: mov     [esi+0BCh], ebp
0x7FA65F: jz      short loc_7FA66B
0x7FA661: add     ebp, 4
0x7FA664: push    ebp; lpAddend
0x7FA665: call    dword ptr ds:0A28078h
0x7FA66B: mov     ecx, [esi+0BCh]
0x7FA671: mov     ecx, [ecx+0B4h]; this
0x7FA677: push    0; Src
0x7FA679: push    0; a3
0x7FA67B: push    4; a2
0x7FA67D: call    sub_702970
0x7FA682: fld     dword ptr ds:0A53954h
0x7FA688: mov     edx, [esi+0BCh]
0x7FA68E: mov     ecx, [edx+0B4h]; this
0x7FA694: sub     esp, 10h
0x7FA697: fstp    [esp+38h+a6]; a6
0x7FA69B: fld     dword ptr ds:0A379B4h
0x7FA6A1: fstp    [esp+38h+a5]; a5
0x7FA6A5: fld1
0x7FA6A7: fstp    [esp+38h+a4]; a4
0x7FA6AB: fld     dword ptr ds:0A30634h
0x7FA6B1: fstp    [esp+38h+a3]; a3
0x7FA6B4: push    0; a2
0x7FA6B6: call    sub_702EC0
0x7FA6BB: mov     eax, [esi+0BCh]
0x7FA6C1: mov     ecx, [eax+0B4h]; this
0x7FA6C7: call    sub_703050
0x7FA6CC: fld1
0x7FA6CE: mov     ecx, [esi+0BCh]
0x7FA6D4: mov     ecx, [ecx+0B4h]; this
0x7FA6DA: sub     esp, 10h
0x7FA6DD: fst     [esp+38h+a6]; a7
0x7FA6E1: fstp    [esp+38h+a5]; a6
0x7FA6E5: fldz
0x7FA6E7: fst     [esp+38h+a4]; a5
0x7FA6EB: fstp    [esp+38h+a3]; a4
0x7FA6EE: push    0; a3
0x7FA6F0: push    0; a2
0x7FA6F2: call    sub_702FC0
0x7FA6F7: mov     ecx, [esi+0BCh]; this
0x7FA6FD: call    NiAVObject_InitializePropertyState
0x7FA702: fldz
0x7FA704: push    1; a3
0x7FA706: push    ecx
0x7FA707: mov     ecx, [esi+0BCh]; this
0x7FA70D: fstp    [esp+30h+a5]; a2
0x7FA710: call    NiAVObject_UpdateNiAVObject
0x7FA715: mov     al, [esp+28h+var_15]
0x7FA719: mov     ecx, dword ptr [esp+28h+var_C]
0x7FA71D: mov     large fs:0, ecx
0x7FA724: pop     ecx
0x7FA725: pop     edi
0x7FA726: pop     esi
0x7FA727: pop     ebp
0x7FA728: add     esp, 18h
0x7FA72B: retn
