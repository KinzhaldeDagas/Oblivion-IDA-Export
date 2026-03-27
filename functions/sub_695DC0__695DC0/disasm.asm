0x695DC0: push    ebp
0x695DC1: mov     ebp, esp
0x695DC3: and     esp, 0FFFFFFF0h
0x695DC6: push    0FFFFFFFFh
0x695DC8: push    offset SEH_698410
0x695DCD: mov     eax, large fs:0
0x695DD3: push    eax
0x695DD4: sub     esp, 0E8h
0x695DDA: mov     eax, ds:0B30AACh
0x695DDF: xor     eax, esp
0x695DE1: mov     [esp+0F4h+var_14], eax
0x695DE8: push    ebx
0x695DE9: push    esi
0x695DEA: push    edi
0x695DEB: mov     eax, ds:0B30AACh
0x695DF0: xor     eax, esp
0x695DF2: push    eax
0x695DF3: lea     eax, [esp+104h+var_C]
0x695DFA: mov     large fs:0, eax
0x695E00: mov     edi, ecx
0x695E02: cmp     dword ptr [edi+58h], 0
0x695E06: jz      loc_696222
0x695E0C: mov     ecx, [edi+58h]
0x695E0F: mov     eax, [ecx]
0x695E11: mov     edx, [eax+8]
0x695E14: call    edx
0x695E16: test    eax, eax
0x695E18: jnz     loc_696222
0x695E1E: mov     ecx, edi; this
0x695E20: call    MobileObject_GetCharProxy
0x695E25: mov     ecx, edi; this
0x695E27: mov     esi, eax
0x695E29: call    TESObjectREFR_GetParentCell
0x695E2E: mov     ebx, eax
0x695E30: test    ebx, ebx
0x695E32: mov     [esp+104h+var_E4], ebx
0x695E36: jz      short loc_695E5C
0x695E38: mov     ecx, ebx; this
0x695E3A: call    TESObjectCELL_IsInterior
0x695E3F: test    al, al
0x695E41: jz      short loc_695E51
0x695E43: lea     ecx, [ebx+28h]
0x695E46: call    sub_424180
0x695E4B: mov     [esp+104h+var_E8], eax
0x695E4F: jmp     short loc_695E64
0x695E51: mov     eax, ds:0B35C24h
0x695E56: mov     [esp+104h+var_E8], eax
0x695E5A: jmp     short loc_695E64
0x695E5C: mov     [esp+104h+var_E8], 0
0x695E64: test    esi, esi
0x695E66: jnz     loc_6960D9
0x695E6C: push    1
0x695E6E: lea     ecx, [esp+108h+var_D0]
0x695E72: call    sub_890C00
0x695E77: fld1
0x695E79: mov     edx, [edi]
0x695E7B: fstp    [esp+104h+var_54]
0x695E82: mov     eax, [edx+154h]
0x695E88: mov     ecx, edi
0x695E8A: mov     [esp+104h+var_4], esi
0x695E91: call    eax
0x695E93: mov     edx, [edi]
0x695E95: mov     [esp+104h+var_60], eax
0x695E9C: mov     eax, [edx+174h]
0x695EA2: mov     ecx, edi
0x695EA4: call    eax
0x695EA6: fld     dword ptr [eax]
0x695EA8: fld     qword ptr ds:0A39088h
0x695EAE: mov     ecx, [esp+104h+var_E8]
0x695EB2: fmul    st(1), st
0x695EB4: push    14h; Size
0x695EB6: fxch    st(1)
0x695EB8: fstp    [esp+108h+var_D0]
0x695EBC: fld     dword ptr [eax+4]
0x695EBF: fmul    st, st(1)
0x695EC1: fstp    [esp+108h+var_CC]
0x695EC5: fmul    dword ptr [eax+8]
0x695EC8: mov     [esp+108h+var_58], ecx
0x695ECF: fstp    [esp+108h+var_C8]
0x695ED3: fldz
0x695ED5: fstp    [esp+108h+var_50]
0x695EDC: call    FormHeapAlloc
0x695EE1: add     esp, 4
0x695EE4: mov     [esp+104h+var_E0], eax
0x695EE8: test    eax, eax
0x695EEA: mov     byte ptr [esp+104h+var_4], 1
0x695EF2: jz      short loc_695F05
0x695EF4: fld1
0x695EF6: push    1; float
0x695EF8: push    ecx
0x695EF9: fstp    [esp+10Ch+var_10C]; float
0x695EFC: mov     ecx, eax
0x695EFE: call    sub_532090
0x695F03: jmp     short loc_695F07
0x695F05: xor     eax, eax
0x695F07: push    eax
0x695F08: lea     ecx, [esp+108h+var_D0]
0x695F0C: mov     byte ptr [esp+108h+var_4], 0
0x695F14: call    sub_608AE0
0x695F19: mov     ecx, ds:0B33B00h
0x695F1F: mov     [esp+104h+var_4C], 0
0x695F27: call    sub_45A500
0x695F2C: test    al, al
0x695F2E: jnz     loc_696008
0x695F34: mov     ecx, [edi+68h]
0x695F37: test    ecx, ecx
0x695F39: jz      short loc_695FB7
0x695F3B: mov     edx, [ecx]
0x695F3D: mov     eax, [edx+20h]
0x695F40: call    eax
0x695F42: mov     esi, eax
0x695F44: test    esi, esi
0x695F46: jz      short loc_695FB7
0x695F48: mov     edx, [esi]
0x695F4A: mov     eax, [edx+190h]
0x695F50: mov     ecx, esi
0x695F52: call    eax
0x695F54: test    al, al
0x695F56: jz      short loc_695F7A
0x695F58: lea     ecx, [esp+104h+var_E0]
0x695F5C: push    ecx
0x695F5D: mov     ecx, esi
0x695F5F: call    sub_65ABE0
0x695F64: movzx   eax, word ptr [eax+2]
0x695F68: shl     eax, 10h
0x695F6B: or      eax, 7
0x695F6E: mov     [esp+104h+var_5C], eax
0x695F75: jmp     loc_696013
0x695F7A: mov     edx, [esi]
0x695F7C: mov     eax, [edx+154h]
0x695F82: mov     ecx, esi
0x695F84: call    eax
0x695F86: push    eax
0x695F87: call    sub_480340
0x695F8C: add     esp, 4
0x695F8F: test    eax, eax
0x695F91: jz      short loc_695FF4
0x695F93: mov     ecx, [eax+10h]
0x695F96: test    ecx, ecx
0x695F98: jz      short loc_695FF4
0x695F9A: lea     edx, [esp+104h+var_E0]
0x695F9E: push    edx
0x695F9F: call    sub_497340
0x695FA4: movzx   eax, word ptr [eax+2]
0x695FA8: shl     eax, 10h
0x695FAB: or      eax, 7
0x695FAE: mov     [esp+104h+var_5C], eax
0x695FB5: jmp     short loc_696013
0x695FB7: mov     eax, [edi]
0x695FB9: mov     edx, [eax+154h]
0x695FBF: mov     ecx, edi
0x695FC1: call    edx
0x695FC3: push    eax
0x695FC4: call    sub_480340
0x695FC9: add     esp, 4
0x695FCC: test    eax, eax
0x695FCE: jz      short loc_695FF4
0x695FD0: mov     ecx, [eax+10h]
0x695FD3: test    ecx, ecx
0x695FD5: jz      short loc_695FF4
0x695FD7: lea     eax, [esp+104h+var_E0]
0x695FDB: push    eax
0x695FDC: call    sub_497340
0x695FE1: movzx   eax, word ptr [eax+2]
0x695FE5: shl     eax, 10h
0x695FE8: or      eax, 7
0x695FEB: mov     [esp+104h+var_5C], eax
0x695FF2: jmp     short loc_696013
0x695FF4: call    sub_531D80
0x695FF9: shl     eax, 10h
0x695FFC: or      eax, 7
0x695FFF: mov     [esp+104h+var_5C], eax
0x696006: jmp     short loc_696013
0x696008: mov     [esp+104h+var_5C], 7
0x696013: push    1
0x696015: push    3F0h
0x69601A: mov     ecx, offset FormHeap
0x69601F: mov     [esp+10Ch+var_48], 6
0x69602A: call    j_MemoryHeap_Alloc
0x69602F: mov     dl, al
0x696031: and     dl, 0Fh
0x696034: mov     cl, 10h
0x696036: sub     cl, dl
0x696038: movzx   edx, cl
0x69603B: add     eax, edx
0x69603D: mov     [eax-1], cl
0x696040: mov     [esp+104h+var_E0], eax
0x696044: push    edi
0x696045: lea     ecx, [esp+108h+var_D0]
0x696049: push    ecx
0x69604A: mov     ecx, eax
0x69604C: mov     byte ptr [esp+10Ch+var_4], 2
0x696054: call    sub_68F400
0x696059: fld1
0x69605B: mov     esi, eax
0x69605D: fstp    dword ptr [esi+324h]
0x696063: mov     byte ptr [esp+104h+var_4], 0
0x69606B: cmp     byte ptr ds:0B333B8h, 0
0x696072: jz      short loc_696080
0x696074: or      dword ptr [esi+1F4h], 100000h
0x69607E: jmp     short loc_69608A
0x696080: and     dword ptr [esi+1F4h], 0FFEFFFFFh
0x69608A: or      dword ptr [esi+1F4h], 80000h
0x696094: push    ecx
0x696095: mov     eax, esp
0x696097: lea     edx, [esi+4]
0x69609A: mov     [esp+108h+var_E0], esp
0x69609E: push    edx; lpAddend
0x69609F: mov     [eax], esi
0x6960A1: call    dword ptr ds:0A28078h
0x6960A7: mov     ecx, [edi+58h]
0x6960AA: mov     eax, [ecx]
0x6960AC: mov     edx, [eax+190h]
0x6960B2: call    edx
0x6960B4: push    edi
0x6960B5: push    3E8h
0x6960BA: mov     ecx, esi
0x6960BC: call    sub_8910F0
0x6960C1: lea     ecx, [esp+104h+var_D0]
0x6960C5: mov     [esp+104h+var_4], 0FFFFFFFFh
0x6960D0: call    sub_890F70
0x6960D5: mov     ebx, [esp+104h+var_E4]
0x6960D9: test    ebx, ebx
0x6960DB: jz      short loc_6960F3
0x6960DD: cmp     [esp+104h+var_E8], 0
0x6960E2: jz      short loc_6960F3
0x6960E4: mov     ecx, ebx
0x6960E6: call    TESObjectCELL_GetWaterHeight
0x6960EB: fmul    qword ptr ds:0A39088h
0x6960F1: jmp     short loc_6960F9
0x6960F3: fld     dword ptr ds:0A6F374h
0x6960F9: mov     ecx, [esi+8]
0x6960FC: fstp    dword ptr [esi+318h]
0x696102: test    ecx, ecx
0x696104: jz      short loc_69610D
0x696106: call    sub_8AC0C0
0x69610B: jmp     short loc_69610F
0x69610D: xor     eax, eax
0x69610F: mov     eax, [eax+8]
0x696112: test    eax, eax
0x696114: jz      short loc_696122
0x696116: mov     eax, [eax+2B0h]
0x69611C: mov     [esp+104h+var_E4], eax
0x696120: jmp     short loc_69612A
0x696122: mov     [esp+104h+var_E4], 0
0x69612A: mov     ecx, [esp+104h+var_E8]
0x69612E: push    ecx
0x69612F: mov     ecx, esi
0x696131: call    sub_895060
0x696136: mov     edx, [edi]
0x696138: mov     eax, [edx+154h]
0x69613E: mov     ecx, edi
0x696140: call    eax
0x696142: mov     ecx, [esi+364h]
0x696148: test    ecx, ecx
0x69614A: mov     ebx, eax
0x69614C: jz      short loc_696157
0x69614E: push    0
0x696150: call    sub_89F6B0
0x696155: jmp     short loc_696159
0x696157: xor     eax, eax
0x696159: cmp     eax, ebx
0x69615B: jz      short loc_6961A0
0x69615D: mov     ecx, [esi+364h]
0x696163: test    ecx, ecx
0x696165: jz      short loc_69616F
0x696167: push    0
0x696169: push    ebx
0x69616A: call    sub_89F650
0x69616F: mov     eax, [esp+104h+var_E8]
0x696173: test    eax, eax
0x696175: jz      short loc_69618B
0x696177: cmp     byte ptr [eax+1Ah], 0
0x69617B: jz      short loc_69618B
0x69617D: mov     edx, [esi]
0x69617F: mov     eax, [edx+88h]
0x696185: push    0
0x696187: mov     ecx, esi
0x696189: call    eax
0x69618B: push    ebx
0x69618C: call    sub_88EE20
0x696191: push    0; a4
0x696193: push    1; a3
0x696195: push    6; a2
0x696197: push    ebx; a1
0x696198: call    sub_88D070
0x69619D: add     esp, 14h
0x6961A0: mov     edx, [edi]
0x6961A2: mov     eax, [edx+174h]
0x6961A8: mov     ecx, edi
0x6961AA: call    eax
0x6961AC: mov     ecx, [eax]
0x6961AE: mov     edx, [eax+4]
0x6961B1: mov     eax, [eax+8]
0x6961B4: mov     edi, [esp+104h+var_E8]
0x6961B8: mov     [esp+104h+var_D4], eax
0x6961BC: mov     eax, [esp+104h+var_E4]
0x6961C0: cmp     eax, edi
0x6961C2: mov     [esp+104h+a2], ecx
0x6961C6: mov     [esp+104h+var_D8], edx
0x6961CA: jz      short loc_6961EB
0x6961CC: test    eax, eax
0x6961CE: jz      short loc_6961DD
0x6961D0: push    0
0x6961D2: push    1
0x6961D4: push    ebx
0x6961D5: call    sub_88CD50
0x6961DA: add     esp, 0Ch
0x6961DD: fld     [esp+104h+var_D4]
0x6961E1: fadd    qword ptr ds:0A49310h
0x6961E7: fstp    [esp+104h+var_D4]
0x6961EB: test    edi, edi
0x6961ED: jz      short loc_696222
0x6961EF: lea     ecx, [esp+104h+a2]
0x6961F3: push    ecx; a2
0x6961F4: mov     ecx, esi; this
0x6961F6: call    sub_452A10
0x6961FB: lea     edx, [esp+104h+var_E4]
0x6961FF: push    edx
0x696200: mov     ecx, esi
0x696202: call    sub_57E270
0x696207: mov     ecx, [esp+104h+var_E4]
0x69620B: mov     eax, [edi]
0x69620D: mov     edx, [eax+90h]
0x696213: push    0
0x696215: shr     ecx, 10h
0x696218: push    ecx
0x696219: push    0
0x69621B: push    1
0x69621D: push    ebx
0x69621E: mov     ecx, edi
0x696220: call    edx
0x696222: mov     ecx, dword ptr [esp+104h+var_C]
0x696229: mov     large fs:0, ecx
0x696230: pop     ecx
0x696231: pop     edi
0x696232: pop     esi
0x696233: pop     ebx
0x696234: mov     ecx, [esp+0F4h+var_14]
0x69623B: xor     ecx, esp
0x69623D: call    @__security_check_cookie@4; __security_check_cookie(x)
0x696242: mov     esp, ebp
0x696244: pop     ebp
0x696245: retn
