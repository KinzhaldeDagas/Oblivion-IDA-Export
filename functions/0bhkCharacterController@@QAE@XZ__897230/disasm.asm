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
0x897270: call    ??0bhkCharacterProxy@@QAE@XZ; bhkCharacterController constructor: initializes default capsule radius/height and cached contact storage before InitFromCinfo builds authoritative geometry.
0x897275: mov     eax, [edi+88h]
0x89727B: mov     edx, [edi+90h]
0x897281: push    eax
0x897282: xor     ebx, ebx
0x897284: lea     ecx, [esi+1E0h]
0x89728A: push    edx
0x89728B: mov     [esp+5Ch+var_4], ebx
0x89728F: call    hkCharacterContext_Init; hkCharacterContext init stores state manager pointer and initial state id; 0x88D370 later returns +0x0C.
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
0x897315: push    offset NiPointerSlot_Release; a5
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
0x897365: mov     [esi+3BCh], eax; TES4 authoritative: allocate cached character contact array, 5 entries * 0x30 bytes. Exposed on proxy at +0x3BC (dword index 0xEF).
0x89736B: mov     eax, 5
0x897370: mov     [esi+3C4h], eax; TES4 authoritative: cached contact capacity = 5 entries; capacity word is proxy +0x3C4 (dword index 0xF1).
0x897376: fld     dword ptr ds:0A379B4h
0x89737C: fst     dword ptr [esi+3A0h]; Controller constructor default radius proxy+0x3A0 = 2.0 Havok units until construction info builds the actual shape.
0x897382: mov     [esi+3ACh], ebx
0x897388: fstp    dword ptr [esi+3A8h]
0x89738E: mov     [esi+1F4h], ebx
0x897394: fld     dword ptr ds:0A31C80h
0x89739A: xorps   xmm0, xmm0
0x89739D: fstp    dword ptr [esi+3A4h]; Controller constructor default capsule height proxy+0x3A4 = 10.0 Havok units until construction info builds the actual shape.
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
0x89740A: fst     dword ptr [esi+2B0h]; Constructor initializes proxy+0x2B0 support/up basis vector to (0,0,1,0). State solvers use this as one of their ordinary basis inputs.
0x897410: fst     dword ptr [esi+2B4h]
0x897416: fst     dword ptr [esi+2BCh]
0x89741C: fxch    st(1)
0x89741E: fst     dword ptr [esi+2B8h]
0x897424: fstp    dword ptr [esi+2C0h]; Constructor initializes proxy+0x2C0 lateral/forward basis vector to (1,0,0,0). 0x896000 refreshes this movement basis before state dispatch.
0x89742A: fst     dword ptr [esi+2C4h]
0x897430: fst     dword ptr [esi+2C8h]
0x897436: fstp    dword ptr [esi+2CCh]
0x89743C: mov     [esi+2A0h], ebx
0x897442: mov     [esi+36Ch], eax
0x897448: mov     [esi+370h], eax
0x89744E: mov     [esi+3B0h], ebx
0x897454: mov     [esi+3B4h], ebx
0x89745A: mov     [esi+3B8h], ebx
0x897460: mov     [esi+3C0h], ebx; TES4 authoritative: cached contact count initialized to 0 at proxy +0x3C0 (dword index 0xF0).
0x897466: call    bhkCharacterController_InitFromCinfo; TES4 authoritative: applies character controller construction info, including proxy+0x248 vertical/base offset, world metadata, initial state, movement scalar, gravity, and owner/listener setup.
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
0x8901C0: mov     dword ptr [ecx], offset ??_7hkCharacterProxyListener@@6B@; const hkCharacterProxyListener::`vftable'
0x8901C6: retn
0x8D2490: mov     edx, ecx
0x8D2492: mov     eax, [edx+8]
0x8D2495: test    eax, eax
0x8D2497: js      short locret_8D24D1
0x8D2499: mov     ecx, ds:0BA9DE4h
0x8D249F: push    esi
0x8D24A0: mov     esi, large fs:2Ch
0x8D24A7: mov     ecx, [esi+ecx*4]
0x8D24AA: mov     ecx, [ecx+19Ch]
0x8D24B0: test    ecx, ecx
0x8D24B2: pop     esi
0x8D24B3: jnz     short loc_8D24BB
0x8D24B5: mov     ecx, ds:0BA7D9Ch
0x8D24BB: mov     edx, [edx]
0x8D24BD: and     eax, 3FFFFFFFh
0x8D24C2: lea     eax, [eax+eax*2]
0x8D24C5: push    14h
0x8D24C7: shl     eax, 4
0x8D24CA: push    eax
0x8D24CB: push    edx
0x8D24CC: call    sub_8A75D0
0x8D24D1: retn
0x9D66B0: mov     ecx, [ebp+var_34]; this
0x9D66B3: jmp     ??1bhkCharacterProxy@@UAE@XZ; bhkCharacterProxy::~bhkCharacterProxy(void)
0x9D66B8: mov     ecx, [ebp+var_34]
0x9D66BB: add     ecx, 1E0h
0x9D66C1: jmp     sub_88D340
0x9D66C6: mov     ecx, [ebp+var_34]
0x9D66C9: add     ecx, 1F0h
0x9D66CF: jmp     loc_8901C0
0x9D66D4: mov     ecx, [ebp+var_34]
0x9D66D7: add     ecx, 364h; slot
0x9D66DD: jmp     NiPointerSlot_Release
0x9D66E2: mov     ecx, [ebp+var_34]
0x9D66E5: add     ecx, 368h; slot
0x9D66EB: jmp     NiPointerSlot_Release
0x9D66F0: push    offset NiPointerSlot_Release; void (__thiscall *)(void *)
0x9D66F5: push    2; int
0x9D66F7: push    4; unsigned int
0x9D66F9: mov     eax, [ebp+var_34]
0x9D66FC: add     eax, 374h
0x9D6701: push    eax; void *
0x9D6702: call    $LN21
0x9D6707: retn
0x9D6708: mov     ecx, [ebp+var_34]
0x9D670B: add     ecx, 3BCh
0x9D6711: jmp     loc_8D2490
0x9D6716: mov     edx, [esp-4+arg_4]
0x9D671A: lea     eax, [edx-44h]
0x9D671D: mov     ecx, [edx-48h]
0x9D6720: xor     ecx, eax
0x9D6722: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9D6727: add     eax, 0Ch
0x9D672A: mov     ecx, [edx-8]
0x9D672D: xor     ecx, eax
0x9D672F: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9D6734: mov     eax, offset stru_AFE4C4
0x9D6739: jmp     ___CxxFrameHandler3
