0x7E8E10: push    0FFFFFFFFh
0x7E8E12: push    offset SEH_7E8E10
0x7E8E17: mov     eax, large fs:0
0x7E8E1D: push    eax
0x7E8E1E: sub     esp, 3Ch
0x7E8E21: push    ebx
0x7E8E22: push    ebp
0x7E8E23: push    esi
0x7E8E24: push    edi
0x7E8E25: mov     eax, ds:0B30AACh
0x7E8E2A: xor     eax, esp
0x7E8E2C: push    eax; _DWORD
0x7E8E2D: lea     eax, [esp+5Ch+var_C]
0x7E8E31: mov     large fs:0, eax
0x7E8E37: mov     edi, ecx
0x7E8E39: mov     eax, [edi]
0x7E8E3B: mov     edx, [eax+80h]
0x7E8E41: call    edx
0x7E8E43: mov     ebp, [esp+5Ch+arg_C]
0x7E8E47: mov     esi, [ebp+18h]
0x7E8E4A: test    esi, esi
0x7E8E4C: jnz     short loc_7E8E52
0x7E8E4E: xor     ebx, ebx
0x7E8E50: jmp     short loc_7E8E63
0x7E8E52: mov     eax, [esi]
0x7E8E54: mov     edx, [eax+54h]
0x7E8E57: mov     ecx, esi
0x7E8E59: call    edx
0x7E8E5B: xor     ebx, ebx
0x7E8E5D: cmp     eax, 4
0x7E8E60: setz    bl
0x7E8E63: neg     ebx
0x7E8E65: sbb     ebx, ebx
0x7E8E67: and     ebx, esi
0x7E8E69: jz      loc_7E9826
0x7E8E6F: cmp     byte ptr ds:0B42E86h, 0
0x7E8E76: fld1
0x7E8E78: jz      short loc_7E8EB6
0x7E8E7A: fst     [esp+5Ch+var_1C]
0x7E8E7E: mov     ecx, [esp+5Ch+var_1C]
0x7E8E82: sub     esp, 10h
0x7E8E85: fst     [esp+6Ch+var_18]
0x7E8E89: mov     edx, [esp+6Ch+var_18]
0x7E8E8D: fst     [esp+6Ch+var_14]
0x7E8E91: mov     eax, esp
0x7E8E93: fstp    [esp+6Ch+var_10]
0x7E8E97: mov     [eax], ecx
0x7E8E99: mov     ecx, [esp+6Ch+var_14]
0x7E8E9D: mov     [eax+4], edx
0x7E8EA0: mov     edx, [esp+6Ch+var_10]
0x7E8EA4: mov     [eax+8], ecx
0x7E8EA7: push    0
0x7E8EA9: mov     [eax+0Ch], edx
0x7E8EAC: call    sub_7ECAE0
0x7E8EB1: fld1
0x7E8EB3: add     esp, 14h
0x7E8EB6: mov     eax, ds:0B43330h
0x7E8EBB: fldz
0x7E8EBD: mov     ecx, ds:0B43334h
0x7E8EC3: mov     edx, ds:0B43338h
0x7E8EC9: mov     ds:0B460C0h, eax
0x7E8ECE: mov     eax, ds:0B4333Ch
0x7E8ED3: mov     ds:0B460C4h, ecx
0x7E8ED9: mov     ds:0B460C8h, edx
0x7E8EDF: mov     ds:0B460CCh, eax
0x7E8EE4: mov     eax, [ebp+8]
0x7E8EE7: test    eax, eax
0x7E8EE9: jz      short loc_7E8F3F
0x7E8EEB: movzx   ecx, byte ptr [eax+1Ah]
0x7E8EEF: mov     [esp+5Ch+a2], ecx
0x7E8EF3: fild    [esp+5Ch+a2]
0x7E8EF7: fstp    [esp+5Ch+a2]
0x7E8EFB: fld     [esp+5Ch+a2]
0x7E8EFF: fdiv    qword ptr ds:0A3DDD8h
0x7E8F05: fstp    [esp+5Ch+var_1C]
0x7E8F09: mov     edx, [esp+5Ch+var_1C]
0x7E8F0D: mov     [edi+184h], edx
0x7E8F13: fst     [esp+5Ch+var_18]
0x7E8F17: mov     eax, [esp+5Ch+var_18]
0x7E8F1B: fst     [esp+5Ch+var_14]
0x7E8F1F: mov     ecx, [esp+5Ch+var_14]
0x7E8F23: fst     [esp+5Ch+var_10]
0x7E8F27: mov     edx, [esp+5Ch+var_10]
0x7E8F2B: mov     [edi+188h], eax
0x7E8F31: mov     [edi+18Ch], ecx
0x7E8F37: mov     [edi+190h], edx
0x7E8F3D: jmp     short loc_7E8F6D
0x7E8F3F: mov     eax, ds:0B25AD0h
0x7E8F44: mov     [edi+184h], eax
0x7E8F4A: mov     ecx, ds:0B25AD4h
0x7E8F50: mov     [edi+188h], ecx
0x7E8F56: mov     edx, ds:0B25AD8h
0x7E8F5C: mov     [edi+18Ch], edx
0x7E8F62: mov     eax, ds:0B25ADCh
0x7E8F67: mov     [edi+190h], eax
0x7E8F6D: mov     eax, [ebp+0Ch]
0x7E8F70: test    eax, eax
0x7E8F72: jz      loc_7E9029
0x7E8F78: fld     dword ptr [eax+2Ch]
0x7E8F7B: mov     ecx, [eax+20h]
0x7E8F7E: mov     edx, [eax+24h]
0x7E8F81: fstp    dword ptr [esp+5Ch+var_3C]
0x7E8F85: fld     dword ptr [eax+30h]
0x7E8F88: mov     eax, [eax+28h]
0x7E8F8B: fstp    [esp+5Ch+a2]
0x7E8F8F: mov     [esp+5Ch+var_1C], ecx
0x7E8F93: fld     [esp+5Ch+a2]
0x7E8F97: mov     [esp+5Ch+var_18], edx
0x7E8F9B: fld     st
0x7E8F9D: mov     [esp+5Ch+var_14], eax
0x7E8FA1: fsub    dword ptr [esp+5Ch+var_3C]
0x7E8FA5: fstp    [esp+5Ch+a2]
0x7E8FA9: fstp    dword ptr [esp+5Ch+var_3C]
0x7E8FAD: mov     ecx, dword ptr [esp+5Ch+var_3C]
0x7E8FB1: fld     [esp+5Ch+a2]
0x7E8FB5: mov     ds:0B46638h, ecx
0x7E8FBB: fstp    dword ptr [esp+5Ch+var_3C+4]
0x7E8FBF: mov     edx, dword ptr [esp+5Ch+var_3C+4]
0x7E8FC3: mov     ds:0B4663Ch, edx
0x7E8FC9: fst     [esp+5Ch+var_34]
0x7E8FCD: mov     eax, [esp+5Ch+var_34]
0x7E8FD1: fst     [esp+5Ch+var_30]
0x7E8FD5: mov     ecx, [esp+5Ch+var_30]
0x7E8FD9: fld     [esp+5Ch+var_1C]
0x7E8FDD: mov     ds:0B46640h, eax
0x7E8FE2: fstp    [esp+5Ch+a2]
0x7E8FE6: mov     edx, [esp+5Ch+a2]
0x7E8FEA: fld     [esp+5Ch+var_18]
0x7E8FEE: mov     ds:0B46644h, ecx
0x7E8FF4: fstp    [esp+5Ch+var_28]
0x7E8FF8: mov     eax, [esp+5Ch+var_28]
0x7E8FFC: fld     [esp+5Ch+var_14]
0x7E9000: mov     ds:0B46648h, edx
0x7E9006: fstp    [esp+5Ch+var_24]
0x7E900A: mov     ecx, [esp+5Ch+var_24]
0x7E900E: mov     ds:0B4664Ch, eax
0x7E9013: fst     [esp+5Ch+var_20]
0x7E9017: mov     edx, [esp+5Ch+var_20]
0x7E901B: mov     ds:0B46650h, ecx
0x7E9021: mov     ds:0B46654h, edx
0x7E9027: jmp     short loc_7E9093
0x7E9029: fld     dword ptr ds:0A8C690h
0x7E902F: fstp    [esp+5Ch+var_1C]
0x7E9033: mov     eax, [esp+5Ch+var_1C]
0x7E9037: mov     ds:0B46638h, eax
0x7E903C: fst     [esp+5Ch+var_18]
0x7E9040: mov     ecx, [esp+5Ch+var_18]
0x7E9044: fst     [esp+5Ch+var_14]
0x7E9048: mov     edx, [esp+5Ch+var_14]
0x7E904C: mov     ds:0B4663Ch, ecx
0x7E9052: fst     [esp+5Ch+var_10]
0x7E9056: mov     eax, [esp+5Ch+var_10]
0x7E905A: mov     ecx, ds:0B25AD0h
0x7E9060: mov     ds:0B46640h, edx
0x7E9066: mov     edx, ds:0B25AD4h
0x7E906C: mov     ds:0B46644h, eax
0x7E9071: mov     eax, ds:0B25AD8h
0x7E9076: mov     ds:0B46648h, ecx
0x7E907C: mov     ecx, ds:0B25ADCh
0x7E9082: mov     ds:0B4664Ch, edx
0x7E9088: mov     ds:0B46650h, eax
0x7E908D: mov     ds:0B46654h, ecx
0x7E9093: cmp     dword ptr ds:0B42D78h, 0
0x7E909A: mov     esi, [ebx+9Ch]
0x7E90A0: jz      loc_7E913D
0x7E90A6: fstp    st
0x7E90A8: push    1; _DWORD
0x7E90AA: push    0; _DWORD
0x7E90AC: fstp    st
0x7E90AE: call    dword ptr ds:0B42D78h
0x7E90B4: fstp    [esp+64h+a2]
0x7E90B8: fldz
0x7E90BA: add     esp, 8
0x7E90BD: fld1
0x7E90BF: fxch    st(1)
0x7E90C1: fld     [esp+5Ch+a2]
0x7E90C5: fdiv    qword ptr ds:0A2F938h
0x7E90CB: fld     qword ptr ds:0A56E20h
0x7E90D1: fmul    st(1), st
0x7E90D3: fld     dword ptr [esi+30h]
0x7E90D6: fmulp   st(2), st
0x7E90D8: fxch    st(1)
0x7E90DA: fstp    [esp+5Ch+a2]
0x7E90DE: fld     [esp+5Ch+a2]
0x7E90E2: fst     dword ptr [edi+88h]
0x7E90E8: fcom    st(1)
0x7E90EA: fnstsw  ax
0x7E90EC: test    ah, 1
0x7E90EF: jnz     short loc_7E9146
0x7E90F1: fstp    st(2)
0x7E90F3: fstp    st(2)
0x7E90F5: fstp    [esp+5Ch+a2]
0x7E90F9: fld     [esp+5Ch+a2]
0x7E90FD: fxch    st(1)
0x7E90FF: call    unknown_libname_14
0x7E9104: fstp    [esp+5Ch+a2]
0x7E9108: fld     [esp+5Ch+a2]
0x7E910C: fstp    dword ptr [edi+88h]
0x7E9112: fldz
0x7E9114: fld1
0x7E9116: fxch    st(1)
0x7E9118: fld     dword ptr [edi+88h]
0x7E911E: fstp    dword ptr ds:0B460BCh
0x7E9124: test    dword ptr [ebx+1Ch], 800h
0x7E912B: jbe     short loc_7E914C
0x7E912D: fstp    st
0x7E912F: fst     dword ptr ds:0B46090h
0x7E9135: fst     dword ptr ds:0B46094h
0x7E913B: jmp     short loc_7E9158
0x7E913D: fst     [esp+5Ch+a2]
0x7E9141: jmp     loc_7E90C1
0x7E9146: fstp    st(1)
0x7E9148: fstp    st
0x7E914A: jmp     short loc_7E9118
0x7E914C: fst     dword ptr ds:0B46090h
0x7E9152: fstp    dword ptr ds:0B46094h
0x7E9158: fstp    dword ptr ds:0B46098h
0x7E915E: mov     edx, [ebx+0A4h]
0x7E9164: mov     eax, [ebx]
0x7E9166: mov     [esp+5Ch+a2], edx
0x7E916A: mov     edx, [eax+68h]
0x7E916D: mov     ecx, ebx
0x7E916F: call    edx
0x7E9171: mov     eax, [ebx+1Ch]
0x7E9174: test    eax, 400h
0x7E9179: setnbe  [esp+5Ch+var_41]
0x7E917E: test    eax, 1000h
0x7E9183: setnbe  [esp+5Ch+var_45]
0x7E9188: test    eax, 2000h
0x7E918D: setnbe  [esp+5Ch+var_46]
0x7E9192: cmp     byte ptr ds:0B43074h, 0
0x7E9199: mov     esi, 2
0x7E919E: jnz     short loc_7E91EB
0x7E91A0: cmp     dword ptr ds:0B43108h, 0
0x7E91A7: jz      short loc_7E91EB
0x7E91A9: test    byte ptr ds:0B42F40h, 20h
0x7E91B0: jz      short loc_7E91EB
0x7E91B2: cmp     ds:0B42F48h, esi
0x7E91B8: jl      short loc_7E91EB
0x7E91BA: fld     dword ptr ds:0B44F04h
0x7E91C0: fnstcw  word ptr [esp+5Ch+var_44]
0x7E91C4: movzx   eax, word ptr [esp+5Ch+var_44]
0x7E91C9: or      eax, 0C00h
0x7E91CE: mov     dword ptr [esp+5Ch+var_3C], eax
0x7E91D2: fldcw   word ptr [esp+5Ch+var_3C]
0x7E91D6: fistp   [esp+5Ch+var_3C]
0x7E91DA: mov     eax, dword ptr [esp+5Ch+var_3C]
0x7E91DE: test    eax, eax
0x7E91E0: fldcw   word ptr [esp+5Ch+var_44]
0x7E91E4: mov     [esp+5Ch+var_44], 1
0x7E91E9: jnz     short loc_7E91F0
0x7E91EB: mov     [esp+5Ch+var_44], 0
0x7E91F0: mov     ecx, [esp+5Ch+arg_0]
0x7E91F4: push    ebx
0x7E91F5: push    ecx
0x7E91F6: mov     ecx, edi
0x7E91F8: call    sub_7E6A90
0x7E91FD: cmp     byte ptr ds:0B43070h, 0
0x7E9204: jz      short loc_7E9212
0x7E9206: fld     dword ptr ds:0B42F44h
0x7E920C: fstp    dword ptr ds:0B460E0h
0x7E9212: xor     ebp, ebp
0x7E9214: cmp     ds:0B42F48h, esi
0x7E921A: mov     dword ptr [esp+5Ch+var_3C], ebp
0x7E921E: jl      short loc_7E9229
0x7E9220: mov     ebp, 14h
0x7E9225: mov     dword ptr [esp+5Ch+var_3C], esi
0x7E9229: xor     esi, esi
0x7E922B: mov     [esp+5Ch+var_40], esi
0x7E922F: mov     [esp+5Ch+var_4], esi
0x7E9233: mov     [esp+5Ch+arg_0], esi
0x7E9237: mov     edx, ds:0B42EB8h
0x7E923D: mov     eax, [edx+0Ch]
0x7E9240: cmp     eax, esi
0x7E9242: mov     byte ptr [esp+5Ch+var_4], 1
0x7E9247: jz      loc_7E9332
0x7E924D: mov     eax, [eax]
0x7E924F: cmp     byte ptr [eax+0F4h], 1
0x7E9256: jnz     loc_7E9332
0x7E925C: lea     ecx, [edi+84h]
0x7E9262: push    ecx
0x7E9263: lea     ecx, [esp+60h+var_40]
0x7E9267: call    sub_76C890
0x7E926C: cmp     [esp+5Ch+var_45], 0
0x7E9271: mov     esi, [esp+5Ch+var_40]
0x7E9275: mov     ecx, esi; this
0x7E9277: jz      short loc_7E9290
0x7E9279: cmp     [esp+5Ch+var_46], 0
0x7E927E: jz      short loc_7E9288
0x7E9280: mov     eax, [edi+140h]
0x7E9286: jmp     short loc_7E92A5
0x7E9288: mov     eax, [edi+138h]
0x7E928E: jmp     short loc_7E92A5
0x7E9290: cmp     [esp+5Ch+var_46], 0
0x7E9295: jz      short loc_7E929F
0x7E9297: mov     eax, [edi+13Ch]
0x7E929D: jmp     short loc_7E92A5
0x7E929F: mov     eax, [edi+134h]
0x7E92A5: push    eax; a2
0x7E92A6: call    sub_7AECB0
0x7E92AB: mov     edx, ds:0B430B0h
0x7E92B1: mov     eax, [edi+edx*4+14Ch]
0x7E92B8: push    eax; a2
0x7E92B9: mov     ecx, esi; this
0x7E92BB: call    sub_7AEC60
0x7E92C0: cmp     dword ptr [esi+30h], 0
0x7E92C4: jnz     short loc_7E92CE
0x7E92C6: call    sub_772DF0
0x7E92CB: mov     [esi+30h], eax
0x7E92CE: mov     ecx, [esi+30h]
0x7E92D1: push    1
0x7E92D3: push    3Fh ; '?'
0x7E92D5: push    98h ; '˜'
0x7E92DA: call    sub_772CD0
0x7E92DF: mov     eax, [esi+24h]
0x7E92E2: mov     eax, [eax]
0x7E92E4: push    eax
0x7E92E5: lea     ecx, [esp+60h+arg_0]
0x7E92E9: call    sub_7AEC20
0x7E92EE: mov     ecx, [esp+5Ch+a2]
0x7E92F2: push    ecx; a2
0x7E92F3: mov     ecx, [esp+60h+arg_0]; this
0x7E92F7: call    sub_76C910
0x7E92FC: mov     edx, [esi+24h]
0x7E92FF: mov     eax, [edx+4]
0x7E9302: push    eax
0x7E9303: lea     ecx, [esp+60h+arg_0]
0x7E9307: call    sub_7AEC20
0x7E930C: mov     eax, ds:0B42EB8h
0x7E9311: mov     ecx, [eax+0Ch]
0x7E9314: mov     edx, [ecx]
0x7E9316: mov     ecx, [edx+114h]; this
0x7E931C: call    BSRenderedTexture__GetInnerTexture
0x7E9321: mov     ebp, [esp+5Ch+arg_0]
0x7E9325: push    eax; a2
0x7E9326: mov     ecx, ebp; this
0x7E9328: call    sub_76C910
0x7E932D: jmp     loc_7E9618
0x7E9332: cmp     byte ptr ds:0B43344h, 0
0x7E9339: jz      short loc_7E934E
0x7E933B: mov     ecx, ebx
0x7E933D: call    sub_7ED600
0x7E9342: movzx   eax, ax
0x7E9345: test    ax, ax
0x7E9348: jnz     loc_7E94B6
0x7E934E: mov     eax, [edi+7Ch]
0x7E9351: test    eax, eax
0x7E9353: jz      short loc_7E935F
0x7E9355: mov     esi, eax
0x7E9357: add     dword ptr [esi+60h], 1
0x7E935B: mov     [esp+5Ch+var_40], esi
0x7E935F: mov     eax, [esi+24h]
0x7E9362: mov     eax, [eax]
0x7E9364: test    eax, eax
0x7E9366: jz      short loc_7E9370
0x7E9368: add     dword ptr [eax+5Ch], 1
0x7E936C: mov     [esp+5Ch+arg_0], eax
0x7E9370: mov     ecx, [esp+5Ch+a2]
0x7E9374: push    ecx; a2
0x7E9375: mov     ecx, [esp+60h+arg_0]; this
0x7E9379: call    sub_76C910
0x7E937E: mov     bl, [esp+5Ch+var_44]
0x7E9382: test    bl, bl
0x7E9384: jz      short loc_7E93C5
0x7E9386: mov     edx, [esi+24h]
0x7E9389: mov     eax, [edx+4]
0x7E938C: push    eax
0x7E938D: lea     ecx, [esp+60h+arg_0]
0x7E9391: call    sub_7AEC20
0x7E9396: mov     eax, ds:0B43108h
0x7E939B: mov     ecx, [esp+5Ch+arg_0]; this
0x7E939F: push    eax; a2
0x7E93A0: call    sub_76C910
0x7E93A5: mov     ecx, [esi+24h]
0x7E93A8: mov     eax, [ecx+8]
0x7E93AB: push    eax
0x7E93AC: lea     ecx, [esp+60h+arg_0]
0x7E93B0: call    sub_7AEC20
0x7E93B5: mov     edx, ds:0B4310Ch
0x7E93BB: mov     ecx, [esp+5Ch+arg_0]; this
0x7E93BF: push    edx; a2
0x7E93C0: call    sub_76C910
0x7E93C5: cmp     [esp+5Ch+var_41], 0
0x7E93CA: jz      short loc_7E9427
0x7E93CC: cmp     [esp+5Ch+var_45], 0
0x7E93D1: jz      short loc_7E9409
0x7E93D3: test    bl, bl
0x7E93D5: jnz     short loc_7E93FA
0x7E93D7: movzx   eax, bp
0x7E93DA: mov     eax, [edi+eax*4+0A0h]
0x7E93E1: mov     ecx, esi; this
0x7E93E3: push    eax; a2
0x7E93E4: call    sub_7AECB0
0x7E93E9: movzx   ecx, word ptr [esp+5Ch+var_3C]
0x7E93EE: mov     eax, [edi+ecx*4+134h]
0x7E93F5: jmp     loc_7E95ED
0x7E93FA: movzx   ecx, bp
0x7E93FD: mov     eax, [edi+ecx*4+0C0h]
0x7E9404: jmp     loc_7E948F
0x7E9409: test    bl, bl
0x7E940B: mov     ecx, esi
0x7E940D: jnz     short loc_7E941B
0x7E940F: movzx   edx, bp
0x7E9412: mov     eax, [edi+edx*4+98h]
0x7E9419: jmp     short loc_7E93E3
0x7E941B: movzx   eax, bp
0x7E941E: mov     eax, [edi+eax*4+0B8h]
0x7E9425: jmp     short loc_7E9491
0x7E9427: cmp     [esp+5Ch+var_45], 0
0x7E942C: jz      short loc_7E945F
0x7E942E: cmp     [esp+5Ch+var_46], 0
0x7E9433: jz      short loc_7E9441
0x7E9435: movzx   ecx, bp
0x7E9438: mov     eax, [edi+ecx*4+0D8h]
0x7E943F: jmp     short loc_7E948F
0x7E9441: test    bl, bl
0x7E9443: mov     ecx, esi
0x7E9445: jnz     short loc_7E9453
0x7E9447: movzx   edx, bp
0x7E944A: mov     eax, [edi+edx*4+9Ch]
0x7E9451: jmp     short loc_7E93E3
0x7E9453: movzx   eax, bp
0x7E9456: mov     eax, [edi+eax*4+0BCh]
0x7E945D: jmp     short loc_7E9491
0x7E945F: cmp     [esp+5Ch+var_46], 0
0x7E9464: jz      short loc_7E9472
0x7E9466: movzx   ecx, bp
0x7E9469: mov     eax, [edi+ecx*4+0D4h]
0x7E9470: jmp     short loc_7E948F
0x7E9472: test    bl, bl
0x7E9474: jnz     short loc_7E9485
0x7E9476: movzx   edx, bp
0x7E9479: mov     eax, [edi+edx*4+94h]
0x7E9480: jmp     loc_7E93E1
0x7E9485: movzx   eax, bp
0x7E9488: mov     eax, [edi+eax*4+0B4h]
0x7E948F: mov     ecx, esi; this
0x7E9491: push    eax; a2
0x7E9492: call    sub_7AECB0
0x7E9497: test    bl, bl
0x7E9499: jz      loc_7E93E9
0x7E949F: cmp     word ptr [esp+5Ch+var_3C], 0
0x7E94A5: jz      loc_7E93E9
0x7E94AB: mov     eax, [edi+144h]
0x7E94B1: jmp     loc_7E9746
0x7E94B6: mov     eax, [edi+80h]
0x7E94BC: test    eax, eax
0x7E94BE: jz      short loc_7E94CA
0x7E94C0: mov     esi, eax
0x7E94C2: add     dword ptr [esi+60h], 1
0x7E94C6: mov     [esp+5Ch+var_40], esi
0x7E94CA: mov     edx, [esi+24h]
0x7E94CD: mov     eax, [edx]
0x7E94CF: test    eax, eax
0x7E94D1: jz      short loc_7E94DB
0x7E94D3: add     dword ptr [eax+5Ch], 1
0x7E94D7: mov     [esp+5Ch+arg_0], eax
0x7E94DB: mov     eax, [esp+5Ch+a2]
0x7E94DF: mov     ecx, [esp+5Ch+arg_0]; this
0x7E94E3: push    eax; a2
0x7E94E4: call    sub_76C910
0x7E94E9: cmp     dword ptr ds:0B42F48h, 2
0x7E94F0: mov     ecx, [esi+24h]
0x7E94F3: mov     eax, [ecx+4]
0x7E94F6: push    eax
0x7E94F7: lea     ecx, [esp+60h+arg_0]
0x7E94FB: jl      short loc_7E955B
0x7E94FD: call    sub_7AEC20
0x7E9502: mov     edx, ds:0B43110h
0x7E9508: mov     ecx, [esp+5Ch+arg_0]; this
0x7E950C: push    edx; a2
0x7E950D: call    sub_76C910
0x7E9512: mov     bl, [esp+5Ch+var_44]
0x7E9516: test    bl, bl
0x7E9518: jz      short loc_7E9594
0x7E951A: mov     eax, [esi+24h]
0x7E951D: mov     eax, [eax+8]
0x7E9520: push    eax
0x7E9521: lea     ecx, [esp+60h+arg_0]
0x7E9525: call    sub_7AEC20
0x7E952A: mov     ecx, ds:0B43108h
0x7E9530: push    ecx; a2
0x7E9531: mov     ecx, [esp+60h+arg_0]; this
0x7E9535: call    sub_76C910
0x7E953A: mov     edx, [esi+24h]
0x7E953D: mov     eax, [edx+0Ch]
0x7E9540: push    eax
0x7E9541: lea     ecx, [esp+60h+arg_0]
0x7E9545: call    sub_7AEC20
0x7E954A: mov     eax, ds:0B4310Ch
0x7E954F: mov     ecx, [esp+5Ch+arg_0]; this
0x7E9553: push    eax; a2
0x7E9554: call    sub_76C910
0x7E9559: jmp     short loc_7E9594
0x7E955B: call    sub_7AEC20
0x7E9560: mov     edx, ds:0B43110h
0x7E9566: mov     ecx, [esp+5Ch+arg_0]; this
0x7E956A: push    edx; a2
0x7E956B: call    sub_76C910
0x7E9570: mov     eax, [esi+24h]
0x7E9573: mov     eax, [eax+8]
0x7E9576: push    eax
0x7E9577: lea     ecx, [esp+60h+arg_0]
0x7E957B: call    sub_7AEC20
0x7E9580: mov     ecx, ds:0B430D4h
0x7E9586: push    ecx; a2
0x7E9587: mov     ecx, [esp+60h+arg_0]; this
0x7E958B: call    sub_76C910
0x7E9590: mov     bl, [esp+5Ch+var_44]
0x7E9594: cmp     [esp+5Ch+var_41], 0
0x7E9599: jz      loc_7E96BB
0x7E959F: cmp     [esp+5Ch+var_45], 0
0x7E95A4: jz      short loc_7E95C7
0x7E95A6: test    bl, bl
0x7E95A8: mov     ecx, esi
0x7E95AA: jnz     short loc_7E95B8
0x7E95AC: movzx   edx, bp
0x7E95AF: mov     eax, [edi+edx*4+0B0h]
0x7E95B6: jmp     short loc_7E95DB
0x7E95B8: movzx   eax, bp
0x7E95BB: mov     eax, [edi+eax*4+0D0h]
0x7E95C2: jmp     loc_7E9726
0x7E95C7: test    bl, bl
0x7E95C9: jnz     loc_7E96AF
0x7E95CF: movzx   ecx, bp
0x7E95D2: mov     eax, [edi+ecx*4+0A8h]
0x7E95D9: mov     ecx, esi; this
0x7E95DB: push    eax; a2
0x7E95DC: call    sub_7AECB0
0x7E95E1: movzx   eax, word ptr [esp+5Ch+var_3C]
0x7E95E6: mov     eax, [edi+eax*4+138h]
0x7E95ED: push    eax; a2
0x7E95EE: mov     ecx, esi; this
0x7E95F0: call    sub_7AEC60
0x7E95F5: cmp     dword ptr [esi+30h], 0
0x7E95F9: jnz     short loc_7E9603
0x7E95FB: call    sub_772DF0
0x7E9600: mov     [esi+30h], eax
0x7E9603: mov     ecx, [esi+30h]
0x7E9606: push    0
0x7E9608: push    0
0x7E960A: push    98h ; '˜'
0x7E960F: call    sub_772CD0
0x7E9614: mov     ebp, [esp+5Ch+arg_0]
0x7E9618: cmp     word ptr ds:0B42EACh, 4
0x7E9620: jnz     loc_7E9793
0x7E9626: cmp     dword ptr [esi+30h], 0
0x7E962A: jnz     short loc_7E9634
0x7E962C: call    sub_772DF0
0x7E9631: mov     [esi+30h], eax
0x7E9634: mov     ecx, [esi+30h]
0x7E9637: push    0
0x7E9639: push    1
0x7E963B: push    34h ; '4'
0x7E963D: call    sub_772CD0
0x7E9642: cmp     dword ptr [esi+30h], 0
0x7E9646: jnz     short loc_7E9650
0x7E9648: call    sub_772DF0
0x7E964D: mov     [esi+30h], eax
0x7E9650: mov     ecx, [esi+30h]
0x7E9653: push    0
0x7E9655: push    8
0x7E9657: push    38h ; '8'
0x7E9659: call    sub_772CD0
0x7E965E: cmp     dword ptr [esi+30h], 0
0x7E9662: jnz     short loc_7E966C
0x7E9664: call    sub_772DF0
0x7E9669: mov     [esi+30h], eax
0x7E966C: mov     ecx, [esi+30h]
0x7E966F: push    0
0x7E9671: push    7
0x7E9673: push    37h ; '7'
0x7E9675: call    sub_772CD0
0x7E967A: cmp     dword ptr [esi+30h], 0
0x7E967E: jnz     short loc_7E9688
0x7E9680: call    sub_772DF0
0x7E9685: mov     [esi+30h], eax
0x7E9688: mov     ecx, [esi+30h]
0x7E968B: push    0
0x7E968D: push    1
0x7E968F: push    35h ; '5'
0x7E9691: call    sub_772CD0
0x7E9696: cmp     dword ptr [esi+30h], 0
0x7E969A: jnz     short loc_7E96A4
0x7E969C: call    sub_772DF0
0x7E96A1: mov     [esi+30h], eax
0x7E96A4: push    0
0x7E96A6: push    1
0x7E96A8: push    36h ; '6'
0x7E96AA: jmp     loc_7E97A7
0x7E96AF: movzx   edx, bp
0x7E96B2: mov     eax, [edi+edx*4+0C8h]
0x7E96B9: jmp     short loc_7E9724
0x7E96BB: cmp     [esp+5Ch+var_45], 0
0x7E96C0: jz      short loc_7E96F4
0x7E96C2: cmp     [esp+5Ch+var_46], 0
0x7E96C7: jz      short loc_7E96D5
0x7E96C9: movzx   eax, bp
0x7E96CC: mov     eax, [edi+eax*4+0E0h]
0x7E96D3: jmp     short loc_7E9724
0x7E96D5: test    bl, bl
0x7E96D7: jnz     short loc_7E96E8
0x7E96D9: movzx   ecx, bp
0x7E96DC: mov     eax, [edi+ecx*4+0ACh]
0x7E96E3: jmp     loc_7E95D9
0x7E96E8: movzx   edx, bp
0x7E96EB: mov     eax, [edi+edx*4+0CCh]
0x7E96F2: jmp     short loc_7E9724
0x7E96F4: cmp     [esp+5Ch+var_46], 0
0x7E96F9: jz      short loc_7E9707
0x7E96FB: movzx   eax, bp
0x7E96FE: mov     eax, [edi+eax*4+0DCh]
0x7E9705: jmp     short loc_7E9724
0x7E9707: test    bl, bl
0x7E9709: jnz     short loc_7E971A
0x7E970B: movzx   ecx, bp
0x7E970E: mov     eax, [edi+ecx*4+0A4h]
0x7E9715: jmp     loc_7E95D9
0x7E971A: movzx   edx, bp
0x7E971D: mov     eax, [edi+edx*4+0C4h]
0x7E9724: mov     ecx, esi; this
0x7E9726: push    eax; a2
0x7E9727: call    sub_7AECB0
0x7E972C: test    bl, bl
0x7E972E: jz      loc_7E95E1
0x7E9734: cmp     word ptr [esp+5Ch+var_3C], 0
0x7E973A: jz      loc_7E95E1
0x7E9740: mov     eax, [edi+148h]
0x7E9746: push    eax; a2
0x7E9747: mov     ecx, esi; this
0x7E9749: call    sub_7AEC60
0x7E974E: fld     dword ptr ds:0B44EE8h
0x7E9754: fstp    [esp+5Ch+a2]
0x7E9758: fld     dword ptr ds:0B44EECh
0x7E975E: fstp    [esp+5Ch+var_28]
0x7E9762: fld     [esp+5Ch+a2]
0x7E9766: fstp    dword ptr ds:0B460F0h
0x7E976C: fld     [esp+5Ch+var_28]
0x7E9770: fstp    dword ptr ds:0B460F4h
0x7E9776: fld     dword ptr ds:0B2D860h
0x7E977C: fstp    dword ptr ds:0B460F8h
0x7E9782: fld     dword ptr ds:0B44EF4h
0x7E9788: fstp    dword ptr ds:0B460FCh
0x7E978E: jmp     loc_7E95F5
0x7E9793: cmp     dword ptr [esi+30h], 0
0x7E9797: jnz     short loc_7E97A1
0x7E9799: call    sub_772DF0
0x7E979E: mov     [esi+30h], eax
0x7E97A1: push    0
0x7E97A3: push    0
0x7E97A5: push    34h ; '4'
0x7E97A7: mov     ecx, [esi+30h]
0x7E97AA: call    sub_772CD0
0x7E97AF: cmp     dword ptr ds:0B42F48h, 2
0x7E97B6: jl      short loc_7E97C1
0x7E97B8: cmp     byte ptr ds:0B43070h, 0
0x7E97BF: jnz     short loc_7E97E9
0x7E97C1: cmp     dword ptr [esi+30h], 0
0x7E97C5: mov     ecx, [esp+5Ch+arg_C]
0x7E97C9: mov     eax, [ecx+8]
0x7E97CC: mov     bl, [eax+1Ah]
0x7E97CF: jnz     short loc_7E97D9
0x7E97D1: call    sub_772DF0
0x7E97D6: mov     [esi+30h], eax
0x7E97D9: mov     ecx, [esi+30h]
0x7E97DC: movzx   edx, bl
0x7E97DF: push    0
0x7E97E1: push    edx
0x7E97E2: push    18h
0x7E97E4: call    sub_772CD0
0x7E97E9: mov     ecx, [edi+38h]
0x7E97EC: lea     eax, [esp+5Ch+var_40]
0x7E97F0: push    eax
0x7E97F1: push    ecx
0x7E97F2: lea     ecx, [edi+40h]
0x7E97F5: call    sub_76CE40
0x7E97FA: add     dword ptr [edi+38h], 1
0x7E97FE: or      edi, 0FFFFFFFFh
0x7E9801: test    ebp, ebp
0x7E9803: mov     byte ptr [esp+5Ch+var_4], 0
0x7E9808: jz      short loc_7E9816
0x7E980A: add     [ebp+5Ch], edi
0x7E980D: jnz     short loc_7E9816
0x7E980F: mov     ecx, ebp
0x7E9811: call    sub_772560
0x7E9816: add     [esi+60h], edi
0x7E9819: mov     [esp+5Ch+var_4], edi
0x7E981D: jnz     short loc_7E9826
0x7E981F: mov     ecx, esi
0x7E9821: call    sub_7604D0
0x7E9826: xor     eax, eax
0x7E9828: mov     ecx, [esp+5Ch+var_C]
0x7E982C: mov     large fs:0, ecx
0x7E9833: pop     ecx
0x7E9834: pop     edi
0x7E9835: pop     esi
0x7E9836: pop     ebp
0x7E9837: pop     ebx
0x7E9838: add     esp, 48h
0x7E983B: retn    1Ch
