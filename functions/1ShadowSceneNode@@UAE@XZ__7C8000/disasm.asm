0x7C8000: push    0FFFFFFFFh
0x7C8002: push    offset ??1ShadowSceneNode@@UAE@XZ_SEH
0x7C8007: mov     eax, large fs:0
0x7C800D: push    eax
0x7C800E: push    ecx
0x7C800F: push    ebx
0x7C8010: push    ebp
0x7C8011: push    esi
0x7C8012: push    edi
0x7C8013: mov     eax, ds:0B30AACh
0x7C8018: xor     eax, esp
0x7C801A: push    eax
0x7C801B: lea     eax, [esp+24h+var_C]
0x7C801F: mov     large fs:0, eax
0x7C8025: mov     esi, ecx
0x7C8027: mov     [esp+24h+var_10], esi
0x7C802B: mov     dword ptr [esi], offset ??_7ShadowSceneNode@@6B@; const ShadowSceneNode::`vftable'
0x7C8031: movzx   eax, byte ptr [esi+11Ch]
0x7C8038: push    eax
0x7C8039: mov     [esp+28h+var_4], 7
0x7C8041: call    GetShadowSceneNode
0x7C8046: add     esp, 4
0x7C8049: xor     ebx, ebx
0x7C804B: cmp     eax, esi
0x7C804D: jnz     short loc_7C8060
0x7C804F: movzx   ecx, byte ptr [esi+11Ch]
0x7C8056: push    ebx
0x7C8057: push    ecx
0x7C8058: call    sub_7B4270
0x7C805D: add     esp, 8
0x7C8060: mov     ecx, esi
0x7C8062: call    sub_7C7E50
0x7C8067: mov     edi, [esi+110h]
0x7C806D: cmp     edi, ebx
0x7C806F: mov     ebp, ds:0A2807Ch
0x7C8075: jz      short loc_7C8095
0x7C8077: lea     edx, [edi+4]
0x7C807A: push    edx; lpAddend
0x7C807B: call    ebp ; InterlockedDecrement
0x7C807D: test    eax, eax
0x7C807F: jnz     short loc_7C808F
0x7C8081: cmp     edi, ebx
0x7C8083: jz      short loc_7C808F
0x7C8085: mov     eax, [edi]
0x7C8087: mov     edx, [eax]
0x7C8089: push    1
0x7C808B: mov     ecx, edi
0x7C808D: call    edx
0x7C808F: mov     [esi+110h], ebx
0x7C8095: mov     edi, [esi+114h]
0x7C809B: cmp     edi, ebx
0x7C809D: jz      short loc_7C80BD
0x7C809F: lea     eax, [edi+4]
0x7C80A2: push    eax; lpAddend
0x7C80A3: call    ebp ; InterlockedDecrement
0x7C80A5: test    eax, eax
0x7C80A7: jnz     short loc_7C80B7
0x7C80A9: cmp     edi, ebx
0x7C80AB: jz      short loc_7C80B7
0x7C80AD: mov     edx, [edi]
0x7C80AF: mov     eax, [edx]
0x7C80B1: push    1
0x7C80B3: mov     ecx, edi
0x7C80B5: call    eax
0x7C80B7: mov     [esi+114h], ebx
0x7C80BD: mov     ecx, [esi+118h]
0x7C80C3: cmp     ecx, ebx
0x7C80C5: jz      short loc_7C80CF
0x7C80C7: mov     edx, [ecx]
0x7C80C9: mov     eax, [edx]
0x7C80CB: push    1
0x7C80CD: call    eax
0x7C80CF: mov     eax, [esi+120h]
0x7C80D5: cmp     eax, ebx
0x7C80D7: jz      short loc_7C80E5
0x7C80D9: mov     ecx, ds:0B42F50h; this
0x7C80DF: push    eax; a2
0x7C80E0: call    sub_7C1EE0
0x7C80E5: mov     edi, [esi+120h]
0x7C80EB: cmp     edi, ebx
0x7C80ED: jz      short loc_7C810D
0x7C80EF: lea     ecx, [edi+4]
0x7C80F2: push    ecx; lpAddend
0x7C80F3: call    ebp ; InterlockedDecrement
0x7C80F5: test    eax, eax
0x7C80F7: jnz     short loc_7C8107
0x7C80F9: cmp     edi, ebx
0x7C80FB: jz      short loc_7C8107
0x7C80FD: mov     edx, [edi]
0x7C80FF: mov     eax, [edx]
0x7C8101: push    1
0x7C8103: mov     ecx, edi
0x7C8105: call    eax
0x7C8107: mov     [esi+120h], ebx
0x7C810D: mov     edi, [esi+0DCh]
0x7C8113: cmp     edi, ebx
0x7C8115: jz      short loc_7C8135
0x7C8117: lea     ecx, [edi+4]
0x7C811A: push    ecx; lpAddend
0x7C811B: call    ebp ; InterlockedDecrement
0x7C811D: test    eax, eax
0x7C811F: jnz     short loc_7C812F
0x7C8121: cmp     edi, ebx
0x7C8123: jz      short loc_7C812F
0x7C8125: mov     edx, [edi]
0x7C8127: mov     eax, [edx]
0x7C8129: push    1
0x7C812B: mov     ecx, edi
0x7C812D: call    eax
0x7C812F: mov     [esi+0DCh], ebx
0x7C8135: mov     edi, [esi+124h]
0x7C813B: cmp     edi, ebx
0x7C813D: mov     byte ptr [esp+24h+var_4], 6
0x7C8142: jz      short loc_7C815C
0x7C8144: lea     ecx, [edi+4]
0x7C8147: push    ecx; lpAddend
0x7C8148: call    ebp ; InterlockedDecrement
0x7C814A: test    eax, eax
0x7C814C: jnz     short loc_7C815C
0x7C814E: cmp     edi, ebx
0x7C8150: jz      short loc_7C815C
0x7C8152: mov     edx, [edi]
0x7C8154: mov     eax, [edx]
0x7C8156: push    1
0x7C8158: mov     ecx, edi
0x7C815A: call    eax
0x7C815C: mov     edi, [esi+120h]
0x7C8162: cmp     edi, ebx
0x7C8164: mov     byte ptr [esp+24h+var_4], 5
0x7C8169: jz      short loc_7C8183
0x7C816B: lea     ecx, [edi+4]
0x7C816E: push    ecx; lpAddend
0x7C816F: call    ebp ; InterlockedDecrement
0x7C8171: test    eax, eax
0x7C8173: jnz     short loc_7C8183
0x7C8175: cmp     edi, ebx
0x7C8177: jz      short loc_7C8183
0x7C8179: mov     edx, [edi]
0x7C817B: mov     eax, [edx]
0x7C817D: push    1
0x7C817F: mov     ecx, edi
0x7C8181: call    eax
0x7C8183: mov     edi, [esi+114h]
0x7C8189: cmp     edi, ebx
0x7C818B: mov     byte ptr [esp+24h+var_4], 4
0x7C8190: jz      short loc_7C81AA
0x7C8192: lea     ecx, [edi+4]
0x7C8195: push    ecx; lpAddend
0x7C8196: call    ebp ; InterlockedDecrement
0x7C8198: test    eax, eax
0x7C819A: jnz     short loc_7C81AA
0x7C819C: cmp     edi, ebx
0x7C819E: jz      short loc_7C81AA
0x7C81A0: mov     edx, [edi]
0x7C81A2: mov     eax, [edx]
0x7C81A4: push    1
0x7C81A6: mov     ecx, edi
0x7C81A8: call    eax
0x7C81AA: mov     edi, [esi+110h]
0x7C81B0: cmp     edi, ebx
0x7C81B2: mov     byte ptr [esp+24h+var_4], 3
0x7C81B7: jz      short loc_7C81D1
0x7C81B9: lea     ecx, [edi+4]
0x7C81BC: push    ecx; lpAddend
0x7C81BD: call    ebp ; InterlockedDecrement
0x7C81BF: test    eax, eax
0x7C81C1: jnz     short loc_7C81D1
0x7C81C3: cmp     edi, ebx
0x7C81C5: jz      short loc_7C81D1
0x7C81C7: mov     edx, [edi]
0x7C81C9: mov     eax, [edx]
0x7C81CB: push    1
0x7C81CD: mov     ecx, edi
0x7C81CF: call    eax
0x7C81D1: lea     ecx, [esi+0F4h]
0x7C81D7: mov     byte ptr [esp+24h+var_4], 2
0x7C81DC: call    ??1?$NiTPointerList@V?$NiPointer@VShadowSceneLight@@@@@@UAE@XZ; NiTPointerList<NiPointer<ShadowSceneLight>>::~NiTPointerList<NiPointer<ShadowSceneLight>>(void)
0x7C81E1: lea     ecx, [esi+0E4h]
0x7C81E7: mov     byte ptr [esp+24h+var_4], 1
0x7C81EC: call    ??1?$NiTPointerList@V?$NiPointer@VShadowSceneLight@@@@@@UAE@XZ; NiTPointerList<NiPointer<ShadowSceneLight>>::~NiTPointerList<NiPointer<ShadowSceneLight>>(void)
0x7C81F1: mov     edi, [esi+0DCh]
0x7C81F7: cmp     edi, ebx
0x7C81F9: mov     byte ptr [esp+24h+var_4], bl
0x7C81FD: jz      short loc_7C8217
0x7C81FF: lea     ecx, [edi+4]
0x7C8202: push    ecx; lpAddend
0x7C8203: call    ebp ; InterlockedDecrement
0x7C8205: test    eax, eax
0x7C8207: jnz     short loc_7C8217
0x7C8209: cmp     edi, ebx
0x7C820B: jz      short loc_7C8217
0x7C820D: mov     edx, [edi]
0x7C820F: mov     eax, [edx]
0x7C8211: push    1
0x7C8213: mov     ecx, edi
0x7C8215: call    eax
0x7C8217: mov     ecx, esi; this
0x7C8219: mov     [esp+24h+var_4], 0FFFFFFFFh
0x7C8221: call    ??1NiBSPNode@@UAE@XZ; NiBSPNode::~NiBSPNode(void)
0x7C8226: mov     ecx, dword ptr [esp+24h+var_C]
0x7C822A: mov     large fs:0, ecx
0x7C8231: pop     ecx
0x7C8232: pop     edi
0x7C8233: pop     esi
0x7C8234: pop     ebp
0x7C8235: pop     ebx
0x7C8236: add     esp, 10h
0x7C8239: retn
