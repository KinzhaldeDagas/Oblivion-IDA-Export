0x693210: push    0FFFFFFFFh
0x693212: push    offset SEH_6C2790
0x693217: mov     eax, large fs:0
0x69321D: push    eax
0x69321E: sub     esp, 1Ch
0x693221: push    esi
0x693222: push    edi
0x693223: mov     eax, ds:0B30AACh
0x693228: xor     eax, esp
0x69322A: push    eax
0x69322B: lea     eax, [esp+34h+var_C]
0x69322F: mov     large fs:0, eax
0x693235: call    Magic_GetLifeDetectedShader
0x69323A: mov     edi, eax
0x69323C: test    edi, edi
0x69323E: jz      loc_6933F4
0x693244: mov     esi, [esp+34h+arg_0]
0x693248: test    esi, esi
0x69324A: jz      loc_6933F4
0x693250: mov     ecx, ds:0B333C4h
0x693256: cmp     esi, ecx
0x693258: jz      loc_6933F4
0x69325E: cmp     dword ptr [esi+58h], 0
0x693262: jz      loc_6933F4
0x693268: mov     eax, [ecx]
0x69326A: mov     edx, [eax+284h]
0x693270: push    3Ah ; ':'
0x693272: call    edx
0x693274: mov     ecx, ds:0B333C4h
0x69327A: mov     [esp+34h+var_28], eax
0x69327E: fild    [esp+34h+var_28]
0x693282: mov     eax, [ecx]
0x693284: mov     edx, [eax+174h]
0x69328A: fstp    [esp+34h+var_28]
0x69328E: fld     dword ptr ds:0B37DB8h
0x693294: fmul    [esp+34h+var_28]
0x693298: fstp    [esp+34h+var_28]
0x69329C: fld     [esp+34h+var_28]
0x6932A0: fmul    st, st
0x6932A2: fstp    [esp+34h+var_28]
0x6932A6: call    edx
0x6932A8: mov     edx, [eax+4]
0x6932AB: mov     ecx, [eax]
0x6932AD: mov     eax, [eax+8]
0x6932B0: mov     [esp+34h+var_14], edx
0x6932B4: mov     edx, [esi]
0x6932B6: mov     [esp+34h+var_18], ecx
0x6932BA: mov     [esp+34h+var_10], eax
0x6932BE: mov     eax, [edx+174h]
0x6932C4: mov     ecx, esi
0x6932C6: call    eax
0x6932C8: fld     [esp+34h+var_18]
0x6932CC: fsub    dword ptr [eax]
0x6932CE: fstp    [esp+34h+var_20]
0x6932D2: fld     [esp+34h+var_14]
0x6932D6: fsub    dword ptr [eax+4]
0x6932D9: fstp    [esp+34h+var_24]
0x6932DD: fld     [esp+34h+var_10]
0x6932E1: fsub    dword ptr [eax+8]
0x6932E4: fstp    [esp+34h+var_1C]
0x6932E8: fld     [esp+34h+var_24]
0x6932EC: fld     [esp+34h+var_20]
0x6932F0: fld     [esp+34h+var_1C]
0x6932F4: fld     [esp+34h+var_28]
0x6932F8: fld     st(2)
0x6932FA: fmulp   st(3), st
0x6932FC: fld     st(3)
0x6932FE: fmulp   st(4), st
0x693300: fxch    st(2)
0x693302: faddp   st(3), st
0x693304: fmul    st, st
0x693306: faddp   st(2), st
0x693308: fxch    st(1)
0x69330A: fstp    [esp+34h+var_1C]
0x69330E: fld     [esp+34h+var_1C]
0x693312: fcompp
0x693314: fnstsw  ax
0x693316: test    ah, 5
0x693319: jp      loc_6933E1
0x69331F: mov     edx, [esi]
0x693321: mov     eax, [edx+198h]
0x693327: push    0
0x693329: mov     ecx, esi
0x69332B: call    eax
0x69332D: test    al, al
0x69332F: jnz     loc_6933E1
0x693335: mov     ecx, [esi+58h]
0x693338: mov     edx, [ecx]
0x69333A: mov     eax, [edx+8]
0x69333D: call    eax
0x69333F: test    eax, eax
0x693341: jnz     loc_6933E1
0x693347: mov     ecx, [esi+8]
0x69334A: shr     ecx, 0Dh
0x69334D: test    cl, 1
0x693350: jnz     loc_6933E1
0x693356: cmp     [esp+34h+arg_4], al
0x69335A: jnz     short loc_6933CD
0x69335C: push    4Ch ; 'L'; Size
0x69335E: call    FormHeapAlloc
0x693363: add     esp, 4
0x693366: mov     [esp+34h+var_1C], eax
0x69336A: test    eax, eax
0x69336C: mov     [esp+34h+var_4], 0
0x693374: jz      short loc_69338D
0x693376: fld     dword ptr ds:0A30634h
0x69337C: push    ecx
0x69337D: fstp    [esp+38h+var_38]; float
0x693380: push    edi; int
0x693381: push    esi; int
0x693382: mov     ecx, eax
0x693384: call    MagicShaderHitEffect_constr_args2
0x693389: mov     esi, eax
0x69338B: jmp     short loc_69338F
0x69338D: xor     esi, esi
0x69338F: mov     edx, [esi]
0x693391: mov     eax, [edx+68h]
0x693394: mov     ecx, esi
0x693396: mov     [esp+34h+var_4], 0FFFFFFFFh
0x69339E: call    eax
0x6933A0: test    al, al
0x6933A2: jz      short loc_6933C3
0x6933A4: push    esi
0x6933A5: mov     ecx, offset ActorProcessManager_ptr
0x6933AA: call    sub_678D30
0x6933AF: mov     al, 1
0x6933B1: mov     ecx, [esp+34h+var_C]
0x6933B5: mov     large fs:0, ecx
0x6933BC: pop     ecx
0x6933BD: pop     edi
0x6933BE: pop     esi
0x6933BF: add     esp, 28h
0x6933C2: retn
0x6933C3: mov     edx, [esi]
0x6933C5: mov     eax, [edx]
0x6933C7: push    1
0x6933C9: mov     ecx, esi
0x6933CB: call    eax
0x6933CD: mov     al, 1
0x6933CF: mov     ecx, [esp+34h+var_C]
0x6933D3: mov     large fs:0, ecx
0x6933DA: pop     ecx
0x6933DB: pop     edi
0x6933DC: pop     esi
0x6933DD: add     esp, 28h
0x6933E0: retn
0x6933E1: cmp     [esp+34h+arg_4], 0
0x6933E6: jz      short loc_6933F4
0x6933E8: push    edi
0x6933E9: push    esi
0x6933EA: mov     ecx, offset ActorProcessManager_ptr
0x6933EF: call    sub_678E70
0x6933F4: xor     al, al
0x6933F6: mov     ecx, [esp+34h+var_C]
0x6933FA: mov     large fs:0, ecx
0x693401: pop     ecx
0x693402: pop     edi
0x693403: pop     esi
0x693404: add     esp, 28h
0x693407: retn
