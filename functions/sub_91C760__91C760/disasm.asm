0x91C760: push    ebp
0x91C761: mov     ebp, esp
0x91C763: and     esp, 0FFFFFFF0h
0x91C766: sub     esp, 54h
0x91C769: push    ebx
0x91C76A: push    esi
0x91C76B: mov     esi, large fs:2Ch
0x91C772: push    edi
0x91C773: mov     edi, ds:0BA9DE4h
0x91C779: mov     eax, [esi+edi*4]
0x91C77C: mov     edx, [eax+1A8h]
0x91C782: mov     ebx, ecx
0x91C784: mov     ecx, [eax+1A4h]
0x91C78A: cmp     ecx, edx
0x91C78C: jnb     short loc_91C7B3
0x91C78E: mov     ecx, [eax+1A4h]
0x91C794: mov     dword ptr [ecx], offset aTthkrigidbodyc; "TthkRigidBodyCentreOfMassViewer"
0x91C79A: rdtsc
0x91C79C: mov     [esp+60h+var_54], eax
0x91C7A0: mov     edx, [esp+60h+var_54]
0x91C7A4: mov     eax, [esi+edi*4]
0x91C7A7: mov     [ecx+4], edx
0x91C7AA: add     ecx, 0Ch
0x91C7AD: mov     [eax+1A4h], ecx
0x91C7B3: mov     eax, [ebx+8]
0x91C7B6: test    eax, eax
0x91C7B8: mov     [esp+60h+var_54], 0
0x91C7C0: jle     loc_91C983
0x91C7C6: mov     eax, [ebx+4]
0x91C7C9: mov     ecx, [esp+60h+var_54]
0x91C7CD: mov     edx, [eax+ecx*4]
0x91C7D0: mov     ecx, [edx+50h]
0x91C7D3: call    sub_89DA90
0x91C7D8: fld     dword ptr ds:0A2FAA8h
0x91C7DE: fucompp
0x91C7E0: fnstsw  ax
0x91C7E2: test    ah, 44h
0x91C7E5: jnp     loc_91C96F
0x91C7EB: mov     eax, [esi+edi*4]
0x91C7EE: mov     ecx, [eax+1A4h]
0x91C7F4: cmp     ecx, [eax+1A8h]
0x91C7FA: jnb     short loc_91C821
0x91C7FC: mov     ecx, [eax+1A4h]
0x91C802: mov     dword ptr [ecx], offset aTtgetmassandli; "TtgetMassAndLines"
0x91C808: rdtsc
0x91C80A: mov     [esp+60h+var_50], eax
0x91C80E: mov     edx, [esp+60h+var_50]
0x91C812: mov     eax, [esi+edi*4]
0x91C815: mov     [ecx+4], edx
0x91C818: add     ecx, 0Ch
0x91C81B: mov     [eax+1A4h], ecx
0x91C821: mov     ecx, [esp+60h+var_54]
0x91C825: mov     eax, [ebx+4]
0x91C828: mov     edx, [eax+ecx*4]
0x91C82B: lea     eax, [eax+ecx*4]
0x91C82E: mov     ecx, [edx+50h]
0x91C831: movaps  xmm0, xmmword ptr [ecx+60h]
0x91C835: movaps  [esp+60h+var_40], xmm0
0x91C83A: mov     edx, [eax]
0x91C83C: mov     ecx, [edx+50h]
0x91C83F: movaps  xmm1, xmmword ptr [ecx+10h]
0x91C843: movaps  xmm2, xmm0
0x91C846: addps   xmm2, xmm1
0x91C849: movaps  [esp+60h+var_20], xmm2
0x91C84E: mov     edx, [eax]
0x91C850: mov     ecx, [edx+50h]
0x91C853: movaps  xmm1, xmmword ptr [ecx+20h]
0x91C857: movaps  xmm2, xmm0
0x91C85A: addps   xmm2, xmm1
0x91C85D: movaps  [esp+60h+var_10], xmm2
0x91C862: mov     edx, [eax]
0x91C864: mov     eax, [edx+50h]
0x91C867: movaps  xmm1, xmmword ptr [eax+30h]
0x91C86B: mov     eax, [esi+edi*4]
0x91C86E: mov     ecx, [eax+1A4h]
0x91C874: cmp     ecx, [eax+1A8h]
0x91C87A: addps   xmm0, xmm1
0x91C87D: movaps  [esp+60h+var_30], xmm0
0x91C882: jnb     short loc_91C8A9
0x91C884: mov     ecx, [eax+1A4h]
0x91C88A: mov     dword ptr [ecx], offset aEt; "Et"
0x91C890: rdtsc
0x91C892: mov     [esp+60h+var_4C], eax
0x91C896: mov     edx, [esp+60h+var_4C]
0x91C89A: mov     eax, [esi+edi*4]
0x91C89D: mov     [ecx+4], edx
0x91C8A0: add     ecx, 0Ch
0x91C8A3: mov     [eax+1A4h], ecx
0x91C8A9: mov     eax, [esi+edi*4]
0x91C8AC: mov     ecx, [eax+1A4h]
0x91C8B2: cmp     ecx, [eax+1A8h]
0x91C8B8: jnb     short loc_91C8DF
0x91C8BA: mov     ecx, [eax+1A4h]
0x91C8C0: mov     dword ptr [ecx], offset aTtdisplay3line; "Ttdisplay3lines"
0x91C8C6: rdtsc
0x91C8C8: mov     [esp+60h+var_48], eax
0x91C8CC: mov     edx, [esp+60h+var_48]
0x91C8D0: mov     eax, [esi+edi*4]
0x91C8D3: mov     [ecx+4], edx
0x91C8D6: add     ecx, 0Ch
0x91C8D9: mov     [eax+1A4h], ecx
0x91C8DF: mov     edx, ds:0BA8444h
0x91C8E5: mov     ecx, [ebx-14h]
0x91C8E8: mov     eax, [ecx]
0x91C8EA: push    edx
0x91C8EB: push    0FFFF0000h
0x91C8F0: lea     edx, [esp+68h+var_20]
0x91C8F4: push    edx
0x91C8F5: lea     edx, [esp+6Ch+var_40]
0x91C8F9: push    edx
0x91C8FA: call    dword ptr [eax+1Ch]
0x91C8FD: mov     edx, ds:0BA8444h
0x91C903: mov     ecx, [ebx-14h]
0x91C906: mov     eax, [ecx]
0x91C908: push    edx
0x91C909: push    0FF008000h
0x91C90E: lea     edx, [esp+68h+var_10]
0x91C912: push    edx
0x91C913: lea     edx, [esp+6Ch+var_40]
0x91C917: push    edx
0x91C918: call    dword ptr [eax+1Ch]
0x91C91B: mov     edx, ds:0BA8444h
0x91C921: mov     ecx, [ebx-14h]
0x91C924: mov     eax, [ecx]
0x91C926: push    edx
0x91C927: push    0FF0000FFh
0x91C92C: lea     edx, [esp+68h+var_30]
0x91C930: push    edx
0x91C931: lea     edx, [esp+6Ch+var_40]
0x91C935: push    edx
0x91C936: call    dword ptr [eax+1Ch]
0x91C939: mov     eax, [esi+edi*4]
0x91C93C: mov     ecx, [eax+1A4h]
0x91C942: cmp     ecx, [eax+1A8h]
0x91C948: jnb     short loc_91C96F
0x91C94A: mov     ecx, [eax+1A4h]
0x91C950: mov     dword ptr [ecx], offset aEt; "Et"
0x91C956: rdtsc
0x91C958: mov     [esp+60h+var_44], eax
0x91C95C: mov     edx, [esp+60h+var_44]
0x91C960: mov     eax, [esi+edi*4]
0x91C963: mov     [ecx+4], edx
0x91C966: add     ecx, 0Ch
0x91C969: mov     [eax+1A4h], ecx
0x91C96F: mov     eax, [esp+60h+var_54]
0x91C973: mov     ecx, [ebx+8]
0x91C976: inc     eax
0x91C977: cmp     eax, ecx
0x91C979: mov     [esp+60h+var_54], eax
0x91C97D: jl      loc_91C7C6
0x91C983: mov     eax, [esi+edi*4]
0x91C986: mov     ecx, [eax+1A4h]
0x91C98C: cmp     ecx, [eax+1A8h]
0x91C992: jnb     short loc_91C9B8
0x91C994: mov     esi, eax
0x91C996: mov     ecx, [esi+1A4h]
0x91C99C: mov     dword ptr [ecx], offset aEt; "Et"
0x91C9A2: rdtsc
0x91C9A4: mov     [esp+60h+var_44], eax
0x91C9A8: mov     edx, [esp+60h+var_44]
0x91C9AC: mov     [ecx+4], edx
0x91C9AF: add     ecx, 0Ch
0x91C9B2: mov     [esi+1A4h], ecx
0x91C9B8: pop     edi
0x91C9B9: pop     esi
0x91C9BA: pop     ebx
0x91C9BB: mov     esp, ebp
0x91C9BD: pop     ebp
0x91C9BE: retn    8
