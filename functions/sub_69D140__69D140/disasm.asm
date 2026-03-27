0x69D140: push    ebp
0x69D141: mov     ebp, esp
0x69D143: and     esp, 0FFFFFFF0h
0x69D146: push    0FFFFFFFFh
0x69D148: push    offset SEH_698410
0x69D14D: mov     eax, large fs:0
0x69D153: push    eax
0x69D154: sub     esp, 0E8h
0x69D15A: mov     eax, ds:0B30AACh
0x69D15F: xor     eax, esp
0x69D161: mov     [esp+0F4h+var_14], eax
0x69D168: push    ebx
0x69D169: push    esi
0x69D16A: push    edi
0x69D16B: mov     eax, ds:0B30AACh
0x69D170: xor     eax, esp
0x69D172: push    eax
0x69D173: lea     eax, [esp+104h+var_C]
0x69D17A: mov     large fs:0, eax
0x69D180: mov     esi, ecx
0x69D182: cmp     dword ptr [esi+58h], 0
0x69D186: jz      loc_69D5BA
0x69D18C: mov     ecx, [esi+58h]
0x69D18F: mov     eax, [ecx]
0x69D191: mov     edx, [eax+8]
0x69D194: call    edx
0x69D196: test    eax, eax
0x69D198: jnz     loc_69D5BA
0x69D19E: mov     ecx, esi; this
0x69D1A0: call    MobileObject_GetCharProxy
0x69D1A5: mov     ecx, esi; this
0x69D1A7: mov     edi, eax
0x69D1A9: call    TESObjectREFR_GetParentCell
0x69D1AE: mov     ebx, eax
0x69D1B0: test    ebx, ebx
0x69D1B2: mov     [esp+104h+var_E4], ebx
0x69D1B6: jz      short loc_69D1DC
0x69D1B8: mov     ecx, ebx; this
0x69D1BA: call    TESObjectCELL_IsInterior
0x69D1BF: test    al, al
0x69D1C1: jz      short loc_69D1D1
0x69D1C3: lea     ecx, [ebx+28h]
0x69D1C6: call    sub_424180
0x69D1CB: mov     [esp+104h+var_E8], eax
0x69D1CF: jmp     short loc_69D1E4
0x69D1D1: mov     eax, ds:0B35C24h
0x69D1D6: mov     [esp+104h+var_E8], eax
0x69D1DA: jmp     short loc_69D1E4
0x69D1DC: mov     [esp+104h+var_E8], 0
0x69D1E4: test    edi, edi
0x69D1E6: jnz     loc_69D465
0x69D1EC: push    1
0x69D1EE: lea     ecx, [esp+108h+var_D0]
0x69D1F2: call    sub_890C00
0x69D1F7: mov     edx, [esi]
0x69D1F9: mov     eax, [edx+1F4h]
0x69D1FF: mov     ecx, esi
0x69D201: mov     [esp+104h+var_4], edi
0x69D208: call    eax
0x69D20A: fstp    [esp+104h+var_54]
0x69D211: mov     edx, [esi]
0x69D213: mov     eax, [edx+154h]
0x69D219: mov     ecx, esi
0x69D21B: call    eax
0x69D21D: mov     edx, [esi]
0x69D21F: mov     [esp+104h+var_60], eax
0x69D226: mov     eax, [edx+174h]
0x69D22C: mov     ecx, esi
0x69D22E: call    eax
0x69D230: fld     dword ptr [eax]
0x69D232: fld     qword ptr ds:0A39088h
0x69D238: mov     ecx, [esp+104h+var_E8]
0x69D23C: fmul    st(1), st
0x69D23E: push    14h; Size
0x69D240: fxch    st(1)
0x69D242: fstp    [esp+108h+var_D0]
0x69D246: fld     dword ptr [eax+4]
0x69D249: fmul    st, st(1)
0x69D24B: fstp    [esp+108h+var_CC]
0x69D24F: fmul    dword ptr [eax+8]
0x69D252: mov     [esp+108h+var_58], ecx
0x69D259: fstp    [esp+108h+var_C8]
0x69D25D: fldz
0x69D25F: fstp    [esp+108h+var_50]
0x69D266: call    FormHeapAlloc
0x69D26B: add     esp, 4
0x69D26E: mov     [esp+104h+var_E0], eax
0x69D272: test    eax, eax
0x69D274: mov     byte ptr [esp+104h+var_4], 1
0x69D27C: jz      short loc_69D28F
0x69D27E: fld1
0x69D280: push    1; float
0x69D282: push    ecx
0x69D283: fstp    [esp+10Ch+var_10C]; float
0x69D286: mov     ecx, eax
0x69D288: call    sub_532090
0x69D28D: jmp     short loc_69D291
0x69D28F: xor     eax, eax
0x69D291: push    eax
0x69D292: lea     ecx, [esp+108h+var_D0]
0x69D296: mov     byte ptr [esp+108h+var_4], 0
0x69D29E: call    sub_608AE0
0x69D2A3: mov     ecx, [esi+68h]
0x69D2A6: xor     edi, edi
0x69D2A8: test    ecx, ecx
0x69D2AA: mov     [esp+104h+var_4C], 0
0x69D2B2: jz      short loc_69D2BD
0x69D2B4: mov     edx, [ecx]
0x69D2B6: mov     eax, [edx+20h]
0x69D2B9: call    eax
0x69D2BB: mov     edi, eax
0x69D2BD: mov     ecx, ds:0B33B00h
0x69D2C3: call    sub_45A500
0x69D2C8: test    al, al
0x69D2CA: jnz     loc_69D394
0x69D2D0: test    edi, edi
0x69D2D2: jz      short loc_69D343
0x69D2D4: mov     edx, [edi]
0x69D2D6: mov     eax, [edx+190h]
0x69D2DC: mov     ecx, edi
0x69D2DE: call    eax
0x69D2E0: test    al, al
0x69D2E2: jz      short loc_69D306
0x69D2E4: lea     ecx, [esp+104h+var_E0]
0x69D2E8: push    ecx
0x69D2E9: mov     ecx, edi
0x69D2EB: call    sub_65ABE0
0x69D2F0: movzx   eax, word ptr [eax+2]
0x69D2F4: shl     eax, 10h
0x69D2F7: or      eax, 7
0x69D2FA: mov     [esp+104h+var_5C], eax
0x69D301: jmp     loc_69D39F
0x69D306: mov     edx, [edi]
0x69D308: mov     eax, [edx+154h]
0x69D30E: mov     ecx, edi
0x69D310: call    eax
0x69D312: push    eax
0x69D313: call    sub_480340
0x69D318: add     esp, 4
0x69D31B: test    eax, eax
0x69D31D: jz      short loc_69D380
0x69D31F: mov     ecx, [eax+10h]
0x69D322: test    ecx, ecx
0x69D324: jz      short loc_69D380
0x69D326: lea     edx, [esp+104h+var_E0]
0x69D32A: push    edx
0x69D32B: call    sub_497340
0x69D330: movzx   eax, word ptr [eax+2]
0x69D334: shl     eax, 10h
0x69D337: or      eax, 7
0x69D33A: mov     [esp+104h+var_5C], eax
0x69D341: jmp     short loc_69D39F
0x69D343: mov     eax, [esi]
0x69D345: mov     edx, [eax+154h]
0x69D34B: mov     ecx, esi
0x69D34D: call    edx
0x69D34F: push    eax
0x69D350: call    sub_480340
0x69D355: add     esp, 4
0x69D358: test    eax, eax
0x69D35A: jz      short loc_69D380
0x69D35C: mov     ecx, [eax+10h]
0x69D35F: test    ecx, ecx
0x69D361: jz      short loc_69D380
0x69D363: lea     eax, [esp+104h+var_E0]
0x69D367: push    eax
0x69D368: call    sub_497340
0x69D36D: movzx   eax, word ptr [eax+2]
0x69D371: shl     eax, 10h
0x69D374: or      eax, 7
0x69D377: mov     [esp+104h+var_5C], eax
0x69D37E: jmp     short loc_69D39F
0x69D380: call    sub_531D80
0x69D385: shl     eax, 10h
0x69D388: or      eax, 7
0x69D38B: mov     [esp+104h+var_5C], eax
0x69D392: jmp     short loc_69D39F
0x69D394: mov     [esp+104h+var_5C], 7
0x69D39F: push    1
0x69D3A1: push    3F0h
0x69D3A6: mov     ecx, offset FormHeap
0x69D3AB: mov     [esp+10Ch+var_48], 6
0x69D3B6: call    j_MemoryHeap_Alloc
0x69D3BB: mov     dl, al
0x69D3BD: and     dl, 0Fh
0x69D3C0: mov     cl, 10h
0x69D3C2: sub     cl, dl
0x69D3C4: movzx   edx, cl
0x69D3C7: add     eax, edx
0x69D3C9: mov     [eax-1], cl
0x69D3CC: mov     [esp+104h+var_E0], eax
0x69D3D0: push    esi
0x69D3D1: lea     ecx, [esp+108h+var_D0]
0x69D3D5: push    ecx
0x69D3D6: mov     ecx, eax
0x69D3D8: mov     byte ptr [esp+10Ch+var_4], 2
0x69D3E0: call    sub_68F400
0x69D3E5: fld1
0x69D3E7: mov     edi, eax
0x69D3E9: fstp    dword ptr [edi+324h]
0x69D3EF: mov     byte ptr [esp+104h+var_4], 0
0x69D3F7: cmp     byte ptr ds:0B333B8h, 0
0x69D3FE: jz      short loc_69D40C
0x69D400: or      dword ptr [edi+1F4h], 100000h
0x69D40A: jmp     short loc_69D416
0x69D40C: and     dword ptr [edi+1F4h], 0FFEFFFFFh
0x69D416: or      dword ptr [edi+1F4h], 80000h
0x69D420: push    ecx
0x69D421: mov     eax, esp
0x69D423: lea     edx, [edi+4]
0x69D426: mov     [esp+108h+var_E0], esp
0x69D42A: push    edx; lpAddend
0x69D42B: mov     [eax], edi
0x69D42D: call    dword ptr ds:0A28078h
0x69D433: mov     ecx, [esi+58h]
0x69D436: mov     eax, [ecx]
0x69D438: mov     edx, [eax+190h]
0x69D43E: call    edx
0x69D440: push    esi
0x69D441: push    3E8h
0x69D446: mov     ecx, edi
0x69D448: call    sub_8910F0
0x69D44D: lea     ecx, [esp+104h+var_D0]
0x69D451: mov     [esp+104h+var_4], 0FFFFFFFFh
0x69D45C: call    sub_890F70
0x69D461: mov     ebx, [esp+104h+var_E4]
0x69D465: test    ebx, ebx
0x69D467: jz      short loc_69D47F
0x69D469: cmp     [esp+104h+var_E8], 0
0x69D46E: jz      short loc_69D47F
0x69D470: mov     ecx, ebx
0x69D472: call    TESObjectCELL_GetWaterHeight
0x69D477: fmul    qword ptr ds:0A39088h
0x69D47D: jmp     short loc_69D485
0x69D47F: fld     dword ptr ds:0A6F374h
0x69D485: mov     ecx, [edi+8]
0x69D488: fstp    dword ptr [edi+318h]
0x69D48E: test    ecx, ecx
0x69D490: jz      short loc_69D499
0x69D492: call    sub_8AC0C0
0x69D497: jmp     short loc_69D49B
0x69D499: xor     eax, eax
0x69D49B: mov     eax, [eax+8]
0x69D49E: test    eax, eax
0x69D4A0: jz      short loc_69D4AE
0x69D4A2: mov     eax, [eax+2B0h]
0x69D4A8: mov     [esp+104h+var_E4], eax
0x69D4AC: jmp     short loc_69D4B6
0x69D4AE: mov     [esp+104h+var_E4], 0
0x69D4B6: mov     ecx, [esp+104h+var_E8]
0x69D4BA: push    ecx
0x69D4BB: mov     ecx, edi
0x69D4BD: call    sub_895060
0x69D4C2: mov     edx, [esi]
0x69D4C4: mov     eax, [edx+154h]
0x69D4CA: mov     ecx, esi
0x69D4CC: call    eax
0x69D4CE: mov     ecx, [edi+364h]
0x69D4D4: test    ecx, ecx
0x69D4D6: mov     ebx, eax
0x69D4D8: jz      short loc_69D4E3
0x69D4DA: push    0
0x69D4DC: call    sub_89F6B0
0x69D4E1: jmp     short loc_69D4E5
0x69D4E3: xor     eax, eax
0x69D4E5: cmp     eax, ebx
0x69D4E7: jz      short loc_69D538
0x69D4E9: mov     ecx, [edi+364h]
0x69D4EF: test    ecx, ecx
0x69D4F1: jz      short loc_69D4FB
0x69D4F3: push    0
0x69D4F5: push    ebx
0x69D4F6: call    sub_89F650
0x69D4FB: mov     eax, [esp+104h+var_E8]
0x69D4FF: test    eax, eax
0x69D501: jz      short loc_69D523
0x69D503: cmp     byte ptr [eax+1Ah], 0
0x69D507: jz      short loc_69D523
0x69D509: mov     edx, [edi]
0x69D50B: mov     eax, [edx+88h]
0x69D511: push    0
0x69D513: mov     ecx, edi
0x69D515: call    eax
0x69D517: mov     edx, [esi]
0x69D519: mov     eax, [edx+214h]
0x69D51F: mov     ecx, esi
0x69D521: call    eax
0x69D523: push    ebx
0x69D524: call    sub_88EE20
0x69D529: push    0; a4
0x69D52B: push    1; a3
0x69D52D: push    6; a2
0x69D52F: push    ebx; a1
0x69D530: call    sub_88D070
0x69D535: add     esp, 14h
0x69D538: mov     edx, [esi]
0x69D53A: mov     eax, [edx+174h]
0x69D540: mov     ecx, esi
0x69D542: call    eax
0x69D544: mov     ecx, [eax]
0x69D546: mov     edx, [eax+4]
0x69D549: mov     eax, [eax+8]
0x69D54C: mov     esi, [esp+104h+var_E8]
0x69D550: mov     [esp+104h+var_D4], eax
0x69D554: mov     eax, [esp+104h+var_E4]
0x69D558: cmp     eax, esi
0x69D55A: mov     [esp+104h+a2], ecx
0x69D55E: mov     [esp+104h+var_D8], edx
0x69D562: jz      short loc_69D583
0x69D564: test    eax, eax
0x69D566: jz      short loc_69D575
0x69D568: push    0
0x69D56A: push    1
0x69D56C: push    ebx
0x69D56D: call    sub_88CD50
0x69D572: add     esp, 0Ch
0x69D575: fld     [esp+104h+var_D4]
0x69D579: fadd    qword ptr ds:0A49310h
0x69D57F: fstp    [esp+104h+var_D4]
0x69D583: test    esi, esi
0x69D585: jz      short loc_69D5BA
0x69D587: lea     ecx, [esp+104h+a2]
0x69D58B: push    ecx; a2
0x69D58C: mov     ecx, edi; this
0x69D58E: call    sub_452A10
0x69D593: lea     edx, [esp+104h+var_E4]
0x69D597: push    edx
0x69D598: mov     ecx, edi
0x69D59A: call    sub_57E270
0x69D59F: mov     ecx, [esp+104h+var_E4]
0x69D5A3: mov     eax, [esi]
0x69D5A5: mov     edx, [eax+90h]
0x69D5AB: push    0
0x69D5AD: shr     ecx, 10h
0x69D5B0: push    ecx
0x69D5B1: push    0
0x69D5B3: push    1
0x69D5B5: push    ebx
0x69D5B6: mov     ecx, esi
0x69D5B8: call    edx
0x69D5BA: mov     ecx, dword ptr [esp+104h+var_C]
0x69D5C1: mov     large fs:0, ecx
0x69D5C8: pop     ecx
0x69D5C9: pop     edi
0x69D5CA: pop     esi
0x69D5CB: pop     ebx
0x69D5CC: mov     ecx, [esp+0F4h+var_14]
0x69D5D3: xor     ecx, esp
0x69D5D5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x69D5DA: mov     esp, ebp
0x69D5DC: pop     ebp
0x69D5DD: retn
