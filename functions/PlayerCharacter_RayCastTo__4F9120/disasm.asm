0x4F9120: push    ebp
0x4F9121: mov     ebp, esp
0x4F9123: and     esp, 0FFFFFFF0h
0x4F9126: push    0FFFFFFFFh
0x4F9128: push    offset PlayerCharacter_RayCastTo_SEH
0x4F912D: mov     eax, large fs:0
0x4F9133: push    eax
0x4F9134: sub     esp, 128h
0x4F913A: mov     eax, ds:0B30AACh
0x4F913F: xor     eax, esp
0x4F9141: mov     [esp+134h+var_14], eax
0x4F9148: push    ebx
0x4F9149: push    esi
0x4F914A: push    edi
0x4F914B: mov     eax, ds:0B30AACh
0x4F9150: xor     eax, esp
0x4F9152: push    eax
0x4F9153: lea     eax, [esp+144h+var_C]
0x4F915A: mov     large fs:0, eax
0x4F9160: mov     edi, [ebp+arg_0]
0x4F9163: fldz
0x4F9165: test    edi, edi
0x4F9167: mov     ebx, [ebp+arg_C]
0x4F916A: mov     esi, [ebp+arg_4]
0x4F916D: fstp    qword ptr [ebx]
0x4F916F: mov     [esp+144h+var_11C], edi
0x4F9173: mov     [esp+144h+var_120], ebx
0x4F9177: jz      loc_4F9400
0x4F917D: mov     eax, [edi]
0x4F917F: mov     edx, [eax+190h]
0x4F9185: mov     ecx, edi
0x4F9187: call    edx
0x4F9189: test    al, al
0x4F918B: jz      loc_4F9400
0x4F9191: test    esi, esi
0x4F9193: jz      loc_4F9400
0x4F9199: cmp     edi, ds:0B333C4h
0x4F919F: jnz     loc_4F93C6
0x4F91A5: mov     eax, [esi]
0x4F91A7: mov     edx, [eax+154h]
0x4F91AD: mov     ecx, esi
0x4F91AF: call    edx
0x4F91B1: test    eax, eax
0x4F91B3: jz      loc_4F9391
0x4F91B9: mov     ebx, ds:0B333CCh
0x4F91BF: mov     ecx, ebx; this
0x4F91C1: call    SceneGraph_GetChildNiAvNodeVtbl
0x4F91C6: mov     ebx, [ebx+0DCh]
0x4F91CC: mov     edi, eax
0x4F91CE: mov     eax, [esi]
0x4F91D0: mov     edx, [eax+154h]
0x4F91D6: mov     ecx, esi
0x4F91D8: call    edx
0x4F91DA: push    eax
0x4F91DB: push    offset dword_B3FAB0
0x4F91E0: call    NiRTTI_Cast
0x4F91E5: push    ebx
0x4F91E6: push    eax
0x4F91E7: call    sub_47F7B0
0x4F91EC: add     esp, 10h
0x4F91EF: test    al, al
0x4F91F1: jz      loc_4F9389
0x4F91F7: mov     ecx, [edi+58h]
0x4F91FA: mov     eax, [edi+54h]
0x4F91FD: mov     edx, [edi+5Ch]
0x4F9200: mov     [esp+144h+a2.y], ecx
0x4F9204: lea     ecx, [esp+144h+var_F0]; this
0x4F9208: mov     [esp+144h+a2.x], eax
0x4F920C: mov     [esp+144h+a2.z], edx
0x4F9210: call    bhkWorldRayCastData__Init
0x4F9215: mov     eax, [esi]
0x4F9217: mov     edx, [eax+188h]
0x4F921D: mov     ecx, esi
0x4F921F: xor     ebx, ebx
0x4F9221: xor     edi, edi
0x4F9223: call    edx
0x4F9225: test    al, al
0x4F9227: jz      short loc_4F922B
0x4F9229: mov     edi, esi
0x4F922B: push    edi; a3
0x4F922C: push    1Ah; a2
0x4F922E: lea     ecx, [esp+14Ch+var_70]; this
0x4F9235: call    sub_535A00
0x4F923A: mov     edx, [esi]
0x4F923C: lea     eax, [esp+144h+var_70]
0x4F9243: mov     [esp+144h+var_F0.RayHitCollector1], eax
0x4F924A: mov     eax, [edx+174h]
0x4F9250: mov     ecx, esi
0x4F9252: mov     [esp+144h+var_4], ebx
0x4F9259: mov     [esp+144h+var_F0.RayHitCollector2], ebx
0x4F9260: call    eax
0x4F9262: mov     ecx, [eax]
0x4F9264: mov     edx, [eax+4]
0x4F9267: mov     eax, [eax+8]
0x4F926A: mov     [esp+144h+var_118.x], ecx
0x4F926E: lea     ecx, [esp+144h+a2]
0x4F9272: push    ecx; a2
0x4F9273: lea     ecx, [esp+148h+var_F0]; this
0x4F9277: mov     [esp+148h+var_118.y], edx
0x4F927B: mov     [esp+148h+var_118.z], eax
0x4F927F: call    bhkWorldRayCastData__SetCastInputFrom
0x4F9284: mov     ecx, ds:0B333C4h
0x4F928A: lea     edx, [esp+144h+var_10C]
0x4F928E: push    edx
0x4F928F: call    sub_65ABE0
0x4F9294: mov     eax, [esp+144h+var_10C]
0x4F9298: mov     edx, [esi]
0x4F929A: mov     edx, [edx+15Ch]
0x4F92A0: and     eax, 0FFFF001Ah
0x4F92A5: or      eax, 1Ah
0x4F92A8: mov     [esp+144h+var_F0.WorldRayCastInput.FilterInfo], eax
0x4F92AC: lea     eax, [esp+144h+var_FC]
0x4F92B0: push    eax
0x4F92B1: mov     ecx, esi
0x4F92B3: call    edx
0x4F92B5: fld     dword ptr [eax+8]
0x4F92B8: mov     eax, [esi]
0x4F92BA: fstp    qword ptr [esp+144h+a2.x]
0x4F92BE: mov     edx, [eax+158h]
0x4F92C4: lea     ecx, [esp+144h+var_108]
0x4F92C8: push    ecx
0x4F92C9: mov     ecx, esi
0x4F92CB: call    edx
0x4F92CD: fld     dword ptr [eax+8]
0x4F92D0: fsubr   qword ptr [esp+144h+a2.x]
0x4F92D4: xor     edi, edi
0x4F92D6: fstp    [esp+144h+a2.x]
0x4F92DA: fld     [esp+144h+a2.x]
0x4F92DE: fld     qword ptr ds:0A31C70h
0x4F92E4: fmul    st, st(1)
0x4F92E6: fld     [esp+144h+var_118.z]
0x4F92EA: fld     st
0x4F92EC: faddp   st(2), st
0x4F92EE: fxch    st(1)
0x4F92F0: fstp    [esp+144h+a2.x]
0x4F92F4: fld     st(1)
0x4F92F6: fmul    qword ptr ds:0A2FAA0h
0x4F92FC: fadd    st, st(1)
0x4F92FE: fstp    [esp+144h+a2.y]
0x4F9302: fxch    st(1)
0x4F9304: fmul    qword ptr ds:0A3C770h
0x4F930A: faddp   st(1), st
0x4F930C: fstp    [esp+144h+a2.z]
0x4F9310: fld     [esp+edi*4+144h+a2.x]
0x4F9314: lea     eax, [esp+144h+var_118]
0x4F9318: push    eax; a2
0x4F9319: fstp    [esp+148h+var_118.z]
0x4F931D: lea     ecx, [esp+148h+var_F0]; this
0x4F9321: call    bhkWorldRayCastData__SetCastInputTo
0x4F9326: lea     ecx, [esp+144h+var_F0]
0x4F932A: push    ecx; a2
0x4F932B: mov     ecx, ds:0B333A0h; this
0x4F9331: call    TES__CastRay
0x4F9336: cmp     eax, ebx
0x4F9338: jz      loc_4F93BC
0x4F933E: push    eax
0x4F933F: call    sub_4DC270
0x4F9344: add     esp, 4
0x4F9347: cmp     eax, esi
0x4F9349: jz      short loc_4F93BC
0x4F934B: add     edi, 1
0x4F934E: cmp     edi, 3
0x4F9351: jl      short loc_4F9310
0x4F9353: mov     ecx, [esp+144h+var_11C]; int
0x4F9357: push    ebx; char
0x4F9358: push    ebx; int
0x4F9359: push    1; char
0x4F935B: push    esi; int
0x4F935C: push    ebx; int
0x4F935D: call    sub_5F2820
0x4F9362: mov     ecx, [esp+144h+var_120]
0x4F9366: movzx   eax, al
0x4F9369: mov     [esp+144h+a2.x], eax
0x4F936D: fild    [esp+144h+a2.x]
0x4F9371: fstp    qword ptr [ecx]
0x4F9373: mov     [esp+144h+var_4], 0FFFFFFFFh
0x4F937E: mov     [esp+144h+var_70], offset ??_7hkRayHitCollector@@6B@; const hkRayHitCollector::`vftable'
0x4F9389: mov     edi, [esp+144h+var_11C]
0x4F938D: mov     ebx, [esp+144h+var_120]
0x4F9391: cmp     byte ptr ds:0B361ACh, 0
0x4F9398: jz      short loc_4F9400
0x4F939A: fldz
0x4F939C: mov     ecx, esi; this
0x4F939E: fcomp   qword ptr [ebx]
0x4F93A0: fnstsw  ax
0x4F93A2: test    ah, 44h
0x4F93A5: jnp     short loc_4F93E5
0x4F93A7: call    TESObjectREFR_GetName
0x4F93AC: push    eax
0x4F93AD: mov     ecx, edi; this
0x4F93AF: call    TESObjectREFR_GetName
0x4F93B4: push    eax
0x4F93B5: push    offset aSSeesS; "%s sees %s"
0x4F93BA: jmp     short loc_4F93F8
0x4F93BC: fld1
0x4F93BE: mov     edx, [esp+144h+var_120]
0x4F93C2: fstp    qword ptr [edx]
0x4F93C4: jmp     short loc_4F9373
0x4F93C6: push    0; char
0x4F93C8: push    0; int
0x4F93CA: push    1; char
0x4F93CC: push    esi; int
0x4F93CD: push    0; int
0x4F93CF: mov     ecx, edi; int
0x4F93D1: call    sub_5F2820
0x4F93D6: movzx   edx, al
0x4F93D9: mov     [esp+144h+a2.x], edx
0x4F93DD: fild    [esp+144h+a2.x]
0x4F93E1: fstp    qword ptr [ebx]
0x4F93E3: jmp     short loc_4F9391
0x4F93E5: call    TESObjectREFR_GetName
0x4F93EA: push    eax
0x4F93EB: mov     ecx, edi; this
0x4F93ED: call    TESObjectREFR_GetName
0x4F93F2: push    eax
0x4F93F3: push    offset aSCanTSeeS; "%s can't see %s"
0x4F93F8: call    Interface_ConsolePrint
0x4F93FD: add     esp, 0Ch
0x4F9400: mov     al, 1
0x4F9402: mov     ecx, [esp+144h+var_C]
0x4F9409: mov     large fs:0, ecx
0x4F9410: pop     ecx
0x4F9411: pop     edi
0x4F9412: pop     esi
0x4F9413: pop     ebx
0x4F9414: mov     ecx, [esp+134h+var_14]
0x4F941B: xor     ecx, esp
0x4F941D: call    @__security_check_cookie@4; __security_check_cookie(x)
0x4F9422: mov     esp, ebp
0x4F9424: pop     ebp
0x4F9425: retn
