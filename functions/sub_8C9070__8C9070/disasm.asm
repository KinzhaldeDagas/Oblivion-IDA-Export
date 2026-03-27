0x8C9070: push    ebp
0x8C9071: mov     ebp, esp
0x8C9073: and     esp, 0FFFFFFF0h
0x8C9076: push    0FFFFFFFFh
0x8C9078: push    offset SEH_8C9070
0x8C907D: mov     eax, large fs:0
0x8C9083: push    eax
0x8C9084: sub     esp, 58h
0x8C9087: push    ebx
0x8C9088: push    esi
0x8C9089: push    edi
0x8C908A: mov     eax, ds:0B30AACh
0x8C908F: xor     eax, esp
0x8C9091: push    eax
0x8C9092: lea     eax, [esp+74h+var_C]
0x8C9096: mov     large fs:0, eax
0x8C909C: mov     [esp+74h+var_58], ecx
0x8C90A0: xor     ebx, ebx
0x8C90A2: cmp     ecx, ebx
0x8C90A4: jz      short loc_8C90AB
0x8C90A6: mov     esi, [ecx+8]
0x8C90A9: jmp     short loc_8C90AD
0x8C90AB: xor     esi, esi
0x8C90AD: mov     eax, [esi]
0x8C90AF: mov     edx, [eax+1Ch]
0x8C90B2: lea     ecx, [esp+74h+var_54]
0x8C90B6: push    ecx
0x8C90B7: mov     ecx, esi
0x8C90B9: call    edx
0x8C90BB: mov     edi, 80000000h
0x8C90C0: mov     [esp+74h+var_40], ebx
0x8C90C4: mov     [esp+74h+var_3C], ebx
0x8C90C8: mov     [esp+74h+var_38], edi
0x8C90CC: cmp     byte ptr [esp+74h+var_50], bl
0x8C90D0: mov     [esp+74h+var_4], ebx
0x8C90D4: jz      short loc_8C9106
0x8C90D6: mov     eax, [esp+74h+var_54]
0x8C90DA: cmp     eax, ebx
0x8C90DC: mov     [esp+74h+var_5C], eax
0x8C90E0: jle     short loc_8C90FE
0x8C90E2: xor     ecx, ecx
0x8C90E4: cmp     eax, ebx
0x8C90E6: setl    cl
0x8C90E9: push    10h
0x8C90EB: lea     edx, [esp+78h+var_40]
0x8C90EF: sub     ecx, 1
0x8C90F2: and     eax, ecx
0x8C90F4: push    eax
0x8C90F5: push    edx
0x8C90F6: call    sub_8A6E40
0x8C90FB: add     esp, 0Ch
0x8C90FE: mov     eax, [esp+74h+var_5C]
0x8C9102: mov     [esp+74h+var_3C], eax
0x8C9106: mov     edx, [esi]
0x8C9108: mov     eax, [esp+74h+var_40]
0x8C910C: mov     edx, [edx+20h]
0x8C910F: push    eax
0x8C9110: mov     ecx, esi
0x8C9112: call    edx
0x8C9114: mov     esi, eax
0x8C9116: mov     [esp+74h+var_4C], ebx
0x8C911A: mov     [esp+74h+var_48], ebx
0x8C911E: mov     [esp+74h+var_44], edi
0x8C9122: mov     eax, [esp+74h+var_54]
0x8C9126: cmp     eax, ebx
0x8C9128: mov     byte ptr [esp+74h+var_4], 1
0x8C912D: mov     edi, eax
0x8C912F: jle     short loc_8C9151
0x8C9131: xor     ecx, ecx
0x8C9133: cmp     eax, ebx
0x8C9135: setl    cl
0x8C9138: push    10h
0x8C913A: lea     edx, [esp+78h+var_4C]
0x8C913E: sub     ecx, 1
0x8C9141: and     eax, ecx
0x8C9143: push    eax
0x8C9144: push    edx
0x8C9145: call    sub_8A6E40
0x8C914A: mov     eax, [esp+80h+var_54]
0x8C914E: add     esp, 0Ch
0x8C9151: xor     ecx, ecx
0x8C9153: cmp     eax, ebx
0x8C9155: mov     [esp+74h+var_48], edi
0x8C9159: jle     short loc_8C9175
0x8C915B: xor     eax, eax
0x8C915D: movaps  xmm0, xmmword ptr [eax+esi]
0x8C9161: mov     edx, [esp+74h+var_4C]
0x8C9165: movaps  xmmword ptr [eax+edx], xmm0
0x8C9169: add     ecx, 1
0x8C916C: add     eax, 10h
0x8C916F: cmp     ecx, [esp+74h+var_54]
0x8C9173: jl      short loc_8C915D
0x8C9175: mov     eax, [esp+74h+var_48]
0x8C9179: mov     ecx, [esp+74h+var_4C]
0x8C917D: mov     esi, 80000000h
0x8C9182: mov     [esp+74h+var_30], eax
0x8C9186: mov     [esp+74h+var_2C], 10h
0x8C918E: mov     [esp+74h+var_34], ecx
0x8C9192: mov     [esp+74h+var_28], ebx
0x8C9196: mov     [esp+74h+var_24], ebx
0x8C919A: mov     [esp+74h+var_20], esi
0x8C919E: mov     [esp+74h+var_1C], ebx
0x8C91A2: mov     [esp+74h+var_18], ebx
0x8C91A6: mov     [esp+74h+var_14], esi
0x8C91AA: push    1
0x8C91AC: lea     edx, [esp+78h+var_28]
0x8C91B0: push    edx
0x8C91B1: lea     eax, [esp+7Ch+var_34]
0x8C91B5: push    eax
0x8C91B6: mov     byte ptr [esp+80h+var_4], 2
0x8C91BB: call    sub_8F21E0
0x8C91C0: mov     ecx, [esp+80h+var_58]
0x8C91C4: mov     edx, [ecx]
0x8C91C6: mov     edx, [edx+94h]
0x8C91CC: add     esp, 0Ch
0x8C91CF: push    offset aBhkconvexverti; "bhkConvexVerticesShape"
0x8C91D4: lea     eax, [esp+78h+var_28]
0x8C91D8: push    eax
0x8C91D9: mov     eax, [ebp+arg_0]
0x8C91DC: push    eax
0x8C91DD: call    edx
0x8C91DF: lea     ecx, [esp+74h+var_28]
0x8C91E3: mov     byte ptr [esp+74h+var_4], 1
0x8C91E8: call    sub_8B44C0
0x8C91ED: mov     eax, [esp+74h+var_44]
0x8C91F1: test    esi, eax
0x8C91F3: mov     edi, ds:0BA9DE4h
0x8C91F9: mov     byte ptr [esp+74h+var_4], bl
0x8C91FD: jnz     short loc_8C922E
0x8C91FF: mov     ecx, large fs:2Ch
0x8C9206: mov     edx, [ecx+edi*4]
0x8C9209: mov     ecx, [edx+19Ch]
0x8C920F: cmp     ecx, ebx
0x8C9211: jnz     short loc_8C9219
0x8C9213: mov     ecx, ds:0BA7D9Ch
0x8C9219: and     eax, 3FFFFFFFh
0x8C921E: push    14h
0x8C9220: shl     eax, 4
0x8C9223: push    eax
0x8C9224: mov     eax, [esp+7Ch+var_4C]
0x8C9228: push    eax
0x8C9229: call    sub_8A75D0
0x8C922E: mov     eax, [esp+74h+var_38]
0x8C9232: test    esi, eax
0x8C9234: mov     [esp+74h+var_4], 0FFFFFFFFh
0x8C923C: jnz     short loc_8C926D
0x8C923E: mov     ecx, large fs:2Ch
0x8C9245: mov     edx, [ecx+edi*4]
0x8C9248: mov     ecx, [edx+19Ch]
0x8C924E: cmp     ecx, ebx
0x8C9250: jnz     short loc_8C9258
0x8C9252: mov     ecx, ds:0BA7D9Ch
0x8C9258: and     eax, 3FFFFFFFh
0x8C925D: push    14h
0x8C925F: shl     eax, 4
0x8C9262: push    eax
0x8C9263: mov     eax, [esp+7Ch+var_40]
0x8C9267: push    eax
0x8C9268: call    sub_8A75D0
0x8C926D: mov     ecx, dword ptr [esp+74h+var_C]
0x8C9271: mov     large fs:0, ecx
0x8C9278: pop     ecx
0x8C9279: pop     edi
0x8C927A: pop     esi
0x8C927B: pop     ebx
0x8C927C: mov     esp, ebp
0x8C927E: pop     ebp
0x8C927F: retn    4
