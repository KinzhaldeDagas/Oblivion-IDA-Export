0x6B07F0: sub     esp, 12Ch
0x6B07F6: mov     eax, ds:0B30AACh
0x6B07FB: xor     eax, esp
0x6B07FD: mov     [esp+12Ch+var_4], eax
0x6B0804: mov     eax, ds:0B3C20Ch
0x6B0809: cmp     eax, ds:0B16304h
0x6B080F: push    ebp
0x6B0810: mov     ebp, [esp+130h+arg_0]
0x6B0817: jnb     loc_6B0BAF
0x6B081D: cmp     dword ptr ds:0B3C0F0h, 0
0x6B0824: jnz     short loc_6B0835
0x6B0826: mov     ecx, ds:0B33398h
0x6B082C: mov     edx, [ecx+24h]
0x6B082F: mov     ds:0B3C0F0h, edx
0x6B0835: mov     eax, [ebp+0]
0x6B0838: mov     edx, [eax+174h]
0x6B083E: mov     ecx, ebp
0x6B0840: call    edx
0x6B0842: fld     dword ptr ds:0B162FCh
0x6B0848: cmp     byte ptr ds:0B333B8h, 0
0x6B084F: fstp    [esp+130h+var_118]
0x6B0853: mov     ecx, [eax]
0x6B0855: mov     edx, [eax+4]
0x6B0858: mov     eax, [eax+8]
0x6B085B: mov     [esp+130h+var_114], ecx
0x6B085F: mov     [esp+130h+var_110], edx
0x6B0863: mov     [esp+130h+var_10C], eax
0x6B0867: jz      short loc_6B0877
0x6B0869: fld     [esp+130h+var_118]
0x6B086D: fmul    qword ptr ds:0A2FAA0h
0x6B0873: fstp    [esp+130h+var_118]
0x6B0877: mov     eax, ds:0B3C0F0h
0x6B087C: fld     dword ptr [eax+80h]
0x6B0882: fstp    [esp+130h+var_124]
0x6B0886: fld     dword ptr [eax+84h]
0x6B088C: fstp    [esp+130h+var_120]
0x6B0890: fld     dword ptr [eax+88h]
0x6B0896: fstp    [esp+130h+var_11C]
0x6B089A: fld     [esp+130h+var_124]
0x6B089E: fsub    [esp+130h+var_114]
0x6B08A2: fstp    [esp+130h+var_124]
0x6B08A6: fld     [esp+130h+var_120]
0x6B08AA: fsub    [esp+130h+var_110]
0x6B08AE: fstp    [esp+130h+var_120]
0x6B08B2: fld     [esp+130h+var_11C]
0x6B08B6: fsub    [esp+130h+var_10C]
0x6B08BA: fstp    [esp+130h+var_11C]
0x6B08BE: fld     [esp+130h+var_120]
0x6B08C2: fld     [esp+130h+var_124]
0x6B08C6: fld     [esp+130h+var_11C]
0x6B08CA: fld     st(2)
0x6B08CC: fmulp   st(3), st
0x6B08CE: fld     st(1)
0x6B08D0: fmulp   st(2), st
0x6B08D2: fxch    st(2)
0x6B08D4: faddp   st(1), st
0x6B08D6: fld     st(1)
0x6B08D8: fmulp   st(2), st
0x6B08DA: faddp   st(1), st
0x6B08DC: fstp    [esp+130h+var_128]
0x6B08E0: fld     [esp+130h+var_128]
0x6B08E4: call    __CIsqrt
0x6B08E9: fstp    [esp+130h+var_128]
0x6B08ED: fld     [esp+130h+var_128]
0x6B08F1: fld     [esp+130h+var_118]
0x6B08F5: fcompp
0x6B08F7: fnstsw  ax
0x6B08F9: test    ah, 5
0x6B08FC: jnp     loc_6B0BAF
0x6B0902: push    esi
0x6B0903: push    0; int
0x6B0905: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x6B090A: push    offset ??_R0?AVTESObjectREFR@@@8; struct _s_RTTICompleteObjectLocator *
0x6B090F: push    0; int
0x6B0911: push    ebp; void *
0x6B0912: mov     [esp+148h+var_129], 0
0x6B0917: call    OblivionDynamicCast
0x6B091C: mov     esi, eax
0x6B091E: add     esp, 14h
0x6B0921: test    esi, esi
0x6B0923: jz      loc_6B0BAE
0x6B0929: mov     ecx, [esi+58h]
0x6B092C: test    ecx, ecx
0x6B092E: jz      loc_6B0BAE
0x6B0934: mov     edx, [ecx]
0x6B0936: mov     eax, [edx+0ECh]
0x6B093C: push    1
0x6B093E: call    eax
0x6B0940: test    eax, eax
0x6B0942: jz      short loc_6B0949
0x6B0944: mov     eax, [eax+8]
0x6B0947: jmp     short loc_6B094B
0x6B0949: xor     eax, eax
0x6B094B: test    eax, eax
0x6B094D: jz      loc_6B0BAE
0x6B0953: push    edi
0x6B0954: push    0; int
0x6B0956: push    offset ??_R0?AVTESObjectWEAP@@@8; struct TypeDescriptor *
0x6B095B: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x6B0960: push    0; int
0x6B0962: push    eax; void *
0x6B0963: call    OblivionDynamicCast
0x6B0968: mov     edi, eax
0x6B096A: add     esp, 14h
0x6B096D: test    edi, edi
0x6B096F: jz      def_6B0985
0x6B0975: movsx   eax, byte ptr [edi+90h]
0x6B097C: cmp     eax, 5; switch 6 cases
0x6B097F: ja      def_6B0985
0x6B0985: jmp     ds:jpt_6B0985[eax*4]; switch jump
0x6B098C: mov     ecx, ds:0A777D8h; jumptable 006B0985 case 0
0x6B0992: mov     edx, ds:0A777DCh
0x6B0998: mov     eax, ds:0A777E0h
0x6B099D: mov     [esp+13Ch+var_10C], ecx
0x6B09A1: mov     cx, ds:0A777E4h
0x6B09A8: mov     [esp+13Ch+var_108], edx
0x6B09AC: mov     [esp+13Ch+var_104], eax
0x6B09B0: mov     [esp+13Ch+var_100], cx
0x6B09B5: jmp     loc_6B0A81
0x6B09BA: mov     edx, ds:0A777C8h; jumptable 006B0985 case 2
0x6B09C0: mov     ecx, ds:0A777D0h
0x6B09C6: mov     eax, ds:0A777CCh
0x6B09CB: mov     [esp+13Ch+var_10C], edx
0x6B09CF: mov     dx, ds:0A777D4h
0x6B09D6: mov     [esp+13Ch+var_104], ecx
0x6B09DA: mov     [esp+13Ch+var_100], dx
0x6B09DF: jmp     loc_6B0A7D
0x6B09E4: mov     eax, ds:0A777B8h; jumptable 006B0985 case 1
0x6B09E9: mov     ecx, ds:0A777BCh
0x6B09EF: mov     edx, ds:0A777C0h
0x6B09F5: mov     [esp+13Ch+var_10C], eax
0x6B09F9: mov     ax, ds:0A777C4h
0x6B09FF: mov     [esp+13Ch+var_12D], 1
0x6B0A04: mov     [esp+13Ch+var_108], ecx
0x6B0A08: mov     [esp+13Ch+var_104], edx
0x6B0A0C: mov     [esp+13Ch+var_100], ax
0x6B0A11: jmp     short loc_6B0A81
0x6B0A13: mov     ecx, ds:0A777A8h; jumptable 006B0985 case 3
0x6B0A19: mov     edx, ds:0A777ACh
0x6B0A1F: mov     eax, ds:0A777B0h
0x6B0A24: mov     [esp+13Ch+var_10C], ecx
0x6B0A28: mov     cx, ds:0A777B4h
0x6B0A2F: mov     [esp+13Ch+var_12D], 1
0x6B0A34: mov     [esp+13Ch+var_108], edx
0x6B0A38: mov     [esp+13Ch+var_104], eax
0x6B0A3C: mov     [esp+13Ch+var_100], cx
0x6B0A41: jmp     short loc_6B0A81
0x6B0A43: mov     edx, ds:0A777A0h; jumptable 006B0985 case 5
0x6B0A49: mov     ax, ds:0A777A4h
0x6B0A4F: mov     cl, ds:0A777A6h
0x6B0A55: mov     [esp+13Ch+var_10C], edx
0x6B0A59: mov     word ptr [esp+13Ch+var_108], ax
0x6B0A5E: mov     byte ptr [esp+13Ch+var_108+2], cl
0x6B0A62: jmp     short loc_6B0A81
0x6B0A64: mov     edx, ds:0A77794h; jumptable 006B0985 case 4
0x6B0A6A: mov     cl, ds:0A7779Ch
0x6B0A70: mov     eax, ds:0A77798h
0x6B0A75: mov     [esp+13Ch+var_10C], edx
0x6B0A79: mov     byte ptr [esp+13Ch+var_104], cl
0x6B0A7D: mov     [esp+13Ch+var_108], eax
0x6B0A81: mov     eax, [esp+13Ch+arg_0]
0x6B0A88: sub     eax, 9
0x6B0A8B: jz      short loc_6B0ABD
0x6B0A8D: sub     eax, 1
0x6B0A90: jnz     short loc_6B0AE1
0x6B0A92: lea     eax, [esp+13Ch+var_10C]
0x6B0A96: add     eax, 0FFFFFFFFh
0x6B0A99: lea     esp, [esp+0]
0x6B0AA0: mov     cl, [eax+1]
0x6B0AA3: add     eax, 1
0x6B0AA6: test    cl, cl
0x6B0AA8: jnz     short loc_6B0AA0
0x6B0AAA: mov     edx, ds:0A43C10h
0x6B0AB0: mov     ecx, ds:0A43C14h
0x6B0AB6: mov     [eax], edx
0x6B0AB8: mov     [eax+4], ecx
0x6B0ABB: jmp     short loc_6B0AE1
0x6B0ABD: lea     eax, [esp+13Ch+var_10C]
0x6B0AC1: add     eax, 0FFFFFFFFh
0x6B0AC4: mov     cl, [eax+1]
0x6B0AC7: add     eax, 1
0x6B0ACA: test    cl, cl
0x6B0ACC: jnz     short loc_6B0AC4
0x6B0ACE: mov     edx, ds:0A528E4h
0x6B0AD4: mov     cx, ds:0A528E8h
0x6B0ADB: mov     [eax], edx
0x6B0ADD: mov     [eax+4], cx
0x6B0AE1: push    ebx
0x6B0AE2: mov     ecx, esi
0x6B0AE4: call    Actor_IsSneaking
0x6B0AE9: mov     ecx, ds:0B3C0F0h
0x6B0AEF: test    ecx, ecx
0x6B0AF1: mov     bl, al
0x6B0AF3: jz      loc_6B0BAC
0x6B0AF9: push    1
0x6B0AFB: push    4102h
0x6B0B00: lea     edx, [esp+148h+var_10C]
0x6B0B04: push    edx
0x6B0B05: call    PlaySound???
0x6B0B0A: mov     esi, eax
0x6B0B0C: test    esi, esi
0x6B0B0E: jz      loc_6B0BAC
0x6B0B14: fld     [esp+140h+var_110]
0x6B0B18: sub     esp, 0Ch
0x6B0B1B: fstp    [esp+14Ch+var_144]; float
0x6B0B1F: mov     ecx, esi
0x6B0B21: fld     [esp+14Ch+var_114]
0x6B0B25: fstp    [esp+14Ch+var_148]; float
0x6B0B29: fld     [esp+14Ch+var_118]
0x6B0B2D: fstp    [esp+14Ch+var_14C]; float
0x6B0B30: call    sub_6B7360
0x6B0B35: mov     eax, [esi]
0x6B0B37: mov     ecx, ds:0B3C0F0h
0x6B0B3D: push    ebp
0x6B0B3E: push    eax
0x6B0B3F: call    sub_6AC3E0
0x6B0B44: cmp     [esp+140h+var_12D], 0
0x6B0B49: jnz     short loc_6B0B7A
0x6B0B4B: fld     dword ptr [edi+98h]
0x6B0B51: push    ecx
0x6B0B52: fld1
0x6B0B54: mov     ecx, esi
0x6B0B56: fld     st
0x6B0B58: fsubrp  st(2), st
0x6B0B5A: fxch    st(1)
0x6B0B5C: fmul    qword ptr ds:0A2FAA0h
0x6B0B62: fadd    dword ptr [edi+98h]
0x6B0B68: fdivp   st(1), st
0x6B0B6A: fstp    dword ptr [esp+18h]
0x6B0B6E: fld     dword ptr [esp+18h]
0x6B0B72: fstp    [esp+144h+var_144]; float
0x6B0B75: call    sub_6B7310
0x6B0B7A: test    bl, bl
0x6B0B7C: push    ecx
0x6B0B7D: mov     ecx, esi
0x6B0B7F: jz      short loc_6B0B89
0x6B0B81: fld     dword ptr ds:0A47E6Ch
0x6B0B87: jmp     short loc_6B0B8B
0x6B0B89: fld1
0x6B0B8B: fstp    [esp+144h+var_144]; float
0x6B0B8E: call    sub_6B7280
0x6B0B93: push    0
0x6B0B95: mov     ecx, esi
0x6B0B97: call    sub_6B7190
0x6B0B9C: mov     ecx, esi; this
0x6B0B9E: call    sub_6B73E0
0x6B0BA3: push    esi
0x6B0BA4: call    FormHeapFree
0x6B0BA9: add     esp, 4
0x6B0BAC: pop     ebx
