0x5E28F0: push    esi
0x5E28F1: push    edi
0x5E28F2: mov     edi, [esp+8+arg_0]
0x5E28F6: cmp     edi, 0Ah
0x5E28F9: mov     esi, ecx
0x5E28FB: jnz     short loc_5E2916
0x5E28FD: cmp     [esp+8+arg_4], 0
0x5E2902: jge     short loc_5E2916
0x5E2904: mov     eax, [esi]
0x5E2906: mov     edx, [eax+278h]
0x5E290C: call    edx
0x5E290E: test    al, al
0x5E2910: jz      Actor_ForceModCurAVi___Done
0x5E2916: fild    [esp+8+arg_4]
0x5E291A: fstp    [esp+8+arg_4]
0x5E291E: fld     [esp+8+arg_4]
0x5E2922: fld     st
0x5E2924: call    Double_To_SInt32
0x5E2929: mov     [esp+8+arg_4], eax
0x5E292D: fild    [esp+8+arg_4]
0x5E2931: fstp    [esp+8+arg_4]
0x5E2935: fld     [esp+8+arg_4]
0x5E2939: fld     st
0x5E293B: fsubp   st(2), st
0x5E293D: fxch    st(1)
0x5E293F: fcomp   qword ptr ds:0A2FC68h
0x5E2945: fnstsw  ax
0x5E2947: test    ah, 1
0x5E294A: jz      short loc_5E2952
0x5E294C: fsub    qword ptr ds:0A2F928h
0x5E2952: fstp    [esp+8+arg_4]
0x5E2956: push    ebx
0x5E2957: fld     [esp+0Ch+arg_4]
0x5E295B: call    Double_To_SInt32
0x5E2960: mov     ebx, eax
0x5E2962: mov     [esp+0Ch+arg_4], ebx
0x5E2966: fild    [esp+0Ch+arg_4]
0x5E296A: push    1
0x5E296C: push    ecx
0x5E296D: lea     ecx, [esi+88h]
0x5E2973: fstp    [esp+14h+arg_4]
0x5E2977: fld     [esp+14h+arg_4]
0x5E297B: fstp    [esp+14h+var_14]
0x5E297E: push    edi
0x5E297F: call    AVCollection_ModAVLimited
0x5E2984: cmp     edi, 8
0x5E2987: jnz     short loc_5E29A6
0x5E2989: test    ebx, ebx
0x5E298B: jge     short loc_5E29A6
0x5E298D: fld     [esp+0Ch+arg_4]
0x5E2991: mov     eax, [esi]
0x5E2993: mov     edx, [eax+3B8h]
0x5E2999: push    ecx
0x5E299A: mov     ecx, [esp+10h+arg_8]
0x5E299E: fstp    [esp+10h+var_10]
0x5E29A1: push    ecx
0x5E29A2: mov     ecx, esi
0x5E29A4: call    edx
0x5E29A6: mov     eax, [esi]
0x5E29A8: mov     edx, [eax+40h]
0x5E29AB: push    200000h
0x5E29B0: mov     ecx, esi
0x5E29B2: call    edx
0x5E29B4: lea     eax, [edi-0Ch]
0x5E29B7: cmp     eax, 14h
0x5E29BA: pop     ebx
0x5E29BB: ja      short Actor_ForceModCurAVi___Done
0x5E29BD: cmp     edi, 12h
0x5E29C0: jz      short loc_5E29C7
0x5E29C2: cmp     edi, 1Bh
0x5E29C5: jnz     short Actor_ForceModCurAVi___Done
0x5E29C7: lea     ecx, [esi+44h]; this
0x5E29CA: call    ExtraDataList_GetContainerChanges
0x5E29CF: test    eax, eax
0x5E29D1: jz      short loc_5E29DA
0x5E29D3: mov     ecx, eax
0x5E29D5: call    sub_484310
0x5E29DA: mov     edx, [esi]
0x5E29DC: mov     eax, [edx+2C0h]
0x5E29E2: mov     ecx, esi
0x5E29E4: call    eax
