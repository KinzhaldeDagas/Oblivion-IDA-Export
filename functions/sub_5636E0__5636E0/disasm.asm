0x5636E0: push    0FFFFFFFFh
0x5636E2: push    offset SEH_5636E0
0x5636E7: mov     eax, large fs:0
0x5636ED: push    eax
0x5636EE: sub     esp, 6A0h
0x5636F4: mov     eax, ds:0B30AACh
0x5636F9: xor     eax, esp
0x5636FB: mov     [esp+6ACh+var_10], eax
0x563702: push    ebx
0x563703: push    ebp
0x563704: push    esi
0x563705: push    edi
0x563706: mov     eax, ds:0B30AACh
0x56370B: xor     eax, esp
0x56370D: push    eax
0x56370E: lea     eax, [esp+6C0h+var_C]
0x563715: mov     large fs:0, eax
0x56371B: mov     edi, [esp+6C0h+arg_0]
0x563722: mov     ebp, ecx
0x563724: xor     ebx, ebx
0x563726: cmp     [ebp+0Ch], ebx
0x563729: jz      loc_56392A
0x56372F: cmp     dword ptr [ebp+8], 2
0x563733: jz      loc_56392A
0x563739: call    sub_5616F0
0x56373E: push    edi
0x56373F: mov     ecx, ebp
0x563741: call    sub_5622B0
0x563746: push    edi
0x563747: mov     ecx, ebp
0x563749: call    sub_562E20
0x56374E: mov     esi, [ebp+40h]
0x563751: cmp     esi, ebx
0x563753: jz      short loc_563774
0x563755: lea     eax, [esi+4]
0x563758: push    eax; lpAddend
0x563759: call    dword ptr ds:0A2807Ch
0x56375F: test    eax, eax
0x563761: jnz     short loc_563771
0x563763: cmp     esi, ebx
0x563765: jz      short loc_563771
0x563767: mov     edx, [esi]
0x563769: mov     eax, [edx]
0x56376B: push    1
0x56376D: mov     ecx, esi
0x56376F: call    eax
0x563771: mov     [ebp+40h], ebx
0x563774: mov     edx, [edi+24h]
0x563777: mov     eax, [edx+14h]
0x56377A: lea     ecx, [edi+24h]
0x56377D: call    eax
0x56377F: lea     edx, [esp+6C0h+var_114]
0x563786: mov     cl, [eax]
0x563788: mov     [edx], cl
0x56378A: add     eax, 1
0x56378D: add     edx, 1
0x563790: cmp     cl, bl
0x563792: jnz     short loc_563786
0x563794: lea     eax, [esp+6C0h+var_114]
0x56379B: lea     edx, [eax+1]
0x56379E: mov     edi, edi
0x5637A0: mov     cl, [eax]
0x5637A2: add     eax, 1
0x5637A5: cmp     cl, bl
0x5637A7: jnz     short loc_5637A0
0x5637A9: sub     eax, edx
0x5637AB: cmp     eax, 4
0x5637AE: jle     short loc_5637B7
0x5637B0: mov     [esp+eax+6C0h+var_118], bl
0x5637B7: lea     ecx, [esp+6C0h+var_6A8]; this
0x5637BB: call    ??0NiStream@@QAE@XZ; NiStream::NiStream(void)
0x5637C0: mov     [esp+6C0h+var_6A8], offset ??_7BSStream@@6B@; const BSStream::`vftable'
0x5637C8: mov     [esp+6C0h+var_21C], ebx
0x5637CF: mov     [esp+6C0h+var_220], ebx
0x5637D6: mov     edx, ds:0A65530h
0x5637DC: mov     ecx, ds:0A6552Ch
0x5637E2: mov     eax, ds:0A65534h
0x5637E7: mov     [esp+6C0h+var_214], edx
0x5637EE: mov     dx, ds:0A6553Ch
0x5637F5: mov     dword ptr [esp+6C0h+Src], ecx
0x5637FC: mov     ecx, ds:0A65538h
0x563802: mov     [esp+6C0h+var_210], eax
0x563809: lea     eax, [esp+6C0h+var_114]
0x563810: mov     [esp+6C0h+var_208], dx
0x563818: mov     [esp+6C0h+var_4], ebx
0x56381F: mov     dword ptr [esp+6C0h+var_20C], ecx
0x563826: mov     edx, eax
0x563828: mov     cl, [eax]
0x56382A: add     eax, 1
0x56382D: cmp     cl, bl
0x56382F: jnz     short loc_563828
0x563831: lea     edi, [esp+6C0h+Src]
0x563838: sub     eax, edx
0x56383A: add     edi, 0FFFFFFFFh
0x56383D: lea     ecx, [ecx+0]
0x563840: mov     cl, [edi+1]
0x563843: add     edi, 1
0x563846: cmp     cl, bl
0x563848: jnz     short loc_563840
0x56384A: mov     ecx, eax
0x56384C: shr     ecx, 2
0x56384F: mov     esi, edx
0x563851: rep movsd
0x563853: mov     ecx, eax
0x563855: and     ecx, 3
0x563858: lea     eax, [esp+6C0h+Src]
0x56385F: rep movsb
0x563861: add     eax, 0FFFFFFFFh
0x563864: mov     cl, [eax+1]
0x563867: add     eax, 1
0x56386A: cmp     cl, bl
0x56386C: jnz     short loc_563864
0x56386E: mov     ecx, ds:0A65524h
0x563874: mov     dl, ds:0A65528h
0x56387A: mov     [eax], ecx
0x56387C: mov     [eax+4], dl
0x56387F: push    ebx; int
0x563880: lea     eax, [esp+6C4h+Src]
0x563887: push    eax; Src
0x563888: lea     ecx, [esp+6C8h+var_6A8]
0x56388C: call    sub_6F9980
0x563891: test    al, al
0x563893: jz      short loc_5638D0
0x563895: cmp     [esp+6C0h+var_498], 1
0x56389D: jnz     short loc_5638D0
0x56389F: mov     ecx, [esp+6C0h+var_4A0]
0x5638A6: mov     eax, [ecx]
0x5638A8: push    eax
0x5638A9: push    offset dword_B3FA80
0x5638AE: call    NiRTTI_Cast
0x5638B3: push    eax
0x5638B4: call    sub_4A05E0
0x5638B9: add     esp, 0Ch
0x5638BC: cmp     eax, ebx
0x5638BE: jz      short loc_5638D0
0x5638C0: mov     eax, [eax+10h]
0x5638C3: cmp     eax, ebx
0x5638C5: jz      short loc_5638D0
0x5638C7: push    eax; a2
0x5638C8: lea     ecx, [ebp+40h]; this
0x5638CB: call    NiSmartPointer_Set??
0x5638D0: cmp     [ebp+40h], ebx
0x5638D3: lea     esi, [ebp+40h]
0x5638D6: jnz     short loc_563916
0x5638D8: fld     dword ptr ds:0A56670h
0x5638DE: fcomp   dword ptr [ebp+50h]
0x5638E1: fnstsw  ax
0x5638E3: test    ah, 5
0x5638E6: jp      short loc_563916
0x5638E8: fld     dword ptr [ebp+54h]
0x5638EB: sub     esp, 8
0x5638EE: fmul    qword ptr ds:0A2FAA0h
0x5638F4: fstp    [esp+6C8h+var_6AC]
0x5638F8: fld     [esp+6C8h+var_6AC]
0x5638FC: fstp    [esp+6C8h+var_6C4]; float
0x563900: fld     dword ptr [ebp+50h]
0x563903: fstp    [esp+6C8h+var_6C8]; float
0x563906: call    sub_8AFDC0
0x56390B: add     esp, 8
0x56390E: push    eax; a2
0x56390F: mov     ecx, esi; this
0x563911: call    NiSmartPointer_Set??
0x563916: lea     ecx, [esp+6C0h+var_6A8]; this
0x56391A: mov     [esp+6C0h+var_4], 0FFFFFFFFh
0x563925: call    ??1BSStream@@UAE@XZ; BSStream::~BSStream(void)
0x56392A: mov     ecx, dword ptr [esp+6C0h+var_C]
0x563931: mov     large fs:0, ecx
0x563938: pop     ecx
0x563939: pop     edi
0x56393A: pop     esi
0x56393B: pop     ebp
0x56393C: pop     ebx
0x56393D: mov     ecx, [esp+6ACh+var_10]
0x563944: xor     ecx, esp
0x563946: call    @__security_check_cookie@4; __security_check_cookie(x)
0x56394B: add     esp, 6ACh
0x563951: retn    4
