0x941760: push    ebp
0x941761: mov     ebp, esp
0x941763: and     esp, 0FFFFFFF8h
0x941766: sub     esp, 8
0x941769: dec     eax; switch 20 cases
0x94176A: cmp     eax, 13h
0x94176D: ja      def_941773; jumptable 00941773 default case, case 19
0x941773: jmp     ds:jpt_941773[eax*4]; switch jump
0x94177A: cmp     byte ptr [esi], 0; jumptable 00941773 case 1
0x94177D: mov     eax, offset aTrue; "true"
0x941782: jnz     short loc_941789
0x941784: mov     eax, offset aFalse; "false"
0x941789: push    eax
0x94178A: mov     ecx, edi
0x94178C: call    sub_8BBDB0
0x941791: mov     esp, ebp
0x941793: pop     ebp
0x941794: retn
0x941795: movsx   eax, byte ptr [esi]; jumptable 00941773 case 2
0x941798: push    eax; Args
0x941799: push    offset aC_2; "%c"
0x94179E: push    edi; int
0x94179F: call    sub_8BBEE0
0x9417A4: add     esp, 0Ch
0x9417A7: mov     esp, ebp
0x9417A9: pop     ebp
0x9417AA: retn
0x9417AB: movsx   ecx, byte ptr [esi]; jumptable 00941773 case 3
0x9417AE: push    ecx; Args
0x9417AF: push    offset aI; "%i"
0x9417B4: push    edi; int
0x9417B5: call    sub_8BBEE0
0x9417BA: add     esp, 0Ch
0x9417BD: mov     esp, ebp
0x9417BF: pop     ebp
0x9417C0: retn
0x9417C1: movzx   edx, byte ptr [esi]; jumptable 00941773 case 4
0x9417C4: push    edx; Args
0x9417C5: push    offset aU_1; "%u"
0x9417CA: push    edi; int
0x9417CB: call    sub_8BBEE0
0x9417D0: add     esp, 0Ch
0x9417D3: mov     esp, ebp
0x9417D5: pop     ebp
0x9417D6: retn
0x9417D7: movsx   eax, word ptr [esi]; jumptable 00941773 case 5
0x9417DA: push    eax; Args
0x9417DB: push    offset aI; "%i"
0x9417E0: push    edi; int
0x9417E1: call    sub_8BBEE0
0x9417E6: add     esp, 0Ch
0x9417E9: mov     esp, ebp
0x9417EB: pop     ebp
0x9417EC: retn
0x9417ED: movzx   ecx, word ptr [esi]; jumptable 00941773 case 6
0x9417F0: push    ecx; Args
0x9417F1: push    offset aU_1; "%u"
0x9417F6: push    edi; int
0x9417F7: call    sub_8BBEE0
0x9417FC: add     esp, 0Ch
0x9417FF: mov     esp, ebp
0x941801: pop     ebp
0x941802: retn
0x941803: mov     edx, [esi]; jumptable 00941773 case 7
0x941805: push    edx; Args
0x941806: push    offset aI; "%i"
0x94180B: push    edi; int
0x94180C: call    sub_8BBEE0
0x941811: add     esp, 0Ch
0x941814: mov     esp, ebp
0x941816: pop     ebp
0x941817: retn
0x941818: mov     eax, [esi]; jumptable 00941773 case 8
0x94181A: push    eax; Args
0x94181B: push    offset aU_1; "%u"
0x941820: push    edi; int
0x941821: call    sub_8BBEE0
0x941826: add     esp, 0Ch
0x941829: mov     esp, ebp
0x94182B: pop     ebp
0x94182C: retn
0x94182D: mov     ecx, [esi+4]; jumptable 00941773 case 9
0x941830: mov     edx, [esi]
0x941832: push    ecx
0x941833: push    edx; Args
0x941834: push    offset aI64i; "%I64i"
0x941839: push    edi; int
0x94183A: call    sub_8BBEE0
0x94183F: add     esp, 10h
0x941842: mov     esp, ebp
0x941844: pop     ebp
0x941845: retn
0x941846: mov     eax, [esi+4]; jumptable 00941773 case 10
0x941849: mov     ecx, [esi]
0x94184B: push    eax
0x94184C: push    ecx; Args
0x94184D: push    offset aI64u; "%I64u"
0x941852: push    edi; int
0x941853: call    sub_8BBEE0
0x941858: add     esp, 10h
0x94185B: mov     esp, ebp
0x94185D: pop     ebp
0x94185E: retn
0x94185F: fld     dword ptr [esi]; jumptable 00941773 case 11
0x941861: sub     esp, 8
0x941864: fstp    qword ptr [esp+10h+Args]; Args
0x941867: push    offset asc_A40540; "%f"
0x94186C: push    edi; int
0x94186D: call    sub_8BBEE0
0x941872: add     esp, 10h
0x941875: mov     esp, ebp
0x941877: pop     ebp
0x941878: retn
0x941879: fld     dword ptr [esi+0Ch]; jumptable 00941773 cases 12,13
0x94187C: sub     esp, 20h
0x94187F: fstp    qword ptr [esp+28h+Args]
0x941883: fld     dword ptr [esi+8]
0x941886: fstp    [esp+28h+var_18]
0x94188A: fld     dword ptr [esi+4]
0x94188D: fstp    qword ptr [esp+28h+var_20]
0x941891: fld     dword ptr [esi]
0x941893: fstp    qword ptr [esp+28h+var_28]; Args
0x941896: push    offset aFFFF; "(%f %f %f %f)"
0x94189B: push    edi; int
0x94189C: call    sub_8BBEE0
0x9418A1: add     esp, 28h
0x9418A4: mov     esp, ebp
0x9418A6: pop     ebp
0x9418A7: retn
0x9418A8: fld     dword ptr [esi+8]; jumptable 00941773 cases 14,15
0x9418AB: sub     esp, 18h
0x9418AE: fstp    qword ptr [esp+20h+Args]
0x9418B2: fld     dword ptr [esi+4]
0x9418B5: fstp    [esp+20h+var_18]
0x9418B9: fld     dword ptr [esi]
0x9418BB: fstp    qword ptr [esp+20h+var_20]; Args
0x9418BE: push    offset aFFF; "(%f %f %f)"
0x9418C3: push    edi; int
0x9418C4: call    sub_8BBEE0
0x9418C9: fld     dword ptr [esi+18h]
0x9418CC: add     esp, 8
0x9418CF: fstp    qword ptr [esp+20h+Args]
0x9418D3: fld     dword ptr [esi+14h]
0x9418D6: fstp    [esp+20h+var_18]
0x9418DA: fld     dword ptr [esi+10h]
0x9418DD: fstp    qword ptr [esp+20h+var_20]; Args
0x9418E0: push    offset aFFF; "(%f %f %f)"
0x9418E5: push    edi; int
0x9418E6: call    sub_8BBEE0
0x9418EB: add     esp, 8
0x9418EE: fld     dword ptr [esi+28h]
0x9418F1: fstp    qword ptr [esp+20h+Args]
0x9418F5: fld     dword ptr [esi+24h]
0x9418F8: fstp    [esp+20h+var_18]
0x9418FC: fld     dword ptr [esi+20h]
0x9418FF: fstp    qword ptr [esp+20h+var_20]; Args
0x941902: push    offset aFFF; "(%f %f %f)"
0x941907: push    edi; int
0x941908: call    sub_8BBEE0
0x94190D: add     esp, 20h
0x941910: mov     esp, ebp
0x941912: pop     ebp
0x941913: retn
0x941914: fld     dword ptr [esi+8]; jumptable 00941773 case 16
0x941917: sub     esp, 18h
0x94191A: fstp    qword ptr [esp+20h+Args]
0x94191E: fld     dword ptr [esi+4]
0x941921: fstp    [esp+20h+var_18]
0x941925: fld     dword ptr [esi]
0x941927: fstp    qword ptr [esp+20h+var_20]; Args
0x94192A: push    offset aFFF; "(%f %f %f)"
0x94192F: push    edi; int
0x941930: call    sub_8BBEE0
0x941935: fld     dword ptr [esi+1Ch]
0x941938: fstp    qword ptr [esp+28h+Args]
0x94193C: fld     dword ptr [esi+18h]
0x94193F: fstp    [esp+28h+var_18]
0x941943: fld     dword ptr [esi+14h]
0x941946: fstp    qword ptr [esp+28h+var_20]
0x94194A: fld     dword ptr [esi+10h]
0x94194D: fstp    qword ptr [esp+28h+var_28]; Args
0x941950: push    offset aFFFF; "(%f %f %f %f)"
0x941955: push    edi; int
0x941956: call    sub_8BBEE0
0x94195B: add     esp, 10h
0x94195E: jmp     short loc_9418EE
0x941960: fld     dword ptr [esi+0Ch]; jumptable 00941773 case 17
0x941963: sub     esp, 20h
0x941966: fstp    qword ptr [esp+28h+Args]
0x94196A: fld     dword ptr [esi+8]
0x94196D: fstp    [esp+28h+var_18]
0x941971: fld     dword ptr [esi+4]
0x941974: fstp    qword ptr [esp+28h+var_20]
0x941978: fld     dword ptr [esi]
0x94197A: fstp    qword ptr [esp+28h+var_28]; Args
0x94197D: push    offset aFFFF; "(%f %f %f %f)"
0x941982: push    edi; int
0x941983: call    sub_8BBEE0
0x941988: fld     dword ptr [esi+1Ch]
0x94198B: fstp    qword ptr [esp+30h+Args]
0x94198F: add     esp, 8
0x941992: fld     dword ptr [esi+18h]
0x941995: fstp    [esp+28h+var_18]
0x941999: fld     dword ptr [esi+14h]
0x94199C: fstp    qword ptr [esp+28h+var_20]
0x9419A0: fld     dword ptr [esi+10h]
0x9419A3: fstp    qword ptr [esp+28h+var_28]; Args
0x9419A6: push    offset aFFFF; "(%f %f %f %f)"
0x9419AB: push    edi; int
0x9419AC: call    sub_8BBEE0
0x9419B1: fld     dword ptr [esi+2Ch]
0x9419B4: fstp    qword ptr [esp+30h+Args]
0x9419B8: add     esp, 8
0x9419BB: fld     dword ptr [esi+28h]
0x9419BE: fstp    [esp+28h+var_18]
0x9419C2: fld     dword ptr [esi+24h]
0x9419C5: fstp    qword ptr [esp+28h+var_20]
0x9419C9: fld     dword ptr [esi+20h]
0x9419CC: fstp    qword ptr [esp+28h+var_28]; Args
0x9419CF: push    offset aFFFF; "(%f %f %f %f)"
0x9419D4: push    edi; int
0x9419D5: call    sub_8BBEE0
0x9419DA: fld     dword ptr [esi+3Ch]
0x9419DD: fstp    qword ptr [esp+30h+Args]
0x9419E1: add     esp, 8
0x9419E4: fld     dword ptr [esi+38h]
0x9419E7: fstp    [esp+28h+var_18]
0x9419EB: fld     dword ptr [esi+34h]
0x9419EE: fstp    qword ptr [esp+28h+var_20]
0x9419F2: fld     dword ptr [esi+30h]
0x9419F5: jmp     loc_941893
0x9419FA: fld     dword ptr [esi+8]; jumptable 00941773 case 18
0x9419FD: sub     esp, 18h
0x941A00: fstp    qword ptr [esp+20h+Args]
0x941A04: fld     dword ptr [esi+4]
0x941A07: fstp    [esp+20h+var_18]
0x941A0B: fld     dword ptr [esi]
0x941A0D: fstp    qword ptr [esp+20h+var_20]; Args
0x941A10: push    offset aFFF; "(%f %f %f)"
0x941A15: push    edi; int
0x941A16: call    sub_8BBEE0
0x941A1B: fld     dword ptr [esi+18h]
0x941A1E: add     esp, 8
0x941A21: fstp    qword ptr [esp+20h+Args]
0x941A25: fld     dword ptr [esi+14h]
0x941A28: fstp    [esp+20h+var_18]
0x941A2C: fld     dword ptr [esi+10h]
0x941A2F: fstp    qword ptr [esp+20h+var_20]; Args
0x941A32: push    offset aFFF; "(%f %f %f)"
0x941A37: push    edi; int
0x941A38: call    sub_8BBEE0
0x941A3D: fld     dword ptr [esi+28h]
0x941A40: add     esp, 8
0x941A43: fstp    qword ptr [esp+20h+Args]
0x941A47: fld     dword ptr [esi+24h]
0x941A4A: fstp    [esp+20h+var_18]
0x941A4E: fld     dword ptr [esi+20h]
0x941A51: fstp    qword ptr [esp+20h+var_20]; Args
0x941A54: push    offset aFFF; "(%f %f %f)"
0x941A59: push    edi; int
0x941A5A: call    sub_8BBEE0
0x941A5F: fld     dword ptr [esi+38h]
0x941A62: add     esp, 8
0x941A65: fstp    qword ptr [esp+20h+Args]
0x941A69: fld     dword ptr [esi+34h]
0x941A6C: fstp    [esp+20h+var_18]
0x941A70: fld     dword ptr [esi+30h]
0x941A73: jmp     loc_9418FF
0x941A78: mov     eax, [esi]; jumptable 00941773 case 20
0x941A7A: mov     edx, [ecx]
0x941A7C: push    eax
0x941A7D: lea     eax, [esp+0Ch+Format]
0x941A81: push    eax
0x941A82: call    dword ptr [edx+10h]
0x941A85: mov     ecx, [esp+8+Format]
0x941A89: push    ecx; Format
0x941A8A: push    edi; int
0x941A8B: call    sub_8BBEE0
0x941A90: mov     ecx, [esp+10h+Format]
0x941A94: mov     eax, [ecx-4]
0x941A97: add     ecx, 0FFFFFFF4h
0x941A9A: add     esp, 8
0x941A9D: dec     eax
0x941A9E: mov     [ecx+8], eax
0x941AA1: jns     short def_941773; jumptable 00941773 default case, case 19
0x941AA3: call    sub_8B1930
0x941AA8: mov     esp, ebp; jumptable 00941773 default case, case 19
0x941AAA: pop     ebp
0x941AAB: retn
