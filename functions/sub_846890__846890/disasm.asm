0x846890: push    0FFFFFFFFh
0x846892: push    offset SEH_846890
0x846897: mov     eax, large fs:0
0x84689D: push    eax
0x84689E: sub     esp, 28h
0x8468A1: push    ebx
0x8468A2: push    ebp
0x8468A3: push    esi
0x8468A4: push    edi
0x8468A5: mov     eax, ds:0B30AACh
0x8468AA: xor     eax, esp
0x8468AC: push    eax; _DWORD
0x8468AD: lea     eax, [esp+48h+var_C]
0x8468B1: mov     large fs:0, eax
0x8468B7: mov     [esp+48h+var_34], ecx
0x8468BB: mov     eax, ds:0B42EB8h
0x8468C0: movzx   eax, byte ptr [eax+9]
0x8468C4: mov     esi, ds:0B45B78h
0x8468CA: mov     ecx, [esi+24h]
0x8468CD: mov     edi, [esp+48h+arg_C]
0x8468D1: mov     edx, [edi]
0x8468D3: mov     ebp, [ecx]
0x8468D5: mov     [esp+48h+var_30], eax
0x8468D9: push    eax
0x8468DA: mov     eax, [edx+88h]
0x8468E0: mov     ecx, edi
0x8468E2: call    eax
0x8468E4: mov     ebx, [ebp+4]
0x8468E7: cmp     ebx, eax
0x8468E9: mov     [esp+48h+arg_C], eax
0x8468ED: jz      short loc_846924
0x8468EF: test    ebx, ebx
0x8468F1: jz      short loc_846913
0x8468F3: lea     ecx, [ebx+4]
0x8468F6: push    ecx; lpAddend
0x8468F7: call    dword ptr ds:0A2807Ch
0x8468FD: test    eax, eax
0x8468FF: jnz     short loc_84690F
0x846901: test    ebx, ebx
0x846903: jz      short loc_84690F
0x846905: mov     edx, [ebx]
0x846907: mov     eax, [edx]
0x846909: push    1
0x84690B: mov     ecx, ebx
0x84690D: call    eax
0x84690F: mov     eax, [esp+48h+arg_C]
0x846913: test    eax, eax
0x846915: mov     [ebp+4], eax
0x846918: jz      short loc_846924
0x84691A: add     eax, 4
0x84691D: push    eax; lpAddend
0x84691E: call    dword ptr ds:0A28078h
0x846924: mov     ebx, [esp+48h+var_34]
0x846928: push    edi
0x846929: push    ebp
0x84692A: mov     ecx, ebx
0x84692C: call    sub_848FA0
0x846931: mov     ecx, [esi+24h]
0x846934: mov     edx, [esp+48h+var_30]
0x846938: mov     ebp, [ecx+4]
0x84693B: push    edx
0x84693C: push    edi
0x84693D: mov     ecx, ebx
0x84693F: call    sub_848FD0
0x846944: mov     ebx, [ebp+4]
0x846947: cmp     ebx, eax
0x846949: mov     [esp+48h+arg_C], eax
0x84694D: jz      short loc_846984
0x84694F: test    ebx, ebx
0x846951: jz      short loc_846973
0x846953: lea     eax, [ebx+4]
0x846956: push    eax; lpAddend
0x846957: call    dword ptr ds:0A2807Ch
0x84695D: test    eax, eax
0x84695F: jnz     short loc_84696F
0x846961: test    ebx, ebx
0x846963: jz      short loc_84696F
0x846965: mov     edx, [ebx]
0x846967: mov     eax, [edx]
0x846969: push    1
0x84696B: mov     ecx, ebx
0x84696D: call    eax
0x84696F: mov     eax, [esp+48h+arg_C]
0x846973: test    eax, eax
0x846975: mov     [ebp+4], eax
0x846978: jz      short loc_846984
0x84697A: add     eax, 4
0x84697D: push    eax; lpAddend
0x84697E: call    dword ptr ds:0A28078h
0x846984: mov     ecx, [esp+48h+var_34]
0x846988: push    edi
0x846989: push    ebp
0x84698A: call    sub_848FA0
0x84698F: mov     ecx, [esi+24h]
0x846992: mov     ebp, [ecx+8]
0x846995: mov     eax, ds:0B430E8h
0x84699A: mov     ebx, [ebp+4]
0x84699D: cmp     ebx, eax
0x84699F: mov     ecx, eax
0x8469A1: mov     [esp+48h+arg_C], ecx
0x8469A5: jz      short loc_8469DC
0x8469A7: test    ebx, ebx
0x8469A9: jz      short loc_8469CB
0x8469AB: lea     edx, [ebx+4]
0x8469AE: push    edx; lpAddend
0x8469AF: call    dword ptr ds:0A2807Ch
0x8469B5: test    eax, eax
0x8469B7: jnz     short loc_8469C7
0x8469B9: test    ebx, ebx
0x8469BB: jz      short loc_8469C7
0x8469BD: mov     eax, [ebx]
0x8469BF: mov     edx, [eax]
0x8469C1: push    1
0x8469C3: mov     ecx, ebx
0x8469C5: call    edx
0x8469C7: mov     ecx, [esp+48h+arg_C]
0x8469CB: test    ecx, ecx
0x8469CD: mov     [ebp+4], ecx
0x8469D0: jz      short loc_8469DC
0x8469D2: add     ecx, 4
0x8469D5: push    ecx; lpAddend
0x8469D6: call    dword ptr ds:0A28078h
0x8469DC: cmp     dword ptr ds:0B42D78h, 0
0x8469E3: fldz
0x8469E5: mov     eax, [esp+48h+arg_0]
0x8469E9: mov     ecx, [eax+88h]
0x8469EF: mov     edx, [eax+8Ch]
0x8469F5: mov     eax, [eax+90h]
0x8469FB: mov     [esp+48h+var_1C], ecx
0x8469FF: mov     [esp+48h+var_18], edx
0x846A03: mov     [esp+48h+var_14], eax
0x846A07: jz      short loc_846A20
0x846A09: push    0; _DWORD
0x846A0B: fstp    st
0x846A0D: push    0; _DWORD
0x846A0F: call    dword ptr ds:0B42D78h
0x846A15: fstp    [esp+50h+arg_C]
0x846A19: fldz
0x846A1B: add     esp, 8
0x846A1E: jmp     short loc_846A24
0x846A20: fst     [esp+48h+arg_C]
0x846A24: fld     [esp+48h+arg_C]
0x846A28: fsub    dword ptr ds:0B43078h
0x846A2E: fdiv    qword ptr ds:0A94908h
0x846A34: fldz
0x846A36: fcom    st(1)
0x846A38: fnstsw  ax
0x846A3A: test    ah, 41h
0x846A3D: jz      loc_846C34
0x846A43: fld     st(1)
0x846A45: fld1
0x846A47: fcom    st(1)
0x846A49: fnstsw  ax
0x846A4B: fstp    st(1)
0x846A4D: test    ah, 5
0x846A50: jp      loc_846C32
0x846A56: fstp    st(2)
0x846A58: fstp    st
0x846A5A: cmp     byte ptr [esp+48h+arg_10], 0
0x846A5F: fstp    [esp+48h+arg_C]
0x846A63: fld     dword ptr ds:0B4312Ch
0x846A69: mov     ecx, ds:0B4312Ch
0x846A6F: fsub    dword ptr ds:0B43134h
0x846A75: mov     edx, ds:0B43130h
0x846A7B: mov     [esp+48h+var_24], ecx
0x846A7F: mov     [esp+48h+var_20], edx
0x846A83: fstp    [esp+48h+var_24]
0x846A87: mov     eax, [esp+48h+var_24]
0x846A8B: fld     [esp+48h+var_20]
0x846A8F: mov     edx, ds:0B43134h
0x846A95: fsub    dword ptr ds:0B43138h
0x846A9B: mov     [esp+48h+var_2C], eax
0x846A9F: mov     eax, ds:0B43138h
0x846AA4: fstp    [esp+48h+var_20]
0x846AA8: mov     ecx, [esp+48h+var_20]
0x846AAC: fld     [esp+48h+var_24]
0x846AB0: mov     [esp+48h+var_28], ecx
0x846AB4: fld     [esp+48h+arg_C]
0x846AB8: mov     [esp+48h+var_24], edx
0x846ABC: fld     st
0x846ABE: mov     [esp+48h+var_20], eax
0x846AC2: fmulp   st(2), st
0x846AC4: fxch    st(1)
0x846AC6: fstp    [esp+48h+var_2C]
0x846ACA: fmul    [esp+48h+var_28]
0x846ACE: fstp    [esp+48h+var_28]
0x846AD2: fld     [esp+48h+var_2C]
0x846AD6: fadd    [esp+48h+var_24]
0x846ADA: fstp    [esp+48h+var_24]
0x846ADE: fld     [esp+48h+var_28]
0x846AE2: fadd    [esp+48h+var_20]
0x846AE6: fstp    [esp+48h+var_20]
0x846AEA: fld     dword ptr [edi+0A8h]
0x846AF0: fstp    [esp+48h+arg_C]
0x846AF4: fld     dword ptr [edi+0ACh]
0x846AFA: fstp    [esp+48h+arg_0]
0x846AFE: fld     [esp+48h+var_24]
0x846B02: fsub    [esp+48h+var_1C]
0x846B06: fstp    [esp+48h+var_2C]
0x846B0A: fld     [esp+48h+var_20]
0x846B0E: fsub    [esp+48h+var_18]
0x846B12: fstp    [esp+48h+var_24]
0x846B16: fld     [esp+48h+arg_C]
0x846B1A: fstp    [esp+48h+var_1C]
0x846B1E: mov     ecx, [esp+48h+var_1C]
0x846B22: fld     [esp+48h+arg_0]
0x846B26: mov     ds:0B46638h, ecx
0x846B2C: fstp    [esp+48h+var_18]
0x846B30: mov     edx, [esp+48h+var_18]
0x846B34: fld     [esp+48h+var_2C]
0x846B38: mov     ds:0B4663Ch, edx
0x846B3E: fstp    [esp+48h+var_14]
0x846B42: mov     eax, [esp+48h+var_14]
0x846B46: fld     [esp+48h+var_24]
0x846B4A: mov     ds:0B46640h, eax
0x846B4F: fstp    [esp+48h+var_10]
0x846B53: mov     ecx, [esp+48h+var_10]
0x846B57: fild    dword ptr ds:0B2C684h
0x846B5D: mov     ds:0B46644h, ecx
0x846B63: fmul    qword ptr ds:0A2FAA0h
0x846B69: fstp    [esp+48h+arg_C]
0x846B6D: fld     [esp+48h+arg_C]
0x846B71: fmul    qword ptr ds:0A37650h
0x846B77: fstp    [esp+48h+var_1C]
0x846B7B: mov     edx, [esp+48h+var_1C]
0x846B7F: fld     dword ptr ds:0A2FF44h
0x846B85: mov     ds:0B46648h, edx
0x846B8B: fstp    [esp+48h+var_18]
0x846B8F: mov     eax, [esp+48h+var_18]
0x846B93: mov     ds:0B4664Ch, eax
0x846B98: fst     [esp+48h+var_14]
0x846B9C: mov     ecx, [esp+48h+var_14]
0x846BA0: fstp    [esp+48h+var_10]
0x846BA4: mov     edx, [esp+48h+var_10]
0x846BA8: mov     ds:0B46650h, ecx
0x846BAE: mov     ds:0B46654h, edx
0x846BB4: jz      short loc_846C1C
0x846BB6: cmp     byte ptr ds:0B2C67Eh, 0
0x846BBD: jz      short loc_846C1C
0x846BBF: cmp     byte ptr ds:0B43077h, 0
0x846BC6: jz      short loc_846C1C
0x846BC8: mov     ecx, [esp+48h+var_30]
0x846BCC: mov     eax, [edi]
0x846BCE: mov     edx, [eax+88h]
0x846BD4: push    ecx
0x846BD5: mov     ecx, edi
0x846BD7: call    edx
0x846BD9: test    eax, eax
0x846BDB: jz      short loc_846C1C
0x846BDD: mov     ebx, 1
0x846BE2: add     [esi+60h], ebx
0x846BE5: mov     [esp+48h+arg_10], esi
0x846BE9: mov     edi, [esp+48h+var_34]
0x846BED: mov     ecx, [edi+38h]
0x846BF0: lea     eax, [esp+48h+arg_10]
0x846BF4: push    eax
0x846BF5: push    ecx
0x846BF6: lea     ecx, [edi+40h]
0x846BF9: mov     [esp+50h+var_4], 0
0x846C01: call    sub_76CE40
0x846C06: or      eax, 0FFFFFFFFh
0x846C09: add     [esi+60h], eax
0x846C0C: mov     [esp+48h+var_4], eax
0x846C10: jnz     short loc_846C19
0x846C12: mov     ecx, esi
0x846C14: call    sub_7604D0
0x846C19: add     [edi+38h], ebx
0x846C1C: mov     ecx, [esp+48h+var_C]
0x846C20: mov     large fs:0, ecx
0x846C27: pop     ecx
0x846C28: pop     edi
0x846C29: pop     esi
0x846C2A: pop     ebp
0x846C2B: pop     ebx
0x846C2C: add     esp, 34h
0x846C2F: retn    14h
0x846C32: fstp    st
0x846C34: fcom    st(1)
0x846C36: fnstsw  ax
0x846C38: test    ah, 41h
0x846C3B: jnz     loc_846A58
0x846C41: fstp    st(1)
0x846C43: jmp     loc_846A5A
