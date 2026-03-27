0x441EF0: sub     esp, 8
0x441EF3: push    ebx
0x441EF4: push    ebp
0x441EF5: push    esi
0x441EF6: mov     esi, [esp+14h+a1]
0x441EFA: test    esi, esi
0x441EFC: push    edi
0x441EFD: mov     dword ptr [esp+18h+var_8], ecx
0x441F01: jz      loc_4423FF
0x441F07: push    esi
0x441F08: call    sub_43FBA0
0x441F0D: mov     eax, [esi]
0x441F0F: mov     edx, [eax+170h]
0x441F15: mov     ecx, esi
0x441F17: call    edx
0x441F19: mov     cl, [eax+4]
0x441F1C: mov     eax, [esi+8]
0x441F1F: mov     edx, eax
0x441F21: shr     edx, 5
0x441F24: test    dl, 1
0x441F27: mov     byte ptr [esp+18h+a1], cl
0x441F2B: jnz     short loc_441F84
0x441F2D: shr     eax, 0Bh
0x441F30: test    al, 1
0x441F32: jnz     short loc_441F84
0x441F34: cmp     cl, 0Ah
0x441F37: jnz     short loc_441F84
0x441F39: mov     eax, ds:0B33398h
0x441F3E: mov     ebp, [eax+24h]
0x441F41: test    ebp, ebp
0x441F43: jz      short loc_441F84
0x441F45: mov     edx, [esi]
0x441F47: mov     eax, [edx+174h]
0x441F4D: mov     ebx, [esi+0Ch]
0x441F50: mov     ecx, esi
0x441F52: call    eax
0x441F54: mov     edx, [esi]
0x441F56: push    1; int
0x441F58: push    0; int
0x441F5A: mov     edi, eax
0x441F5C: mov     eax, [edx+170h]
0x441F62: push    ebx; int
0x441F63: mov     ecx, esi
0x441F65: call    eax
0x441F67: mov     ecx, [edi]
0x441F69: mov     edx, [edi+4]
0x441F6C: push    eax; int
0x441F6D: sub     esp, 0Ch
0x441F70: mov     eax, esp
0x441F72: mov     [eax], ecx
0x441F74: mov     ecx, [edi+8]
0x441F77: mov     [eax+4], edx
0x441F7A: mov     [eax+8], ecx
0x441F7D: mov     ecx, ebp
0x441F7F: call    sub_6AE4B0
0x441F84: mov     eax, [esi+8]
0x441F87: mov     edx, eax
0x441F89: shr     edx, 5
0x441F8C: test    dl, 1
0x441F8F: jnz     short loc_44200A
0x441F91: shr     eax, 0Bh
0x441F94: test    al, 1
0x441F96: jnz     short loc_44200A
0x441F98: cmp     byte ptr [esp+18h+a1], 12h
0x441F9D: jnz     short loc_44200A
0x441F9F: mov     eax, ds:0B33398h
0x441FA4: mov     ebx, [eax+24h]
0x441FA7: lea     edi, [esi+44h]
0x441FAA: mov     ecx, edi
0x441FAC: call    sub_41E960
0x441FB1: test    eax, eax
0x441FB3: jz      short loc_441FC0
0x441FB5: push    1
0x441FB7: mov     ecx, eax
0x441FB9: call    sub_6B7190
0x441FBE: jmp     short loc_44200A
0x441FC0: test    ebx, ebx
0x441FC2: jz      short loc_44200A
0x441FC4: mov     edx, [esi]
0x441FC6: mov     eax, [edx+170h]
0x441FCC: mov     ecx, esi
0x441FCE: call    eax
0x441FD0: mov     edx, [esi]
0x441FD2: mov     ebp, [eax+54h]
0x441FD5: mov     eax, [edx+174h]
0x441FDB: mov     ecx, esi
0x441FDD: call    eax
0x441FDF: mov     edx, [eax]
0x441FE1: push    1; int
0x441FE3: push    1; int
0x441FE5: push    0; int
0x441FE7: push    ebp; int
0x441FE8: sub     esp, 0Ch
0x441FEB: mov     ecx, esp
0x441FED: mov     [ecx], edx
0x441FEF: mov     edx, [eax+4]
0x441FF2: mov     eax, [eax+8]
0x441FF5: mov     [ecx+4], edx
0x441FF8: mov     [ecx+8], eax
0x441FFB: mov     ecx, ebx
0x441FFD: call    sub_6AE4B0
0x442002: push    eax
0x442003: mov     ecx, edi
0x442005: call    sub_423B10
0x44200A: mov     eax, [esi+8]
0x44200D: mov     ecx, eax
0x44200F: shr     ecx, 5
0x442012: test    cl, 1
0x442015: jnz     loc_4420B8
0x44201B: mov     edx, eax
0x44201D: shr     edx, 0Bh
0x442020: test    dl, 1
0x442023: jnz     loc_4420B8
0x442029: cmp     byte ptr [esp+18h+a1], 18h
0x44202E: jnz     loc_4420B8
0x442034: shr     eax, 0Dh
0x442037: test    al, 1
0x442039: jnz     short loc_4420B8
0x44203B: mov     eax, [esi]
0x44203D: mov     edx, [eax+170h]
0x442043: mov     ecx, esi
0x442045: call    edx
0x442047: cmp     dword ptr [eax+60h], 0
0x44204B: jz      short loc_4420B8
0x44204D: mov     eax, ds:0B33398h
0x442052: mov     ebx, [eax+24h]
0x442055: lea     ebp, [esi+44h]
0x442058: mov     ecx, ebp
0x44205A: call    sub_41E960
0x44205F: test    eax, eax
0x442061: jz      short loc_44206E
0x442063: push    1
0x442065: mov     ecx, eax
0x442067: call    sub_6B7190
0x44206C: jmp     short loc_4420B8
0x44206E: test    ebx, ebx
0x442070: jz      short loc_4420B8
0x442072: mov     edx, [esi]
0x442074: mov     eax, [edx+170h]
0x44207A: mov     ecx, esi
0x44207C: call    eax
0x44207E: mov     edx, [esi]
0x442080: mov     edi, [eax+60h]
0x442083: mov     eax, [edx+174h]
0x442089: mov     ecx, esi
0x44208B: call    eax
0x44208D: mov     edx, [eax]
0x44208F: push    0; int
0x442091: push    1; int
0x442093: push    0; int
0x442095: push    edi; int
0x442096: sub     esp, 0Ch
0x442099: mov     ecx, esp
0x44209B: mov     [ecx], edx
0x44209D: mov     edx, [eax+4]
0x4420A0: mov     eax, [eax+8]
0x4420A3: mov     [ecx+4], edx
0x4420A6: mov     [ecx+8], eax
0x4420A9: mov     ecx, ebx
0x4420AB: call    sub_6AE4B0
0x4420B0: push    eax
0x4420B1: mov     ecx, ebp
0x4420B3: call    sub_423B10
0x4420B8: mov     eax, [esi+8]
0x4420BB: mov     ecx, eax
0x4420BD: shr     ecx, 5
0x4420C0: test    cl, 1
0x4420C3: jnz     loc_442170
0x4420C9: mov     edx, eax
0x4420CB: shr     edx, 0Bh
0x4420CE: test    dl, 1
0x4420D1: jnz     loc_442170
0x4420D7: cmp     byte ptr [esp+18h+a1], 1Ah
0x4420DC: jnz     loc_442170
0x4420E2: shr     eax, 0Dh
0x4420E5: test    al, 1
0x4420E7: jnz     loc_442170
0x4420ED: mov     eax, [esi]
0x4420EF: mov     edx, [eax+170h]
0x4420F5: mov     ecx, esi
0x4420F7: call    edx
0x4420F9: cmp     dword ptr [eax+8Ch], 0
0x442100: jz      short loc_442170
0x442102: mov     eax, ds:0B33398h
0x442107: mov     ebx, [eax+24h]
0x44210A: lea     ebp, [esi+44h]
0x44210D: mov     ecx, ebp
0x44210F: call    sub_41E960
0x442114: test    eax, eax
0x442116: jz      short loc_442123
0x442118: push    1
0x44211A: mov     ecx, eax
0x44211C: call    sub_6B7190
0x442121: jmp     short loc_442170
0x442123: test    ebx, ebx
0x442125: jz      short loc_442170
0x442127: mov     edx, [esi]
0x442129: mov     eax, [edx+170h]
0x44212F: mov     ecx, esi
0x442131: call    eax
0x442133: mov     edx, [esi]
0x442135: mov     edi, [eax+8Ch]
0x44213B: mov     eax, [edx+174h]
0x442141: mov     ecx, esi
0x442143: call    eax
0x442145: mov     edx, [eax]
0x442147: push    1; int
0x442149: push    1; int
0x44214B: push    0; int
0x44214D: push    edi; int
0x44214E: sub     esp, 0Ch
0x442151: mov     ecx, esp
0x442153: mov     [ecx], edx
0x442155: mov     edx, [eax+4]
0x442158: mov     eax, [eax+8]
0x44215B: mov     [ecx+4], edx
0x44215E: mov     [ecx+8], eax
0x442161: mov     ecx, ebx
0x442163: call    sub_6AE4B0
0x442168: push    eax
0x442169: mov     ecx, ebp
0x44216B: call    sub_423B10
0x442170: mov     ebx, dword ptr [esp+18h+var_8]
0x442174: push    esi
0x442175: mov     ecx, ebx
0x442177: call    sub_441E90
0x44217C: test    al, al
0x44217E: jz      loc_4423FF
0x442184: cmp     byte ptr [esp+18h+a8], 0
0x442189: jnz     short loc_442193
0x44218B: push    esi
0x44218C: mov     ecx, ebx
0x44218E: call    sub_43F240
0x442193: mov     edi, [esp+18h+a7]
0x442197: test    edi, edi
0x442199: jz      short loc_4421AB
0x44219B: cmp     dword ptr [esi+3Ch], 0
0x44219F: jnz     short loc_4421B9
0x4421A1: push    edi
0x4421A2: mov     ecx, esi
0x4421A4: call    sub_4D7D10
0x4421A9: jmp     short loc_4421B9
0x4421AB: mov     edx, [esi]
0x4421AD: mov     eax, [edx+14Ch]
0x4421B3: mov     ecx, esi
0x4421B5: call    eax
0x4421B7: mov     edi, eax
0x4421B9: test    edi, edi
0x4421BB: mov     ebp, [esp+18h+a6]
0x4421BF: jz      loc_4422BE
0x4421C5: cmp     byte ptr [esp+18h+a1], 25h ; '%'
0x4421CA: jnz     short loc_4421F5
0x4421CC: mov     ecx, [edi+1Ch]
0x4421CF: test    ecx, ecx
0x4421D1: jz      loc_4422BE
0x4421D7: mov     edx, [ecx]
0x4421D9: mov     edx, [edx+88h]
0x4421DF: push    edi
0x4421E0: lea     eax, [esp+1Ch+a8]
0x4421E4: push    eax
0x4421E5: call    edx
0x4421E7: lea     ecx, [esp+18h+a8]; this
0x4421EB: call    sub_7016A0
0x4421F0: jmp     loc_4422BE
0x4421F5: mov     ecx, ebp
0x4421F7: call    sub_4D58B0
0x4421FC: push    edi
0x4421FD: push    0
0x4421FF: call    GetShadowSceneNode
0x442204: add     esp, 4
0x442207: mov     ecx, eax
0x442209: call    sub_7C5D00
0x44220E: push    esi
0x44220F: mov     ecx, ebp
0x442211: call    TESObjectCELL__AttachReference3DToQuad
0x442216: mov     ecx, esi
0x442218: call    sub_4DC100
0x44221D: cmp     dword ptr [ebx+34h], 0
0x442221: jnz     short loc_442251
0x442223: mov     ecx, ds:0B33B00h
0x442229: call    sub_45A500
0x44222E: test    al, al
0x442230: jnz     short loc_442251
0x442232: push    0
0x442234: push    3EFh
0x442239: call    sub_5790E0
0x44223E: add     esp, 8
0x442241: test    al, al
0x442243: jnz     short loc_442251
0x442245: mov     ecx, ds:0B333C4h
0x44224B: push    esi
0x44224C: call    sub_667420
0x442251: mov     eax, [esi]
0x442253: mov     edx, [eax+190h]
0x442259: mov     ecx, esi
0x44225B: call    edx
0x44225D: test    al, al
0x44225F: jz      short loc_442268
0x442261: mov     ecx, esi
0x442263: call    sub_5EB370
0x442268: cmp     byte ptr [esp+18h+a1], 1Ah
0x44226D: jnz     short loc_442288
0x44226F: mov     edx, [esi]
0x442271: lea     eax, [esi+20h]
0x442274: push    eax
0x442275: mov     eax, [edx+170h]
0x44227B: mov     ecx, esi
0x44227D: call    eax
0x44227F: mov     ecx, eax
0x442281: call    nullsub_returnvVoid_1arg
0x442286: jmp     short loc_4422BE
0x442288: xor     bl, bl
0x44228A: cmp     ds:0B43384h, bl
0x442290: jz      short loc_44229E
0x442292: mov     ecx, offset stru_B43400; lpCriticalSection
0x442297: call    sub_43F2E0
0x44229C: mov     bl, 1
0x44229E: push    0
0x4422A0: call    GetShadowSceneNode
0x4422A5: push    0
0x4422A7: push    edi
0x4422A8: call    sub_7C7050
0x4422AD: add     esp, 0Ch
0x4422B0: test    bl, bl
0x4422B2: jz      short loc_4422BE
0x4422B4: mov     ecx, offset stru_B43400; lpCriticalSection
0x4422B9: call    sub_43F300
0x4422BE: mov     ecx, esi
0x4422C0: call    sub_4D70E0
0x4422C5: mov     ecx, ds:0B33B00h
0x4422CB: call    sub_45A500
0x4422D0: test    al, al
0x4422D2: jnz     short loc_4422ED
0x4422D4: lea     edi, [esi+44h]
0x4422D7: push    edi
0x4422D8: push    esi
0x4422D9: call    sub_4F9EC0
0x4422DE: push    1000h
0x4422E3: push    edi
0x4422E4: push    esi
0x4422E5: call    Script_AddEventToExtraScript
0x4422EA: add     esp, 14h
0x4422ED: cmp     byte ptr [esp+18h+a1], 1Eh
0x4422F2: jnz     loc_4423D0
0x4422F8: mov     edx, [esi]
0x4422FA: mov     eax, [edx+170h]
0x442300: push    0; int
0x442302: push    offset ??_R0?AVTESObjectTREE@@@8; struct TypeDescriptor *
0x442307: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x44230C: push    0; int
0x44230E: mov     ecx, esi
0x442310: call    eax
0x442312: push    eax; void *
0x442313: call    OblivionDynamicCast
0x442318: mov     ebx, eax
0x44231A: add     esp, 14h
0x44231D: test    ebx, ebx
0x44231F: jz      loc_4423D0
0x442325: mov     ecx, [ebx+78h]
0x442328: mov     edx, [ebx+7Ch]
0x44232B: mov     dword ptr [esp+18h+var_8], ecx
0x44232F: fld     dword ptr [esp+18h+var_8]
0x442333: fld     qword ptr ds:0A37478h
0x442339: mov     dword ptr [esp+18h+var_8+4], edx
0x44233D: fcom    st(1)
0x44233F: fnstsw  ax
0x442341: fstp    st(1)
0x442343: test    ah, 5
0x442346: jp      loc_4423CE
0x44234C: fld     dword ptr [esp+18h+var_8+4]
0x442350: fcompp
0x442352: fnstsw  ax
0x442354: test    ah, 41h
0x442357: jnz     short loc_4423D0
0x442359: mov     eax, [esi]
0x44235B: mov     edx, [eax+0ECh]
0x442361: mov     ecx, esi
0x442363: call    edx
0x442365: fstp    [esp+18h+var_8]
0x442369: mov     eax, [esi]
0x44236B: mov     edx, [eax+174h]
0x442371: mov     ecx, esi
0x442373: call    edx
0x442375: fld1
0x442377: mov     edi, eax
0x442379: mov     eax, [ebx]
0x44237B: mov     edx, [eax+15Ch]
0x442381: push    ecx
0x442382: mov     ecx, ebx
0x442384: fstp    [esp+1Ch+var_1C]
0x442387: call    edx
0x442389: fmul    [esp+1Ch+var_8]
0x44238D: mov     ecx, [edi]
0x44238F: fnstcw  [esp+1Ch+a8]
0x442393: movzx   eax, [esp+1Ch+a8]
0x442398: mov     edx, [edi+4]
0x44239B: or      eax, 0C00h
0x4423A0: mov     [esp+1Ch+a1], eax
0x4423A4: fldcw   word ptr [esp+1Ch+a1]
0x4423A8: fistp   [esp+1Ch+var_8]
0x4423AC: mov     eax, dword ptr [esp+1Ch+var_8]
0x4423B0: push    eax
0x4423B1: sub     esp, 0Ch
0x4423B4: mov     eax, esp
0x4423B6: fldcw   [esp+2Ch+a8]
0x4423BA: mov     [eax], ecx
0x4423BC: mov     ecx, [edi+8]
0x4423BF: mov     [eax+4], edx
0x4423C2: mov     [eax+8], ecx
0x4423C5: mov     ecx, ebp
0x4423C7: call    sub_4CE610
0x4423CC: jmp     short loc_4423D0
0x4423CE: fstp    st
0x4423D0: mov     edx, [esi]
0x4423D2: mov     eax, [edx+190h]
0x4423D8: mov     ecx, esi
0x4423DA: call    eax
0x4423DC: test    al, al
0x4423DE: jz      short loc_4423FF
0x4423E0: mov     ecx, esi; a1
0x4423E2: call    sub_5EE1B0
0x4423E7: cmp     esi, ds:0B333C4h
0x4423ED: jz      short loc_4423FF
0x4423EF: mov     ecx, [esi+0Ch]
0x4423F2: mov     edx, [esi+3Ch]
0x4423F5: push    ecx
0x4423F6: push    edx
0x4423F7: call    sub_481410
0x4423FC: add     esp, 8
0x4423FF: pop     edi
0x442400: pop     esi
0x442401: pop     ebp
0x442402: pop     ebx
0x442403: add     esp, 8
0x442406: retn    10h
