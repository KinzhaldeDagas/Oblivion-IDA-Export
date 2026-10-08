0x7B1200: push    0FFFFFFFFh
0x7B1202: push    offset ??0MenuBGShader@@QAE@XZ_SEH
0x7B1207: mov     eax, large fs:0
0x7B120D: push    eax
0x7B120E: push    ecx
0x7B120F: push    ebx
0x7B1210: push    ebp
0x7B1211: push    esi
0x7B1212: push    edi
0x7B1213: mov     eax, ds:0B30AACh
0x7B1218: xor     eax, esp
0x7B121A: push    eax
0x7B121B: lea     eax, [esp+24h+var_C]
0x7B121F: mov     large fs:0, eax
0x7B1225: mov     esi, ecx
0x7B1227: mov     [esp+24h+var_10], esi
0x7B122B: mov     dword ptr [esi], offset ??_7MenuBGShader@@6B@; const MenuBGShader::`vftable'
0x7B1231: mov     edi, [esi+98h]
0x7B1237: test    edi, edi
0x7B1239: mov     [esp+24h+var_4], 4
0x7B1241: jz      short loc_7B1269
0x7B1243: lea     eax, [edi+4]
0x7B1246: push    eax; lpAddend
0x7B1247: call    dword ptr ds:0A2807Ch
0x7B124D: test    eax, eax
0x7B124F: jnz     short loc_7B125F
0x7B1251: test    edi, edi
0x7B1253: jz      short loc_7B125F
0x7B1255: mov     edx, [edi]
0x7B1257: mov     eax, [edx]
0x7B1259: push    1
0x7B125B: mov     ecx, edi
0x7B125D: call    eax
0x7B125F: mov     dword ptr [esi+98h], 0
0x7B1269: mov     edi, [esi+9Ch]
0x7B126F: test    edi, edi
0x7B1271: lea     ebx, [esi+9Ch]
0x7B1277: jz      short loc_7B129B
0x7B1279: lea     ecx, [edi+4]
0x7B127C: push    ecx; lpAddend
0x7B127D: call    dword ptr ds:0A2807Ch
0x7B1283: test    eax, eax
0x7B1285: jnz     short loc_7B1295
0x7B1287: test    edi, edi
0x7B1289: jz      short loc_7B1295
0x7B128B: mov     edx, [edi]
0x7B128D: mov     eax, [edx]
0x7B128F: push    1
0x7B1291: mov     ecx, edi
0x7B1293: call    eax
0x7B1295: mov     dword ptr [ebx], 0
0x7B129B: mov     ecx, [esi+94h]
0x7B12A1: test    ecx, ecx
0x7B12A3: lea     ebp, [esi+94h]
0x7B12A9: jz      short loc_7B12BD
0x7B12AB: add     dword ptr [ecx+60h], 0FFFFFFFFh
0x7B12AF: jnz     short loc_7B12B6
0x7B12B1: call    NiD3DPass_ReleaseToPool; Release a renderer-owned NiD3DPass: release attached resources and return the pass object to the global pool when its reference count reaches zero.
0x7B12B6: mov     dword ptr [ebp+0], 0
0x7B12BD: mov     byte ptr [esi+78h], 0
0x7B12C1: mov     dword ptr [esi+90h], 0
0x7B12CB: mov     byte ptr [esi+0B0h], 0
0x7B12D2: mov     edi, [esi+0B4h]
0x7B12D8: test    edi, edi
0x7B12DA: jz      short loc_7B1302
0x7B12DC: lea     ecx, [edi+4]
0x7B12DF: push    ecx; lpAddend
0x7B12E0: call    dword ptr ds:0A2807Ch
0x7B12E6: test    eax, eax
0x7B12E8: jnz     short loc_7B12F8
0x7B12EA: test    edi, edi
0x7B12EC: jz      short loc_7B12F8
0x7B12EE: mov     edx, [edi]
0x7B12F0: mov     eax, [edx]
0x7B12F2: push    1
0x7B12F4: mov     ecx, edi
0x7B12F6: call    eax
0x7B12F8: mov     dword ptr [esi+0B4h], 0
0x7B1302: mov     edi, [esi+0B4h]
0x7B1308: test    edi, edi
0x7B130A: mov     byte ptr [esp+24h+var_4], 3
0x7B130F: jz      short loc_7B132D
0x7B1311: lea     ecx, [edi+4]
0x7B1314: push    ecx; lpAddend
0x7B1315: call    dword ptr ds:0A2807Ch
0x7B131B: test    eax, eax
0x7B131D: jnz     short loc_7B132D
0x7B131F: test    edi, edi
0x7B1321: jz      short loc_7B132D
0x7B1323: mov     edx, [edi]
0x7B1325: mov     eax, [edx]
0x7B1327: push    1
0x7B1329: mov     ecx, edi
0x7B132B: call    eax
0x7B132D: push    offset NiPointerSlot_Release; void (__thiscall *)(void *)
0x7B1332: push    1; int
0x7B1334: push    4; unsigned int
0x7B1336: push    ebx; void *
0x7B1337: mov     byte ptr [esp+34h+var_4], 2
0x7B133C: call    $LN21
0x7B1341: push    offset NiPointerSlot_Release; void (__thiscall *)(void *)
0x7B1346: push    1; int
0x7B1348: push    4; unsigned int
0x7B134A: lea     eax, [esi+98h]
0x7B1350: push    eax; void *
0x7B1351: mov     byte ptr [esp+34h+var_4], 1
0x7B1356: call    $LN21
0x7B135B: push    offset sub_4027D0; void (__thiscall *)(void *)
0x7B1360: push    1; int
0x7B1362: push    4; unsigned int
0x7B1364: push    ebp; void *
0x7B1365: mov     byte ptr [esp+34h+var_4], 0
0x7B136A: call    $LN21
0x7B136F: mov     ecx, esi; this
0x7B1371: mov     [esp+24h+var_4], 0FFFFFFFFh
0x7B1379: call    ??1BSImageSpaceShader@@UAE@XZ; MoonSugarEffect decode: BSImageSpaceShader dtor releases source BSRenderedTexture at +0x7C, clears +0x80..+0x8C, then calls BSShader dtor.
0x7B137E: mov     ecx, dword ptr [esp+24h+var_C]
0x7B1382: mov     large fs:0, ecx
0x7B1389: pop     ecx
0x7B138A: pop     edi
0x7B138B: pop     esi
0x7B138C: pop     ebp
0x7B138D: pop     ebx
0x7B138E: add     esp, 10h
0x7B1391: retn
0x9CD7D0: mov     ecx, [ebp-10h]; this
0x9CD7D3: jmp     ??1BSImageSpaceShader@@UAE@XZ; MoonSugarEffect decode: BSImageSpaceShader dtor releases source BSRenderedTexture at +0x7C, clears +0x80..+0x8C, then calls BSShader dtor.
0x9CD7D8: push    offset sub_4027D0; void (__thiscall *)(void *)
0x9CD7DD: push    1; int
0x9CD7DF: push    4; unsigned int
0x9CD7E1: mov     eax, [ebp-10h]
0x9CD7E4: add     eax, 94h ; '”'
0x9CD7E9: push    eax; void *
0x9CD7EA: call    $LN21
0x9CD7EF: retn
0x9CD7F0: push    offset NiPointerSlot_Release; void (__thiscall *)(void *)
0x9CD7F5: push    1; int
0x9CD7F7: push    4; unsigned int
0x9CD7F9: mov     eax, [ebp-10h]
0x9CD7FC: add     eax, 98h ; '˜'
0x9CD801: push    eax; void *
0x9CD802: call    $LN21
0x9CD807: retn
0x9CD808: push    offset NiPointerSlot_Release; void (__thiscall *)(void *)
0x9CD80D: push    1; int
0x9CD80F: push    4; unsigned int
0x9CD811: mov     eax, [ebp-10h]
0x9CD814: add     eax, 9Ch ; 'œ'
0x9CD819: push    eax; void *
0x9CD81A: call    $LN21
0x9CD81F: retn
0x9CD820: mov     ecx, [ebp-10h]
0x9CD823: add     ecx, 0B4h ; '´'; slot
0x9CD829: jmp     NiPointerSlot_Release
0x9CD82E: mov     edx, [esp+arg_4]
0x9CD832: lea     eax, [edx-14h]
0x9CD835: mov     ecx, [edx-18h]
0x9CD838: xor     ecx, eax
0x9CD83A: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CD83F: mov     eax, offset stru_AF6A38
0x9CD844: jmp     ___CxxFrameHandler3
