0x5FA0A0: push    ebp
0x5FA0A1: mov     ebp, esp
0x5FA0A3: and     esp, 0FFFFFFF0h
0x5FA0A6: sub     esp, 0D4h
0x5FA0AC: mov     eax, ds:0B30AACh
0x5FA0B1: xor     eax, esp
0x5FA0B3: mov     [esp+0D4h+var_4], eax
0x5FA0BA: mov     eax, [ebp+arg_0]
0x5FA0BD: mov     edx, [eax+4]
0x5FA0C0: push    ebx
0x5FA0C1: push    esi
0x5FA0C2: push    edi
0x5FA0C3: mov     edi, ecx
0x5FA0C5: mov     ecx, [eax]
0x5FA0C7: mov     [esp+0E0h+var_B0], ecx
0x5FA0CB: mov     ecx, [eax+8]
0x5FA0CE: mov     [esp+0E0h+var_AC], edx
0x5FA0D2: mov     edx, [eax]
0x5FA0D4: mov     [esp+0E0h+var_A8], ecx
0x5FA0D8: mov     ecx, [eax+4]
0x5FA0DB: mov     [esp+0E0h+var_BC], edx
0x5FA0DF: mov     edx, [eax+8]
0x5FA0E2: mov     [esp+0E0h+var_B8], ecx
0x5FA0E6: mov     ecx, [eax]
0x5FA0E8: mov     [esp+0E0h+var_B4], edx
0x5FA0EC: mov     edx, [eax+4]
0x5FA0EF: mov     eax, [eax+8]
0x5FA0F2: mov     [esp+0E0h+var_C8], ecx
0x5FA0F6: mov     ecx, edi
0x5FA0F8: mov     [esp+0E0h+var_C4], edx
0x5FA0FC: mov     [esp+0E0h+var_C0], eax
0x5FA100: call    sub_5E0660
0x5FA105: fmul    qword ptr ds:0A3C770h
0x5FA10B: fld     qword ptr ds:0A46970h
0x5FA111: fcom    st(1)
0x5FA113: fnstsw  ax
0x5FA115: fstp    st(1)
0x5FA117: test    ah, 41h
0x5FA11A: jnz     short loc_5FA12B
0x5FA11C: mov     ecx, edi
0x5FA11E: fstp    st
0x5FA120: call    sub_5E0660
0x5FA125: fmul    qword ptr ds:0A3C770h
0x5FA12B: fadd    [esp+0E0h+var_B4]
0x5FA12F: movaps  xmm0, xmmword ptr ds:0BA7A40h
0x5FA136: xor     ebx, ebx
0x5FA138: lea     ecx, [esp+0E0h+var_A4]
0x5FA13C: fstp    [esp+0E0h+var_B4]
0x5FA140: push    ecx
0x5FA141: fld     [esp+0E4h+var_C0]
0x5FA145: mov     ecx, edi
0x5FA147: fsub    dword ptr ds:0B37328h
0x5FA14D: mov     [esp+0E4h+var_70], bl
0x5FA151: mov     [esp+0E4h+var_6C], ebx
0x5FA155: mov     [esp+0E4h+var_40], ebx
0x5FA15C: fstp    [esp+0E4h+var_C0]
0x5FA160: mov     [esp+0E4h+var_20], ebx
0x5FA167: fld1
0x5FA169: mov     [esp+0E4h+var_1C], ebx
0x5FA170: fstp    [esp+0E4h+var_4C]
0x5FA177: mov     [esp+0E4h+var_18], ebx
0x5FA17E: movaps  [esp+0E4h+var_30], xmm0
0x5FA186: call    sub_65ABE0
0x5FA18B: fld     [esp+0E0h+var_BC]
0x5FA18F: fld     qword ptr ds:0A39088h
0x5FA195: mov     edx, [eax]
0x5FA197: fmul    st(1), st
0x5FA199: mov     ecx, edi; this
0x5FA19B: fxch    st(1)
0x5FA19D: mov     [esp+0E0h+var_6C], edx
0x5FA1A1: fstp    dword ptr [esp+0E0h+var_A0]
0x5FA1A5: fld     [esp+0E0h+var_B8]
0x5FA1A9: fmul    st, st(1)
0x5FA1AB: fstp    dword ptr [esp+0E0h+var_A0+4]
0x5FA1AF: fld     [esp+0E0h+var_B4]
0x5FA1B3: fmul    st, st(1)
0x5FA1B5: fstp    dword ptr [esp+0E0h+var_A0+8]
0x5FA1B9: movaps  xmm0, [esp+0E0h+var_A0]
0x5FA1BE: fld     [esp+0E0h+var_C8]
0x5FA1C2: movaps  [esp+0E0h+var_90], xmm0
0x5FA1C7: movaps  xmm0, xmmword ptr ds:0BA7A40h
0x5FA1CE: fmul    st, st(1)
0x5FA1D0: movaps  [esp+0E0h+var_30], xmm0
0x5FA1D8: fstp    dword ptr [esp+0E0h+var_A0]
0x5FA1DC: fld     [esp+0E0h+var_C4]
0x5FA1E0: fmul    st, st(1)
0x5FA1E2: fstp    dword ptr [esp+0E0h+var_A0+4]
0x5FA1E6: fmul    [esp+0E0h+var_C0]
0x5FA1EA: fstp    dword ptr [esp+0E0h+var_A0+8]
0x5FA1EE: movaps  xmm0, [esp+0E0h+var_A0]
0x5FA1F3: movaps  [esp+0E0h+var_80], xmm0
0x5FA1F8: call    TESObjectREFR_GetParentCell
0x5FA1FD: mov     esi, eax
0x5FA1FF: cmp     esi, ebx
0x5FA201: jz      short loc_5FA269
0x5FA203: mov     ecx, esi; this
0x5FA205: call    TESObjectCELL_IsInterior
0x5FA20A: test    al, al
0x5FA20C: jz      short loc_5FA218
0x5FA20E: lea     ecx, [esi+28h]
0x5FA211: call    sub_424180
0x5FA216: jmp     short loc_5FA21D
0x5FA218: mov     eax, ds:0B35C24h
0x5FA21D: cmp     eax, ebx
0x5FA21F: jz      short loc_5FA250
0x5FA221: mov     ecx, esi; this
0x5FA223: call    TESObjectCELL_IsInterior
0x5FA228: test    al, al
0x5FA22A: jz      short loc_5FA236
0x5FA22C: lea     ecx, [esi+28h]
0x5FA22F: call    sub_424180
0x5FA234: jmp     short loc_5FA23B
0x5FA236: mov     eax, ds:0B35C24h
0x5FA23B: mov     edx, [eax]
0x5FA23D: mov     edx, [edx+88h]
0x5FA243: lea     ecx, [esp+0E0h+var_90]
0x5FA247: push    ecx
0x5FA248: mov     ecx, eax
0x5FA24A: call    edx
0x5FA24C: test    al, al
0x5FA24E: jnz     short loc_5FA269
0x5FA250: xor     al, al
0x5FA252: pop     edi
0x5FA253: pop     esi
0x5FA254: pop     ebx
0x5FA255: mov     ecx, [esp+0D4h+var_4]
0x5FA25C: xor     ecx, esp
0x5FA25E: call    @__security_check_cookie@4; __security_check_cookie(x)
0x5FA263: mov     esp, ebp
0x5FA265: pop     ebp
0x5FA266: retn    4
0x5FA269: lea     eax, [esp+0E0h+var_B0]
0x5FA26D: push    eax
0x5FA26E: lea     ecx, [esp+0E4h+var_90]
0x5FA272: call    sub_5EA270
0x5FA277: cmp     esi, ebx
0x5FA279: jz      short loc_5FA2B1
0x5FA27B: mov     ecx, esi; this
0x5FA27D: call    TESObjectCELL__GetWaterForm
0x5FA282: cmp     eax, ebx
0x5FA284: jz      short loc_5FA2B1
0x5FA286: mov     edx, [eax]
0x5FA288: mov     ecx, eax
0x5FA28A: mov     eax, [edx+88h]
0x5FA290: call    eax
0x5FA292: test    al, al
0x5FA294: jz      short loc_5FA2B1
0x5FA296: fld     dword ptr ds:0A34BA0h
0x5FA29C: push    ecx
0x5FA29D: fstp    [esp+0E4h+var_E4]; float
0x5FA2A0: push    esi; int
0x5FA2A1: lea     ecx, [esp+0E8h+var_B0]
0x5FA2A5: push    ecx; int
0x5FA2A6: mov     ecx, edi
0x5FA2A8: call    Actor_IsUnderwater??
0x5FA2AD: test    al, al
0x5FA2AF: jnz     short loc_5FA250
0x5FA2B1: mov     ecx, edi; this
0x5FA2B3: call    MobileObject_GetCharProxy
0x5FA2B8: cmp     eax, ebx
0x5FA2BA: jz      short loc_5FA2E5
0x5FA2BC: push    1
0x5FA2BE: push    1
0x5FA2C0: push    1
0x5FA2C2: lea     edx, [esp+0ECh+var_B0]
0x5FA2C6: push    edx
0x5FA2C7: mov     ecx, eax
0x5FA2C9: call    sub_8949C0
0x5FA2CE: pop     edi
0x5FA2CF: pop     esi
0x5FA2D0: pop     ebx
0x5FA2D1: mov     ecx, [esp+0D4h+var_4]
0x5FA2D8: xor     ecx, esp
0x5FA2DA: call    @__security_check_cookie@4; __security_check_cookie(x)
0x5FA2DF: mov     esp, ebp
0x5FA2E1: pop     ebp
0x5FA2E2: retn    4
0x5FA2E5: mov     ecx, [esp+0E0h+var_4]
0x5FA2EC: pop     edi
0x5FA2ED: pop     esi
0x5FA2EE: pop     ebx
0x5FA2EF: xor     ecx, esp
0x5FA2F1: mov     al, 1
0x5FA2F3: call    @__security_check_cookie@4; __security_check_cookie(x)
0x5FA2F8: mov     esp, ebp
0x5FA2FA: pop     ebp
0x5FA2FB: retn    4
