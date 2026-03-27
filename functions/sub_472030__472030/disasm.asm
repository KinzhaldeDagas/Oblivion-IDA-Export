0x472030: push    0FFFFFFFFh
0x472032: push    offset SEH_472030
0x472037: mov     eax, large fs:0
0x47203D: push    eax
0x47203E: sub     esp, 68h
0x472041: push    ebx
0x472042: push    ebp
0x472043: push    esi
0x472044: push    edi
0x472045: mov     eax, ds:0B30AACh
0x47204A: xor     eax, esp
0x47204C: push    eax
0x47204D: lea     eax, [esp+88h+var_C]
0x472051: mov     large fs:0, eax
0x472057: mov     ebx, ecx
0x472059: mov     [esp+88h+var_74], ebx
0x47205D: mov     ebp, [esp+88h+arg_0]
0x472064: mov     ecx, ebp
0x472066: call    TESActorBaseData_GetMagicka
0x47206B: movzx   esi, ax
0x47206E: mov     ecx, ebp
0x472070: mov     [esp+88h+var_5C], esi
0x472074: call    TESAnimGroup_GetAnimationGroup
0x472079: mov     edi, eax
0x47207B: mov     eax, [ebx+98h]
0x472081: test    eax, eax
0x472083: jz      loc_4722FB
0x472089: mov     ecx, [ebx+9Ch]
0x47208F: lea     eax, [esp+88h+arg_0]
0x472096: push    eax
0x472097: push    esi
0x472098: call    sub_470960
0x47209D: test    al, al
0x47209F: jz      loc_4722FB
0x4720A5: cmp     edi, 1
0x4720A8: jz      loc_4722FB
0x4720AE: cmp     edi, 2
0x4720B1: jz      loc_4722FB
0x4720B7: mov     ecx, [ebx+98h]
0x4720BD: call    sub_471600
0x4720C2: test    eax, eax
0x4720C4: jnz     short loc_4720DF
0x4720C6: mov     ecx, [ebx+4]
0x4720C9: mov     edx, [ecx+8]
0x4720CC: push    edx; ArgList
0x4720CD: push    offset aCouldNotFindAc; "Could not find AccumRoot in animation '"...
0x4720D2: call    PrintError
0x4720D7: add     esp, 8
0x4720DA: jmp     loc_4722FB
0x4720DF: mov     esi, [esp+88h+arg_0]
0x4720E6: mov     eax, [esi]
0x4720E8: mov     edx, [eax+10h]
0x4720EB: push    0FFFFFFFFh
0x4720ED: mov     ecx, esi
0x4720EF: call    edx
0x4720F1: test    eax, eax
0x4720F3: jz      def_472123; jumptable 00472123 default case, cases 2,3
0x4720F9: lea     eax, [edi+edi*8]
0x4720FC: add     eax, eax
0x4720FE: add     eax, eax
0x472100: cmp     ds:byte_B102E4[eax], 0
0x472107: jnz     def_472123; jumptable 00472123 default case, cases 2,3
0x47210D: mov     eax, ds:dword_B102EC[eax]
0x472113: cmp     eax, 6; switch 7 cases
0x472116: ja      def_472123; jumptable 00472123 default case, cases 2,3
0x47211C: movzx   eax, ds:byte_47231C[eax]
0x472123: jmp     ds:jpt_472123[eax*4]; switch jump
0x47212A: mov     edx, [esi]; jumptable 00472123 cases 0,1,4-6
0x47212C: mov     eax, [edx+10h]
0x47212F: push    0FFFFFFFFh
0x472131: mov     ecx, esi
0x472133: call    eax
0x472135: push    eax
0x472136: lea     ecx, [esp+8Ch+var_6C]
0x47213A: call    sub_405070
0x47213F: mov     edi, [esp+88h+var_6C]
0x472143: mov     esi, [edi+0Ch]
0x472146: xor     eax, eax
0x472148: cmp     esi, eax
0x47214A: mov     [esp+88h+var_4], eax
0x472151: jbe     loc_47226B
0x472157: mov     ecx, [edi+14h]
0x47215A: mov     ebx, [edi+60h]
0x47215D: add     ecx, 4
0x472160: mov     edx, [ecx]
0x472162: test    edx, edx
0x472164: jz      short loc_47216B
0x472166: mov     edx, [edx+30h]
0x472169: jmp     short loc_47216D
0x47216B: xor     edx, edx
0x47216D: cmp     edx, ebx
0x47216F: jz      short loc_472180
0x472171: add     eax, 1
0x472174: add     ecx, 10h
0x472177: cmp     eax, esi
0x472179: jb      short loc_472160
0x47217B: jmp     loc_472267
0x472180: mov     ecx, [edi+14h]
0x472183: fld     dword ptr [edi+2Ch]
0x472186: shl     eax, 4
0x472189: fstp    [esp+88h+var_70]
0x47218D: mov     esi, [eax+ecx]
0x472190: fld     dword ptr [edi+30h]
0x472193: lea     ecx, [esp+88h+var_2C]
0x472197: fstp    [esp+88h+arg_0]
0x47219E: call    sub_470AB0
0x4721A3: lea     ecx, [esp+88h+var_4C]
0x4721A7: call    sub_470AB0
0x4721AC: fld     [esp+88h+var_70]
0x4721B0: mov     edx, [esi]
0x4721B2: mov     edx, [edx+4Ch]
0x4721B5: lea     eax, [esp+88h+var_2C]
0x4721B9: push    eax
0x4721BA: push    0
0x4721BC: push    ecx
0x4721BD: mov     ecx, esi
0x4721BF: fstp    [esp+94h+var_94]
0x4721C2: call    edx
0x4721C4: fld     [esp+88h+arg_0]
0x4721CB: mov     eax, [esi]
0x4721CD: mov     edx, [eax+4Ch]
0x4721D0: lea     ecx, [esp+88h+var_4C]
0x4721D4: push    ecx
0x4721D5: push    0
0x4721D7: push    ecx
0x4721D8: mov     ecx, esi
0x4721DA: fstp    [esp+94h+var_94]
0x4721DD: call    edx
0x4721DF: lea     ecx, [esp+88h+var_2C]
0x4721E3: call    sub_470B00
0x4721E8: test    al, al
0x4721EA: jz      short loc_472267
0x4721EC: lea     ecx, [esp+88h+var_4C]
0x4721F0: call    sub_470B00
0x4721F5: test    al, al
0x4721F7: jz      short loc_472267
0x4721F9: fld     [esp+88h+var_4C]
0x4721FD: push    ecx
0x4721FE: fsub    [esp+8Ch+var_2C]
0x472202: lea     ecx, [esp+8Ch+var_58]
0x472206: fstp    [esp+8Ch+var_68]
0x47220A: fld     [esp+8Ch+var_48]
0x47220E: fsub    [esp+8Ch+var_28]
0x472212: fstp    [esp+8Ch+var_64]
0x472216: fld     [esp+8Ch+var_44]
0x47221A: fsub    [esp+8Ch+var_24]
0x47221E: fstp    [esp+8Ch+var_60]
0x472222: fld     [esp+8Ch+var_68]
0x472226: fstp    [esp+8Ch+var_58]
0x47222A: fld     [esp+8Ch+var_64]
0x47222E: fstp    [esp+8Ch+var_54]
0x472232: fld     [esp+8Ch+var_60]
0x472236: fstp    [esp+8Ch+var_50]
0x47223A: fld     [esp+8Ch+arg_0]
0x472241: fsub    [esp+8Ch+var_70]
0x472245: fstp    [esp+8Ch+arg_0]
0x47224C: fld     [esp+8Ch+arg_0]
0x472253: fstp    [esp+8Ch+var_8C]; float
0x472256: call    sub_4707E0
0x47225B: lea     eax, [esp+88h+var_58]
0x47225F: push    eax
0x472260: mov     ecx, ebp
0x472262: call    sub_4BEF50
0x472267: mov     ebx, [esp+88h+var_74]
0x47226B: lea     ecx, [edi+4]
0x47226E: push    ecx; lpAddend
0x47226F: mov     [esp+8Ch+var_4], 0FFFFFFFFh
0x47227A: call    dword ptr ds:0A2807Ch
0x472280: test    eax, eax
0x472282: jnz     short def_472123; jumptable 00472123 default case, cases 2,3
0x472284: mov     edx, [edi]
0x472286: mov     eax, [edx]
0x472288: push    1
0x47228A: mov     ecx, edi
0x47228C: call    eax
0x47228E: mov     ecx, [esp+88h+var_5C]; jumptable 00472123 default case, cases 2,3
0x472292: push    ecx
0x472293: call    sub_51AA00
0x472298: add     eax, 0FFFFFFFDh
0x47229B: add     esp, 4
0x47229E: cmp     eax, 0Bh
0x4722A1: ja      short loc_4722FB
0x4722A3: mov     ecx, ebp
0x4722A5: call    sub_51AED0
0x4722AA: fcomp   dword ptr ds:0A2FAA8h
0x4722B0: fnstsw  ax
0x4722B2: test    ah, 44h
0x4722B5: jp      short loc_4722FB
0x4722B7: mov     edx, [ebx+4]
0x4722BA: mov     eax, [edx+8]
0x4722BD: push    eax
0x4722BE: mov     ecx, ebp
0x4722C0: call    TESAnimGroup_GetAnimationGroup
0x4722C5: lea     eax, [eax+eax*8]
0x4722C8: mov     ecx, ds:0B102E0h[eax*4]
0x4722CF: push    ecx
0x4722D0: mov     ecx, ebp
0x4722D2: call    sub_51AC60
0x4722D7: mov     edx, ds:0B102C8h[eax*4]
0x4722DE: push    edx
0x4722DF: mov     ecx, ebp
0x4722E1: call    sub_51AC50
0x4722E6: mov     eax, ds:0B102B8h[eax*4]
0x4722ED: push    eax; ArgList
0x4722EE: push    offset aAnimgroupSSSFo; "AnimGroup '%s%s%s' for '%s' was exporte"...
0x4722F3: call    PrintError
0x4722F8: add     esp, 14h
0x4722FB: mov     ecx, [esp+88h+var_C]
0x4722FF: mov     large fs:0, ecx
0x472306: pop     ecx
0x472307: pop     edi
0x472308: pop     esi
0x472309: pop     ebp
0x47230A: pop     ebx
0x47230B: add     esp, 74h
0x47230E: retn    4
