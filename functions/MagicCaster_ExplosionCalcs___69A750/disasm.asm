0x69A750: push    ebp
0x69A751: mov     ebp, esp
0x69A753: and     esp, 0FFFFFFF0h
0x69A756: push    0FFFFFFFFh
0x69A758: push    offset MagicCaster_ExplosionCalcs????_SEH
0x69A75D: mov     eax, large fs:0
0x69A763: push    eax
0x69A764: sub     esp, 98h
0x69A76A: mov     eax, ds:0B30AACh
0x69A76F: xor     eax, esp
0x69A771: mov     [esp+0A4h+var_14], eax
0x69A778: push    ebx
0x69A779: push    esi
0x69A77A: push    edi
0x69A77B: mov     eax, ds:0B30AACh
0x69A780: xor     eax, esp
0x69A782: push    eax
0x69A783: lea     eax, [esp+0B4h+var_C]
0x69A78A: mov     large fs:0, eax
0x69A790: mov     eax, [ebp+arg_10]
0x69A793: mov     edi, [ebp+arg_14]
0x69A796: mov     ebx, [ebp+arg_C]
0x69A799: mov     [esp+0B4h+var_84], eax
0x69A79D: mov     eax, [edi+1Ch]
0x69A7A0: mov     edx, [eax+58h]
0x69A7A3: mov     [esp+0B4h+var_98], ecx
0x69A7A7: mov     ecx, [ebp+arg_18]
0x69A7AA: shr     edx, 1Dh
0x69A7AD: test    dl, 1
0x69A7B0: mov     [esp+0B4h+var_94], ecx
0x69A7B4: jz      MagicCaster_ExplosionCalcs????___Done
0x69A7BA: mov     ecx, edi
0x69A7BC: call    EffectItem_GetArea
0x69A7C1: mov     [esp+0B4h+var_9C], eax
0x69A7C5: fild    [esp+0B4h+var_9C]
0x69A7C9: fmul    dword ptr ds:0B37DB8h
0x69A7CF: fmul    [ebp+arg_20]
0x69A7D2: fstp    [esp+0B4h+var_90]
0x69A7D6: fldz
0x69A7D8: fcomp   [esp+0B4h+var_90]
0x69A7DC: fnstsw  ax
0x69A7DE: test    ah, 5
0x69A7E1: jp      MagicCaster_ExplosionCalcs????___Done
0x69A7E7: mov     eax, [edi+10h]
0x69A7EA: mov     ecx, [edi+1Ch]
0x69A7ED: fld     dword ptr [ecx+5Ch]
0x69A7F0: cmp     eax, 2
0x69A7F3: setz    al
0x69A7F6: fstp    [esp+0B4h+var_A0]
0x69A7FA: mov     ecx, edi
0x69A7FC: push    eax; float
0x69A7FD: call    EffectItem_GetMagnitude
0x69A802: mov     [esp+0B8h+var_9C], eax
0x69A806: fild    [esp+0B8h+var_9C]
0x69A80A: fmul    [ebp+arg_1C]
0x69A80D: call    Double_To_SInt32
0x69A812: push    eax; int
0x69A813: mov     ecx, edi
0x69A815: call    EffectItem_GetDuration
0x69A81A: mov     [esp+0BCh+var_9C], eax
0x69A81E: fild    [esp+0BCh+var_9C]
0x69A822: fmul    [ebp+arg_1C]
0x69A825: call    Double_To_SInt32
0x69A82A: push    eax; float
0x69A82B: mov     ecx, edi
0x69A82D: call    EffectItem_GetArea
0x69A832: fld     [esp+0C0h+var_A0]
0x69A836: push    eax; float
0x69A837: push    ecx
0x69A838: fstp    [esp+0C8h+var_C8]; float
0x69A83B: call    Calc_BaseMagickaCost
0x69A840: fstp    [esp+0C8h+var_9C]
0x69A844: add     esp, 14h
0x69A847: fld     [esp+0B4h+var_90]
0x69A84B: xor     esi, esi
0x69A84D: fmul    qword ptr ds:0A2FAA0h
0x69A853: xorps   xmm0, xmm0
0x69A856: mov     [esp+0B4h+var_54], esi
0x69A85A: mov     [esp+0B4h+var_50], esi
0x69A85E: fstp    [esp+0B4h+var_A0]
0x69A862: mov     [esp+0B4h+var_4C], 80000000h
0x69A86A: mov     [esp+0B4h+var_5C], esi
0x69A86E: mov     [esp+0B4h+var_58], 2
0x69A873: movaps  [esp+0B4h+var_40], xmm0
0x69A878: movaps  [esp+0B4h+var_30], xmm0
0x69A880: fld     [esp+0B4h+var_A0]
0x69A884: fld     st
0x69A886: mov     [esp+0B4h+var_4], esi
0x69A88D: fchs
0x69A88F: fstp    [esp+0B4h+var_A0]
0x69A893: fld     [esp+0B4h+var_A0]
0x69A897: fst     [esp+0B4h+var_80]
0x69A89B: fst     [esp+0B4h+var_7C]
0x69A89F: fstp    [esp+0B4h+var_78]
0x69A8A3: fld     [esp+0B4h+var_80]
0x69A8A7: fld     [ebp+arg_0]
0x69A8AA: fld     st
0x69A8AC: faddp   st(2), st
0x69A8AE: fxch    st(1)
0x69A8B0: fstp    [esp+0B4h+var_A0]
0x69A8B4: fld     [ebp+arg_4]
0x69A8B7: fld     st
0x69A8B9: fadd    [esp+0B4h+var_7C]
0x69A8BD: fstp    [esp+0B4h+var_8C]
0x69A8C1: fld     [ebp+arg_8]
0x69A8C4: fld     st
0x69A8C6: fadd    [esp+0B4h+var_78]
0x69A8CA: fstp    [esp+0B4h+var_88]
0x69A8CE: fld     [esp+0B4h+var_A0]
0x69A8D2: fld     qword ptr ds:0A39088h
0x69A8D8: fmul    st(1), st
0x69A8DA: fxch    st(1)
0x69A8DC: fstp    dword ptr [esp+0B4h+var_40]
0x69A8E0: fld     [esp+0B4h+var_8C]
0x69A8E4: fmul    st, st(1)
0x69A8E6: fstp    dword ptr [esp+0B4h+var_40+4]
0x69A8EA: fld     [esp+0B4h+var_88]
0x69A8EE: fmul    st, st(1)
0x69A8F0: fstp    dword ptr [esp+0B4h+var_40+8]
0x69A8F4: fld     st(4)
0x69A8F6: faddp   st(4), st
0x69A8F8: fxch    st(3)
0x69A8FA: fstp    [esp+0B4h+var_88]
0x69A8FE: mov     eax, ds:0B2EB3Ch
0x69A903: fld     st(3)
0x69A905: faddp   st(2), st
0x69A907: add     eax, 1
0x69A90A: fxch    st(1)
0x69A90C: and     eax, 0FFFFh
0x69A911: mov     ds:0B2EB3Ch, eax
0x69A916: fstp    [esp+0B4h+var_8C]
0x69A91A: faddp   st(2), st
0x69A91C: fxch    st(1)
0x69A91E: fstp    [esp+0B4h+var_A0]
0x69A922: fld     [esp+0B4h+var_88]
0x69A926: fmul    st, st(1)
0x69A928: fstp    dword ptr [esp+0B4h+var_30]
0x69A92F: fld     [esp+0B4h+var_8C]
0x69A933: fmul    st, st(1)
0x69A935: fstp    dword ptr [esp+0B4h+var_30+4]
0x69A93C: fmul    [esp+0B4h+var_A0]
0x69A940: fstp    dword ptr [esp+0B4h+var_30+8]
0x69A947: jnz     short loc_69A953
0x69A949: mov     eax, 0Ah
0x69A94E: mov     ds:0B2EB3Ch, eax
0x69A953: shl     eax, 10h
0x69A956: lea     ecx, [esp+0B4h+var_60]
0x69A95A: or      eax, 1Eh
0x69A95D: push    ecx
0x69A95E: lea     ecx, [esp+0B8h+var_74]
0x69A962: mov     [esp+0B8h+var_60], eax
0x69A966: call    sub_699CE0
0x69A96B: mov     ecx, ebx; this
0x69A96D: mov     byte ptr [esp+0B4h+var_4], 1
0x69A975: call    TESObjectCELL_IsInterior
0x69A97A: test    al, al
0x69A97C: jz      short loc_69A988
0x69A97E: lea     ecx, [ebx+28h]
0x69A981: call    sub_424180
0x69A986: jmp     short loc_69A98D
0x69A988: mov     eax, ds:0B35C24h
0x69A98D: push    eax
0x69A98E: lea     ecx, [esp+0B8h+var_74]
0x69A992: call    sub_89F470
0x69A997: mov     ebx, [esp+0B4h+var_6C]
0x69A99B: cmp     ebx, esi
0x69A99D: jz      short loc_69A9A7
0x69A99F: add     ebx, 90h
0x69A9A5: jmp     short loc_69A9A9
0x69A9A7: xor     ebx, ebx
0x69A9A9: cmp     dword ptr [ebx+4], 0
0x69A9AD: jle     short loc_69A9F2
0x69A9AF: mov     edx, [ebx]
0x69A9B1: mov     eax, [edx+esi*4]
0x69A9B4: cmp     byte ptr [eax+18h], 1
0x69A9B8: jnz     short loc_69A9EA
0x69A9BA: mov     ecx, [eax+10h]
0x69A9BD: add     ecx, eax
0x69A9BF: jz      short loc_69A9EA
0x69A9C1: fld     [esp+0B4h+var_9C]
0x69A9C5: mov     edx, [ebp+arg_0]
0x69A9C8: push    ecx
0x69A9C9: fstp    [esp+0B8h+var_B8]; float
0x69A9CC: push    edi; int
0x69A9CD: sub     esp, 0Ch
0x69A9D0: mov     eax, esp
0x69A9D2: mov     [eax], edx
0x69A9D4: mov     edx, [ebp+arg_4]
0x69A9D7: mov     [eax+4], edx
0x69A9DA: mov     edx, [ebp+arg_8]
0x69A9DD: push    ecx; float
0x69A9DE: mov     ecx, [esp+0CCh+var_98]
0x69A9E2: mov     [eax+8], edx
0x69A9E5: call    sub_699760
0x69A9EA: add     esi, 1
0x69A9ED: cmp     esi, [ebx+4]
0x69A9F0: jl      short loc_69A9AF
0x69A9F2: lea     ecx, [esp+0B4h+var_74]
0x69A9F6: call    sub_8AECA0
0x69A9FB: mov     ebx, [esp+0B4h+var_98]
0x69A9FF: mov     eax, [ebx]
0x69AA01: mov     esi, [esp+0B4h+var_94]
0x69AA05: mov     edx, [eax+20h]
0x69AA08: mov     ecx, ebx
0x69AA0A: mov     [esp+0B4h+var_A0], esi
0x69AA0E: call    edx
0x69AA10: test    eax, eax
0x69AA12: jz      short loc_69AA2D
0x69AA14: mov     edx, [eax]
0x69AA16: mov     ecx, eax
0x69AA18: mov     eax, [edx+190h]
0x69AA1E: call    eax
0x69AA20: test    al, al
0x69AA22: jz      short loc_69AA2D
0x69AA24: lea     ecx, [ebx-5Ch]
0x69AA27: mov     [esp+0B4h+var_98], ecx
0x69AA2B: jmp     short loc_69AA35
0x69AA2D: mov     [esp+0B4h+var_98], 0
0x69AA35: test    esi, esi
0x69AA37: jz      loc_69AB0A
0x69AA3D: mov     edx, [esp+0B4h+var_A0]
0x69AA41: mov     esi, [edx]
0x69AA43: test    esi, esi
0x69AA45: jz      loc_69AB0A
0x69AA4B: mov     eax, [esi]
0x69AA4D: mov     edx, [eax+190h]
0x69AA53: mov     ecx, esi
0x69AA55: call    edx
0x69AA57: neg     al
0x69AA59: sbb     eax, eax
0x69AA5B: and     eax, esi
0x69AA5D: mov     esi, eax
0x69AA5F: jz      loc_69AAF7
0x69AA65: cmp     esi, [esp+0B4h+var_98]
0x69AA69: jz      loc_69AAF7
0x69AA6F: mov     eax, [esi]
0x69AA71: mov     edx, [eax+154h]
0x69AA77: mov     ecx, esi
0x69AA79: call    edx
0x69AA7B: test    eax, eax
0x69AA7D: jz      short loc_69AAF7
0x69AA7F: lea     eax, [ebp+arg_0]
0x69AA82: push    eax
0x69AA83: mov     ecx, esi
0x69AA85: call    sub_4D7E30
0x69AA8A: fstp    [esp+0B4h+var_94]
0x69AA8E: fld     [esp+0B4h+var_94]
0x69AA92: fld     [esp+0B4h+var_90]
0x69AA96: fcompp
0x69AA98: fnstsw  ax
0x69AA9A: test    ah, 1
0x69AA9D: jnz     short loc_69AAF7
0x69AA9F: mov     edx, [esi]
0x69AAA1: mov     eax, [edx+198h]
0x69AAA7: push    0
0x69AAA9: mov     ecx, esi
0x69AAAB: call    eax
0x69AAAD: test    al, al
0x69AAAF: jnz     short loc_69AAF7
0x69AAB1: mov     ecx, esi; this
0x69AAB3: call    Actor_IsGhost
0x69AAB8: test    al, al
0x69AABA: jnz     short loc_69AAF7
0x69AABC: mov     ecx, [esp+0B8h+var_88]
0x69AAC0: push    ecx
0x69AAC1: lea     edx, [esi+68h]
0x69AAC4: push    edx
0x69AAC5: mov     ecx, ebx
0x69AAC7: call    sub_699EB0
0x69AACC: test    al, al
0x69AACE: jz      short loc_69AAF7
0x69AAD0: fld     [esp+0B8h+var_A0]
0x69AAD4: mov     edx, [ebp+arg_4]
0x69AAD7: push    ecx
0x69AAD8: mov     ecx, [ebp+arg_0]
0x69AADB: fstp    [esp+0BCh+var_BC]; float
0x69AADE: push    edi; int
0x69AADF: sub     esp, 0Ch
0x69AAE2: mov     eax, esp
0x69AAE4: mov     [eax], ecx
0x69AAE6: mov     ecx, [ebp+arg_8]
0x69AAE9: mov     [eax+4], edx
0x69AAEC: mov     [eax+8], ecx
0x69AAEF: push    esi; float
0x69AAF0: mov     ecx, ebx
0x69AAF2: call    sub_699900
0x69AAF7: mov     edx, [esp+0B8h+var_A4]
0x69AAFB: mov     eax, [edx+4]
0x69AAFE: test    eax, eax
0x69AB00: mov     [esp+0B8h+var_A4], eax
0x69AB04: jnz     loc_69AA3D
0x69AB0A: mov     ecx, ds:0B333C4h
0x69AB10: test    ecx, ecx
0x69AB12: jz      loc_69ABCA
0x69AB18: cmp     ecx, [esp+0B8h+var_9C]
0x69AB1C: jz      loc_69ABCA
0x69AB22: mov     eax, [ecx]
0x69AB24: mov     edx, [eax+154h]
0x69AB2A: call    edx
0x69AB2C: test    eax, eax
0x69AB2E: jz      loc_69ABCA
0x69AB34: mov     ecx, ds:0B333C4h
0x69AB3A: lea     eax, [ebp+arg_0]
0x69AB3D: push    eax
0x69AB3E: call    sub_4D7E30
0x69AB43: fstp    [esp+0B8h+var_98]
0x69AB47: fld     [esp+0B8h+var_98]
0x69AB4B: fld     [esp+0B8h+var_94]
0x69AB4F: fcompp
0x69AB51: fnstsw  ax
0x69AB53: test    ah, 1
0x69AB56: jnz     short loc_69ABCA
0x69AB58: mov     ecx, ds:0B333C4h
0x69AB5E: mov     edx, [ecx]
0x69AB60: mov     eax, [edx+198h]
0x69AB66: push    0
0x69AB68: call    eax
0x69AB6A: test    al, al
0x69AB6C: jnz     short loc_69ABCA
0x69AB6E: mov     ecx, ds:0B333C4h; this
0x69AB74: call    Actor_IsGhost
0x69AB79: test    al, al
0x69AB7B: jnz     short loc_69ABCA
0x69AB7D: mov     eax, ds:0B333C4h
0x69AB82: test    eax, eax
0x69AB84: jz      short loc_69AB8B
0x69AB86: add     eax, 68h ; 'h'
0x69AB89: jmp     short loc_69AB8D
0x69AB8B: xor     eax, eax
0x69AB8D: mov     ecx, [esp+0BCh+var_8C]
0x69AB91: push    ecx
0x69AB92: push    eax
0x69AB93: mov     ecx, ebx
0x69AB95: call    sub_699EB0
0x69AB9A: test    al, al
0x69AB9C: jz      short loc_69ABCA
0x69AB9E: fld     [esp+0BCh+var_A4]
0x69ABA2: mov     edx, [ebp+arg_0]
0x69ABA5: push    ecx
0x69ABA6: mov     ecx, [ebp+arg_4]
0x69ABA9: fstp    [esp+0C0h+var_C0]; float
0x69ABAC: push    edi; int
0x69ABAD: sub     esp, 0Ch
0x69ABB0: mov     eax, esp
0x69ABB2: mov     [eax], edx
0x69ABB4: mov     edx, [ebp+arg_8]
0x69ABB7: mov     [eax+4], ecx
0x69ABBA: mov     [eax+8], edx
0x69ABBD: mov     eax, ds:0B333C4h
0x69ABC2: push    eax; int
0x69ABC3: mov     ecx, ebx
0x69ABC5: call    sub_699900
0x69ABCA: lea     ecx, [esp+0BCh+var_7C]; this
0x69ABCE: mov     byte ptr [esp+0BCh+var_C], 0
0x69ABD6: call    ??1bhkAabbPhantom@@UAE@XZ; bhkAabbPhantom::~bhkAabbPhantom(void)
0x69ABDB: mov     eax, [esp+0BCh+var_54]
0x69ABDF: test    eax, eax
0x69ABE1: mov     [esp+0BCh+var_C], 0FFFFFFFFh
0x69ABEC: js      short MagicCaster_ExplosionCalcs????___Done
0x69ABEE: mov     ecx, ds:0BA9DE4h
0x69ABF4: mov     edx, large fs:2Ch
0x69ABFB: mov     ecx, [edx+ecx*4]
0x69ABFE: mov     ecx, [ecx+19Ch]
0x69AC04: test    ecx, ecx
0x69AC06: jnz     short loc_69AC0E
0x69AC08: mov     ecx, ds:0BA7D9Ch
0x69AC0E: mov     edx, [esp+0BCh+var_5C]
0x69AC12: and     eax, 3FFFFFFFh
0x69AC17: add     eax, eax
0x69AC19: add     eax, eax
0x69AC1B: push    14h
0x69AC1D: add     eax, eax
0x69AC1F: push    eax
0x69AC20: push    edx
0x69AC21: call    sub_8A75D0
