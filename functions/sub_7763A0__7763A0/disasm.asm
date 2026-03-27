0x7763A0: sub     esp, 1Ch
0x7763A3: fldz
0x7763A5: push    ebx
0x7763A6: mov     ebx, ecx
0x7763A8: fst     [esp+20h+var_10]
0x7763AC: mov     eax, [ebx+14h]
0x7763AF: fst     [esp+20h+var_C]
0x7763B3: test    eax, eax
0x7763B5: fstp    [esp+20h+var_8]
0x7763B9: push    esi
0x7763BA: push    edi
0x7763BB: jz      short loc_7763D5
0x7763BD: lea     ecx, [ecx+0]
0x7763C0: lea     ecx, [eax+8]
0x7763C3: mov     ecx, [ecx]
0x7763C5: mov     eax, [eax]
0x7763C7: test    eax, eax
0x7763C9: mov     edx, [ecx+104h]
0x7763CF: mov     byte ptr [edx+70h], 1
0x7763D3: jnz     short loc_7763C0
0x7763D5: cmp     byte ptr [ebx+31h], 0
0x7763D9: jz      loc_776515
0x7763DF: mov     eax, [esp+28h+arg_0]
0x7763E3: push    ebp
0x7763E4: xor     ebp, ebp
0x7763E6: test    eax, eax
0x7763E8: mov     [esp+2Ch+var_1C], ebp
0x7763EC: jz      short loc_7763F7
0x7763EE: mov     eax, [eax+0Ch]
0x7763F1: mov     [esp+2Ch+var_1C], eax
0x7763F5: mov     ebp, eax
0x7763F7: test    ebp, ebp
0x7763F9: mov     [esp+2Ch+arg_0], 0
0x776401: jz      loc_776514
0x776407: jmp     short loc_776410
0x776409: align 10h
0x776410: cmp     [esp+2Ch+arg_0], 8
0x776415: jnb     loc_776514
0x77641B: test    ebp, ebp
0x77641D: jnz     short loc_776423
0x77641F: xor     edi, edi
0x776421: jmp     short loc_77642F
0x776423: mov     ecx, [ebp+0]
0x776426: mov     edi, [ebp+4]
0x776429: mov     [esp+2Ch+var_1C], ecx
0x77642D: mov     ebp, ecx
0x77642F: cmp     byte ptr [edi+0ACh], 0
0x776436: mov     [esp+2Ch+var_18], edi
0x77643A: jz      loc_77650C
0x776440: fld     dword ptr ds:0A34BA0h
0x776446: fcomp   dword ptr [edi+0DCh]
0x77644C: fnstsw  ax
0x77644E: test    ah, 41h
0x776451: jz      loc_77650C
0x776457: mov     edx, [edi]
0x776459: mov     eax, [edx+84h]
0x77645F: mov     ecx, edi
0x776461: call    eax
0x776463: test    eax, eax
0x776465: jnz     short loc_7764AB
0x776467: fld     dword ptr [edi+0DCh]
0x77646D: fstp    [esp+2Ch+var_18]
0x776471: fld     dword ptr [edi+0E0h]
0x776477: fld     [esp+2Ch+var_18]
0x77647B: fld     st
0x77647D: fmulp   st(2), st
0x77647F: fld     [esp+2Ch+var_10]
0x776483: faddp   st(2), st
0x776485: fxch    st(1)
0x776487: fstp    [esp+2Ch+var_10]
0x77648B: fld     dword ptr [edi+0E4h]
0x776491: fmul    st, st(1)
0x776493: fadd    [esp+2Ch+var_C]
0x776497: fstp    [esp+2Ch+var_C]
0x77649B: fmul    dword ptr [edi+0E8h]
0x7764A1: fadd    [esp+2Ch+var_8]
0x7764A5: fstp    [esp+2Ch+var_8]
0x7764A9: jmp     short loc_77650C
0x7764AB: mov     esi, [edi+104h]
0x7764B1: test    esi, esi
0x7764B3: jz      loc_776641
0x7764B9: push    edi
0x7764BA: mov     ecx, esi
0x7764BC: call    sub_775FF0
0x7764C1: test    al, al
0x7764C3: jz      short loc_7764D8
0x7764C5: mov     eax, [ebx+20h]
0x7764C8: mov     edx, [esi+6Ch]
0x7764CB: mov     ecx, [eax]
0x7764CD: push    esi
0x7764CE: push    edx
0x7764CF: push    eax
0x7764D0: mov     eax, [ecx+0CCh]
0x7764D6: call    eax
0x7764D8: cmp     byte ptr [esi+71h], 0
0x7764DC: jnz     short loc_776503
0x7764DE: mov     eax, [ebx+20h]
0x7764E1: mov     edx, [esi+6Ch]
0x7764E4: mov     ecx, [eax]
0x7764E6: push    1
0x7764E8: push    edx
0x7764E9: push    eax
0x7764EA: mov     eax, [ecx+0D4h]
0x7764F0: call    eax
0x7764F2: lea     ecx, [esp+2Ch+var_18]
0x7764F6: push    ecx
0x7764F7: lea     ecx, [ebx+10h]
0x7764FA: mov     byte ptr [esi+71h], 1
0x7764FE: call    sub_6AA320
0x776503: add     [esp+2Ch+arg_0], 1
0x776508: mov     byte ptr [esi+70h], 0
0x77650C: test    ebp, ebp
0x77650E: jnz     loc_776410
0x776514: pop     ebp
0x776515: mov     esi, [ebx+14h]
0x776518: test    esi, esi
0x77651A: jz      short loc_776561
0x77651C: lea     esp, [esp+0]
0x776520: mov     edx, [esi+8]
0x776523: mov     edi, [edx+104h]
0x776529: cmp     byte ptr [edi+70h], 0
0x77652D: lea     eax, [esi+8]
0x776530: mov     [esp+28h+arg_0], esi
0x776534: mov     esi, [esi]
0x776536: jz      short loc_77655D
0x776538: mov     eax, [ebx+20h]
0x77653B: mov     edx, [edi+6Ch]
0x77653E: mov     ecx, [eax]
0x776540: push    0
0x776542: push    edx
0x776543: push    eax
0x776544: mov     eax, [ecx+0D4h]
0x77654A: call    eax
0x77654C: lea     ecx, [esp+28h+arg_0]
0x776550: push    ecx
0x776551: lea     ecx, [ebx+10h]
0x776554: mov     byte ptr [edi+71h], 0
0x776558: call    sub_7AA860
0x77655D: test    esi, esi
0x77655F: jnz     short loc_776520
0x776561: fld     [esp+28h+var_10]
0x776565: fld     qword ptr ds:0A3DDD8h
0x77656B: fnstcw  word ptr [esp+28h+arg_0]
0x77656F: movzx   eax, word ptr [esp+28h+arg_0]
0x776574: or      eax, 0C00h
0x776579: fmul    st(1), st
0x77657B: mov     [esp+28h+var_18], eax
0x77657F: fxch    st(1)
0x776581: fldcw   word ptr [esp+28h+var_18]
0x776585: fistp   qword ptr [esp+28h+var_18]
0x776589: mov     eax, [esp+28h+var_18]
0x77658D: cmp     eax, 0FFh
0x776592: mov     [esp+28h+var_1C], eax
0x776596: fldcw   word ptr [esp+28h+arg_0]
0x77659A: jbe     short loc_7765A4
0x77659C: mov     [esp+28h+var_1C], 0FFh
0x7765A4: fld     [esp+28h+var_C]
0x7765A8: fnstcw  word ptr [esp+28h+arg_0]
0x7765AC: movzx   eax, word ptr [esp+28h+arg_0]
0x7765B1: or      eax, 0C00h
0x7765B6: fmul    st, st(1)
0x7765B8: mov     [esp+28h+var_18], eax
0x7765BC: fldcw   word ptr [esp+28h+var_18]
0x7765C0: fistp   qword ptr [esp+28h+var_18]
0x7765C4: mov     edx, [esp+28h+var_18]
0x7765C8: cmp     edx, 0FFh
0x7765CE: fldcw   word ptr [esp+28h+arg_0]
0x7765D2: jbe     short loc_7765D9
0x7765D4: mov     edx, 0FFh
0x7765D9: fmul    [esp+28h+var_8]
0x7765DD: fnstcw  word ptr [esp+28h+arg_0]
0x7765E1: movzx   eax, word ptr [esp+28h+arg_0]
0x7765E6: or      eax, 0C00h
0x7765EB: mov     [esp+28h+var_18], eax
0x7765EF: fldcw   word ptr [esp+28h+var_18]
0x7765F3: fistp   qword ptr [esp+28h+var_18]
0x7765F7: mov     eax, [esp+28h+var_18]
0x7765FB: cmp     eax, 0FFh
0x776600: fldcw   word ptr [esp+28h+arg_0]
0x776604: jbe     short loc_77660B
0x776606: mov     eax, 0FFh
0x77660B: movzx   edi, byte ptr [esp+28h+var_1C]
0x776610: mov     ecx, [ebx+24h]
0x776613: mov     esi, [ecx]
0x776615: or      edi, 0FFFFFF00h
0x77661B: movzx   edx, dl
0x77661E: shl     edi, 8
0x776621: or      edi, edx
0x776623: mov     edx, [esi+64h]
0x776626: movzx   eax, al
0x776629: shl     edi, 8
0x77662C: push    0
0x77662E: or      edi, eax
0x776630: push    edi
0x776631: push    8Bh ; '‹'
0x776636: call    edx
0x776638: pop     edi
0x776639: pop     esi
0x77663A: pop     ebx
0x77663B: add     esp, 1Ch
0x77663E: retn    4
0x776641: mov     ecx, ebx
0x776643: call    sub_775FA0
0x776648: push    74h ; 't'; Size
0x77664A: mov     ebp, eax
0x77664C: call    FormHeapAlloc
0x776651: mov     esi, eax
0x776653: add     esp, 4
0x776656: test    esi, esi
0x776658: jz      short loc_776676
0x77665A: push    edi
0x77665B: mov     ecx, esi
0x77665D: mov     dword ptr [esi+68h], 0
0x776664: mov     [esi+6Ch], ebp
0x776667: mov     byte ptr [esi+70h], 0
0x77666B: mov     byte ptr [esi+71h], 0
0x77666F: call    sub_775FF0
0x776674: jmp     short loc_776678
0x776676: xor     esi, esi
0x776678: push    esi; a3
0x776679: push    edi; a2
0x77667A: mov     ecx, ebx; this
0x77667C: call    NiTMap_SetAt
0x776681: mov     ebp, [esp+2Ch+var_1C]
0x776685: mov     [edi+104h], esi
0x77668B: jmp     loc_7764C5
