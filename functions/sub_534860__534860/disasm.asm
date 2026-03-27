0x534860: push    ecx
0x534861: mov     ecx, ds:0B34D90h
0x534867: push    ebx
0x534868: push    ebp
0x534869: push    esi
0x53486A: push    edi; ArgList
0x53486B: lea     eax, [esp+14h+var_4]
0x53486F: push    eax
0x534870: mov     [esp+18h+var_4], 0
0x534878: call    sub_494410
0x53487D: mov     ebx, [esp+14h+arg_C]
0x534881: mov     ecx, ebx
0x534883: mov     ebp, eax
0x534885: mov     edx, ecx
0x534887: mov     al, [ecx]
0x534889: add     ecx, 1
0x53488C: test    al, al
0x53488E: jnz     short loc_534887
0x534890: sub     ecx, edx
0x534892: mov     esi, edx
0x534894: mov     edx, ecx
0x534896: mov     ecx, [ebp+8]
0x534899: lea     edi, [ecx+ebp+10h]
0x53489D: add     edi, 0FFFFFFFFh
0x5348A0: mov     cl, [edi+1]
0x5348A3: add     edi, 1
0x5348A6: test    cl, cl
0x5348A8: jnz     short loc_5348A0
0x5348AA: mov     ecx, edx
0x5348AC: shr     ecx, 2
0x5348AF: rep movsd
0x5348B1: mov     ecx, edx
0x5348B3: and     ecx, 3
0x5348B6: mov     eax, ebx
0x5348B8: rep movsb
0x5348BA: lea     ecx, [eax+1]
0x5348BD: lea     ecx, [ecx+0]
0x5348C0: mov     dl, [eax]
0x5348C2: add     eax, 1
0x5348C5: test    dl, dl
0x5348C7: jnz     short loc_5348C0
0x5348C9: sub     eax, ecx
0x5348CB: add     [ebp+8], eax
0x5348CE: mov     eax, [ebp+8]
0x5348D1: push    3Ah ; ':'
0x5348D3: lea     edx, [eax+ebp+10h]
0x5348D7: push    offset aC_2; "%c"
0x5348DC: push    edx
0x5348DD: call    __sprintf
0x5348E2: mov     ecx, [esp+20h+arg_10]
0x5348E6: add     [ebp+8], eax
0x5348E9: mov     eax, [ebp+8]
0x5348EC: push    ecx
0x5348ED: lea     edx, [eax+ebp+10h]
0x5348F1: push    offset aD_0; "%d"
0x5348F6: push    edx
0x5348F7: call    __sprintf
0x5348FC: add     [ebp+8], eax
0x5348FF: mov     eax, [ebp+8]
0x534902: lea     eax, [eax+ebp+10h]
0x534906: add     esp, 18h
0x534909: add     eax, 0FFFFFFFFh
0x53490C: lea     esp, [esp+0]
0x534910: mov     cl, [eax+1]
0x534913: add     eax, 1
0x534916: test    cl, cl
0x534918: jnz     short loc_534910
0x53491A: mov     cx, ds:0A56274h
0x534921: mov     ebx, [esp+14h+arg_0]
0x534925: mov     [eax], cx
0x534928: mov     dl, ds:0A56276h
0x53492E: mov     [eax+2], dl
0x534931: add     dword ptr [ebp+8], 2
0x534935: mov     edi, [ebp+8]
0x534938: mov     eax, ebx
0x53493A: mov     ecx, ebx
0x53493C: lea     esp, [esp+0]
0x534940: mov     dl, [eax]
0x534942: add     eax, 1
0x534945: test    dl, dl
0x534947: jnz     short loc_534940
0x534949: lea     edi, [edi+ebp+10h]
0x53494D: sub     eax, ecx
0x53494F: mov     esi, ecx
0x534951: add     edi, 0FFFFFFFFh
0x534954: mov     cl, [edi+1]
0x534957: add     edi, 1
0x53495A: test    cl, cl
0x53495C: jnz     short loc_534954
0x53495E: mov     ecx, eax
0x534960: shr     ecx, 2
0x534963: rep movsd
0x534965: mov     ecx, eax
0x534967: and     ecx, 3
0x53496A: mov     eax, ebx
0x53496C: rep movsb
0x53496E: lea     edx, [eax+1]
0x534971: mov     cl, [eax]
0x534973: add     eax, 1
0x534976: test    cl, cl
0x534978: jnz     short loc_534971
0x53497A: sub     eax, edx
0x53497C: add     [ebp+8], eax
0x53497F: mov     eax, [ebp+8]
0x534982: lea     edi, [eax+ebp+10h]
0x534986: add     edi, 0FFFFFFFFh
0x534989: lea     esp, [esp+0]
0x534990: mov     al, [edi+1]
0x534993: add     edi, 1
0x534996: test    al, al
0x534998: jnz     short loc_534990
0x53499A: mov     eax, ds:0A5626Ch
0x53499F: mov     ebx, [esp+14h+arg_8]
0x5349A3: mov     [edi], eax
0x5349A5: add     dword ptr [ebp+8], 3
0x5349A9: mov     edi, [ebp+8]
0x5349AC: mov     eax, ebx
0x5349AE: mov     ecx, ebx
0x5349B0: mov     dl, [eax]
0x5349B2: add     eax, 1
0x5349B5: test    dl, dl
0x5349B7: jnz     short loc_5349B0
0x5349B9: lea     edi, [edi+ebp+10h]
0x5349BD: sub     eax, ecx
0x5349BF: mov     esi, ecx
0x5349C1: add     edi, 0FFFFFFFFh
0x5349C4: mov     cl, [edi+1]
0x5349C7: add     edi, 1
0x5349CA: test    cl, cl
0x5349CC: jnz     short loc_5349C4
0x5349CE: mov     ecx, eax
0x5349D0: shr     ecx, 2
0x5349D3: rep movsd
0x5349D5: mov     ecx, eax
0x5349D7: and     ecx, 3
0x5349DA: mov     eax, ebx
0x5349DC: rep movsb
0x5349DE: lea     edx, [eax+1]
0x5349E1: mov     cl, [eax]
0x5349E3: add     eax, 1
0x5349E6: test    cl, cl
0x5349E8: jnz     short loc_5349E1
0x5349EA: sub     eax, edx
0x5349EC: add     [ebp+8], eax
0x5349EF: mov     eax, [ebp+8]
0x5349F2: lea     edi, [eax+ebp+10h]
0x5349F6: add     edi, 0FFFFFFFFh
0x5349F9: lea     esp, [esp+0]
0x534A00: mov     al, [edi+1]
0x534A03: add     edi, 1
0x534A06: test    al, al
0x534A08: jnz     short loc_534A00
0x534A0A: mov     cx, ds:0A56270h
0x534A11: lea     esi, [ebp+10h]
0x534A14: push    esi; Format
0x534A15: mov     [edi], cx
0x534A18: add     dword ptr [ebp+8], 1
0x534A1C: push    0; int
0x534A1E: call    sub_533D30
0x534A23: add     esp, 8
0x534A26: pop     edi
0x534A27: mov     byte ptr [esi], 0
0x534A2A: pop     esi
0x534A2B: mov     [ebp+0Ch], eax
0x534A2E: mov     dword ptr [ebp+8], 0
0x534A35: pop     ebp
0x534A36: pop     ebx
0x534A37: pop     ecx
0x534A38: retn    14h
