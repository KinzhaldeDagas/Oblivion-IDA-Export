0x9647B0: mov     eax, ds:0B3F9A8h
0x9647B5: fld     [esp+arg_10]
0x9647B9: push    esi
0x9647BA: fld     st
0x9647BC: mov     esi, [esp+4+arg_0]
0x9647C0: mov     [esi], eax
0x9647C2: mov     eax, ds:0B3F9ACh
0x9647C7: mov     [esi+4], eax
0x9647CA: mov     eax, ds:0B3F9B0h
0x9647CF: mov     [esi+8], eax
0x9647D2: fld     dword ptr ds:0B3F9A8h
0x9647D8: fucompp
0x9647DA: xor     edx, edx
0x9647DC: fnstsw  ax
0x9647DE: fld     [esp+4+arg_18]
0x9647E2: test    ah, 44h
0x9647E5: fld     [esp+4+arg_14]
0x9647E9: jp      short loc_964814
0x9647EB: fld     st
0x9647ED: fld     dword ptr ds:0B3F9ACh
0x9647F3: fucompp
0x9647F5: fnstsw  ax
0x9647F7: test    ah, 44h
0x9647FA: jp      short loc_964814
0x9647FC: fld     st(1)
0x9647FE: fld     dword ptr ds:0B3F9B0h
0x964804: fucompp
0x964806: fnstsw  ax
0x964808: test    ah, 44h
0x96480B: jp      short loc_964814
0x96480D: mov     eax, 1
0x964812: jmp     short loc_964816
0x964814: xor     eax, eax
0x964816: fld     dword ptr ds:0AA3B44h
0x96481C: test    al, al
0x96481E: push    ebx
0x96481F: setnz   bl
0x964822: test    bl, bl
0x964824: jnz     short loc_964854
0x964826: fld     dword ptr [ecx+14h]
0x964829: fmul    st, st(2)
0x96482B: fld     dword ptr [ecx+10h]
0x96482E: fmul    st, st(5)
0x964830: faddp   st(1), st
0x964832: fld     dword ptr [ecx+18h]
0x964835: fmul    st, st(4)
0x964837: faddp   st(1), st
0x964839: fstp    [esp+8+arg_0]
0x96483D: fld     [esp+8+arg_0]
0x964841: fabs
0x964843: fstp    [esp+8+arg_0]
0x964847: fld     [esp+8+arg_0]
0x96484B: fcomp   st(1)
0x96484D: fnstsw  ax
0x96484F: test    ah, 41h
0x964852: jnz     short loc_96489C
0x964854: mov     eax, [esp+8+arg_4]
0x964858: cmp     eax, 1
0x96485B: jnz     short loc_964875
0x96485D: fld     dword ptr [esi]
0x96485F: fadd    dword ptr [ecx+10h]
0x964862: fstp    dword ptr [esi]
0x964864: fld     dword ptr [ecx+14h]
0x964867: fadd    dword ptr [esi+4]
0x96486A: fstp    dword ptr [esi+4]
0x96486D: fld     dword ptr [ecx+18h]
0x964870: fadd    dword ptr [esi+8]
0x964873: jmp     short loc_964890
0x964875: cmp     eax, 0FFFFFFFFh
0x964878: jnz     short loc_964898
0x96487A: fld     dword ptr [esi]
0x96487C: fsub    dword ptr [ecx+10h]
0x96487F: fstp    dword ptr [esi]
0x964881: fld     dword ptr [esi+4]
0x964884: fsub    dword ptr [ecx+14h]
0x964887: fstp    dword ptr [esi+4]
0x96488A: fld     dword ptr [esi+8]
0x96488D: fsub    dword ptr [ecx+18h]
0x964890: fstp    dword ptr [esi+8]
0x964893: mov     edx, 1
0x964898: test    bl, bl
0x96489A: jnz     short loc_9648CA
0x96489C: fld     dword ptr [ecx+20h]
0x96489F: fmul    st, st(2)
0x9648A1: fld     st(4)
0x9648A3: fmul    dword ptr [ecx+1Ch]
0x9648A6: faddp   st(1), st
0x9648A8: fld     dword ptr [ecx+24h]
0x9648AB: fmul    st, st(4)
0x9648AD: faddp   st(1), st
0x9648AF: fstp    [esp+8+arg_0]
0x9648B3: fld     [esp+8+arg_0]
0x9648B7: fabs
0x9648B9: fstp    [esp+8+arg_0]
0x9648BD: fld     [esp+8+arg_0]
0x9648C1: fcomp   st(1)
0x9648C3: fnstsw  ax
0x9648C5: test    ah, 41h
0x9648C8: jnz     short loc_964910
0x9648CA: mov     eax, [esp+8+arg_8]
0x9648CE: cmp     eax, 1
0x9648D1: jnz     short loc_9648EB
0x9648D3: fld     dword ptr [esi]
0x9648D5: fadd    dword ptr [ecx+1Ch]
0x9648D8: fstp    dword ptr [esi]
0x9648DA: fld     dword ptr [ecx+20h]
0x9648DD: fadd    dword ptr [esi+4]
0x9648E0: fstp    dword ptr [esi+4]
0x9648E3: fld     dword ptr [ecx+24h]
0x9648E6: fadd    dword ptr [esi+8]
0x9648E9: jmp     short loc_964906
0x9648EB: cmp     eax, 0FFFFFFFFh
0x9648EE: jnz     short loc_96490C
0x9648F0: fld     dword ptr [esi]
0x9648F2: fsub    dword ptr [ecx+1Ch]
0x9648F5: fstp    dword ptr [esi]
0x9648F7: fld     dword ptr [esi+4]
0x9648FA: fsub    dword ptr [ecx+20h]
0x9648FD: fstp    dword ptr [esi+4]
0x964900: fld     dword ptr [esi+8]
0x964903: fsub    dword ptr [ecx+24h]
0x964906: fstp    dword ptr [esi+8]
0x964909: add     edx, 1
0x96490C: test    bl, bl
0x96490E: jnz     short loc_964942
0x964910: fld     dword ptr [ecx+2Ch]
0x964913: fmulp   st(2), st
0x964915: fld     dword ptr [ecx+28h]
0x964918: fmulp   st(4), st
0x96491A: fxch    st(1)
0x96491C: faddp   st(3), st
0x96491E: fld     dword ptr [ecx+30h]
0x964921: fmulp   st(2), st
0x964923: fxch    st(2)
0x964925: faddp   st(1), st
0x964927: fstp    [esp+8+arg_0]
0x96492B: fld     [esp+8+arg_0]
0x96492F: fabs
0x964931: fstp    [esp+8+arg_0]
0x964935: fcomp   [esp+8+arg_0]
0x964939: fnstsw  ax
0x96493B: test    ah, 5
0x96493E: jp      short loc_96498C
0x964940: jmp     short loc_96494A
0x964942: fstp    st(3)
0x964944: fstp    st(2)
0x964946: fstp    st
0x964948: fstp    st
0x96494A: mov     eax, [esp+8+arg_C]
0x96494E: cmp     eax, 1
0x964951: jnz     short loc_96496B
0x964953: fld     dword ptr [esi]
0x964955: fadd    dword ptr [ecx+28h]
0x964958: fstp    dword ptr [esi]
0x96495A: fld     dword ptr [ecx+2Ch]
0x96495D: fadd    dword ptr [esi+4]
0x964960: fstp    dword ptr [esi+4]
0x964963: fld     dword ptr [ecx+30h]
0x964966: fadd    dword ptr [esi+8]
0x964969: jmp     short loc_964986
0x96496B: cmp     eax, 0FFFFFFFFh
0x96496E: jnz     short loc_96498C
0x964970: fld     dword ptr [esi]
0x964972: fsub    dword ptr [ecx+28h]
0x964975: fstp    dword ptr [esi]
0x964977: fld     dword ptr [esi+4]
0x96497A: fsub    dword ptr [ecx+2Ch]
0x96497D: fstp    dword ptr [esi+4]
0x964980: fld     dword ptr [esi+8]
0x964983: fsub    dword ptr [ecx+30h]
0x964986: fstp    dword ptr [esi+8]
0x964989: add     edx, 1
0x96498C: cmp     edx, 1
0x96498F: pop     ebx
0x964990: jz      short loc_96499B
0x964992: mov     ecx, esi
0x964994: call    sub_43F350
0x964999: fstp    st
0x96499B: mov     eax, esi
0x96499D: pop     esi
0x96499E: retn    1Ch
