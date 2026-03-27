0x8B8590: push    ebp
0x8B8591: mov     ebp, esp
0x8B8593: and     esp, 0FFFFFFF0h
0x8B8596: push    0FFFFFFFFh
0x8B8598: push    offset SEH_8B8590
0x8B859D: mov     eax, large fs:0
0x8B85A3: push    eax
0x8B85A4: sub     esp, 18h
0x8B85A7: push    ebx
0x8B85A8: push    esi
0x8B85A9: push    edi
0x8B85AA: mov     eax, ds:0B30AACh
0x8B85AF: xor     eax, esp
0x8B85B1: push    eax
0x8B85B2: lea     eax, [esp+34h+var_C]
0x8B85B6: mov     large fs:0, eax
0x8B85BC: mov     edi, [ebp+arg_0]
0x8B85BF: push    offset unk_BA8000
0x8B85C4: mov     ecx, edi
0x8B85C6: call    sub_700010
0x8B85CB: mov     esi, eax
0x8B85CD: test    esi, esi
0x8B85CF: jnz     short loc_8B862B
0x8B85D1: push    1
0x8B85D3: push    70h ; 'p'
0x8B85D5: mov     ecx, offset FormHeap
0x8B85DA: call    j_MemoryHeap_Alloc
0x8B85DF: mov     ebx, eax
0x8B85E1: mov     cl, bl
0x8B85E3: and     cl, 0Fh
0x8B85E6: mov     al, 10h
0x8B85E8: sub     al, cl
0x8B85EA: movzx   edx, al
0x8B85ED: add     ebx, edx
0x8B85EF: mov     [ebx-1], al
0x8B85F2: mov     dword ptr [esp+34h+var_24], ebx
0x8B85F6: mov     ecx, ebx; this
0x8B85F8: mov     [esp+34h+var_4], esi
0x8B85FC: call    ??0NiTimeController@@QAE@XZ; NiTimeController::NiTimeController(void)
0x8B8601: fldz
0x8B8603: mov     dword ptr [ebx], offset ??_7bhkForceController@@6B@; const bhkForceController::`vftable'
0x8B8609: movaps  xmm0, xmmword ptr ds:0BA7A40h
0x8B8610: fstp    dword ptr [ebx+50h]
0x8B8613: movaps  xmmword ptr [ebx+40h], xmm0
0x8B8617: mov     eax, [ebx]
0x8B8619: mov     edx, [eax+58h]
0x8B861C: push    edi
0x8B861D: mov     ecx, ebx
0x8B861F: mov     [esp+38h+var_4], 0FFFFFFFFh
0x8B8627: mov     esi, ebx
0x8B8629: call    edx
0x8B862B: push    edi
0x8B862C: call    sub_47FAC0
0x8B8631: mov     ebx, [ebp+arg_4]
0x8B8634: movaps  xmm0, xmmword ptr [ebx]
0x8B8637: add     esp, 4
0x8B863A: test    eax, eax
0x8B863C: movaps  [esp+34h+var_24+4], xmm0
0x8B8641: jz      short loc_8B86AF
0x8B8643: mov     edi, [eax+10h]
0x8B8646: test    edi, edi
0x8B8648: jz      short loc_8B86AF
0x8B864A: mov     ecx, edi
0x8B864C: call    sub_535AC0
0x8B8651: fstp    dword ptr [esp+34h+var_24]
0x8B8655: fld     dword ptr ds:0B2F0F8h
0x8B865B: mov     edi, [edi+8]
0x8B865E: fmul    dword ptr [esp+34h+var_24]
0x8B8662: mov     eax, [edi+50h]
0x8B8665: movaps  xmm2, xmmword ptr [ebx]
0x8B8668: xorps   xmm0, xmm0
0x8B866B: fstp    dword ptr [esp+34h+var_24]
0x8B866F: movss   xmm1, dword ptr [esp+34h+var_24]
0x8B8675: fld     dword ptr [eax+0C8h]
0x8B867B: movss   xmm0, xmm1
0x8B867F: fmul    qword ptr ds:0A31C70h
0x8B8685: shufps  xmm0, xmm0, 0
0x8B8689: mulps   xmm0, [esp+34h+var_24+4]
0x8B868E: fstp    dword ptr [esp+34h+var_24]
0x8B8692: movss   xmm3, dword ptr [esp+34h+var_24]
0x8B8698: xorps   xmm1, xmm1
0x8B869B: movss   xmm1, xmm3
0x8B869F: movaps  xmm3, xmm1
0x8B86A2: shufps  xmm3, xmm1, 0
0x8B86A6: mulps   xmm3, xmm2
0x8B86A9: addps   xmm3, xmm0
0x8B86AC: movaps  xmm0, xmm3
0x8B86AF: fldz
0x8B86B1: mov     cx, [esi+8]
0x8B86B5: mov     edx, [esi]
0x8B86B7: fst     dword ptr [esi+14h]
0x8B86BA: fld     [ebp+arg_8]
0x8B86BD: mov     eax, [edx+4Ch]
0x8B86C0: fstp    dword ptr [esi+18h]
0x8B86C3: and     cx, 0FFF5h
0x8B86C8: or      cx, 5
0x8B86CC: mov     [esi+8], cx
0x8B86D0: fstp    dword ptr [esi+10h]
0x8B86D3: movaps  xmmword ptr [esi+40h], xmm0
0x8B86D7: fld1
0x8B86D9: fstp    dword ptr [esi+0Ch]
0x8B86DC: fld     dword ptr ds:0A7DEB4h
0x8B86E2: fchs
0x8B86E4: push    ecx
0x8B86E5: fstp    [esp+38h+var_38]
0x8B86E8: mov     ecx, esi
0x8B86EA: call    eax
0x8B86EC: mov     ecx, dword ptr [esp+34h+var_C]
0x8B86F0: mov     large fs:0, ecx
0x8B86F7: pop     ecx
0x8B86F8: pop     edi
0x8B86F9: pop     esi
0x8B86FA: pop     ebx
0x8B86FB: mov     esp, ebp
0x8B86FD: pop     ebp
0x8B86FE: retn
