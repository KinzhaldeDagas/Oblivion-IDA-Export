0x96F170: sub     esp, 0Ch
0x96F173: fldz
0x96F175: push    ebx
0x96F176: mov     ebx, [esp+10h+arg_0]
0x96F17A: fst     [esp+10h+var_C]
0x96F17E: push    esi
0x96F17F: push    edi
0x96F180: mov     edi, [esp+18h+arg_4]
0x96F184: push    ecx
0x96F185: fstp    [esp+1Ch+var_1C]
0x96F188: mov     esi, ecx
0x96F18A: mov     eax, [esi]
0x96F18C: mov     edx, [eax+8]
0x96F18F: push    edi
0x96F190: push    ebx
0x96F191: call    edx
0x96F193: fstp    [esp+18h+arg_4]
0x96F197: fld     [esp+18h+arg_4]
0x96F19B: push    edi
0x96F19C: fld     dword ptr [esi+10h]
0x96F19F: fchs
0x96F1A1: fcomp   st(1)
0x96F1A3: fnstsw  ax
0x96F1A5: test    ah, 1
0x96F1A8: jnz     short loc_96F1CB
0x96F1AA: mov     eax, [esi]
0x96F1AC: fstp    st
0x96F1AE: fldz
0x96F1B0: mov     edx, [eax+0Ch]
0x96F1B3: push    ebx
0x96F1B4: fstp    dword ptr [esi+1Ch]
0x96F1B7: mov     ecx, esi
0x96F1B9: mov     dword ptr [esi+18h], 3
0x96F1C0: call    edx
0x96F1C2: pop     edi
0x96F1C3: pop     esi
0x96F1C4: pop     ebx
0x96F1C5: add     esp, 0Ch
0x96F1C8: retn    8
0x96F1CB: fcomp   dword ptr ds:0AA3B44h
0x96F1D1: fnstsw  ax
0x96F1D3: test    ah, 41h
0x96F1D6: jp      short loc_96F1F7
0x96F1D8: mov     eax, [esi]
0x96F1DA: fldz
0x96F1DC: mov     edx, [eax+0Ch]
0x96F1DF: fstp    dword ptr [esi+1Ch]
0x96F1E2: push    ebx
0x96F1E3: mov     ecx, esi
0x96F1E5: mov     dword ptr [esi+18h], 2
0x96F1EC: call    edx
0x96F1EE: pop     edi
0x96F1EF: pop     esi
0x96F1F0: pop     ebx
0x96F1F1: add     esp, 0Ch
0x96F1F4: retn    8
0x96F1F7: mov     ecx, ebx
0x96F1F9: call    sub_8AA350
0x96F1FE: test    al, al
0x96F200: jz      short loc_96F21B
0x96F202: mov     dword ptr [esi+18h], 1
0x96F209: fld     dword ptr ds:0A7DEB4h
0x96F20F: pop     edi
0x96F210: fstp    dword ptr [esi+1Ch]
0x96F213: pop     esi
0x96F214: pop     ebx
0x96F215: add     esp, 0Ch
0x96F218: retn    8
0x96F21B: fld     dword ptr [esi+8]
0x96F21E: mov     eax, [esi]
0x96F220: fldz
0x96F222: mov     edx, [eax+8]
0x96F225: fsubrp  st(1), st
0x96F227: push    ecx
0x96F228: mov     ecx, esi
0x96F22A: fstp    [esp+1Ch+arg_0]
0x96F22E: fld     [esp+1Ch+arg_0]
0x96F232: fstp    [esp+1Ch+var_1C]
0x96F235: push    edi
0x96F236: push    ebx
0x96F237: call    edx
0x96F239: fstp    [esp+18h+arg_0]
0x96F23D: fld     [esp+18h+arg_4]
0x96F241: fsub    [esp+18h+arg_0]
0x96F245: fmul    dword ptr [esi+0Ch]
0x96F248: fstp    [esp+18h+var_8]
0x96F24C: fldz
0x96F24E: fcomp   [esp+18h+var_8]
0x96F252: fnstsw  ax
0x96F254: test    ah, 41h
0x96F257: jnp     short loc_96F202
0x96F259: fld     dword ptr [esi+4]
0x96F25C: mov     eax, [esi]
0x96F25E: mov     edx, [eax+8]
0x96F261: push    ecx
0x96F262: fstp    [esp+1Ch+var_1C]
0x96F265: push    edi
0x96F266: push    ebx
0x96F267: mov     ecx, esi
0x96F269: call    edx
0x96F26B: fstp    [esp+18h+var_4]
0x96F26F: fldz
0x96F271: fcomp   [esp+18h+var_4]
0x96F275: fnstsw  ax
0x96F277: test    ah, 5
0x96F27A: jp      short loc_96F2C1
0x96F27C: fld     dword ptr [esi+4]
0x96F27F: mov     eax, [esi]
0x96F281: fsub    dword ptr [esi+8]
0x96F284: mov     edx, [eax+8]
0x96F287: push    ecx
0x96F288: mov     ecx, esi
0x96F28A: fstp    [esp+1Ch+arg_0]
0x96F28E: fld     [esp+1Ch+arg_0]
0x96F292: fstp    [esp+1Ch+var_1C]
0x96F295: push    edi
0x96F296: push    ebx
0x96F297: call    edx
0x96F299: fstp    [esp+18h+arg_0]
0x96F29D: fld     [esp+18h+var_4]
0x96F2A1: fsub    [esp+18h+arg_0]
0x96F2A5: fmul    dword ptr [esi+0Ch]
0x96F2A8: fstp    [esp+18h+arg_0]
0x96F2AC: fld     [esp+18h+arg_0]
0x96F2B0: fcomp   dword ptr ds:0A2FAA8h
0x96F2B6: fnstsw  ax
0x96F2B8: test    ah, 5
0x96F2BB: jnp     loc_96F202
0x96F2C1: push    ebp
0x96F2C2: mov     ebp, 1
0x96F2C7: cmp     [esi+14h], ebp
0x96F2CA: jl      loc_96F371
0x96F2D0: fld     [esp+1Ch+arg_4]
0x96F2D4: fld     [esp+1Ch+var_8]
0x96F2D8: fld     [esp+1Ch+var_C]
0x96F2DC: fxch    st(2)
0x96F2DE: fdivrp  st(1), st
0x96F2E0: fsubp   st(1), st
0x96F2E2: fstp    [esp+1Ch+var_C]
0x96F2E6: fld     [esp+1Ch+var_C]
0x96F2EA: fld     dword ptr [esi+4]
0x96F2ED: fcomp   st(1)
0x96F2EF: fnstsw  ax
0x96F2F1: test    ah, 5
0x96F2F4: jnp     loc_96F396
0x96F2FA: mov     eax, [esi]
0x96F2FC: mov     edx, [eax+8]
0x96F2FF: push    ecx
0x96F300: fstp    [esp+20h+var_20]
0x96F303: push    edi
0x96F304: push    ebx
0x96F305: mov     ecx, esi
0x96F307: call    edx
0x96F309: fstp    [esp+1Ch+arg_4]
0x96F30D: fld     [esp+1Ch+arg_4]
0x96F311: fld     dword ptr [esi+10h]
0x96F314: fcompp
0x96F316: fnstsw  ax
0x96F318: test    ah, 1
0x96F31B: mov     eax, [esi]
0x96F31D: jz      short loc_96F373
0x96F31F: fld     [esp+1Ch+var_C]
0x96F323: mov     edx, [eax+8]
0x96F326: fsub    dword ptr [esi+8]
0x96F329: push    ecx
0x96F32A: mov     ecx, esi
0x96F32C: fstp    [esp+20h+arg_0]
0x96F330: fld     [esp+20h+arg_0]
0x96F334: fstp    [esp+20h+var_20]
0x96F337: push    edi
0x96F338: push    ebx
0x96F339: call    edx
0x96F33B: fstp    [esp+1Ch+arg_0]
0x96F33F: fld     [esp+1Ch+arg_4]
0x96F343: fld     st
0x96F345: fsub    [esp+1Ch+arg_0]
0x96F349: fmul    dword ptr [esi+0Ch]
0x96F34C: fstp    [esp+1Ch+var_8]
0x96F350: fldz
0x96F352: fld     [esp+1Ch+var_8]
0x96F356: fcom    st(1)
0x96F358: fnstsw  ax
0x96F35A: fstp    st(1)
0x96F35C: test    ah, 1
0x96F35F: jz      short loc_96F394
0x96F361: add     ebp, 1
0x96F364: cmp     ebp, [esi+14h]
0x96F367: jle     loc_96F2D8
0x96F36D: fstp    st
0x96F36F: fstp    st
0x96F371: mov     eax, [esi]
0x96F373: fld     [esp+1Ch+var_C]
0x96F377: mov     edx, [eax+0Ch]
0x96F37A: push    edi
0x96F37B: fstp    dword ptr [esi+1Ch]
0x96F37E: push    ebx
0x96F37F: mov     ecx, esi
0x96F381: mov     dword ptr [esi+18h], 2
0x96F388: call    edx
0x96F38A: pop     ebp
0x96F38B: pop     edi
0x96F38C: pop     esi
0x96F38D: pop     ebx
0x96F38E: add     esp, 0Ch
0x96F391: retn    8
0x96F394: fstp    st
0x96F396: pop     ebp
0x96F397: fstp    st
0x96F399: mov     dword ptr [esi+18h], 1
0x96F3A0: fld     dword ptr ds:0A7DEB4h
0x96F3A6: pop     edi
0x96F3A7: fstp    dword ptr [esi+1Ch]
0x96F3AA: pop     esi
0x96F3AB: pop     ebx
0x96F3AC: add     esp, 0Ch
0x96F3AF: retn    8
