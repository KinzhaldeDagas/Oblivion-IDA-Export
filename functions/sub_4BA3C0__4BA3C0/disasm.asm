0x4BA3C0: push    0FFFFFFFFh
0x4BA3C2: push    offset SEH_4BA3C0
0x4BA3C7: mov     eax, large fs:0
0x4BA3CD: push    eax
0x4BA3CE: sub     esp, 14h
0x4BA3D1: push    ebx
0x4BA3D2: push    ebp
0x4BA3D3: push    esi
0x4BA3D4: push    edi
0x4BA3D5: mov     eax, ds:0B30AACh
0x4BA3DA: xor     eax, esp
0x4BA3DC: push    eax
0x4BA3DD: lea     eax, [esp+34h+var_C]
0x4BA3E1: mov     large fs:0, eax
0x4BA3E7: mov     esi, ecx
0x4BA3E9: xor     ebx, ebx
0x4BA3EB: push    30h ; '0'; Size
0x4BA3ED: mov     [esp+38h+var_10], ebx
0x4BA3F1: call    FormHeapAlloc
0x4BA3F6: fldz
0x4BA3F8: mov     edx, [esi+7Ch]
0x4BA3FB: mov     [esp+38h+var_1C], edx
0x4BA3FF: fld     [esp+38h+var_1C]
0x4BA403: mov     ecx, eax
0x4BA405: fcom    st(1)
0x4BA407: mov     eax, [esi+78h]
0x4BA40A: mov     [esp+38h+var_20], eax
0x4BA40E: add     esp, 4
0x4BA411: fnstsw  ax
0x4BA413: mov     [esp+34h+var_10], ecx
0x4BA417: test    ah, 41h
0x4BA41A: jp      short loc_4BA42C
0x4BA41C: fstp    st
0x4BA41E: fld     dword ptr ds:0A451D0h
0x4BA424: fstp    [esp+34h+var_1C]
0x4BA428: fld     [esp+34h+var_1C]
0x4BA42C: cmp     byte ptr [esp+34h+arg_4], bl
0x4BA430: fld     qword ptr ds:0A2FAA0h
0x4BA436: fmul    st, st(1)
0x4BA438: fstp    [esp+34h+var_20]
0x4BA43C: fld     [esp+34h+var_20]
0x4BA440: fld     st
0x4BA442: fchs
0x4BA444: fstp    [esp+34h+var_20]
0x4BA448: fld     [esp+34h+var_20]
0x4BA44C: fst     [esp+34h+var_20]
0x4BA450: mov     eax, [esp+34h+var_20]
0x4BA454: fxch    st(3)
0x4BA456: mov     [ecx], eax
0x4BA458: fst     [esp+34h+var_1C]
0x4BA45C: mov     edx, [esp+34h+var_1C]
0x4BA460: fst     [esp+34h+var_18]
0x4BA464: mov     eax, [esp+34h+var_18]
0x4BA468: fxch    st(1)
0x4BA46A: mov     [ecx+4], edx
0x4BA46D: fst     [esp+34h+var_20]
0x4BA471: mov     edx, [esp+34h+var_20]
0x4BA475: fxch    st(1)
0x4BA477: mov     [ecx+8], eax
0x4BA47A: fst     [esp+34h+var_1C]
0x4BA47E: mov     eax, [esp+34h+var_1C]
0x4BA482: fst     [esp+34h+var_18]
0x4BA486: mov     [ecx+24h], edx
0x4BA489: mov     edx, [esp+34h+var_18]
0x4BA48D: fxch    st(3)
0x4BA48F: mov     [ecx+28h], eax
0x4BA492: fstp    [esp+34h+var_20]
0x4BA496: mov     eax, [esp+34h+var_20]
0x4BA49A: mov     [ecx+2Ch], edx
0x4BA49D: mov     [ecx+0Ch], eax
0x4BA4A0: jz      short loc_4BA4B6
0x4BA4A2: fxch    st(2)
0x4BA4A4: fst     [esp+34h+var_1C]
0x4BA4A8: fxch    st(1)
0x4BA4AA: fst     [esp+34h+var_18]
0x4BA4AE: fxch    st(2)
0x4BA4B0: fstp    [esp+34h+var_20]
0x4BA4B4: jmp     short loc_4BA4CA
0x4BA4B6: fxch    st(1)
0x4BA4B8: fst     [esp+34h+var_1C]
0x4BA4BC: fxch    st(2)
0x4BA4BE: fst     [esp+34h+var_18]
0x4BA4C2: fxch    st(1)
0x4BA4C4: fstp    [esp+34h+var_20]
0x4BA4C8: fxch    st(1)
0x4BA4CA: mov     edx, [esp+34h+var_1C]
0x4BA4CE: fstp    [esp+34h+var_1C]
0x4BA4D2: mov     eax, [esp+34h+var_18]
0x4BA4D6: mov     [ecx+10h], edx
0x4BA4D9: fstp    [esp+34h+var_18]
0x4BA4DD: mov     edx, [esp+34h+var_20]
0x4BA4E1: mov     [ecx+18h], edx
0x4BA4E4: mov     edx, [esp+34h+var_18]
0x4BA4E8: mov     [ecx+14h], eax
0x4BA4EB: mov     eax, [esp+34h+var_1C]
0x4BA4EF: mov     [ecx+1Ch], eax
0x4BA4F2: push    30h ; '0'; Size
0x4BA4F4: mov     [ecx+20h], edx
0x4BA4F7: call    FormHeapAlloc
0x4BA4FC: fldz
0x4BA4FE: mov     edi, eax
0x4BA500: fst     [esp+38h+var_20]
0x4BA504: fld1
0x4BA506: mov     eax, [esp+38h+var_20]
0x4BA50A: fst     [esp+38h+var_1C]
0x4BA50E: mov     [edi], eax
0x4BA510: fxch    st(1)
0x4BA512: push    20h ; ' '; Size
0x4BA514: mov     ecx, [esp+3Ch+var_1C]
0x4BA518: fst     [esp+3Ch+var_18]
0x4BA51C: fst     [esp+3Ch+var_20]
0x4BA520: mov     [edi+4], ecx
0x4BA523: mov     edx, [esp+3Ch+var_18]
0x4BA527: fst     [esp+3Ch+var_18]
0x4BA52B: mov     eax, [esp+3Ch+var_20]
0x4BA52F: fxch    st(1)
0x4BA531: fst     [esp+3Ch+var_1C]
0x4BA535: mov     [edi+8], edx
0x4BA538: mov     edx, [esp+3Ch+var_18]
0x4BA53C: fxch    st(1)
0x4BA53E: mov     ecx, [esp+3Ch+var_1C]
0x4BA542: fst     [esp+3Ch+var_20]
0x4BA546: fst     [esp+3Ch+var_18]
0x4BA54A: mov     [edi+0Ch], eax
0x4BA54D: mov     eax, [esp+3Ch+var_20]
0x4BA551: fxch    st(1)
0x4BA553: fst     [esp+3Ch+var_1C]
0x4BA557: mov     [edi+10h], ecx
0x4BA55A: mov     [edi+14h], edx
0x4BA55D: fxch    st(1)
0x4BA55F: mov     edx, [esp+3Ch+var_18]
0x4BA563: fst     [esp+3Ch+var_20]
0x4BA567: mov     ecx, [esp+3Ch+var_1C]
0x4BA56B: fstp    [esp+3Ch+var_18]
0x4BA56F: mov     [edi+18h], eax
0x4BA572: mov     eax, [esp+3Ch+var_20]
0x4BA576: mov     [edi+1Ch], ecx
0x4BA579: fstp    [esp+3Ch+var_1C]
0x4BA57D: mov     ecx, [esp+3Ch+var_1C]
0x4BA581: mov     [edi+20h], edx
0x4BA584: mov     edx, [esp+3Ch+var_18]
0x4BA588: mov     [edi+24h], eax
0x4BA58B: mov     [edi+28h], ecx
0x4BA58E: mov     [edi+2Ch], edx
0x4BA591: call    FormHeapAlloc
0x4BA596: fld1
0x4BA598: mov     ebp, eax
0x4BA59A: fst     [esp+3Ch+var_20]
0x4BA59E: mov     eax, [esp+3Ch+var_20]
0x4BA5A2: fst     [esp+3Ch+var_1C]
0x4BA5A6: mov     ecx, [esp+3Ch+var_1C]
0x4BA5AA: fst     [esp+3Ch+var_20]
0x4BA5AE: fldz
0x4BA5B0: mov     edx, [esp+3Ch+var_20]
0x4BA5B4: fst     [esp+3Ch+var_1C]
0x4BA5B8: mov     [ebp+0], eax
0x4BA5BB: fst     [esp+3Ch+var_20]
0x4BA5BF: mov     [ebp+4], ecx
0x4BA5C2: mov     eax, [esp+3Ch+var_1C]
0x4BA5C6: fst     [esp+3Ch+var_1C]
0x4BA5CA: mov     ecx, [esp+3Ch+var_20]
0x4BA5CE: mov     [ebp+8], edx
0x4BA5D1: mov     edx, [esp+3Ch+var_1C]
0x4BA5D5: mov     [ebp+0Ch], eax
0x4BA5D8: mov     [ebp+10h], ecx
0x4BA5DB: mov     [ebp+14h], edx
0x4BA5DE: fstp    [esp+3Ch+var_20]
0x4BA5E2: mov     eax, [esp+3Ch+var_20]
0x4BA5E6: push    40h ; '@'; Size
0x4BA5E8: fstp    [esp+40h+var_1C]
0x4BA5EC: mov     ecx, [esp+40h+var_1C]
0x4BA5F0: mov     [ebp+18h], eax
0x4BA5F3: mov     [ebp+1Ch], ecx
0x4BA5F6: call    FormHeapAlloc
0x4BA5FB: mov     esi, eax
0x4BA5FD: add     esp, 0Ch
0x4BA600: mov     [esp+34h+arg_4], esi
0x4BA604: cmp     esi, ebx
0x4BA606: mov     [esp+34h+var_4], ebx
0x4BA60A: jz      short loc_4BA61D
0x4BA60C: push    offset sub_47EA50
0x4BA611: push    4
0x4BA613: push    10h
0x4BA615: push    esi
0x4BA616: call    sub_401080
0x4BA61B: jmp     short loc_4BA61F
0x4BA61D: xor     esi, esi
0x4BA61F: fld1
0x4BA621: push    0Ch; Size
0x4BA623: fst     [esp+38h+var_20]
0x4BA627: mov     [esp+38h+var_4], 0FFFFFFFFh
0x4BA62F: mov     edx, [esp+38h+var_20]
0x4BA633: fst     [esp+38h+var_1C]
0x4BA637: mov     eax, [esp+38h+var_1C]
0x4BA63B: fst     [esp+38h+var_18]
0x4BA63F: fldz
0x4BA641: mov     ecx, [esp+38h+var_18]
0x4BA645: fst     [esp+38h+var_14]
0x4BA649: mov     [esi], edx
0x4BA64B: fxch    st(1)
0x4BA64D: mov     [esi+4], eax
0x4BA650: mov     edx, [esp+38h+var_14]
0x4BA654: fst     [esp+38h+var_20]
0x4BA658: fst     [esp+38h+var_1C]
0x4BA65C: mov     [esi+8], ecx
0x4BA65F: mov     eax, [esp+38h+var_20]
0x4BA663: fst     [esp+38h+var_18]
0x4BA667: mov     ecx, [esp+38h+var_1C]
0x4BA66B: fxch    st(1)
0x4BA66D: fst     [esp+38h+var_14]
0x4BA671: mov     [esi+0Ch], edx
0x4BA674: mov     edx, [esp+38h+var_18]
0x4BA678: fxch    st(1)
0x4BA67A: fst     [esp+38h+var_20]
0x4BA67E: mov     [esi+10h], eax
0x4BA681: mov     eax, [esp+38h+var_14]
0x4BA685: fst     [esp+38h+var_1C]
0x4BA689: fst     [esp+38h+var_18]
0x4BA68D: mov     [esi+14h], ecx
0x4BA690: mov     ecx, [esp+38h+var_20]
0x4BA694: fxch    st(1)
0x4BA696: fst     [esp+38h+var_14]
0x4BA69A: mov     [esi+18h], edx
0x4BA69D: mov     edx, [esp+38h+var_1C]
0x4BA6A1: fxch    st(1)
0x4BA6A3: mov     [esi+20h], ecx
0x4BA6A6: fst     [esp+38h+var_20]
0x4BA6AA: mov     ecx, [esp+38h+var_14]
0x4BA6AE: fst     [esp+38h+var_1C]
0x4BA6B2: mov     [esi+1Ch], eax
0x4BA6B5: mov     eax, [esp+38h+var_18]
0x4BA6B9: fstp    [esp+38h+var_18]
0x4BA6BD: mov     [esi+24h], edx
0x4BA6C0: mov     edx, [esp+38h+var_20]
0x4BA6C4: mov     [esi+28h], eax
0x4BA6C7: fstp    [esp+38h+var_14]
0x4BA6CB: mov     eax, [esp+38h+var_1C]
0x4BA6CF: mov     [esi+30h], edx
0x4BA6D2: mov     edx, [esp+38h+var_14]
0x4BA6D6: mov     [esi+2Ch], ecx
0x4BA6D9: mov     ecx, [esp+38h+var_18]
0x4BA6DD: mov     [esi+34h], eax
0x4BA6E0: mov     [esi+38h], ecx
0x4BA6E3: mov     [esi+3Ch], edx
0x4BA6E6: call    FormHeapAlloc
0x4BA6EB: mov     ebx, eax
0x4BA6ED: mov     eax, 2
0x4BA6F2: push    58h ; 'X'; Size
0x4BA6F4: mov     word ptr [ebx], 0
0x4BA6F9: mov     [ebx+2], ax
0x4BA6FD: mov     word ptr [ebx+4], 1
0x4BA703: mov     word ptr [ebx+6], 0
0x4BA709: mov     word ptr [ebx+8], 3
0x4BA70F: mov     [ebx+0Ah], ax
0x4BA713: call    FormHeapAlloc
0x4BA718: add     esp, 8
0x4BA71B: mov     [esp+34h+arg_4], eax
0x4BA71F: test    eax, eax
0x4BA721: mov     [esp+34h+var_4], 1
0x4BA729: jz      short loc_4BA745
0x4BA72B: mov     ecx, [esp+34h+var_10]
0x4BA72F: push    ebx
0x4BA730: push    2
0x4BA732: push    0
0x4BA734: push    1
0x4BA736: push    ebp
0x4BA737: push    esi
0x4BA738: push    edi
0x4BA739: push    ecx
0x4BA73A: push    4
0x4BA73C: mov     ecx, eax
0x4BA73E: call    sub_71FB40
0x4BA743: jmp     short loc_4BA747
0x4BA745: xor     eax, eax
0x4BA747: test    eax, eax
0x4BA749: mov     esi, [esp+34h+arg_0]
0x4BA74D: mov     [esi], eax
0x4BA74F: jz      short loc_4BA75B
0x4BA751: add     eax, 4
0x4BA754: push    eax; lpAddend
0x4BA755: call    dword ptr ds:0A28078h
0x4BA75B: mov     eax, esi
0x4BA75D: mov     ecx, [esp+34h+var_C]
0x4BA761: mov     large fs:0, ecx
0x4BA768: pop     ecx
0x4BA769: pop     edi
0x4BA76A: pop     esi
0x4BA76B: pop     ebp
0x4BA76C: pop     ebx
0x4BA76D: add     esp, 20h
0x4BA770: retn    8
