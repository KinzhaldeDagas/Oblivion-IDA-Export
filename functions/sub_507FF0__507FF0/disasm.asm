0x507FF0: sub     esp, 0Ch
0x507FF3: cmp     byte ptr ds:0B42F3Eh, 0
0x507FFA: push    edi
0x507FFB: jz      loc_50815C
0x508001: cmp     byte ptr ds:0B42E84h, 0
0x508008: jz      loc_50815C
0x50800E: cmp     dword ptr ds:0B42F48h, 2
0x508015: jl      loc_50815C
0x50801B: mov     edx, [esp+10h+l]
0x50801F: fldz
0x508021: mov     edi, [esp+10h+arg_8]
0x508025: fstp    dword ptr [esp+10h+var_C]
0x508029: lea     eax, [esp+10h+var_8]
0x50802D: push    eax
0x50802E: mov     eax, [esp+14h+arg_10]
0x508032: lea     ecx, [esp+14h+var_C]
0x508036: push    ecx; UInt16
0x508037: mov     ecx, [esp+18h+arg_C]
0x50803B: push    edx; l
0x50803C: mov     edx, [esp+1Ch+a3]
0x508040: push    eax; a6
0x508041: mov     eax, [esp+20h+arg_4]
0x508045: push    ecx; a5
0x508046: mov     ecx, [esp+24h+a1]
0x50804A: push    edi; a4
0x50804B: push    edx; a3
0x50804C: push    eax; a2
0x50804D: push    ecx; a1
0x50804E: mov     [esp+34h+var_8], 0
0x508056: call    Script_ExtractArgs
0x50805B: add     esp, 24h
0x50805E: test    al, al
0x508060: jnz     short loc_508067
0x508062: pop     edi
0x508063: add     esp, 0Ch
0x508066: retn
0x508067: push    0; int
0x508069: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x50806E: push    offset ??_R0?AVTESObjectREFR@@@8; struct _s_RTTICompleteObjectLocator *
0x508073: push    0; int
0x508075: push    edi; void *
0x508076: call    OblivionDynamicCast
0x50807B: add     esp, 14h
0x50807E: test    eax, eax
0x508080: jnz     loc_50815C
0x508086: fld     dword ptr ds:0A31C80h
0x50808C: fld     dword ptr [esp+10h+var_C]
0x508090: fcom    st(1)
0x508092: fnstsw  ax
0x508094: fldz
0x508096: test    ah, 5
0x508099: jp      short loc_5080A4
0x50809B: fcom    st(1)
0x50809D: fnstsw  ax
0x50809F: test    ah, 5
0x5080A2: jp      short loc_5080C2
0x5080A4: fxch    st(1)
0x5080A6: fcom    st(2)
0x5080A8: fnstsw  ax
0x5080AA: test    ah, 5
0x5080AD: jnp     loc_508163
0x5080B3: fstp    st
0x5080B5: mov     byte ptr [esp+10h+a2], 1
0x5080BA: fstp    st
0x5080BC: fstp    dword ptr [esp+10h+var_C]
0x5080C0: jmp     short loc_5080CF
0x5080C2: fstp    st(1)
0x5080C4: fstp    st(1)
0x5080C6: fstp    dword ptr [esp+10h+var_C]
0x5080CA: mov     byte ptr [esp+10h+a2], 0
0x5080CF: mov     edx, [edi]
0x5080D1: mov     eax, [edx+154h]
0x5080D7: push    esi
0x5080D8: mov     ecx, edi
0x5080DA: call    eax
0x5080DC: mov     esi, eax
0x5080DE: test    esi, esi
0x5080E0: jz      short loc_50815B
0x5080E2: fldz
0x5080E4: push    ecx
0x5080E5: fst     [esp+18h+a5]; a5
0x5080E8: push    0; a4
0x5080EA: push    ecx
0x5080EB: fstp    [esp+20h+var_20]; a3
0x5080EE: push    0; a2
0x5080F0: push    esi; a1
0x5080F1: call    sub_7D92C0
0x5080F6: fldz
0x5080F8: add     esp, 10h
0x5080FB: fst     [esp+18h+a5]; a5
0x5080FE: push    1; a4
0x508100: push    ecx
0x508101: fstp    [esp+20h+var_20]; a3
0x508104: push    0; a2
0x508106: push    esi; a1
0x508107: call    sub_7D92C0
0x50810C: fild    [esp+28h+var_8]
0x508110: add     esp, 10h
0x508113: fstp    [esp+18h+a5]; a5
0x508116: push    1; a4
0x508118: fld     dword ptr [esp+1Ch+var_C]
0x50811C: push    ecx
0x50811D: mov     ecx, [esp+20h+a2]
0x508121: fstp    [esp+20h+var_20]; a3
0x508124: push    ecx; a2
0x508125: push    esi; a1
0x508126: call    sub_7D92C0
0x50812B: add     esp, 14h
0x50812E: cmp     byte ptr ds:0B361ACh, 0
0x508135: jz      short loc_50815B
0x508137: mov     edx, [esp+14h+var_8]
0x50813B: fld     dword ptr [esp+14h+var_C]
0x50813F: push    edx
0x508140: sub     esp, 8
0x508143: mov     ecx, edi; this
0x508145: fstp    qword ptr [esp+20h+var_20]
0x508148: call    TESObjectREFR_GetName
0x50814D: push    eax
0x50814E: push    offset aSRefractionFir; "%s refraction fire has been set to %f, "...
0x508153: call    Interface_ConsolePrint
0x508158: add     esp, 14h
0x50815B: pop     esi
0x50815C: mov     al, 1
0x50815E: pop     edi
0x50815F: add     esp, 0Ch
0x508162: retn
0x508163: fstp    st(2)
0x508165: fcompp
0x508167: fnstsw  ax
0x508169: test    ah, 5
0x50816C: jp      loc_5080CA
0x508172: mov     byte ptr [esp+10h+a2], 1
0x508177: jmp     loc_5080CF
