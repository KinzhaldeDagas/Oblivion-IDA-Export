0x8EA4B0: push    ebp
0x8EA4B1: mov     ebp, esp
0x8EA4B3: and     esp, 0FFFFFFF0h
0x8EA4B6: sub     esp, 34h
0x8EA4B9: push    ebx
0x8EA4BA: push    esi
0x8EA4BB: push    edi
0x8EA4BC: movaps  xmm0, xmmword ptr [ecx+60h]
0x8EA4C0: mov     edx, [ebp+arg_0]
0x8EA4C3: lea     esi, [ecx+10h]
0x8EA4C6: movaps  xmmword ptr [esi+40h], xmm0
0x8EA4CA: mov     eax, [edx]
0x8EA4CC: mov     [esi+4Ch], eax
0x8EA4CF: fld     dword ptr [esi+0A4h]
0x8EA4D5: movaps  xmm1, xmmword ptr [ecx+0D0h]
0x8EA4DC: fld     st
0x8EA4DE: movaps  xmm0, xmm1
0x8EA4E1: fmul    st, st(1)
0x8EA4E3: mulps   xmm0, xmm1
0x8EA4E6: movaps  xmm2, xmm0
0x8EA4E9: shufps  xmm2, xmm0, 55h ; 'U'
0x8EA4ED: movaps  xmm3, xmm0
0x8EA4F0: lea     eax, [esp+40h+var_2C]
0x8EA4F4: addss   xmm2, xmm0
0x8EA4F8: shufps  xmm3, xmm0, 0AAh ; 'ª'
0x8EA4FC: addss   xmm3, xmm2
0x8EA500: movss   dword ptr [eax], xmm3
0x8EA504: fld     [esp+40h+var_2C]
0x8EA508: fcompp
0x8EA50A: fnstsw  ax
0x8EA50C: fstp    st
0x8EA50E: test    ah, 41h
0x8EA511: jnz     short loc_8EA53A
0x8EA513: fld     [esp+40h+var_2C]
0x8EA517: fsqrt
0x8EA519: fdivr   dword ptr [esi+0A4h]
0x8EA51F: fstp    [esp+40h+var_28]
0x8EA523: movss   xmm0, [esp+40h+var_28]
0x8EA529: movaps  xmm2, xmm0
0x8EA52C: shufps  xmm2, xmm0, 0
0x8EA530: mulps   xmm2, xmm1
0x8EA533: movaps  xmmword ptr [ecx+0D0h], xmm2
0x8EA53A: mov     eax, [edx+8]
0x8EA53D: movaps  xmm1, xmmword ptr [ecx+0D0h]
0x8EA544: mov     [esp+40h+var_28], eax
0x8EA548: movss   xmm0, [esp+40h+var_28]
0x8EA54E: movaps  xmm2, xmm0
0x8EA551: shufps  xmm2, xmm0, 0
0x8EA555: movaps  xmm0, xmmword ptr [esi+50h]
0x8EA559: mulps   xmm2, xmm1
0x8EA55C: addps   xmm0, xmm2
0x8EA55F: movaps  xmmword ptr [esi+50h], xmm0
0x8EA563: mov     eax, [edx+0Ch]
0x8EA566: mov     [esi+5Ch], eax
0x8EA569: lea     edi, [esi+70h]
0x8EA56C: mov     eax, edi
0x8EA56E: mov     ebx, [eax]
0x8EA570: mov     dword ptr [esp+40h+var_20], ebx
0x8EA574: mov     ebx, [eax+4]
0x8EA577: mov     dword ptr [esp+40h+var_20+4], ebx
0x8EA57B: mov     ebx, [eax+8]
0x8EA57E: mov     eax, [eax+0Ch]
0x8EA581: mov     dword ptr [esp+40h+var_20+0Ch], eax
0x8EA585: mov     dword ptr [esp+40h+var_20+8], ebx
0x8EA589: movaps  xmm0, [esp+40h+var_20]
0x8EA58E: movaps  xmmword ptr [esi+60h], xmm0
0x8EA592: fld     dword ptr [edx+8]
0x8EA595: fmul    dword ptr ds:0A3D65Ch
0x8EA59B: movaps  xmm2, xmmword ptr [ecx+0E0h]
0x8EA5A2: lea     eax, [esp+40h+var_28]
0x8EA5A6: fstp    [esp+40h+var_28]
0x8EA5AA: movss   xmm0, [esp+40h+var_28]
0x8EA5B0: movaps  xmm1, xmm0
0x8EA5B3: shufps  xmm1, xmm0, 0
0x8EA5B7: mulps   xmm1, xmm2
0x8EA5BA: movaps  xmm0, xmm1
0x8EA5BD: mulps   xmm0, xmm1
0x8EA5C0: movaps  xmm3, xmm0
0x8EA5C3: shufps  xmm3, xmm0, 55h ; 'U'
0x8EA5C7: movaps  xmm4, xmm0
0x8EA5CA: addss   xmm3, xmm0
0x8EA5CE: shufps  xmm4, xmm0, 0AAh ; 'ª'
0x8EA5D2: addss   xmm4, xmm3
0x8EA5D6: movss   dword ptr [eax], xmm4
0x8EA5DA: fld     [esp+40h+var_28]
0x8EA5DE: fmul    dword ptr ds:0A96F74h
0x8EA5E4: movaps  [esp+40h+var_10], xmm1
0x8EA5E9: fstp    [esp+40h+var_2C]
0x8EA5ED: fld     dword ptr [esi+0A8h]
0x8EA5F3: fmul    dword ptr [edx+8]
0x8EA5F6: fld     dword ptr ds:0A37450h
0x8EA5FC: fcomp   st(1)
0x8EA5FE: fnstsw  ax
0x8EA600: test    ah, 5
0x8EA603: jp      short loc_8EA60D
0x8EA605: fstp    st
0x8EA607: fld     dword ptr ds:0A37450h
0x8EA60D: fld     st
0x8EA60F: fmul    st, st(1)
0x8EA611: fstp    [esp+40h+var_28]
0x8EA615: fld     [esp+40h+var_2C]
0x8EA619: fcomp   [esp+40h+var_28]
0x8EA61D: fnstsw  ax
0x8EA61F: test    ah, 41h
0x8EA622: jp      short loc_8EA628
0x8EA624: fstp    st
0x8EA626: jmp     short loc_8EA662
0x8EA628: fld     [esp+40h+var_2C]
0x8EA62C: fsqrt
0x8EA62E: fdivp   st(1), st
0x8EA630: fstp    [esp+40h+var_24]
0x8EA634: movss   xmm0, [esp+40h+var_24]
0x8EA63A: movaps  xmm3, xmm0
0x8EA63D: shufps  xmm3, xmm0, 0
0x8EA641: mulps   xmm3, xmm2
0x8EA644: movaps  xmmword ptr [ecx+0E0h], xmm3
0x8EA64B: mov     ecx, [esp+40h+var_28]
0x8EA64F: movaps  xmm2, xmm0
0x8EA652: shufps  xmm2, xmm0, 0
0x8EA656: mulps   xmm2, xmm1
0x8EA659: movaps  [esp+40h+var_10], xmm2
0x8EA65E: mov     [esp+40h+var_2C], ecx
0x8EA662: fld     [esp+40h+var_2C]
0x8EA666: lea     edx, [esp+40h+var_20]
0x8EA66A: fmul    [esp+40h+var_2C]
0x8EA66E: push    edx
0x8EA66F: fld     [esp+44h+var_2C]
0x8EA673: lea     eax, [esp+44h+var_10]
0x8EA677: fmul    dword ptr ds:0A96F70h
0x8EA67D: push    eax
0x8EA67E: lea     ecx, [esp+48h+var_20]
0x8EA682: fsubr   dword ptr ds:0A2F948h
0x8EA688: fld     st(1)
0x8EA68A: fmul    dword ptr ds:0A96F6Ch
0x8EA690: fsubp   st(1), st
0x8EA692: fxch    st(1)
0x8EA694: fmul    [esp+48h+var_2C]
0x8EA698: fmul    dword ptr ds:0A96F68h
0x8EA69E: fsubp   st(1), st
0x8EA6A0: fstp    dword ptr [esp+48h+var_10+0Ch]
0x8EA6A4: call    sub_889470
0x8EA6A9: lea     ecx, [esp+40h+var_20]
0x8EA6AD: call    sub_4D6830
0x8EA6B2: fld     [esp+40h+var_2C]
0x8EA6B6: fsqrt
0x8EA6B8: movaps  xmm0, [esp+40h+var_10]
0x8EA6BD: movaps  xmm1, xmm0
0x8EA6C0: addps   xmm1, xmm0
0x8EA6C3: movaps  xmm0, [esp+40h+var_20]
0x8EA6C8: lea     ecx, [esi+70h]
0x8EA6CB: movaps  xmmword ptr [esi+90h], xmm1
0x8EA6D2: push    ecx
0x8EA6D3: mov     ecx, esi
0x8EA6D5: fmul    dword ptr ds:0A9AEA0h
0x8EA6DB: fstp    dword ptr [esi+9Ch]
0x8EA6E1: movaps  xmmword ptr [edi], xmm0
0x8EA6E4: call    sub_8B1DD0
0x8EA6E9: movaps  xmm0, xmmword ptr [esi+80h]
0x8EA6F0: movaps  xmm2, xmmword ptr [esi+20h]
0x8EA6F4: movaps  xmm3, xmmword ptr [esi+10h]
0x8EA6F8: movaps  xmm1, xmm0
0x8EA6FB: shufps  xmm1, xmm0, 0AAh ; 'ª'
0x8EA6FF: mulps   xmm2, xmm1
0x8EA702: movaps  xmm1, xmm0
0x8EA705: shufps  xmm1, xmm0, 55h ; 'U'
0x8EA709: mulps   xmm3, xmm1
0x8EA70C: movaps  xmm1, xmm0
0x8EA70F: shufps  xmm1, xmm0, 0
0x8EA713: movaps  xmm0, xmmword ptr [esi]
0x8EA716: mulps   xmm0, xmm1
0x8EA719: movaps  xmm1, xmmword ptr [esi+50h]
0x8EA71D: addps   xmm0, xmm3
0x8EA720: addps   xmm0, xmm2
0x8EA723: pop     edi
0x8EA724: subps   xmm1, xmm0
0x8EA727: movaps  xmmword ptr [esi+30h], xmm1
0x8EA72B: pop     esi
0x8EA72C: pop     ebx
0x8EA72D: mov     esp, ebp
0x8EA72F: pop     ebp
0x8EA730: retn    8
