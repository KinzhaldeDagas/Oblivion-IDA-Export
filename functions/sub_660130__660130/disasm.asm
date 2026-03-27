0x660130: sub     esp, 0E0h
0x660136: fld     dword ptr ds:0B36BC0h
0x66013C: push    ebx
0x66013D: push    esi
0x66013E: fstp    [esp+0E8h+var_DC]
0x660142: push    edi
0x660143: mov     ebx, ecx
0x660145: call    TESObjectREFR_GetAnimData
0x66014A: mov     esi, eax
0x66014C: push    3
0x66014E: mov     ecx, esi
0x660150: call    ActorAnimData_GetAnimGroupFromField8Value
0x660155: movzx   eax, ax
0x660158: push    eax
0x660159: call    sub_51AA00
0x66015E: add     esp, 4
0x660161: push    1
0x660163: mov     ecx, esi
0x660165: mov     edi, eax
0x660167: call    ActorAnimData_GetAnimGroupFromField8Value
0x66016C: movzx   eax, ax
0x66016F: push    eax
0x660170: call    sub_51AA00
0x660175: add     esp, 4
0x660178: mov     ecx, ebx
0x66017A: mov     esi, eax
0x66017C: call    Actor_GetCurrentAction
0x660181: cmp     eax, 3
0x660184: jz      short loc_66018E
0x660186: add     edi, 0FFFFFFEFh
0x660189: cmp     edi, 9
0x66018C: jbe     short loc_6601A2
0x66018E: mov     ecx, ebx
0x660190: call    Actor_GetCurrentAction
0x660195: cmp     eax, 3
0x660198: jz      short loc_6601A8
0x66019A: add     esi, 0FFFFFFDEh
0x66019D: cmp     esi, 5
0x6601A0: ja      short loc_6601A8
0x6601A2: fld1
0x6601A4: fstp    [esp+0ECh+var_DC]
0x6601A8: fld     dword ptr ds:0B14FB4h
0x6601AE: fld     st
0x6601B0: fld     [esp+0ECh+var_DC]
0x6601B4: fld     st
0x6601B6: fucomp  st(2)
0x6601B8: fnstsw  ax
0x6601BA: fstp    st(1)
0x6601BC: test    ah, 44h
0x6601BF: fldz
0x6601C1: jnp     loc_660272
0x6601C7: fld     dword ptr ds:0B36BC8h
0x6601CD: fstp    [esp+0ECh+var_E0]
0x6601D1: fld1
0x6601D3: fucomp  st(2)
0x6601D5: fnstsw  ax
0x6601D7: test    ah, 44h
0x6601DA: jp      short loc_6601E6
0x6601DC: fld     dword ptr ds:0A2FAACh
0x6601E2: fstp    [esp+0ECh+var_E0]
0x6601E6: fld     st(1)
0x6601E8: fsub    st, st(3)
0x6601EA: fld     dword ptr ds:0B33E9Ch
0x6601F0: fdiv    [esp+0ECh+var_E0]
0x6601F4: fmulp   st(1), st
0x6601F6: fstp    [esp+0ECh+var_E0]
0x6601FA: fld     [esp+0ECh+var_E0]
0x6601FE: fld     st
0x660200: faddp   st(4), st
0x660202: fxch    st(3)
0x660204: fstp    dword ptr ds:0B14FB4h
0x66020A: fcom    st(2)
0x66020C: fnstsw  ax
0x66020E: fld     dword ptr ds:0B14FB4h
0x660214: test    ah, 41h
0x660217: jnz     short loc_66023A
0x660219: fcom    st(2)
0x66021B: fnstsw  ax
0x66021D: test    ah, 5
0x660220: jp      short loc_66023A
0x660222: fstp    st(3)
0x660224: fstp    st
0x660226: fstp    st(1)
0x660228: fstp    dword ptr ds:0B14FB4h
0x66022E: fld     dword ptr ds:0B14FB4h
0x660234: fstp    [esp+0ECh+var_DC]
0x660238: jmp     short loc_660278
0x66023A: fxch    st(3)
0x66023C: fcompp
0x66023E: fnstsw  ax
0x660240: test    ah, 41h
0x660243: jnz     short loc_660262
0x660245: fcom    st(1)
0x660247: fnstsw  ax
0x660249: fstp    st(1)
0x66024B: test    ah, 5
0x66024E: jp      short loc_660264
0x660250: fstp    dword ptr ds:0B14FB4h
0x660256: fld     dword ptr ds:0B14FB4h
0x66025C: fstp    [esp+0ECh+var_DC]
0x660260: jmp     short loc_660278
0x660262: fstp    st
0x660264: fstp    st
0x660266: fld     dword ptr ds:0B14FB4h
0x66026C: fstp    [esp+0ECh+var_DC]
0x660270: jmp     short loc_660278
0x660272: fstp    st(1)
0x660274: fstp    st(1)
0x660276: fstp    st
0x660278: mov     eax, [ebx]
0x66027A: mov     edx, [eax+1E0h]
0x660280: mov     ecx, ebx
0x660282: call    edx
0x660284: fstp    [esp+0ECh+var_E0]
0x660288: mov     eax, [ebx]
0x66028A: mov     edx, [eax+380h]
0x660290: mov     ecx, ebx
0x660292: call    edx
0x660294: test    eax, eax
0x660296: jz      short loc_6602B4
0x660298: mov     ecx, [ebx+58h]
0x66029B: mov     eax, [ecx]
0x66029D: mov     edx, [eax+36Ch]
0x6602A3: call    edx
0x6602A5: cmp     eax, 4
0x6602A8: jnz     short loc_6602B4
0x6602AA: fld     dword ptr [ebx+61Ch]
0x6602B0: fstp    [esp+0ECh+var_E0]
0x6602B4: fld     [esp+0ECh+var_E0]
0x6602B8: push    ecx
0x6602B9: lea     ecx, [esp+0F0h+var_C0]
0x6602BD: fstp    [esp+0F0h+var_F0]; float
0x6602C0: call    NiMatrix33_InitRotationTransform
0x6602C5: mov     ecx, ebx
0x6602C7: call    sub_4A9720
0x6602CC: push    ecx
0x6602CD: lea     ecx, [esp+0F0h+var_48]
0x6602D4: fstp    [esp+0F0h+var_F0]; float
0x6602D7: call    NiMatrix33_InitRotationTransposedTransform???
0x6602DC: lea     eax, [esp+0ECh+var_48]
0x6602E3: push    eax
0x6602E4: lea     ecx, [esp+0F0h+var_24]
0x6602EB: push    ecx
0x6602EC: lea     ecx, [esp+0F4h+var_C0]
0x6602F0: call    NiMAtrix33_Multiply
0x6602F5: fldz
0x6602F7: mov     esi, eax
0x6602F9: mov     ecx, 9
0x6602FE: lea     edi, [esp+0ECh+var_C0]
0x660302: rep movsd
0x660304: fst     [esp+0ECh+var_D8]
0x660308: fld1
0x66030A: fstp    [esp+0ECh+var_D4]
0x66030E: fstp    [esp+0ECh+var_D0]
0x660312: lea     edx, [esp+0ECh+var_D8]
0x660316: push    edx
0x660317: lea     eax, [esp+0F0h+var_78]
0x66031B: push    eax
0x66031C: lea     ecx, [esp+0F4h+var_C0]
0x660320: call    sub_7101F0
0x660325: mov     ecx, [eax]
0x660327: mov     [esp+0ECh+var_D8], ecx
0x66032B: mov     edx, [eax+4]
0x66032E: fld     [esp+0ECh+var_D8]
0x660332: mov     [esp+0ECh+var_D4], edx
0x660336: mov     ecx, [eax+8]
0x660339: mov     [esp+0ECh+var_D0], ecx
0x66033D: mov     edx, [eax]
0x66033F: mov     ecx, [eax+4]
0x660342: mov     [esp+0ECh+var_CC], edx
0x660346: fmul    [esp+0ECh+var_CC]
0x66034A: mov     edx, [eax+8]
0x66034D: fld     [esp+0ECh+var_D4]
0x660351: mov     [esp+0ECh+var_C8], ecx
0x660355: fmul    [esp+0ECh+var_C8]
0x660359: mov     [esp+0ECh+var_C4], edx
0x66035D: faddp   st(1), st
0x66035F: fld     [esp+0ECh+var_D0]
0x660363: fmul    qword ptr ds:0A2FC68h
0x660369: faddp   st(1), st
0x66036B: fstp    [esp+0ECh+var_E0]
0x66036F: fld     dword ptr ds:0A30634h
0x660375: fld     [esp+0ECh+var_E0]
0x660379: fcom    st(1)
0x66037B: fnstsw  ax
0x66037D: test    ah, 5
0x660380: jp      short loc_66038A
0x660382: fstp    st
0x660384: fstp    [esp+0ECh+var_E0]
0x660388: jmp     short loc_6603A1
0x66038A: fstp    st(1)
0x66038C: fld1
0x66038E: fcom    st(1)
0x660390: fnstsw  ax
0x660392: fstp    st(1)
0x660394: test    ah, 5
0x660397: jp      short loc_66039F
0x660399: fstp    [esp+0ECh+var_E0]
0x66039D: jmp     short loc_6603A1
0x66039F: fstp    st
0x6603A1: fld     [esp+0ECh+var_E0]
0x6603A5: call    __CIacos
0x6603AA: fstp    [esp+0ECh+var_E0]
0x6603AE: fld     [esp+0ECh+var_E0]
0x6603B2: fld     [esp+0ECh+var_DC]
0x6603B6: fld1
0x6603B8: fsubrp  st(1), st
0x6603BA: fmulp   st(1), st
0x6603BC: fstp    [esp+0ECh+var_E0]
0x6603C0: fldz
0x6603C2: fcomp   [esp+0ECh+var_D0]
0x6603C6: fnstsw  ax
0x6603C8: test    ah, 41h
0x6603CB: jnz     short loc_6603DB
0x6603CD: fld     [esp+0ECh+var_E0]
0x6603D1: fmul    qword ptr ds:0A3D360h
0x6603D7: fstp    [esp+0ECh+var_E0]
0x6603DB: fld     [esp+0ECh+var_E0]
0x6603DF: push    ecx
0x6603E0: lea     ecx, [esp+0F0h+var_6C]
0x6603E7: fstp    [esp+0F0h+var_F0]; float
0x6603EA: call    NiMatrix33_InitRotationTransposedTransform???
0x6603EF: mov     ecx, 9
0x6603F4: lea     esi, [esp+0ECh+var_C0]
0x6603F8: lea     edi, [esp+0ECh+var_9C]
0x6603FC: rep movsd
0x6603FE: lea     eax, [esp+0ECh+var_6C]
0x660405: push    eax
0x660406: lea     ecx, [esp+0F0h+var_24]
0x66040D: push    ecx
0x66040E: lea     ecx, [esp+0F4h+var_9C]
0x660412: call    NiMAtrix33_Multiply
0x660417: mov     ecx, 9
0x66041C: mov     esi, eax
0x66041E: lea     edi, [esp+0ECh+var_9C]
0x660422: rep movsd
0x660424: mov     edi, [ebx+5D0h]
0x66042A: add     edi, 30h ; '0'
0x66042D: mov     ecx, 9
0x660432: lea     esi, [esp+0ECh+var_9C]
0x660436: rep movsd
0x660438: pop     edi
0x660439: pop     esi
0x66043A: pop     ebx
0x66043B: add     esp, 0E0h
0x660441: retn
