0x9397F0: push    ebp
0x9397F1: mov     ebp, esp
0x9397F3: and     esp, 0FFFFFFF0h
0x9397F6: sub     esp, 14h
0x9397F9: push    ebx
0x9397FA: mov     ebx, large fs:2Ch
0x939801: push    esi
0x939802: push    edi
0x939803: mov     edi, ds:0BA9DE4h
0x939809: mov     eax, [ebx+edi*4]
0x93980C: mov     edx, [eax+1A4h]
0x939812: cmp     edx, [eax+1A8h]
0x939818: jnb     short loc_939846
0x93981A: mov     esi, [eax+1A4h]
0x939820: mov     dword ptr [esi], offset aLtgskagent; "LtGskAgent"
0x939826: mov     dword ptr [esi+0Ch], offset off_A9BC80
0x93982D: rdtsc
0x93982F: mov     [esp+20h+var_14], eax
0x939833: mov     eax, [esp+20h+var_14]
0x939837: mov     [esi+4], eax
0x93983A: mov     eax, [ebx+edi*4]
0x93983D: add     esi, 10h
0x939840: mov     [eax+1A4h], esi
0x939846: mov     esi, [ebp+arg_8]
0x939849: fld     dword ptr [esi+10h]
0x93984C: fld     dword ptr [ecx+18h]
0x93984F: fucompp
0x939851: fnstsw  ax
0x939853: test    ah, 44h
0x939856: jnp     loc_93993E
0x93985C: mov     edx, [ebp+arg_4]
0x93985F: fld     dword ptr [esi+18h]
0x939862: mov     eax, [edx+8]
0x939865: fld     st
0x939867: mov     edx, [ebp+arg_0]
0x93986A: mov     edx, [edx+8]
0x93986D: fmul    dword ptr [edx+5Ch]
0x939870: movaps  xmm2, xmmword ptr [eax+40h]
0x939874: movaps  xmm3, xmmword ptr [eax+50h]
0x939878: fxch    st(1)
0x93987A: fmul    dword ptr [eax+5Ch]
0x93987D: subps   xmm3, xmm2
0x939880: fld     st(1)
0x939882: fstp    [esp+20h+var_14]
0x939886: movss   xmm0, [esp+20h+var_14]
0x93988C: fst     [esp+20h+var_14]
0x939890: movss   xmm1, [esp+20h+var_14]
0x939896: fld     dword ptr [edx+0A0h]
0x93989C: movaps  xmm2, xmm1
0x93989F: fmul    dword ptr [edx+9Ch]
0x9398A5: shufps  xmm2, xmm1, 0
0x9398A9: movaps  xmm1, xmmword ptr [edx+50h]
0x9398AD: mulps   xmm2, xmm3
0x9398B0: movaps  xmm3, xmmword ptr [edx+40h]
0x9398B4: fmul    st, st(2)
0x9398B6: fld     dword ptr [eax+0A0h]
0x9398BC: subps   xmm3, xmm1
0x9398BF: fmul    dword ptr [eax+9Ch]
0x9398C5: movaps  xmm1, xmm0
0x9398C8: shufps  xmm1, xmm0, 0
0x9398CC: mulps   xmm1, xmm3
0x9398CF: fmul    st, st(2)
0x9398D1: addps   xmm1, xmm2
0x9398D4: movaps  [esp+20h+var_10], xmm1
0x9398D9: faddp   st(1), st
0x9398DB: fstp    dword ptr [esp+20h+var_10+0Ch]
0x9398DF: fstp    st
0x9398E1: fstp    st
0x9398E3: fld     dword ptr [ecx+2Ch]
0x9398E6: fcomp   dword ptr [esi+8]
0x9398E9: fnstsw  ax
0x9398EB: test    ah, 41h
0x9398EE: jnz     short loc_93993E
0x9398F0: movaps  xmm1, [esp+20h+var_10]
0x9398F5: fld     dword ptr [ecx+2Ch]
0x9398F8: movaps  xmm2, xmmword ptr [ecx+20h]
0x9398FC: movaps  xmm0, xmm1
0x9398FF: mulps   xmm0, xmm2
0x939902: movaps  xmm2, xmm1
0x939905: shufps  xmm2, xmm1, 0FFh
0x939909: movaps  xmm1, xmm0
0x93990C: shufps  xmm1, xmm0, 0AAh ; 'ª'
0x939910: addss   xmm1, xmm2
0x939914: movaps  xmm2, xmm0
0x939917: shufps  xmm2, xmm0, 55h ; 'U'
0x93991B: lea     eax, [esp+20h+var_14]
0x93991F: addss   xmm2, xmm0
0x939923: addps   xmm2, xmm1
0x939926: movss   dword ptr [eax], xmm2
0x93992A: fsub    [esp+20h+var_14]
0x93992E: fstp    dword ptr [ecx+2Ch]
0x939931: fld     dword ptr [ecx+2Ch]
0x939934: fcomp   dword ptr [esi+8]
0x939937: fnstsw  ax
0x939939: test    ah, 41h
0x93993C: jz      short loc_939996
0x93993E: mov     eax, [ebx+edi*4]
0x939941: mov     edx, [eax+1A4h]
0x939947: cmp     edx, [eax+1A8h]
0x93994D: jnb     short loc_93997E
0x93994F: mov     edi, eax
0x939951: mov     edi, [edi+1A4h]
0x939957: mov     dword ptr [edi], offset aStgsk; "StGsk"
0x93995D: rdtsc
0x93995F: mov     [esp+20h+var_14], eax
0x939963: mov     eax, [esp+20h+var_14]
0x939967: mov     edx, ds:0BA9DE4h
0x93996D: mov     [edi+4], eax
0x939970: mov     eax, [ebx+edx*4]
0x939973: add     edi, 0Ch
0x939976: mov     [eax+1A4h], edi
0x93997C: mov     edi, edx
0x93997E: mov     eax, [esi+14h]
0x939981: mov     edx, [ebp+arg_C]
0x939984: push    edx
0x939985: mov     edx, [ebp+arg_0]
0x939988: mov     [ecx+18h], eax
0x93998B: mov     eax, [ebp+arg_4]
0x93998E: push    esi
0x93998F: push    eax
0x939990: push    edx
0x939991: call    sub_939450
0x939996: mov     eax, [ebx+edi*4]
0x939999: mov     ecx, [eax+1A4h]
0x93999F: cmp     ecx, [eax+1A8h]
0x9399A5: jnb     short loc_9399CB
0x9399A7: mov     ebx, eax
0x9399A9: mov     ecx, [ebx+1A4h]
0x9399AF: mov     dword ptr [ecx], offset aLt_0; "lt"
0x9399B5: rdtsc
0x9399B7: mov     [esp+20h+var_14], eax
0x9399BB: mov     edx, [esp+20h+var_14]
0x9399BF: mov     [ecx+4], edx
0x9399C2: add     ecx, 0Ch
0x9399C5: mov     [ebx+1A4h], ecx
0x9399CB: pop     edi
0x9399CC: pop     esi
0x9399CD: pop     ebx
0x9399CE: mov     esp, ebp
0x9399D0: pop     ebp
0x9399D1: retn    10h
