0x8B8410: push    ebp
0x8B8411: mov     ebp, esp
0x8B8413: and     esp, 0FFFFFFF0h
0x8B8416: push    0FFFFFFFFh
0x8B8418: push    offset SEH_8B8590
0x8B841D: mov     eax, large fs:0
0x8B8423: push    eax
0x8B8424: sub     esp, 18h
0x8B8427: push    ebx
0x8B8428: push    esi
0x8B8429: push    edi
0x8B842A: mov     eax, ds:0B30AACh
0x8B842F: xor     eax, esp
0x8B8431: push    eax
0x8B8432: lea     eax, [esp+34h+var_C]
0x8B8436: mov     large fs:0, eax
0x8B843C: mov     esi, [ebp+arg_8]
0x8B843F: test    esi, esi
0x8B8441: mov     eax, [ebp+arg_0]
0x8B8444: jnz     short loc_8B8448
0x8B8446: mov     esi, eax
0x8B8448: push    offset unk_BA8000
0x8B844D: mov     ecx, esi
0x8B844F: call    sub_700010
0x8B8454: mov     edi, eax
0x8B8456: test    edi, edi
0x8B8458: jnz     short loc_8B84B4
0x8B845A: push    1
0x8B845C: push    70h ; 'p'
0x8B845E: mov     ecx, offset FormHeap
0x8B8463: call    j_MemoryHeap_Alloc
0x8B8468: mov     ebx, eax
0x8B846A: mov     cl, bl
0x8B846C: and     cl, 0Fh
0x8B846F: mov     al, 10h
0x8B8471: sub     al, cl
0x8B8473: movzx   edx, al
0x8B8476: add     ebx, edx
0x8B8478: mov     [ebx-1], al
0x8B847B: mov     dword ptr [esp+34h+var_24], ebx
0x8B847F: mov     ecx, ebx; this
0x8B8481: mov     [esp+34h+var_4], edi
0x8B8485: call    ??0NiTimeController@@QAE@XZ; NiTimeController::NiTimeController(void)
0x8B848A: fldz
0x8B848C: mov     dword ptr [ebx], offset ??_7bhkForceController@@6B@; const bhkForceController::`vftable'
0x8B8492: movaps  xmm0, xmmword ptr ds:0BA7A40h
0x8B8499: fstp    dword ptr [ebx+50h]
0x8B849C: movaps  xmmword ptr [ebx+40h], xmm0
0x8B84A0: mov     eax, [ebx]
0x8B84A2: mov     edx, [eax+58h]
0x8B84A5: push    esi
0x8B84A6: mov     ecx, ebx
0x8B84A8: mov     [esp+38h+var_4], 0FFFFFFFFh
0x8B84B0: mov     edi, ebx
0x8B84B2: call    edx
0x8B84B4: push    esi
0x8B84B5: call    sub_47FAC0
0x8B84BA: mov     ecx, [ebp+arg_4]
0x8B84BD: movaps  xmm0, xmmword ptr [ecx]
0x8B84C0: add     esp, 4
0x8B84C3: test    eax, eax
0x8B84C5: movaps  [esp+34h+var_24+4], xmm0
0x8B84CA: jz      short loc_8B8535
0x8B84CC: mov     esi, [eax+10h]
0x8B84CF: test    esi, esi
0x8B84D1: jz      short loc_8B8535
0x8B84D3: mov     ecx, esi
0x8B84D5: call    sub_535AC0
0x8B84DA: fstp    dword ptr [esp+34h+var_24]
0x8B84DE: fld     dword ptr ds:0B2F0F8h
0x8B84E4: mov     esi, [esi+8]
0x8B84E7: fmul    dword ptr [esp+34h+var_24]
0x8B84EB: mov     edx, [esi+50h]
0x8B84EE: xorps   xmm0, xmm0
0x8B84F1: fstp    dword ptr [esp+34h+var_24]
0x8B84F5: movss   xmm1, dword ptr [esp+34h+var_24]
0x8B84FB: fld     dword ptr [edx+0C8h]
0x8B8501: movss   xmm0, xmm1
0x8B8505: fmul    qword ptr ds:0A31C70h
0x8B850B: shufps  xmm0, xmm0, 0
0x8B850F: mulps   xmm0, [esp+34h+var_24+4]
0x8B8514: fstp    dword ptr [esp+34h+var_24]
0x8B8518: movss   xmm2, dword ptr [esp+34h+var_24]
0x8B851E: xorps   xmm1, xmm1
0x8B8521: movss   xmm1, xmm2
0x8B8525: movaps  xmm2, xmm1
0x8B8528: shufps  xmm2, xmm1, 0
0x8B852C: mulps   xmm2, xmm0
0x8B852F: addps   xmm2, xmm0
0x8B8532: movaps  xmm0, xmm2
0x8B8535: fldz
0x8B8537: mov     ax, [edi+8]
0x8B853B: mov     edx, [edi]
0x8B853D: fst     dword ptr [edi+14h]
0x8B8540: fld     dword ptr ds:0A3D9A4h
0x8B8546: and     ax, 0FFF5h
0x8B854A: fstp    dword ptr [edi+18h]
0x8B854D: or      ax, 5
0x8B8551: mov     [edi+8], ax
0x8B8555: mov     eax, [edx+4Ch]
0x8B8558: fstp    dword ptr [edi+10h]
0x8B855B: movaps  xmmword ptr [edi+40h], xmm0
0x8B855F: fld1
0x8B8561: push    ecx
0x8B8562: fstp    dword ptr [edi+0Ch]
0x8B8565: mov     ecx, edi
0x8B8567: fld     dword ptr ds:0A7DEB4h
0x8B856D: fchs
0x8B856F: fstp    [esp+38h+var_38]
0x8B8572: call    eax
0x8B8574: mov     ecx, dword ptr [esp+34h+var_C]
0x8B8578: mov     large fs:0, ecx
0x8B857F: pop     ecx
0x8B8580: pop     edi
0x8B8581: pop     esi
0x8B8582: pop     ebx
0x8B8583: mov     esp, ebp
0x8B8585: pop     ebp
0x8B8586: retn
