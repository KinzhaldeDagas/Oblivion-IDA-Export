0x68A300: sub     esp, 30h
0x68A303: push    ebx
0x68A304: push    ebp
0x68A305: push    esi
0x68A306: mov     esi, [esp+3Ch+arg_0]
0x68A30A: test    esi, esi
0x68A30C: push    edi
0x68A30D: mov     ebx, ecx
0x68A30F: jz      loc_68A6CA
0x68A315: fldz
0x68A317: fcomp   [esp+40h+arg_4]
0x68A31B: fnstsw  ax
0x68A31D: test    ah, 1
0x68A320: jz      loc_68A6CA
0x68A326: mov     ecx, esi
0x68A328: call    IsWeaponReady
0x68A32D: test    al, al
0x68A32F: jz      loc_68A6CA
0x68A335: mov     eax, [esi]
0x68A337: mov     edx, [eax+380h]
0x68A33D: mov     ecx, esi
0x68A33F: call    edx
0x68A341: test    eax, eax
0x68A343: jz      short loc_68A360
0x68A345: mov     eax, [esi]
0x68A347: mov     edx, [eax+380h]
0x68A34D: mov     ecx, esi
0x68A34F: call    edx
0x68A351: mov     ecx, eax
0x68A353: call    IsWeaponReady
0x68A358: test    al, al
0x68A35A: jz      loc_68A6CA
0x68A360: mov     ecx, [ebx+4]
0x68A363: test    ecx, ecx
0x68A365: jz      short loc_68A370
0x68A367: call    sub_68B110
0x68A36C: mov     edi, eax
0x68A36E: jmp     short loc_68A375
0x68A370: mov     edi, offset Vector3_InitValue?
0x68A375: mov     eax, [esi]
0x68A377: mov     edx, [eax+174h]
0x68A37D: mov     ecx, esi
0x68A37F: call    edx
0x68A381: fld     dword ptr [edi]
0x68A383: fsub    dword ptr [eax]
0x68A385: mov     ecx, esi
0x68A387: fstp    [esp+40h+var_18]
0x68A38B: fld     dword ptr [edi+4]
0x68A38E: fsub    dword ptr [eax+4]
0x68A391: fstp    [esp+40h+var_14]
0x68A395: fld     dword ptr [edi+8]
0x68A398: fsub    dword ptr [eax+8]
0x68A39B: fstp    [esp+40h+var_10]
0x68A39F: call    sub_5E65B0
0x68A3A4: fmul    dword ptr ds:0B3A4C8h
0x68A3AA: fstp    [esp+40h+var_30]
0x68A3AE: fld     [esp+40h+var_14]
0x68A3B2: fld     [esp+40h+var_18]
0x68A3B6: fld     [esp+40h+var_10]
0x68A3BA: fld     st(1)
0x68A3BC: fmulp   st(2), st
0x68A3BE: fld     st(2)
0x68A3C0: fmulp   st(3), st
0x68A3C2: fxch    st(1)
0x68A3C4: faddp   st(2), st
0x68A3C6: fmul    st, st
0x68A3C8: faddp   st(1), st
0x68A3CA: fstp    [esp+40h+arg_0]
0x68A3CE: fld     [esp+40h+arg_0]
0x68A3D2: call    __CIsqrt
0x68A3D7: fstp    [esp+40h+arg_0]
0x68A3DB: fld     [esp+40h+arg_0]
0x68A3DF: fdiv    [esp+40h+var_30]
0x68A3E3: fstp    [esp+40h+arg_0]
0x68A3E7: fld     [esp+40h+arg_4]
0x68A3EB: fld     [esp+40h+arg_0]
0x68A3EF: fcompp
0x68A3F1: fnstsw  ax
0x68A3F3: test    ah, 5
0x68A3F6: jp      short loc_68A428
0x68A3F8: mov     ecx, [ebx+4]
0x68A3FB: test    ecx, ecx
0x68A3FD: jz      short loc_68A406
0x68A3FF: call    sub_68B110
0x68A404: jmp     short loc_68A40B
0x68A406: mov     eax, offset Vector3_InitValue?
0x68A40B: mov     ecx, [eax]
0x68A40D: fld     [esp+40h+arg_4]
0x68A411: fsub    [esp+40h+arg_0]
0x68A415: mov     [esp+40h+var_24], ecx
0x68A419: mov     edx, [eax+4]
0x68A41C: mov     [esp+40h+var_20], edx
0x68A420: mov     eax, [eax+8]
0x68A423: jmp     loc_68A4BD
0x68A428: lea     ecx, [esp+40h+var_18]
0x68A42C: call    sub_43F350
0x68A431: fstp    st
0x68A433: fld     [esp+40h+var_18]
0x68A437: mov     edx, [esi]
0x68A439: fld     [esp+40h+var_30]
0x68A43D: mov     eax, [edx+174h]
0x68A443: fld     st
0x68A445: mov     ecx, esi
0x68A447: fmulp   st(2), st
0x68A449: fxch    st(1)
0x68A44B: fstp    [esp+40h+var_C]
0x68A44F: fld     [esp+40h+var_14]
0x68A453: fmul    st, st(1)
0x68A455: fstp    [esp+40h+var_8]
0x68A459: fmul    [esp+40h+var_10]
0x68A45D: fstp    [esp+40h+var_4]
0x68A461: fld     [esp+40h+var_C]
0x68A465: fld     [esp+40h+arg_4]
0x68A469: fld     st
0x68A46B: fmulp   st(2), st
0x68A46D: fxch    st(1)
0x68A46F: fstp    [esp+40h+var_18]
0x68A473: fld     [esp+40h+var_8]
0x68A477: fmul    st, st(1)
0x68A479: fstp    [esp+40h+var_14]
0x68A47D: fmul    [esp+40h+var_4]
0x68A481: fstp    [esp+40h+var_10]
0x68A485: call    eax
0x68A487: fld     [esp+40h+var_18]
0x68A48B: fadd    dword ptr [eax]
0x68A48D: fstp    [esp+40h+var_C]
0x68A491: mov     ecx, [esp+40h+var_C]
0x68A495: fld     dword ptr [eax+4]
0x68A498: fadd    [esp+40h+var_14]
0x68A49C: fstp    [esp+40h+var_8]
0x68A4A0: mov     edx, [esp+40h+var_8]
0x68A4A4: fld     dword ptr [eax+8]
0x68A4A7: mov     [esp+40h+var_24], ecx
0x68A4AB: fadd    [esp+40h+var_10]
0x68A4AF: mov     [esp+40h+var_20], edx
0x68A4B3: fstp    [esp+40h+var_4]
0x68A4B7: mov     eax, [esp+40h+var_4]
0x68A4BB: fldz
0x68A4BD: mov     ecx, esi; this
0x68A4BF: fstp    [esp+40h+var_28]
0x68A4C3: mov     [esp+40h+var_1C], eax
0x68A4C7: call    TESObjectREFR_GetParentCell
0x68A4CC: mov     ebp, eax
0x68A4CE: test    ebp, ebp
0x68A4D0: jz      short loc_68A4E1
0x68A4D2: mov     ecx, ebp; this
0x68A4D4: call    TESObjectCELL_IsInterior
0x68A4D9: test    al, al
0x68A4DB: jnz     loc_68A615
0x68A4E1: mov     edx, [esi]
0x68A4E3: mov     eax, [edx+174h]
0x68A4E9: mov     ecx, esi
0x68A4EB: xor     bl, bl
0x68A4ED: call    eax
0x68A4EF: fld     dword ptr [eax]
0x68A4F1: fstp    [esp+40h+arg_4]
0x68A4F5: fld     [esp+40h+arg_4]
0x68A4F9: fistp   [esp+40h+arg_0]
0x68A4FD: fld     [esp+40h+var_24]
0x68A501: fistp   [esp+40h+arg_4]
0x68A505: mov     edx, [esi]
0x68A507: mov     eax, [edx+174h]
0x68A50D: mov     ecx, esi
0x68A50F: call    eax
0x68A511: fld     dword ptr [eax+4]
0x68A514: fstp    [esp+40h+var_30]
0x68A518: fld     [esp+40h+var_30]
0x68A51C: fistp   [esp+40h+var_2C]
0x68A520: fld     [esp+40h+var_20]
0x68A524: fistp   [esp+40h+var_30]
0x68A528: mov     ecx, [esp+40h+arg_4]
0x68A52C: xor     ecx, [esp+40h+arg_0]
0x68A530: test    ecx, 0FFFFF000h
0x68A536: jnz     short loc_68A548
0x68A538: mov     edx, [esp+40h+var_30]
0x68A53C: xor     edx, [esp+40h+var_2C]
0x68A540: test    edx, 0FFFFF000h
0x68A546: jz      short loc_68A54A
0x68A548: mov     bl, 1
0x68A54A: test    ebp, ebp
0x68A54C: jnz     short loc_68A576
0x68A54E: push    ebp; int
0x68A54F: mov     ecx, esi; this
0x68A551: call    TESObjectREFR_GetWorldSpace
0x68A556: fld     [esp+44h+var_20]
0x68A55A: mov     ecx, ds:0B33A98h
0x68A560: push    eax; int
0x68A561: sub     esp, 8
0x68A564: fstp    [esp+50h+a2]; float
0x68A568: fld     [esp+50h+var_24]
0x68A56C: fstp    [esp+50h+var_50]; float
0x68A56F: call    sub_44A270
0x68A574: mov     ebp, eax
0x68A576: test    bl, bl
0x68A578: jz      loc_68A615
0x68A57E: mov     ecx, ds:0B333A0h
0x68A584: cmp     dword ptr [ecx+34h], 0
0x68A588: jnz     loc_68A615
0x68A58E: call    TES__GetCurrentWorldspace
0x68A593: mov     ecx, esi; this
0x68A595: mov     edi, eax
0x68A597: call    TESObjectREFR_GetWorldSpace
0x68A59C: cmp     edi, eax
0x68A59E: jnz     short loc_68A615
0x68A5A0: fld     dword ptr ds:0A427E4h
0x68A5A6: mov     edx, [esi]
0x68A5A8: push    ecx
0x68A5A9: fstp    [esp+44h+var_44]; float
0x68A5AC: lea     eax, [esp+44h+var_C]
0x68A5B0: push    eax; int
0x68A5B1: mov     eax, [edx+174h]
0x68A5B7: lea     ecx, [esp+48h+var_24]
0x68A5BB: push    ecx; int
0x68A5BC: mov     ecx, esi
0x68A5BE: call    eax
0x68A5C0: mov     ecx, ds:0B333A0h
0x68A5C6: push    eax; int
0x68A5C7: call    sub_43F7C0
0x68A5CC: test    eax, eax
0x68A5CE: jz      short loc_68A615
0x68A5D0: mov     ecx, ds:0B333A0h
0x68A5D6: push    0; a4
0x68A5D8: call    TES__GetCurrentWorldspace
0x68A5DD: fld     [esp+44h+var_8]
0x68A5E1: mov     ecx, ds:0B33A98h
0x68A5E7: push    eax; a4
0x68A5E8: sub     esp, 8
0x68A5EB: fstp    [esp+50h+a2]; a3
0x68A5EF: fld     [esp+50h+var_C]
0x68A5F3: fstp    [esp+50h+var_50]; a2
0x68A5F6: call    sub_44A270
0x68A5FB: mov     ecx, [esp+40h+var_C]
0x68A5FF: mov     edx, [esp+40h+var_8]
0x68A603: mov     ebp, eax
0x68A605: mov     eax, [esp+40h+var_4]
0x68A609: mov     [esp+40h+var_24], ecx
0x68A60D: mov     [esp+40h+var_20], edx
0x68A611: mov     [esp+40h+var_1C], eax
0x68A615: mov     edx, [esi]
0x68A617: mov     eax, [edx+380h]
0x68A61D: mov     ecx, esi
0x68A61F: call    eax
0x68A621: mov     ecx, [esp+40h+var_24]
0x68A625: mov     edx, [esp+40h+var_20]
0x68A629: sub     esp, 0Ch
0x68A62C: mov     edi, eax
0x68A62E: mov     eax, esp
0x68A630: mov     [eax], ecx
0x68A632: mov     ecx, [esp+4Ch+var_1C]
0x68A636: mov     [eax+4], edx
0x68A639: mov     [eax+8], ecx
0x68A63C: mov     ecx, esi; this
0x68A63E: call    TESObjectREFR_SetPosition
0x68A643: fld     dword ptr ds:0A32048h
0x68A649: push    ecx
0x68A64A: mov     ecx, esi
0x68A64C: fstp    [esp+44h+var_44]; float
0x68A64F: call    sub_4D89D0
0x68A654: test    edi, edi
0x68A656: jz      short loc_68A689
0x68A658: mov     edx, [esp+44h+var_28]
0x68A65C: mov     ecx, [esp+44h+var_24]
0x68A660: sub     esp, 0Ch
0x68A663: mov     eax, esp
0x68A665: mov     [eax], edx
0x68A667: mov     edx, [esp+50h+var_20]
0x68A66B: mov     [eax+4], ecx
0x68A66E: mov     ecx, edi; this
0x68A670: mov     [eax+8], edx
0x68A673: call    TESObjectREFR_SetPosition
0x68A678: fld     dword ptr ds:0A32048h
0x68A67E: push    ecx
0x68A67F: mov     ecx, edi
0x68A681: fstp    [esp+48h+var_48]; float
0x68A684: call    sub_4D89D0
0x68A689: mov     ecx, esi; this
0x68A68B: call    TESObjectREFR_GetParentCell
0x68A690: cmp     ebp, eax
0x68A692: jz      short loc_68A6BC
0x68A694: test    edi, edi
0x68A696: jz      short loc_68A6AA
0x68A698: mov     ecx, edi; this
0x68A69A: call    TESObjectREFR_GetWorldSpace
0x68A69F: push    eax; int
0x68A6A0: push    ebp; int
0x68A6A1: push    edi; Concurrency::details::SchedulerBase *
0x68A6A2: call    sub_4DD4B0
0x68A6A7: add     esp, 0Ch
0x68A6AA: mov     ecx, esi; this
0x68A6AC: call    TESObjectREFR_GetWorldSpace
0x68A6B1: push    eax; int
0x68A6B2: push    ebp; int
0x68A6B3: push    esi; Concurrency::details::SchedulerBase *
0x68A6B4: call    sub_4DD4B0
0x68A6B9: add     esp, 0Ch
0x68A6BC: fld     [esp+48h+var_30]
0x68A6C0: pop     edi
0x68A6C1: pop     esi
0x68A6C2: pop     ebp
0x68A6C3: pop     ebx
0x68A6C4: add     esp, 30h
0x68A6C7: retn    8
0x68A6CA: fldz
0x68A6CC: pop     edi
0x68A6CD: pop     esi
0x68A6CE: pop     ebp
0x68A6CF: pop     ebx
0x68A6D0: add     esp, 30h
0x68A6D3: retn    8
