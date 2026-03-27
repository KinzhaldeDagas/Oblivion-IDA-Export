0x501890: sub     esp, 10h
0x501893: mov     edx, [esp+10h+l]
0x501897: push    esi
0x501898: mov     esi, [esp+14h+a4]
0x50189C: lea     eax, [esp+14h+var_C]
0x5018A0: push    eax
0x5018A1: mov     eax, [esp+18h+arg_10]
0x5018A5: lea     ecx, [esp+18h+var_10]
0x5018A9: push    ecx; UInt16
0x5018AA: mov     ecx, [esp+1Ch+arg_C]
0x5018AE: push    edx; l
0x5018AF: mov     edx, [esp+20h+a3]
0x5018B3: push    eax; a6
0x5018B4: mov     eax, [esp+24h+arg_4]
0x5018B8: push    ecx; a5
0x5018B9: mov     ecx, [esp+28h+a1]
0x5018BD: push    esi; a4
0x5018BE: push    edx; a3
0x5018BF: push    eax; a2
0x5018C0: push    ecx; a1
0x5018C1: mov     dword ptr [esp+38h+var_10], 0
0x5018C9: mov     dword ptr [esp+38h+var_C], 0
0x5018D1: call    Script_ExtractArgs
0x5018D6: add     esp, 24h
0x5018D9: test    al, al
0x5018DB: jnz     short loc_5018E2
0x5018DD: pop     esi
0x5018DE: add     esp, 10h
0x5018E1: retn
0x5018E2: push    0; int
0x5018E4: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x5018E9: push    offset ??_R0?AVTESObjectREFR@@@8; struct _s_RTTICompleteObjectLocator *
0x5018EE: push    0; int
0x5018F0: push    esi; void *
0x5018F1: call    OblivionDynamicCast
0x5018F6: mov     esi, eax
0x5018F8: add     esp, 14h
0x5018FB: test    esi, esi
0x5018FD: jz      short loc_501953
0x5018FF: fild    dword ptr [esp+14h+var_C]
0x501903: mov     edx, [esi]
0x501905: mov     eax, dword ptr [esp+14h+var_10]
0x501909: mov     edx, [edx+288h]
0x50190F: push    eax
0x501910: fstp    [esp+18h+var_C+4]
0x501914: mov     ecx, esi
0x501916: call    edx
0x501918: fsubr   qword ptr [esp+8+a1]
0x50191C: cmp     byte ptr ds:0B361ACh, 0
0x501923: mov     eax, [esi]
0x501925: fstp    [esp+8+a1]
0x501929: push    0
0x50192B: fld     [esp+0Ch+a1]
0x50192F: push    ecx
0x501930: mov     ecx, [esp+10h+var_4]
0x501934: fstp    dword ptr [esp+10h+var_10]
0x501937: push    ecx
0x501938: mov     ecx, esi
0x50193A: jz      short loc_50194B
0x50193C: mov     edx, [eax+2A4h]
0x501942: call    edx
0x501944: mov     al, 1
0x501946: pop     esi
0x501947: add     esp, 10h
0x50194A: retn
0x50194B: mov     edx, [eax+29Ch]
0x501951: call    edx
0x501953: mov     al, 1
0x501955: pop     esi
0x501956: add     esp, 10h
0x501959: retn
