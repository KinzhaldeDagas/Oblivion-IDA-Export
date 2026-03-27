0x69FF10: push    ebp
0x69FF11: mov     ebp, esp
0x69FF13: and     esp, 0FFFFFFF0h
0x69FF16: push    0FFFFFFFFh
0x69FF18: push    offset SEH_69FF10
0x69FF1D: mov     eax, large fs:0
0x69FF23: push    eax
0x69FF24: sub     esp, 2A8h
0x69FF2A: mov     eax, ds:0B30AACh
0x69FF2F: xor     eax, esp
0x69FF31: mov     [esp+2B4h+var_14], eax
0x69FF38: push    ebx
0x69FF39: push    esi
0x69FF3A: push    edi
0x69FF3B: mov     eax, ds:0B30AACh
0x69FF40: xor     eax, esp
0x69FF42: push    eax
0x69FF43: lea     eax, [esp+2C4h+var_C]
0x69FF4A: mov     large fs:0, eax
0x69FF50: mov     edi, ecx
0x69FF52: mov     eax, [edi]
0x69FF54: mov     edx, [eax+154h]
0x69FF5A: call    edx
0x69FF5C: mov     ecx, [edi+68h]
0x69FF5F: xor     ebx, ebx
0x69FF61: cmp     ecx, ebx
0x69FF63: mov     esi, eax
0x69FF65: jz      short loc_69FF7A
0x69FF67: mov     eax, [ecx]
0x69FF69: mov     edx, [eax+20h]
0x69FF6C: call    edx
0x69FF6E: cmp     eax, ds:0B333C4h
0x69FF74: jnz     loc_6A02D8
0x69FF7A: cmp     esi, ebx
0x69FF7C: jz      loc_6A02D8
0x69FF82: mov     eax, [edi]
0x69FF84: fld1
0x69FF86: movaps  xmm0, xmmword ptr ds:0BA7A40h
0x69FF8D: fstp    [esp+2C4h+var_270.WorldRayCastOutput.HitFraction]
0x69FF94: mov     edx, [eax+174h]
0x69FF9A: mov     ecx, edi
0x69FF9C: mov     [esp+2C4h+var_270.WorldRayCastInput.EnableShapeCollectionFilter], bl
0x69FFA0: mov     [esp+2C4h+var_270.WorldRayCastInput.FilterInfo], ebx
0x69FFA4: mov     [esp+2C4h+var_270.WorldRayCastOutput.RootCollidable], ebx
0x69FFAB: mov     [esp+2C4h+var_270.BroadPhaseAabbCache], ebx
0x69FFB2: mov     [esp+2C4h+var_270.RayHitCollector1], ebx
0x69FFB9: mov     [esp+2C4h+var_270.RayHitCollector2], ebx
0x69FFC0: movaps  xmmword ptr [esp+2C4h+var_270.unk60.x], xmm0
0x69FFC8: call    edx
0x69FFCA: mov     ecx, [eax]
0x69FFCC: mov     edx, [eax+4]
0x69FFCF: mov     eax, [eax+8]
0x69FFD2: mov     dword ptr [esp+2C4h+var_280], ecx
0x69FFD6: mov     ecx, ds:0B333C4h
0x69FFDC: mov     dword ptr [esp+2C4h+var_280+4], edx
0x69FFE0: mov     edx, [ecx]
0x69FFE2: mov     dword ptr [esp+2C4h+var_280+8], eax
0x69FFE6: mov     eax, [edx+174h]
0x69FFEC: call    eax
0x69FFEE: mov     ecx, [eax]
0x69FFF0: mov     edx, [eax+4]
0x69FFF3: mov     eax, [eax+8]
0x69FFF6: mov     [esp+2C4h+var_298], ecx
0x69FFFA: mov     ecx, ds:0B333C4h
0x6A0000: fld     dword ptr [ecx+5D4h]
0x6A0006: mov     [esp+2C4h+var_294], edx
0x6A000A: mov     edx, [ecx]
0x6A000C: fstp    [esp+2C4h+var_29C]
0x6A0010: mov     [esp+2C4h+var_290], eax
0x6A0014: mov     eax, [edx+0ECh]
0x6A001A: call    eax
0x6A001C: fmul    [esp+2C4h+var_29C]
0x6A0020: mov     ecx, edi; this
0x6A0022: fadd    [esp+2C4h+var_290]
0x6A0026: fstp    [esp+2C4h+var_290]
0x6A002A: fld     dword ptr [esp+2C4h+var_280]
0x6A002E: fsub    [esp+2C4h+var_298]
0x6A0032: fstp    [esp+2C4h+var_284]
0x6A0036: fld     dword ptr [esp+2C4h+var_280+4]
0x6A003A: fsub    [esp+2C4h+var_294]
0x6A003E: fstp    [esp+2C4h+var_288]
0x6A0042: fld     dword ptr [esp+2C4h+var_280+8]
0x6A0046: fsub    [esp+2C4h+var_290]
0x6A004A: fstp    [esp+2C4h+var_29C]
0x6A004E: call    MobileObject_GetCharProxy
0x6A0053: cmp     eax, ebx
0x6A0055: jz      short loc_6A0065
0x6A0057: lea     ecx, [esp+2C4h+var_2A0]
0x6A005B: push    ecx
0x6A005C: mov     ecx, eax
0x6A005E: call    sub_57E270
0x6A0063: jmp     short loc_6A0075
0x6A0065: mov     ecx, ds:0B333C4h
0x6A006B: lea     edx, [esp+2C4h+var_2A0]
0x6A006F: push    edx
0x6A0070: call    sub_65ABE0
0x6A0075: fld     [esp+2C4h+var_298]
0x6A0079: mov     eax, [eax]
0x6A007B: fld     st
0x6A007D: mov     [esp+2C4h+var_270.WorldRayCastInput.FilterInfo], eax
0x6A0081: fld     qword ptr ds:0A39088h
0x6A0087: lea     eax, [esp+2C4h+var_280]
0x6A008B: fmul    st(1), st
0x6A008D: push    eax; a2
0x6A008E: fxch    st(1)
0x6A0090: lea     ecx, [esp+2C8h+var_270]; this
0x6A0094: fstp    dword ptr [esp+2C8h+var_280]
0x6A0098: fld     [esp+2C8h+var_294]
0x6A009C: fld     st
0x6A009E: fmul    st, st(2)
0x6A00A0: fstp    dword ptr [esp+2C8h+var_280+4]
0x6A00A4: fld     [esp+2C8h+var_290]
0x6A00A8: fld     st
0x6A00AA: fmulp   st(3), st
0x6A00AC: fxch    st(2)
0x6A00AE: fstp    dword ptr [esp+2C8h+var_280+8]
0x6A00B2: movaps  xmm0, [esp+2C8h+var_280]
0x6A00B7: fld     [esp+2C8h+var_284]
0x6A00BB: movaps  xmmword ptr [esp+2C8h+var_270.WorldRayCastInput.From.x], xmm0
0x6A00C0: faddp   st(3), st
0x6A00C2: fxch    st(2)
0x6A00C4: fstp    [esp+2C8h+var_2A4]
0x6A00C8: fld     [esp+2C8h+var_288]
0x6A00CC: faddp   st(2), st
0x6A00CE: fxch    st(1)
0x6A00D0: fstp    [esp+2C8h+var_2A8]
0x6A00D4: fadd    [esp+2C8h+var_29C]
0x6A00D8: fstp    [esp+2C8h+var_2AC]
0x6A00DC: fld     [esp+2C8h+var_2A4]
0x6A00E0: fstp    dword ptr [esp+2C8h+var_280]
0x6A00E4: fld     [esp+2C8h+var_2A8]
0x6A00E8: fstp    dword ptr [esp+2C8h+var_280+4]
0x6A00EC: fld     [esp+2C8h+var_2AC]
0x6A00F0: fstp    dword ptr [esp+2C8h+var_280+8]
0x6A00F4: call    bhkWorldRayCastData__SetCastInputTo
0x6A00F9: lea     ecx, [esp+2C4h+var_1C0]
0x6A0100: call    sub_538C00
0x6A0105: lea     ecx, [esp+2C4h+var_1C0]
0x6A010C: mov     [esp+2C4h+var_270.RayHitCollector2], ecx
0x6A0113: mov     ecx, ds:0B333C4h; this
0x6A0119: mov     [esp+2C4h+var_4], ebx
0x6A0120: mov     [esp+2C4h+var_270.RayHitCollector1], ebx
0x6A0127: call    TESObjectREFR_GetParentCell
0x6A012C: test    eax, eax
0x6A012E: jz      loc_6A02C1
0x6A0134: mov     ecx, ds:0B333C4h; this
0x6A013A: call    TESObjectREFR_GetParentCell
0x6A013F: mov     esi, eax
0x6A0141: mov     ecx, esi; this
0x6A0143: call    TESObjectCELL_IsInterior
0x6A0148: test    al, al
0x6A014A: jz      short loc_6A0156
0x6A014C: lea     ecx, [esi+28h]
0x6A014F: call    sub_424180
0x6A0154: jmp     short loc_6A015B
0x6A0156: mov     eax, ds:0B35C24h
0x6A015B: mov     edx, [eax]
0x6A015D: mov     edx, [edx+88h]
0x6A0163: lea     ecx, [esp+2C4h+var_270]
0x6A0167: push    ecx
0x6A0168: mov     ecx, eax
0x6A016A: call    edx
0x6A016C: test    al, al
0x6A016E: jz      loc_6A02C1
0x6A0174: xor     ecx, ecx
0x6A0176: mov     byte ptr [esp+2C4h+var_2B0+3], 1
0x6A017B: mov     [esp+2C4h+var_2A8], ebx
0x6A017F: mov     [esp+2C4h+var_2A4], ecx
0x6A0183: jmp     short loc_6A0194
0x6A0185: jmp     short loc_6A0190
0x6A0187: align 10h
0x6A0190: mov     ecx, [esp+2C4h+var_2A4]
0x6A0194: mov     eax, [esp+2C4h+var_2A8]
0x6A0198: cmp     eax, [esp+2C4h+var_1AC]
0x6A019F: jge     loc_6A02C1
0x6A01A5: mov     eax, [esp+2C4h+var_1B0]
0x6A01AC: mov     esi, [ecx+eax+20h]
0x6A01B0: fld     dword ptr [ecx+eax+14h]
0x6A01B4: push    esi
0x6A01B5: fstp    [esp+2C8h+var_1DC]
0x6A01BC: call    sub_4806E0
0x6A01C1: add     esp, 4
0x6A01C4: cmp     eax, ebx
0x6A01C6: jz      loc_6A02AC
0x6A01CC: cmp     byte ptr [esi+18h], 1
0x6A01D0: jnz     short loc_6A01DE
0x6A01D2: mov     ecx, [esi+10h]
0x6A01D5: add     ecx, esi
0x6A01D7: cmp     ecx, ebx
0x6A01D9: jz      short loc_6A01DE
0x6A01DB: mov     ebx, [ecx+0Ch]
0x6A01DE: push    eax
0x6A01DF: call    sub_4DC270
0x6A01E4: mov     esi, eax
0x6A01E6: add     esp, 4
0x6A01E9: cmp     esi, ds:0B333C4h
0x6A01EF: jz      loc_6A02AA
0x6A01F5: cmp     esi, edi
0x6A01F7: jz      loc_6A02AA
0x6A01FD: mov     edx, [esi]
0x6A01FF: mov     eax, [edx+190h]
0x6A0205: mov     ecx, esi
0x6A0207: call    eax
0x6A0209: test    al, al
0x6A020B: jnz     loc_6A02AA
0x6A0211: test    ebx, ebx
0x6A0213: jz      loc_6A02AA
0x6A0219: fld     [esp+2C4h+var_284]
0x6A021D: mov     edx, [edi]
0x6A021F: fld     [esp+2C4h+var_1DC]
0x6A0226: mov     edx, [edx+208h]
0x6A022C: fld     st
0x6A022E: push    0
0x6A0230: fmulp   st(2), st
0x6A0232: push    esi
0x6A0233: fxch    st(1)
0x6A0235: push    ebx
0x6A0236: sub     esp, 0Ch
0x6A0239: fstp    [esp+2DCh+var_2AC]
0x6A023D: mov     eax, esp
0x6A023F: fld     [esp+2DCh+var_288]
0x6A0243: fmul    st, st(1)
0x6A0245: fstp    [esp+2DCh+var_28C]
0x6A0249: fmul    [esp+2DCh+var_29C]
0x6A024D: fstp    [esp+2DCh+var_2A0]
0x6A0251: fld     [esp+2DCh+var_2AC]
0x6A0255: fadd    [esp+2DCh+var_298]
0x6A0259: fstp    [esp+2DCh+var_2AC]
0x6A025D: fld     [esp+2DCh+var_294]
0x6A0261: fadd    [esp+2DCh+var_28C]
0x6A0265: fstp    [esp+2DCh+var_28C]
0x6A0269: fld     [esp+2DCh+var_2A0]
0x6A026D: fadd    [esp+2DCh+var_290]
0x6A0271: fstp    [esp+2DCh+var_2A0]
0x6A0275: fld     [esp+2DCh+var_2AC]
0x6A0279: fstp    dword ptr [esp+2DCh+var_280]
0x6A027D: mov     ecx, dword ptr [esp+2DCh+var_280]
0x6A0281: fld     [esp+2DCh+var_28C]
0x6A0285: mov     [eax], ecx
0x6A0287: fstp    dword ptr [esp+2DCh+var_280+4]
0x6A028B: mov     ecx, dword ptr [esp+2DCh+var_280+4]
0x6A028F: fld     [esp+2DCh+var_2A0]
0x6A0293: mov     [eax+4], ecx
0x6A0296: fstp    dword ptr [esp+2DCh+var_280+8]
0x6A029A: mov     ecx, dword ptr [esp+2DCh+var_280+8]
0x6A029E: mov     [eax+8], ecx
0x6A02A1: mov     ecx, edi
0x6A02A3: call    edx
0x6A02A5: mov     byte ptr [esp+2C4h+var_2B0+3], 0
0x6A02AA: xor     ebx, ebx
0x6A02AC: add     [esp+2C4h+var_2A8], 1
0x6A02B1: add     [esp+2C4h+var_2A4], 30h ; '0'
0x6A02B6: cmp     byte ptr [esp+2C4h+var_2B0+3], 0
0x6A02BB: jnz     loc_6A0190
0x6A02C1: lea     ecx, [esp+2C4h+var_1C0]
0x6A02C8: mov     [esp+2C4h+var_4], 0FFFFFFFFh
0x6A02D3: call    sub_538C80
0x6A02D8: mov     ecx, dword ptr [esp+2C4h+var_C]
0x6A02DF: mov     large fs:0, ecx
0x6A02E6: pop     ecx
0x6A02E7: pop     edi
0x6A02E8: pop     esi
0x6A02E9: pop     ebx
0x6A02EA: mov     ecx, [esp+2B4h+var_14]
0x6A02F1: xor     ecx, esp
0x6A02F3: call    @__security_check_cookie@4; __security_check_cookie(x)
0x6A02F8: mov     esp, ebp
0x6A02FA: pop     ebp
0x6A02FB: retn
