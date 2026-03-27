0x897230: push    ebp
0x897231: mov     ebp, esp
0x897233: and     esp, 0FFFFFFF0h
0x897236: push    0FFFFFFFFh
0x897238: push    offset ??0bhkCharacterController@@QAE@XZ_SEH
0x89723D: mov     eax, large fs:0
0x897243: push    eax
0x897244: sub     esp, 38h
0x897247: mov     eax, ds:0B30AACh
0x89724C: xor     eax, esp
0x89724E: mov     [esp+44h+var_14], eax
0x897252: push    ebx
0x897253: push    esi
0x897254: push    edi
0x897255: mov     eax, ds:0B30AACh
0x89725A: xor     eax, esp
0x89725C: push    eax
0x89725D: lea     eax, [esp+54h+var_C]
0x897261: mov     large fs:0, eax
0x897267: mov     edi, [ebp+arg_0]
0x89726A: mov     esi, ecx
0x89726C: mov     [esp+54h+var_34], esi
0x897270: call    ??0bhkCharacterProxy@@QAE@XZ; bhkCharacterProxy::bhkCharacterProxy(void)
0x897275: mov     eax, [edi+88h]
0x89727B: mov     edx, [edi+90h]
0x897281: push    eax
0x897282: xor     ebx, ebx
0x897284: lea     ecx, [esi+1E0h]
0x89728A: push    edx
0x89728B: mov     [esp+5Ch+var_4], ebx
0x89728F: call    sub_88D310
0x897294: fld     dword ptr [edi+98h]
0x89729A: fmul    dword ptr [edi+94h]
0x8972A0: sub     esp, 8
0x8972A3: lea     eax, [esp+5Ch+var_30]
0x8972A7: lea     ecx, [esi+1F0h]
0x8972AD: fstp    [esp+5Ch+var_38]
0x8972B1: mov     byte ptr [esp+5Ch+var_4], 1
0x8972B6: fldz
0x8972B8: fst     [esp+5Ch+var_30]
0x8972BC: fst     [esp+5Ch+var_2C]
0x8972C0: fld1
0x8972C2: fstp    [esp+5Ch+var_28]
0x8972C6: fstp    [esp+5Ch+var_24]
0x8972CA: fld     [esp+5Ch+var_38]
0x8972CE: fstp    [esp+5Ch+var_58]; float
0x8972D2: fld     dword ptr ds:0B2E77Ch
0x8972D8: fmul    qword ptr ds:0A968B0h
0x8972DE: fstp    [esp+5Ch+var_38]
0x8972E2: fld     [esp+5Ch+var_38]
0x8972E6: fstp    [esp+5Ch+var_5C]; float
0x8972E9: push    eax; int
0x8972EA: call    sub_890130
0x8972EF: mov     dword ptr [esi], offset ??_7bhkCharacterController@@6BbhkCharacterController@@@; const bhkCharacterController::`vftable'{for `bhkCharacterController'}
0x8972F5: mov     dword ptr [esi+1E0h], offset ??_7bhkCharacterController@@6BhkCharacterContext@@@; const bhkCharacterController::`vftable'{for `hkCharacterContext'}
0x8972FF: mov     dword ptr [esi+1F0h], offset ??_7bhkCharacterController@@6BbhkCharacterListener@@@; const bhkCharacterController::`vftable'{for `bhkCharacterListener'}
0x897309: mov     [esi+364h], ebx
0x89730F: mov     [esi+368h], ebx
0x897315: push    offset sub_7016A0; a5
0x89731A: push    offset ?_Release@_NonReentrantLock@details@Concurrency@@QAEXXZ; a4
0x89731F: push    2; size
0x897321: push    4; a2
0x897323: lea     ecx, [esi+374h]
0x897329: push    ecx; a1
0x89732A: mov     byte ptr [esp+68h+var_4], 4
0x89732F: call    ArrayConstructor
0x897334: mov     eax, large fs:2Ch
0x89733A: mov     edx, ds:0BA9DE4h
0x897340: mov     ecx, [eax+edx*4]
0x897343: mov     eax, [ecx+19Ch]
0x897349: cmp     eax, ebx
0x89734B: mov     byte ptr [esp+54h+var_4], 5
0x897350: jnz     short loc_897357
0x897352: mov     eax, ds:0BA7D9Ch
0x897357: push    14h
0x897359: push    0F0h ; 'ð'
0x89735E: mov     ecx, eax
0x897360: call    sub_8A7560
0x897365: mov     [esi+3BCh], eax
0x89736B: mov     eax, 5
0x897370: mov     [esi+3C4h], eax
0x897376: fld     dword ptr ds:0A379B4h
0x89737C: fst     dword ptr [esi+3A0h]
0x897382: mov     [esi+3ACh], ebx
0x897388: fstp    dword ptr [esi+3A8h]
0x89738E: mov     [esi+1F4h], ebx
0x897394: fld     dword ptr ds:0A31C80h
0x89739A: xorps   xmm0, xmm0
0x89739D: fstp    dword ptr [esi+3A4h]
0x8973A3: movaps  xmmword ptr [esi+340h], xmm0
0x8973AA: fldz
0x8973AC: movaps  xmmword ptr [esi+2F0h], xmm0
0x8973B3: fst     dword ptr [esi+320h]
0x8973B9: mov     eax, 2
0x8973BE: fst     dword ptr [esi+324h]
0x8973C4: push    edi
0x8973C5: fst     dword ptr [esi+300h]
0x8973CB: mov     ecx, esi
0x8973CD: fst     dword ptr [esi+32Ch]
0x8973D3: mov     byte ptr [esp+58h+var_4], 6
0x8973D8: fld1
0x8973DA: fst     dword ptr [esi+330h]
0x8973E0: fxch    st(1)
0x8973E2: fst     dword ptr [esi+30Ch]
0x8973E8: fst     dword ptr [esi+304h]
0x8973EE: fst     dword ptr [esi+308h]
0x8973F4: fst     dword ptr [esi+310h]
0x8973FA: fst     dword ptr [esi+314h]
0x897400: fxch    st(1)
0x897402: fst     dword ptr [esi+328h]
0x897408: fxch    st(1)
0x89740A: fst     dword ptr [esi+2B0h]
0x897410: fst     dword ptr [esi+2B4h]
0x897416: fst     dword ptr [esi+2BCh]
0x89741C: fxch    st(1)
0x89741E: fst     dword ptr [esi+2B8h]
0x897424: fstp    dword ptr [esi+2C0h]
0x89742A: fst     dword ptr [esi+2C4h]
0x897430: fst     dword ptr [esi+2C8h]
0x897436: fstp    dword ptr [esi+2CCh]
0x89743C: mov     [esi+2A0h], ebx
0x897442: mov     [esi+36Ch], eax
0x897448: mov     [esi+370h], eax
0x89744E: mov     [esi+3B0h], ebx
0x897454: mov     [esi+3B4h], ebx
0x89745A: mov     [esi+3B8h], ebx
0x897460: mov     [esi+3C0h], ebx
0x897466: call    sub_897040
0x89746B: mov     eax, esi
0x89746D: mov     ecx, [esp+54h+var_C]
0x897471: mov     large fs:0, ecx
0x897478: pop     ecx
0x897479: pop     edi
0x89747A: pop     esi
0x89747B: pop     ebx
0x89747C: mov     ecx, [esp+44h+var_14]
0x897480: xor     ecx, esp
0x897482: call    @__security_check_cookie@4; __security_check_cookie(x)
0x897487: mov     esp, ebp
0x897489: pop     ebp
0x89748A: retn    4
