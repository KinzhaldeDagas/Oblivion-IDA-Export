0x6C1010: push    0FFFFFFFFh
0x6C1012: push    offset SEH_6C20D0
0x6C1017: mov     eax, large fs:0
0x6C101D: push    eax
0x6C101E: sub     esp, 18h
0x6C1021: push    ebx
0x6C1022: push    ebp
0x6C1023: push    esi
0x6C1024: push    edi
0x6C1025: mov     eax, ds:0B30AACh
0x6C102A: xor     eax, esp
0x6C102C: push    eax
0x6C102D: lea     eax, [esp+38h+var_C]
0x6C1031: mov     large fs:0, eax
0x6C1037: mov     edi, [esp+38h+arg_8]
0x6C103B: fld     [esp+38h+arg_0]
0x6C103F: mov     eax, [esp+38h+arg_4]
0x6C1043: mov     edx, [edi]
0x6C1045: mov     ebp, [eax]
0x6C1047: push    40h ; '@'; char
0x6C1049: lea     ecx, [esp+3Ch+var_24]
0x6C104D: push    ecx; int
0x6C104E: push    edx; int
0x6C104F: push    ebp; int
0x6C1050: push    ecx
0x6C1051: fstp    [esp+4Ch+var_4C]; float
0x6C1054: call    sub_6D31B0
0x6C1059: add     esp, 14h
0x6C105C: test    al, al
0x6C105E: jz      loc_6C119F
0x6C1064: mov     esi, [edi]
0x6C1066: add     esi, 1
0x6C1069: xor     ecx, ecx
0x6C106B: mov     eax, esi
0x6C106D: mov     edx, 40h ; '@'
0x6C1072: mul     edx
0x6C1074: seto    cl
0x6C1077: neg     ecx
0x6C1079: or      ecx, eax
0x6C107B: xor     eax, eax
0x6C107D: add     ecx, 4
0x6C1080: setb    al
0x6C1083: neg     eax
0x6C1085: or      eax, ecx
0x6C1087: push    eax; Size
0x6C1088: call    FormHeapAlloc
0x6C108D: add     esp, 4
0x6C1090: mov     [esp+38h+var_20], eax
0x6C1094: test    eax, eax
0x6C1096: mov     [esp+38h+var_4], 0
0x6C109E: jz      short loc_6C10BC
0x6C10A0: push    offset ?ClearComponentReferences@TESTexture@@UAEXXZ?; a5
0x6C10A5: push    offset sub_6C0AD0; a4
0x6C10AA: push    esi; size
0x6C10AB: lea     ebx, [eax+4]
0x6C10AE: push    40h ; '@'; a2
0x6C10B0: push    ebx; a1
0x6C10B1: mov     [eax], esi
0x6C10B3: call    ArrayConstructor
0x6C10B8: mov     esi, ebx
0x6C10BA: jmp     short loc_6C10BE
0x6C10BC: xor     esi, esi
0x6C10BE: mov     ecx, [esp+38h+var_24]
0x6C10C2: shl     ecx, 6
0x6C10C5: push    ecx; Size
0x6C10C6: push    ebp; Src
0x6C10C7: push    esi; Dst
0x6C10C8: mov     [esp+44h+var_4], 0FFFFFFFFh
0x6C10D0: call    _memcpy
0x6C10D5: mov     eax, [edi]
0x6C10D7: mov     edx, [esp+44h+var_24]
0x6C10DB: add     esp, 0Ch
0x6C10DE: cmp     eax, edx
0x6C10E0: jbe     short loc_6C10FE
0x6C10E2: sub     eax, edx
0x6C10E4: mov     ecx, edx
0x6C10E6: shl     ecx, 6
0x6C10E9: shl     eax, 6
0x6C10EC: push    eax; Size
0x6C10ED: lea     edx, [ecx+ebp]
0x6C10F0: push    edx; Src
0x6C10F1: lea     eax, [ecx+esi+40h]
0x6C10F5: push    eax; Dst
0x6C10F6: call    _memcpy
0x6C10FB: add     esp, 0Ch
0x6C10FE: mov     ecx, [edi]
0x6C1100: fld     [esp+38h+arg_0]
0x6C1104: push    40h ; '@'; char
0x6C1106: push    ecx; int
0x6C1107: push    3; int
0x6C1109: push    ebp; int
0x6C110A: push    ecx
0x6C110B: lea     edx, [esp+4Ch+var_1C]
0x6C110F: fstp    [esp+4Ch+var_4C]; float
0x6C1112: push    edx; int
0x6C1113: call    sub_6BD1F0
0x6C1118: fld     [esp+50h+arg_0]
0x6C111C: mov     eax, [esp+50h+var_24]
0x6C1120: shl     eax, 6
0x6C1123: add     eax, esi
0x6C1125: fstp    dword ptr [eax]
0x6C1127: mov     ecx, [esp+50h+var_1C]
0x6C112B: fldz
0x6C112D: mov     [eax+4], ecx
0x6C1130: mov     edx, [esp+50h+var_18]
0x6C1134: mov     [eax+8], edx
0x6C1137: mov     ecx, [esp+50h+var_14]
0x6C113B: mov     [eax+0Ch], ecx
0x6C113E: mov     edx, [esp+50h+var_10]
0x6C1142: fst     dword ptr [eax+14h]
0x6C1145: fst     dword ptr [eax+18h]
0x6C1148: mov     [eax+10h], edx
0x6C114B: fstp    dword ptr [eax+1Ch]
0x6C114E: add     dword ptr [edi], 1
0x6C1151: add     esp, 18h
0x6C1154: test    ebp, ebp
0x6C1156: jz      short loc_6C1175
0x6C1158: mov     eax, [ebp-4]
0x6C115B: push    offset ?ClearComponentReferences@TESTexture@@UAEXXZ?; void (__thiscall *)(void *)
0x6C1160: lea     ebx, [ebp-4]
0x6C1163: push    eax; int
0x6C1164: push    40h ; '@'; unsigned int
0x6C1166: push    ebp; void *
0x6C1167: call    $LN21
0x6C116C: push    ebx
0x6C116D: call    FormHeapFree
0x6C1172: add     esp, 4
0x6C1175: mov     ecx, [esp+38h+arg_4]
0x6C1179: mov     [ecx], esi
0x6C117B: mov     edx, [edi]
0x6C117D: push    40h ; '@'
0x6C117F: push    edx
0x6C1180: push    esi
0x6C1181: call    sub_6C0EC0
0x6C1186: add     esp, 0Ch
0x6C1189: mov     al, 1
0x6C118B: mov     ecx, [esp+38h+var_C]
0x6C118F: mov     large fs:0, ecx
0x6C1196: pop     ecx
0x6C1197: pop     edi
0x6C1198: pop     esi
0x6C1199: pop     ebp
0x6C119A: pop     ebx
0x6C119B: add     esp, 24h
0x6C119E: retn
0x6C119F: xor     al, al
0x6C11A1: mov     ecx, [esp+38h+var_C]
0x6C11A5: mov     large fs:0, ecx
0x6C11AC: pop     ecx
0x6C11AD: pop     edi
0x6C11AE: pop     esi
0x6C11AF: pop     ebp
0x6C11B0: pop     ebx
0x6C11B1: add     esp, 24h
0x6C11B4: retn
