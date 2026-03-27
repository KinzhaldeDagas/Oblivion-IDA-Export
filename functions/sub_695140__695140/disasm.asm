0x695140: fld     [esp+arg_0]
0x695144: sub     esp, 34h
0x695147: fcomp   qword ptr ds:0A2FCC8h
0x69514D: push    ebx
0x69514E: push    ebp
0x69514F: push    esi
0x695150: push    edi
0x695151: fnstsw  ax
0x695153: mov     esi, ecx
0x695155: test    ah, 1
0x695158: jnz     short loc_695166
0x69515A: mov     eax, [esi]
0x69515C: mov     edx, [eax+8Ch]
0x695162: push    1
0x695164: call    edx
0x695166: fldz
0x695168: fcomp   [esp+44h+arg_0]
0x69516C: fnstsw  ax
0x69516E: test    ah, 41h
0x695171: jp      loc_6953F0
0x695177: mov     eax, [esi+80h]
0x69517D: sub     eax, 0
0x695180: jz      loc_695249
0x695186: sub     eax, 1
0x695189: jz      loc_695253
0x69518F: sub     eax, 1
0x695192: jnz     loc_6953F0
0x695198: mov     eax, [esi]
0x69519A: mov     edx, [eax+154h]
0x6951A0: mov     ecx, esi
0x6951A2: call    edx
0x6951A4: test    eax, eax
0x6951A6: jz      short loc_6951AD
0x6951A8: mov     eax, [eax+0Ch]
0x6951AB: jmp     short loc_6951AF
0x6951AD: xor     eax, eax
0x6951AF: push    eax
0x6951B0: push    offset stru_B3CAC0
0x6951B5: call    NiRTTI_Cast
0x6951BA: mov     edi, eax
0x6951BC: add     esp, 8
0x6951BF: test    edi, edi
0x6951C1: jz      short loc_69521C
0x6951C3: lea     eax, [esp+44h+var_34]
0x6951C7: push    eax
0x6951C8: push    offset aSpecialidle_ar; "SpecialIdle_AreaEffect"
0x6951CD: lea     ecx, [edi+58h]
0x6951D0: call    NiTMap_GetAt
0x6951D5: test    al, al
0x6951D7: jz      short loc_6951F6
0x6951D9: mov     ecx, [esp+44h+var_34]
0x6951DD: test    ecx, ecx
0x6951DF: jz      short loc_6951F6
0x6951E1: fld     dword ptr [ecx+34h]
0x6951E4: fld     dword ptr [ecx+30h]
0x6951E7: fcompp
0x6951E9: fnstsw  ax
0x6951EB: test    ah, 5
0x6951EE: jnp     short loc_6951F6
0x6951F0: cmp     dword ptr [ecx+44h], 0
0x6951F4: jnz     short loc_695233
0x6951F6: fldz
0x6951F8: push    ecx
0x6951F9: mov     ecx, edi
0x6951FB: fstp    [esp+48h+var_48]; float
0x6951FE: call    sub_4715C0
0x695203: push    1; a2
0x695205: mov     ecx, esi; this
0x695207: call    TESForm_SetEnabled?
0x69520C: mov     edx, [esi]
0x69520E: mov     eax, [edx+8Ch]
0x695214: push    1
0x695216: mov     ecx, esi
0x695218: call    eax
0x69521A: jmp     short loc_695233
0x69521C: mov     edx, [esi]
0x69521E: mov     eax, [edx+8Ch]
0x695224: push    1
0x695226: mov     ecx, esi
0x695228: call    eax
0x69522A: push    1; a2
0x69522C: mov     ecx, esi; this
0x69522E: call    TESForm_SetEnabled?
0x695233: mov     esi, [esi+8Ch]
0x695239: test    esi, esi
0x69523B: jz      loc_6953F0
0x695241: push    ecx
0x695242: mov     ecx, esi
0x695244: jmp     loc_6953E4
0x695249: mov     dword ptr [esi+80h], 1
0x695253: mov     ecx, [esi+8]
0x695256: shr     ecx, 5
0x695259: test    cl, 1
0x69525C: jnz     loc_6953F0
0x695262: mov     ecx, esi; this
0x695264: call    MobileObject_GetCharProxy
0x695269: fld     dword ptr [eax+318h]
0x69526F: mov     edx, [esi]
0x695271: fstp    [esp+44h+var_34]
0x695275: fld     [esp+44h+var_34]
0x695279: mov     eax, [edx+174h]
0x69527F: fmul    qword ptr ds:0A372E0h
0x695285: mov     ecx, esi
0x695287: fstp    [esp+44h+var_34]
0x69528B: fld     [esp+44h+var_34]
0x69528F: fstp    [esp+44h+var_34]
0x695293: call    eax
0x695295: fld     dword ptr [eax+8]
0x695298: fld     [esp+38h+var_28]
0x69529C: fcompp
0x69529E: fnstsw  ax
0x6952A0: test    ah, 1
0x6952A3: jnz     short loc_6952D6
0x6952A5: mov     edi, [esi]
0x6952A7: mov     edx, [edi+174h]
0x6952AD: mov     ecx, esi
0x6952AF: call    edx
0x6952B1: mov     edx, [eax]
0x6952B3: push    1
0x6952B5: push    0
0x6952B7: push    0
0x6952B9: sub     esp, 0Ch
0x6952BC: mov     ecx, esp
0x6952BE: mov     [ecx], edx
0x6952C0: mov     edx, [eax+4]
0x6952C3: mov     eax, [eax+8]
0x6952C6: mov     [ecx+4], edx
0x6952C9: mov     edx, [edi+208h]
0x6952CF: mov     [ecx+8], eax
0x6952D2: mov     ecx, esi
0x6952D4: call    edx
0x6952D6: fldz
0x6952D8: mov     eax, [esi]
0x6952DA: mov     edx, [eax+174h]
0x6952E0: fst     [esp+38h+var_C]
0x6952E4: fld     dword ptr [esi+5Ch]
0x6952E7: mov     ecx, esi
0x6952E9: fmul    [esp+38h+arg_C]
0x6952ED: fstp    [esp+38h+var_8]
0x6952F1: fstp    [esp+38h+var_4]
0x6952F5: call    edx
0x6952F7: mov     ecx, [eax]
0x6952F9: fld     [esp+38h+arg_C]
0x6952FD: mov     edx, [eax+4]
0x695300: mov     eax, [eax+8]
0x695303: mov     [esp+38h+var_10], eax
0x695307: push    0Fh
0x695309: lea     eax, [esp+3Ch+var_C]
0x69530D: mov     [esp+3Ch+var_14], edx
0x695311: mov     edx, [esi]
0x695313: mov     edx, [edx+1B4h]
0x695319: push    eax
0x69531A: push    ecx
0x69531B: mov     [esp+44h+var_18], ecx
0x69531F: fstp    [esp+44h+var_44]
0x695322: mov     ecx, esi
0x695324: call    edx
0x695326: mov     eax, [esi]
0x695328: mov     edx, [eax+210h]
0x69532E: mov     ecx, esi
0x695330: call    edx
0x695332: test    al, al
0x695334: jz      loc_6953F0
0x69533A: mov     eax, [esi]
0x69533C: mov     edx, [eax+174h]
0x695342: mov     ecx, esi
0x695344: call    edx
0x695346: mov     edi, [eax]
0x695348: mov     ebx, [eax+4]
0x69534B: mov     ebp, [eax+8]
0x69534E: mov     eax, [esi]
0x695350: mov     edx, [eax+154h]
0x695356: mov     ecx, esi
0x695358: mov     [esp+44h+var_30], edi
0x69535C: mov     [esp+44h+var_2C], ebx
0x695360: mov     [esp+44h+var_28], ebp
0x695364: call    edx
0x695366: test    eax, eax
0x695368: jz      short loc_695381
0x69536A: mov     eax, [esi]
0x69536C: mov     edx, [eax+154h]
0x695372: mov     ecx, esi
0x695374: call    edx
0x695376: add     eax, 54h ; 'T'
0x695379: mov     [eax], edi
0x69537B: mov     [eax+4], ebx
0x69537E: mov     [eax+8], ebp
0x695381: fld     [esp+44h+var_30]
0x695385: lea     ecx, [esp+44h+var_C]
0x695389: fsub    [esp+44h+var_24]
0x69538D: fstp    [esp+44h+var_C]
0x695391: fld     [esp+44h+var_2C]
0x695395: fsub    [esp+44h+var_20]
0x695399: fstp    [esp+44h+var_8]
0x69539D: fld     [esp+44h+var_28]
0x6953A1: fsub    [esp+44h+var_1C]
0x6953A5: fstp    [esp+44h+var_4]
0x6953A9: call    sub_404C90
0x6953AE: fadd    dword ptr [esi+60h]
0x6953B1: fstp    [esp+44h+var_34]
0x6953B5: fld     [esp+44h+var_34]
0x6953B9: fst     dword ptr [esi+60h]
0x6953BC: fld     dword ptr ds:0B37E88h
0x6953C2: fcompp
0x6953C4: fnstsw  ax
0x6953C6: test    ah, 5
0x6953C9: jp      short loc_6953D9
0x6953CB: mov     eax, [esi]
0x6953CD: mov     edx, [eax+8Ch]
0x6953D3: push    1
0x6953D5: mov     ecx, esi
0x6953D7: call    edx
0x6953D9: mov     ecx, [esi+8Ch]
0x6953DF: test    ecx, ecx
0x6953E1: jz      short loc_6953F0
0x6953E3: push    ecx
0x6953E4: fld     [esp+48h+arg_0]
0x6953E8: fstp    [esp+48h+var_48]; float
0x6953EB: call    MagicCaster_CastingVFX_UpdateTimes?
0x6953F0: pop     edi
0x6953F1: pop     esi
0x6953F2: pop     ebp
0x6953F3: pop     ebx
0x6953F4: add     esp, 34h
0x6953F7: retn    4
