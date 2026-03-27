0x6D8730: push    0FFFFFFFFh
0x6D8732: push    offset SEH_6D8730
0x6D8737: mov     eax, large fs:0
0x6D873D: push    eax
0x6D873E: sub     esp, 0Ch
0x6D8741: push    ebx
0x6D8742: push    ebp
0x6D8743: push    esi
0x6D8744: push    edi
0x6D8745: mov     eax, ds:0B30AACh
0x6D874A: xor     eax, esp
0x6D874C: push    eax
0x6D874D: lea     eax, [esp+2Ch+var_C]
0x6D8751: mov     large fs:0, eax
0x6D8757: mov     eax, [esp+2Ch+arg_0]
0x6D875B: cmp     dword ptr [eax+0D8h], 4010003h
0x6D8765: jb      short loc_6D877D
0x6D8767: xor     eax, eax
0x6D8769: mov     ecx, [esp+2Ch+var_C]
0x6D876D: mov     large fs:0, ecx
0x6D8774: pop     ecx
0x6D8775: pop     edi
0x6D8776: pop     esi
0x6D8777: pop     ebp
0x6D8778: pop     ebx
0x6D8779: add     esp, 18h
0x6D877C: retn
0x6D877D: mov     edx, [eax+210h]
0x6D8783: mov     ecx, [esp+2Ch+arg_4]
0x6D8787: cmp     ecx, edx
0x6D8789: jnb     short loc_6D8767
0x6D878B: mov     eax, [eax+208h]
0x6D8791: mov     eax, [eax+ecx*4]
0x6D8794: push    eax
0x6D8795: push    offset unk_B3DAA8
0x6D879A: call    NiRTTI_Cast
0x6D879F: mov     ebx, eax
0x6D87A1: xor     ebp, ebp
0x6D87A3: add     esp, 8
0x6D87A6: cmp     ebx, ebp
0x6D87A8: jz      short loc_6D8767
0x6D87AA: mov     esi, [esp+2Ch+arg_8]
0x6D87AE: cmp     esi, ebp
0x6D87B0: jnz     short loc_6D87B5
0x6D87B2: mov     esi, [ebx+8]
0x6D87B5: push    34h ; '4'; Size
0x6D87B7: call    FormHeapAlloc
0x6D87BC: add     esp, 4
0x6D87BF: mov     [esp+2Ch+arg_0], eax
0x6D87C3: cmp     eax, ebp
0x6D87C5: mov     [esp+2Ch+var_4], ebp
0x6D87C9: jz      short loc_6D87DF
0x6D87CB: push    0Ch
0x6D87CD: push    0Ch
0x6D87CF: push    esi
0x6D87D0: mov     ecx, eax; this
0x6D87D2: call    ??0NiSequence@@QAE@XZ; NiSequence::NiSequence(void)
0x6D87D7: mov     edi, eax
0x6D87D9: mov     [esp+2Ch+arg_0], edi
0x6D87DD: jmp     short loc_6D87E5
0x6D87DF: mov     [esp+2Ch+arg_0], ebp
0x6D87E3: mov     edi, ebp
0x6D87E5: mov     [edi+30h], ebp
0x6D87E8: movzx   eax, word ptr [ebx+14h]
0x6D87EC: xor     esi, esi
0x6D87EE: cmp     ax, bp
0x6D87F1: mov     [esp+2Ch+var_4], 0FFFFFFFFh
0x6D87F9: jbe     short loc_6D883B
0x6D87FB: jmp     short loc_6D8800
0x6D87FD: align 10h
0x6D8800: mov     edx, [ebx+10h]
0x6D8803: movzx   ecx, si
0x6D8806: mov     eax, [edx+ecx*4]
0x6D8809: push    eax
0x6D880A: push    offset dword_B3DA08
0x6D880F: call    NiRTTI_Cast
0x6D8814: add     esp, 8
0x6D8817: cmp     eax, ebp
0x6D8819: jnz     short loc_6D882B
0x6D881B: movzx   eax, word ptr [ebx+14h]
0x6D881F: movzx   eax, ax
0x6D8822: add     esi, 1
0x6D8825: cmp     esi, eax
0x6D8827: jb      short loc_6D8800
0x6D8829: jmp     short loc_6D883B
0x6D882B: push    eax
0x6D882C: mov     ecx, edi
0x6D882E: call    sub_6D5AD0
0x6D8833: push    esi
0x6D8834: mov     ecx, ebx
0x6D8836: call    sub_6FFBE0
0x6D883B: mov     ebp, [ebx+0Ch]
0x6D883E: test    ebp, ebp
0x6D8840: mov     [esp+2Ch+var_14], ebp
0x6D8844: jz      short loc_6D8850
0x6D8846: lea     ecx, [ebp+4]
0x6D8849: push    ecx; lpAddend
0x6D884A: call    dword ptr ds:0A28078h
0x6D8850: movzx   eax, word ptr [ebx+14h]
0x6D8854: test    ax, ax
0x6D8857: mov     [esp+2Ch+var_4], 1
0x6D885F: mov     [esp+2Ch+var_18], 0
0x6D8867: jbe     loc_6D899C
0x6D886D: lea     ecx, [ecx+0]
0x6D8870: movzx   edx, word ptr [esp+2Ch+var_18]
0x6D8875: mov     eax, [ebx+10h]
0x6D8878: mov     esi, [eax+edx*4]
0x6D887B: test    esi, esi
0x6D887D: jz      short loc_6D88A8
0x6D887F: mov     edx, [esi]
0x6D8881: mov     eax, [edx+4]
0x6D8884: mov     ecx, esi
0x6D8886: call    eax
0x6D8888: test    eax, eax
0x6D888A: jz      short loc_6D889E
0x6D888C: lea     esp, [esp+0]
0x6D8890: cmp     eax, offset dword_B3FCC0
0x6D8895: jz      short loc_6D88B0
0x6D8897: mov     eax, [eax+4]
0x6D889A: test    eax, eax
0x6D889C: jnz     short loc_6D8890
0x6D889E: xor     al, al
0x6D88A0: neg     al
0x6D88A2: sbb     eax, eax
0x6D88A4: and     eax, esi
0x6D88A6: mov     esi, eax
0x6D88A8: test    ebp, ebp
0x6D88AA: jnz     short loc_6D88B4
0x6D88AC: xor     eax, eax
0x6D88AE: jmp     short loc_6D88DC
0x6D88B0: mov     al, 1
0x6D88B2: jmp     short loc_6D88A0
0x6D88B4: mov     edx, [ebp+0]
0x6D88B7: mov     eax, [edx+4]
0x6D88BA: mov     ecx, ebp
0x6D88BC: call    eax
0x6D88BE: test    eax, eax
0x6D88C0: jz      short loc_6D88D4
0x6D88C2: cmp     eax, offset dword_B3CA58
0x6D88C7: jz      loc_6D89DE
0x6D88CD: mov     eax, [eax+4]
0x6D88D0: test    eax, eax
0x6D88D2: jnz     short loc_6D88C2
0x6D88D4: xor     al, al
0x6D88D6: neg     al
0x6D88D8: sbb     eax, eax
0x6D88DA: and     eax, ebp
0x6D88DC: mov     ecx, [esi+0Ch]
0x6D88DF: push    eax; int
0x6D88E0: push    ecx; Src
0x6D88E1: mov     ecx, edi
0x6D88E3: call    sub_6D83A0
0x6D88E8: mov     esi, [ebp+34h]
0x6D88EB: test    esi, esi
0x6D88ED: mov     [esp+2Ch+var_10], esi
0x6D88F1: jz      short loc_6D88FD
0x6D88F3: lea     ecx, [esi+4]
0x6D88F6: push    ecx; lpAddend
0x6D88F7: call    dword ptr ds:0A28078h
0x6D88FD: mov     edi, [ebp+34h]
0x6D8900: test    edi, edi
0x6D8902: mov     byte ptr [esp+2Ch+var_4], 2
0x6D8907: jz      short loc_6D892C
0x6D8909: lea     edx, [edi+4]
0x6D890C: push    edx; lpAddend
0x6D890D: call    dword ptr ds:0A2807Ch
0x6D8913: test    eax, eax
0x6D8915: jnz     short loc_6D8925
0x6D8917: test    edi, edi
0x6D8919: jz      short loc_6D8925
0x6D891B: mov     eax, [edi]
0x6D891D: mov     edx, [eax]
0x6D891F: push    1
0x6D8921: mov     ecx, edi
0x6D8923: call    edx
0x6D8925: mov     dword ptr [ebp+34h], 0
0x6D892C: cmp     ebp, esi
0x6D892E: jz      short loc_6D895D
0x6D8930: lea     eax, [ebp+4]
0x6D8933: push    eax; lpAddend
0x6D8934: call    dword ptr ds:0A2807Ch
0x6D893A: test    eax, eax
0x6D893C: jnz     short loc_6D8949
0x6D893E: mov     edx, [ebp+0]
0x6D8941: mov     eax, [edx]
0x6D8943: push    1
0x6D8945: mov     ecx, ebp
0x6D8947: call    eax
0x6D8949: test    esi, esi
0x6D894B: mov     ebp, esi
0x6D894D: mov     [esp+2Ch+var_14], ebp
0x6D8951: jz      short loc_6D895D
0x6D8953: lea     ecx, [esi+4]
0x6D8956: push    ecx; lpAddend
0x6D8957: call    dword ptr ds:0A28078h
0x6D895D: test    esi, esi
0x6D895F: mov     byte ptr [esp+2Ch+var_4], 1
0x6D8964: jz      short loc_6D897E
0x6D8966: lea     edx, [esi+4]
0x6D8969: push    edx; lpAddend
0x6D896A: call    dword ptr ds:0A2807Ch
0x6D8970: test    eax, eax
0x6D8972: jnz     short loc_6D897E
0x6D8974: mov     eax, [esi]
0x6D8976: mov     edx, [eax]
0x6D8978: push    1
0x6D897A: mov     ecx, esi
0x6D897C: call    edx
0x6D897E: movzx   eax, word ptr [ebx+14h]
0x6D8982: mov     ecx, [esp+2Ch+var_18]
0x6D8986: mov     edi, [esp+2Ch+arg_0]
0x6D898A: movzx   eax, ax
0x6D898D: add     ecx, 1
0x6D8990: cmp     ecx, eax
0x6D8992: mov     [esp+2Ch+var_18], ecx
0x6D8996: jb      loc_6D8870
0x6D899C: mov     ecx, ebx
0x6D899E: call    sub_6FFC60
0x6D89A3: test    ebp, ebp
0x6D89A5: mov     [esp+2Ch+var_4], 0FFFFFFFFh
0x6D89AD: jz      short loc_6D89C8
0x6D89AF: lea     ecx, [ebp+4]
0x6D89B2: push    ecx; lpAddend
0x6D89B3: call    dword ptr ds:0A2807Ch
0x6D89B9: test    eax, eax
0x6D89BB: jnz     short loc_6D89C8
0x6D89BD: mov     edx, [ebp+0]
0x6D89C0: mov     eax, [edx]
0x6D89C2: push    1
0x6D89C4: mov     ecx, ebp
0x6D89C6: call    eax
0x6D89C8: mov     eax, edi
0x6D89CA: mov     ecx, [esp+2Ch+var_C]
0x6D89CE: mov     large fs:0, ecx
0x6D89D5: pop     ecx
0x6D89D6: pop     edi
0x6D89D7: pop     esi
0x6D89D8: pop     ebp
0x6D89D9: pop     ebx
0x6D89DA: add     esp, 18h
0x6D89DD: retn
0x6D89DE: mov     al, 1
0x6D89E0: jmp     loc_6D88D6
