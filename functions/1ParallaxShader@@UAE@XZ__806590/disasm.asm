0x806590: push    0FFFFFFFFh
0x806592: push    offset ??0ParallaxShader@@QAE@XZ_SEH
0x806597: mov     eax, large fs:0
0x80659D: push    eax
0x80659E: push    ecx
0x80659F: push    ebx
0x8065A0: push    ebp
0x8065A1: push    esi
0x8065A2: push    edi
0x8065A3: mov     eax, ds:0B30AACh
0x8065A8: xor     eax, esp
0x8065AA: push    eax
0x8065AB: lea     eax, [esp+24h+var_C]
0x8065AF: mov     large fs:0, eax
0x8065B5: mov     ebp, ecx
0x8065B7: mov     [esp+24h+var_10], ebp
0x8065BB: mov     dword ptr [ebp+0], offset ??_7ParallaxShader@@6B@; const ParallaxShader::`vftable'
0x8065C2: mov     [esp+24h+var_4], 2
0x8065CA: lea     edi, [ebp+9Ch]
0x8065D0: mov     ebx, 24h ; '$'
0x8065D5: mov     esi, [edi]
0x8065D7: test    esi, esi
0x8065D9: jz      short loc_8065FD
0x8065DB: lea     eax, [esi+4]
0x8065DE: push    eax; lpAddend
0x8065DF: call    dword ptr ds:0A2807Ch
0x8065E5: test    eax, eax
0x8065E7: jnz     short loc_8065F7
0x8065E9: test    esi, esi
0x8065EB: jz      short loc_8065F7
0x8065ED: mov     edx, [esi]
0x8065EF: mov     eax, [edx]
0x8065F1: push    1
0x8065F3: mov     ecx, esi
0x8065F5: call    eax
0x8065F7: mov     dword ptr [edi], 0
0x8065FD: add     edi, 4
0x806600: sub     ebx, 1
0x806603: jnz     short loc_8065D5
0x806605: add     ebp, 12Ch
0x80660B: mov     edi, ebp
0x80660D: mov     ebx, 1Eh
0x806612: mov     esi, [edi]
0x806614: test    esi, esi
0x806616: jz      short loc_80663A
0x806618: lea     ecx, [esi+4]
0x80661B: push    ecx; lpAddend
0x80661C: call    dword ptr ds:0A2807Ch
0x806622: test    eax, eax
0x806624: jnz     short loc_806634
0x806626: test    esi, esi
0x806628: jz      short loc_806634
0x80662A: mov     edx, [esi]
0x80662C: mov     eax, [edx]
0x80662E: push    1
0x806630: mov     ecx, esi
0x806632: call    eax
0x806634: mov     dword ptr [edi], 0
0x80663A: add     edi, 4
0x80663D: sub     ebx, 1
0x806640: jnz     short loc_806612
0x806642: mov     esi, offset dword_B47620
0x806647: or      edi, 0FFFFFFFFh
0x80664A: lea     ebx, [ebx+0]
0x806650: mov     ecx, [esi]
0x806652: test    ecx, ecx
0x806654: jz      short loc_806666
0x806656: add     [ecx+60h], edi
0x806659: jnz     short loc_806660
0x80665B: call    sub_7604D0
0x806660: mov     dword ptr [esi], 0
0x806666: add     esi, 4
0x806669: cmp     esi, offset unk_B47710
0x80666F: jl      short loc_806650
0x806671: push    offset sub_7016A0; void (__thiscall *)(void *)
0x806676: push    1Eh; int
0x806678: push    4; unsigned int
0x80667A: push    ebp; void *
0x80667B: mov     byte ptr [esp+34h+var_4], 1
0x806680: call    $LN21
0x806685: mov     eax, [esp+24h+var_10]
0x806689: push    offset sub_7016A0; void (__thiscall *)(void *)
0x80668E: push    24h ; '$'; int
0x806690: push    4; unsigned int
0x806692: add     eax, 9Ch ; 'œ'
0x806697: push    eax; void *
0x806698: mov     byte ptr [esp+34h+var_4], 0
0x80669D: call    $LN21
0x8066A2: mov     ecx, [esp+24h+var_10]; this
0x8066A6: mov     [esp+24h+var_4], edi
0x8066AA: call    ??1ShadowLightShader@@UAE@XZ; ShadowLightShader::~ShadowLightShader(void)
0x8066AF: mov     ecx, [esp+24h+var_C]
0x8066B3: mov     large fs:0, ecx
0x8066BA: pop     ecx
0x8066BB: pop     edi
0x8066BC: pop     esi
0x8066BD: pop     ebp
0x8066BE: pop     ebx
0x8066BF: add     esp, 10h
0x8066C2: retn
