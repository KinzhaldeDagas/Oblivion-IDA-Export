0x444FB0: sub     esp, 10h
0x444FB3: push    ebx
0x444FB4: push    ebp
0x444FB5: push    esi
0x444FB6: mov     esi, ecx
0x444FB8: cmp     dword ptr [esi+7Ch], 0
0x444FBC: push    edi
0x444FBD: jz      short loc_444FD6
0x444FBF: nop
0x444FC0: mov     eax, [esi+7Ch]
0x444FC3: mov     edi, [eax+4]
0x444FC6: push    eax
0x444FC7: call    FormHeapFree
0x444FCC: add     esp, 4
0x444FCF: test    edi, edi
0x444FD1: mov     [esi+7Ch], edi
0x444FD4: jnz     short loc_444FC0
0x444FD6: mov     dword ptr [esi+78h], 0
0x444FDD: cmp     dword ptr ds:0B33A98h, 0
0x444FE4: jz      loc_4451F0
0x444FEA: mov     eax, 7FFFFFFFh
0x444FEF: cmp     [esi+20h], eax
0x444FF2: jz      loc_44556B
0x444FF8: cmp     [esi+24h], eax
0x444FFB: jz      loc_44556B
0x445001: mov     eax, [esp+20h+arg_0]
0x445005: fld     dword ptr [eax]
0x445007: fstp    [esp+20h+var_C]
0x44500B: fld     [esp+20h+var_C]
0x44500F: fistp   [esp+20h+arg_0]
0x445013: fld     dword ptr [eax+4]
0x445016: fstp    [esp+20h+var_8]
0x44501A: fld     [esp+20h+var_8]
0x44501E: fistp   [esp+20h+var_C]
0x445022: mov     edi, [esp+20h+arg_0]
0x445026: fld     dword ptr ds:0A3765Ch
0x44502C: mov     ecx, [esi+20h]
0x44502F: fstp    [esp+20h+arg_0]
0x445033: mov     edx, [esi+24h]
0x445036: mov     ebp, [esp+20h+var_C]
0x44503A: shl     ecx, 0Ch
0x44503D: mov     eax, edi
0x44503F: sub     eax, ecx
0x445041: shl     edx, 0Ch
0x445044: mov     ecx, ebp
0x445046: sub     ecx, edx
0x445048: sub     eax, 800h
0x44504D: sub     ecx, 800h
0x445053: cmp     dword ptr ds:0B06A2Ch, 3
0x44505A: jnz     short loc_445066
0x44505C: fld     dword ptr ds:0A37658h
0x445062: fstp    [esp+20h+arg_0]
0x445066: fld     [esp+20h+arg_0]
0x44506A: cdq
0x44506B: fld     st
0x44506D: xor     eax, edx
0x44506F: sub     eax, edx
0x445071: mov     [esp+20h+var_8], eax
0x445075: fisub   [esp+20h+var_8]
0x445079: mov     eax, ecx
0x44507B: cdq
0x44507C: xor     eax, edx
0x44507E: sub     eax, edx
0x445080: fstp    [esp+20h+var_8]
0x445084: fld     [esp+20h+var_8]
0x445088: mov     [esp+20h+var_8], eax
0x44508C: fst     dword ptr [esi+6Ch]
0x44508F: fild    [esp+20h+var_8]
0x445093: fsubp   st(2), st
0x445095: fxch    st(1)
0x445097: fstp    [esp+20h+var_8]
0x44509B: fld     [esp+20h+var_8]
0x44509F: fst     dword ptr [esi+70h]
0x4450A2: fldz
0x4450A4: fcom    st(2)
0x4450A6: fnstsw  ax
0x4450A8: fstp    st(2)
0x4450AA: test    ah, 5
0x4450AD: jp      loc_4451FC
0x4450B3: fcompp
0x4450B5: fnstsw  ax
0x4450B7: test    ah, 41h
0x4450BA: jnz     loc_445200
0x4450C0: mov     ecx, ds:0B33B00h
0x4450C6: mov     eax, [ecx+18h]
0x4450C9: shr     eax, 0Bh
0x4450CC: test    al, 1
0x4450CE: jnz     loc_445200
0x4450D4: cmp     byte ptr ds:0B08960h, 0
0x4450DB: jz      loc_4451F0
0x4450E1: call    sub_45A500
0x4450E6: test    al, al
0x4450E8: jnz     loc_4451F0
0x4450EE: cmp     dword ptr [esi+34h], 0
0x4450F2: jnz     loc_4451F0
0x4450F8: fld     [esp+20h+arg_0]
0x4450FC: sar     edi, 0Ch
0x4450FF: fmul    qword ptr ds:0A2FAA0h
0x445105: sar     ebp, 0Ch
0x445108: fld     dword ptr [esi+6Ch]
0x44510B: mov     ebx, edi
0x44510D: mov     [esp+20h+var_C], ebp
0x445111: fcomp   st(1)
0x445113: fnstsw  ax
0x445115: test    ah, 5
0x445118: jnp     short loc_44512C
0x44511A: fld     dword ptr [esi+70h]
0x44511D: fcompp
0x44511F: fnstsw  ax
0x445121: test    ah, 5
0x445124: jp      loc_4451F0
0x44512A: jmp     short loc_44512E
0x44512C: fstp    st
0x44512E: mov     edi, ds:0B06A2Ch
0x445134: mov     eax, [esi+28h]
0x445137: mov     ecx, ebx
0x445139: shr     edi, 1
0x44513B: sub     ecx, eax
0x44513D: mov     [esp+20h+arg_4], eax
0x445141: mov     [esp+20h+arg_0], ecx
0x445145: jz      short loc_445188
0x445147: lea     edx, [edi+1]
0x44514A: imul    edx, ecx
0x44514D: mov     ebp, edi
0x44514F: add     eax, edx
0x445151: neg     ebp
0x445153: cmp     ebp, edi
0x445155: mov     [esp+20h+arg_4], eax
0x445159: jg      short loc_445185
0x44515B: jmp     short loc_445160
0x44515D: align 10h
0x445160: mov     eax, [esi+2Ch]
0x445163: mov     ecx, [esp+20h+arg_4]
0x445167: mov     edx, [esi+74h]
0x44516A: add     eax, ebp
0x44516C: push    eax
0x44516D: push    ecx
0x44516E: mov     ecx, ds:0B35B90h
0x445174: push    edx
0x445175: call    sub_4BE090
0x44517A: add     ebp, 1
0x44517D: cmp     ebp, edi
0x44517F: jle     short loc_445160
0x445181: mov     ecx, [esp+20h+arg_0]
0x445185: mov     [esi+28h], ebx
0x445188: mov     ebx, [esi+2Ch]
0x44518B: mov     eax, [esp+20h+var_C]
0x44518F: sub     eax, ebx
0x445191: mov     [esp+20h+var_8], eax
0x445195: jz      short loc_4451D3
0x445197: lea     edx, [edi+1]
0x44519A: imul    edx, eax
0x44519D: mov     ebp, edi
0x44519F: neg     ebp
0x4451A1: add     ebx, edx
0x4451A3: cmp     ebp, edi
0x4451A5: jg      short loc_4451CC
0x4451A7: mov     eax, [esi+28h]
0x4451AA: mov     ecx, [esi+74h]
0x4451AD: push    ebx
0x4451AE: add     eax, ebp
0x4451B0: push    eax
0x4451B1: push    ecx
0x4451B2: mov     ecx, ds:0B35B90h
0x4451B8: call    sub_4BE090
0x4451BD: add     ebp, 1
0x4451C0: cmp     ebp, edi
0x4451C2: jle     short loc_4451A7
0x4451C4: mov     eax, [esp+20h+var_8]
0x4451C8: mov     ecx, [esp+20h+arg_0]
0x4451CC: mov     edx, [esp+20h+var_C]
0x4451D0: mov     [esi+2Ch], edx
0x4451D3: test    ecx, ecx
0x4451D5: jz      short loc_4451F0
0x4451D7: test    eax, eax
0x4451D9: jz      short loc_4451F0
0x4451DB: mov     eax, [esp+20h+arg_4]
0x4451DF: mov     ecx, [esi+74h]
0x4451E2: push    ebx
0x4451E3: push    eax
0x4451E4: push    ecx
0x4451E5: mov     ecx, ds:0B35B90h
0x4451EB: call    sub_4BE090
0x4451F0: xor     eax, eax
0x4451F2: pop     edi
0x4451F3: pop     esi
0x4451F4: pop     ebp
0x4451F5: pop     ebx
0x4451F6: add     esp, 10h
0x4451F9: retn    8
0x4451FC: fstp    st
0x4451FE: fstp    st
0x445200: call    sub_57BAC0
0x445205: test    al, al
0x445207: mov     [esp+20h+var_D], al
0x44520B: jnz     short loc_445228
0x44520D: mov     ecx, ds:0B35B90h
0x445213: call    sub_4BDDA0
0x445218: test    eax, eax
0x44521A: jz      short loc_445228
0x44521C: mov     ecx, esi
0x44521E: call    LoadingAreaMessage
0x445223: mov     [esp+20h+var_D], 1
0x445228: mov     ecx, ds:0B33A10h
0x44522E: call    sub_432860
0x445233: mov     ecx, ds:0B35B90h
0x445239: call    sub_4BE4E0
0x44523E: mov     edx, ds:0B33B00h
0x445244: mov     eax, [edx+18h]
0x445247: mov     ecx, eax
0x445249: shr     ecx, 0Bh
0x44524C: sar     edi, 0Ch
0x44524F: sar     ebp, 0Ch
0x445252: test    cl, 1
0x445255: jz      short loc_445264
0x445257: shr     eax, 13h
0x44525A: test    al, 1
0x44525C: jz      short loc_445264
0x44525E: mov     edi, [esi+20h]
0x445261: mov     ebp, [esi+24h]
0x445264: mov     ebx, edi
0x445266: sub     ebx, [esi+20h]
0x445269: mov     eax, ebp
0x44526B: sub     eax, [esi+24h]
0x44526E: push    ebp
0x44526F: mov     [esi+20h], edi
0x445272: mov     [esi+24h], ebp
0x445275: mov     [esi+28h], edi
0x445278: mov     [esi+2Ch], ebp
0x44527B: mov     ecx, ds:0B35B90h
0x445281: push    edi
0x445282: mov     [esp+28h+var_C], eax
0x445286: call    sub_4BE330
0x44528B: mov     edx, ds:0B4312Ch
0x445291: mov     eax, ds:0B43130h
0x445296: mov     ds:0B43134h, edx
0x44529C: mov     ds:0B43138h, eax
0x4452A1: fild    dword ptr [esi+20h]
0x4452A4: fld     qword ptr ds:0A2FAA0h
0x4452AA: fadd    st(1), st
0x4452AC: fld     qword ptr ds:0A37650h
0x4452B2: fmul    st(2), st
0x4452B4: fxch    st(2)
0x4452B6: fstp    [esp+20h+var_8]
0x4452BA: mov     ecx, [esp+20h+var_8]
0x4452BE: fiadd   dword ptr [esi+24h]
0x4452C1: mov     ds:0B4312Ch, ecx
0x4452C7: fmulp   st(1), st
0x4452C9: fstp    [esp+20h+var_4]
0x4452CD: mov     edx, [esp+20h+var_4]
0x4452D1: fld     dword ptr ds:0B43134h
0x4452D7: mov     ds:0B43130h, edx
0x4452DD: fld     dword ptr ds:0B3FC80h
0x4452E3: fucompp
0x4452E5: fnstsw  ax
0x4452E7: test    ah, 44h
0x4452EA: jp      short loc_445301
0x4452EC: fld     dword ptr ds:0B43138h
0x4452F2: fld     dword ptr ds:0B3FC84h
0x4452F8: fucompp
0x4452FA: fnstsw  ax
0x4452FC: test    ah, 44h
0x4452FF: jnp     short loc_44531B
0x445301: mov     eax, ebx
0x445303: cdq
0x445304: xor     eax, edx
0x445306: sub     eax, edx
0x445308: cmp     eax, 1
0x44530B: jg      short loc_44531B
0x44530D: mov     eax, [esp+20h+var_C]
0x445311: cdq
0x445312: xor     eax, edx
0x445314: sub     eax, edx
0x445316: cmp     eax, 1
0x445319: jle     short loc_44532A
0x44531B: mov     eax, [esp+20h+var_4]
0x44531F: mov     ds:0B43134h, ecx
0x445325: mov     ds:0B43138h, eax
0x44532A: push    0
0x44532C: push    0
0x44532E: call    GetTimer
0x445333: fstp    dword ptr ds:0B43078h
0x445339: add     esp, 8
0x44533C: cmp     dword ptr [esi+34h], 0
0x445340: jz      short loc_445357
0x445342: mov     ecx, ds:0B33B00h
0x445348: mov     edx, [ecx+18h]
0x44534B: shr     edx, 0Bh
0x44534E: test    dl, 1
0x445351: jz      loc_4454EB
0x445357: cmp     byte ptr ds:0B051CCh, 0
0x44535E: jz      short loc_445376
0x445360: push    1
0x445362: mov     ecx, esi
0x445364: call    sub_43FE30
0x445369: test    eax, eax
0x44536B: jz      short loc_445376
0x44536D: push    0; a2
0x44536F: mov     ecx, esi; this
0x445371: call    sub_43FC20
0x445376: mov     eax, ds:0B33398h
0x44537B: mov     dword ptr [eax+18h], 0
0x445382: cmp     dword ptr [esi+74h], 0
0x445386: jnz     short loc_445399
0x445388: mov     ecx, ds:0B33A98h
0x44538E: mov     edx, [ecx+0Ch]
0x445391: push    edx
0x445392: mov     ecx, esi
0x445394: call    sub_4431F0
0x445399: mov     eax, ebx
0x44539B: cdq
0x44539C: mov     ebx, eax
0x44539E: xor     ebx, edx
0x4453A0: sub     ebx, edx
0x4453A2: cmp     ebx, 1
0x4453A5: mov     byte ptr [esp+20h+arg_0], 0
0x4453AA: jg      short loc_4453BA
0x4453AC: mov     eax, [esp+20h+var_C]
0x4453B0: cdq
0x4453B1: xor     eax, edx
0x4453B3: sub     eax, edx
0x4453B5: cmp     eax, 1
0x4453B8: jle     short loc_4453BF
0x4453BA: mov     byte ptr [esp+20h+arg_0], 1
0x4453BF: mov     ecx, ds:0B35C24h
0x4453C5: test    ecx, ecx
0x4453C7: jz      short loc_4453F6
0x4453C9: cmp     byte ptr [esp+20h+arg_0], 0
0x4453CE: jnz     short loc_4453D7
0x4453D0: cmp     byte ptr [esp+20h+arg_4], 0
0x4453D5: jnz     short loc_4453F1
0x4453D7: push    0
0x4453D9: call    sub_88D1D0
0x4453DE: mov     ecx, ds:0B35C24h
0x4453E4: push    0
0x4453E6: call    sub_88BD60
0x4453EB: mov     ecx, ds:0B35C24h
0x4453F1: call    sub_889E10
0x4453F6: mov     ecx, [esi+8]
0x4453F9: mov     eax, [ecx]
0x4453FB: mov     edx, [eax+10h]
0x4453FE: push    ebp
0x4453FF: push    edi
0x445400: call    edx
0x445402: cmp     dword ptr ds:0B35C24h, 0
0x445409: jz      short loc_44544F
0x44540B: cmp     [esp+20h+var_D], 0
0x445410: jnz     short loc_445434
0x445412: cmp     byte ptr [esp+20h+arg_0], 0
0x445417: jz      short loc_44543F
0x445419: mov     ecx, ds:0B35B90h
0x44541F: call    sub_4BDDA0
0x445424: test    eax, eax
0x445426: jz      short loc_445434
0x445428: mov     ecx, esi
0x44542A: call    LoadingAreaMessage
0x44542F: mov     [esp+20h+var_D], 1
0x445434: cmp     byte ptr [esp+20h+arg_0], 0
0x445439: jz      short loc_44543F
0x44543B: push    0
0x44543D: jmp     short loc_445444
0x44543F: mov     eax, [esp+20h+arg_4]
0x445443: push    eax
0x445444: mov     ecx, ds:0B35C24h
0x44544A: call    sub_88BD60
0x44544F: mov     ecx, [esi+4]
0x445452: mov     edx, [ecx]
0x445454: mov     eax, [edx+10h]
0x445457: push    ebp
0x445458: push    edi
0x445459: call    eax
0x44545B: cmp     [esp+20h+var_D], 0
0x445460: jnz     short loc_445474
0x445462: mov     ecx, esi
0x445464: call    sub_442410
0x445469: test    al, al
0x44546B: jnz     short loc_445474
0x44546D: mov     ecx, esi
0x44546F: call    LoadingAreaMessage
0x445474: cmp     ebx, 1
0x445477: jg      short loc_445487
0x445479: mov     eax, [esp+20h+var_C]
0x44547D: cdq
0x44547E: xor     eax, edx
0x445480: sub     eax, edx
0x445482: cmp     eax, 1
0x445485: jle     short loc_445490
0x445487: push    0
0x445489: mov     ecx, esi
0x44548B: call    sub_4430F0
0x445490: mov     ecx, ds:0B35C24h
0x445496: test    ecx, ecx
0x445498: jz      short loc_44549F
0x44549A: call    sub_889E00
0x44549F: mov     ecx, esi
0x4454A1: call    sub_444340
0x4454A6: mov     byte ptr [esi+69h], 1
0x4454AA: mov     ecx, ds:0B35C24h
0x4454B0: test    ecx, ecx
0x4454B2: jz      short loc_4454C9
0x4454B4: cmp     byte ptr [esp+20h+arg_0], 0
0x4454B9: jz      short loc_4454BF
0x4454BB: push    0
0x4454BD: jmp     short loc_4454C4
0x4454BF: mov     edx, [esp+20h+arg_4]
0x4454C3: push    edx
0x4454C4: call    sub_88D1D0
0x4454C9: mov     ecx, esi
0x4454CB: call    sub_440270
0x4454D0: mov     ecx, ds:0B33B00h
0x4454D6: call    sub_45A500
0x4454DB: test    al, al
0x4454DD: jnz     short loc_4454EB
0x4454DF: mov     ecx, ds:0B333C4h
0x4454E5: push    ecx
0x4454E6: call    sub_665260
0x4454EB: push    0; a2
0x4454ED: mov     ecx, esi; this
0x4454EF: call    sub_43FC20
0x4454F4: mov     ecx, esi
0x4454F6: call    sub_440200
0x4454FB: cmp     dword ptr [esi+34h], 0
0x4454FF: jnz     short loc_445506
0x445501: call    sub_499E40
0x445506: mov     ecx, ds:0B33B00h
0x44550C: call    sub_45A500
0x445511: test    al, al
0x445513: jnz     short loc_44551D
0x445515: mov     ecx, [esi+54h]
0x445518: call    WaterSurfaceLoop
0x44551D: call    sub_537D40
0x445522: mov     ecx, ds:0B333C4h
0x445528: mov     eax, [ecx]
0x44552A: mov     edx, [eax+174h]
0x445530: call    edx
0x445532: mov     edx, [eax]
0x445534: push    0
0x445536: sub     esp, 0Ch
0x445539: mov     ecx, esp
0x44553B: mov     [ecx], edx
0x44553D: mov     edx, [eax+4]
0x445540: mov     eax, [eax+8]
0x445543: mov     [ecx+4], edx
0x445546: mov     [ecx+8], eax
0x445549: call    sub_4EA6E0
0x44554E: mov     ecx, ds:0B33A10h
0x445554: add     esp, 10h
0x445557: call    sub_432890
0x44555C: mov     eax, 1
0x445561: pop     edi
0x445562: pop     esi
0x445563: pop     ebp
0x445564: pop     ebx
0x445565: add     esp, 10h
0x445568: retn    8
0x44556B: mov     edi, [esp+20h+arg_0]
0x44556F: test    edi, edi
0x445571: jz      short loc_4455AD
0x445573: fld     dword ptr [edi]
0x445575: fstp    [esp+20h+arg_0]
0x445579: fld     [esp+20h+arg_0]
0x44557D: fistp   [esp+20h+arg_4]
0x445581: mov     ecx, [esp+20h+arg_4]
0x445585: sar     ecx, 0Ch
0x445588: mov     [esi+20h], ecx
0x44558B: fld     dword ptr [edi+4]
0x44558E: fstp    [esp+20h+arg_0]
0x445592: fld     [esp+20h+arg_0]
0x445596: fistp   [esp+20h+arg_4]
0x44559A: mov     eax, [esp+20h+arg_4]
0x44559E: mov     edx, [esi+20h]
0x4455A1: sar     eax, 0Ch
0x4455A4: mov     [esi+24h], eax
0x4455A7: mov     [esi+28h], edx
0x4455AA: mov     [esi+2Ch], eax
0x4455AD: push    0
0x4455AF: push    0
0x4455B1: push    1
0x4455B3: mov     ecx, esi
0x4455B5: call    sub_440AF0
0x4455BA: push    0
0x4455BC: push    edi
0x4455BD: mov     ecx, esi
0x4455BF: call    sub_444EC0
0x4455C4: pop     edi
0x4455C5: pop     esi
0x4455C6: pop     ebp
0x4455C7: mov     eax, 1
0x4455CC: pop     ebx
0x4455CD: add     esp, 10h
0x4455D0: retn    8
