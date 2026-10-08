0x5539E0: push    0FFFFFFFFh; Sets a manual FaceGen slider by projecting its current value, transposing the authored basis, scaling by target-current, and adding the adjustment into the selected parameter matrix.
0x5539E2: push    offset SEH_5539E0
0x5539E7: mov     eax, large fs:0
0x5539ED: push    eax
0x5539EE: sub     esp, 30h
0x5539F1: push    ebx
0x5539F2: push    ebp
0x5539F3: push    esi
0x5539F4: push    edi
0x5539F5: mov     eax, ds:0B30AACh
0x5539FA: xor     eax, esp
0x5539FC: push    eax
0x5539FD: lea     eax, [esp+50h+var_C]
0x553A01: mov     large fs:0, eax
0x553A07: cmp     [esp+50h+parameters], 0
0x553A0C: jz      loc_553B17
0x553A12: mov     ecx, ds:0B39B80h
0x553A18: test    ecx, ecx
0x553A1A: jnz     short loc_553A27
0x553A1C: call    FaceGenManager_EnsureInitialized; Lazily allocates and constructs the process FaceGen manager singleton (0xDBC bytes). Callers use g_faceGenManager; the authoritative control/basis data comes from FaceGen\\si.ctl.
0x553A21: mov     ecx, ds:0B39B80h
0x553A27: mov     eax, [esp+50h+matrixGroup]
0x553A2B: mov     ebp, [esp+50h+matrixChannel]
0x553A2F: lea     edi, [ebp+eax*2+0]
0x553A33: mov     esi, edi
0x553A35: shl     esi, 4
0x553A38: mov     eax, [esi+ecx+8Ch]
0x553A3F: test    eax, eax
0x553A41: jz      loc_553B17
0x553A47: mov     ecx, [esi+ecx+90h]
0x553A4E: mov     ebx, [esp+50h+sliderIndex]
0x553A52: sub     ecx, eax
0x553A54: mov     eax, 4EC4EC4Fh
0x553A59: imul    ecx
0x553A5B: sar     edx, 4
0x553A5E: mov     eax, edx
0x553A60: shr     eax, 1Fh
0x553A63: add     eax, edx
0x553A65: cmp     ebx, eax
0x553A67: jnb     loc_553B17
0x553A6D: mov     ecx, [esp+50h+matrixGroup]
0x553A71: push    ebx; sliderIndex
0x553A72: push    ebp; matrixChannel
0x553A73: mov     ebp, [esp+58h+parameters]
0x553A77: push    ecx; matrixGroup
0x553A78: push    ebp; parameters
0x553A79: call    FaceGenHeadParameters_GetSliderValue; Projects a manual FaceGen slider value by multiplying its authored basis row by the selected parameter matrix (matrix index = matrixChannel + 2*matrixGroup).
0x553A7E: fstp    [esp+60h+parameters]
0x553A82: fld     [esp+60h+value]
0x553A86: add     esp, 10h
0x553A89: cmp     dword ptr ds:0B39B80h, 0
0x553A90: fsub    [esp+50h+parameters]
0x553A94: fstp    [esp+50h+parameters]
0x553A98: jnz     short loc_553A9F
0x553A9A: call    FaceGenManager_EnsureInitialized; Lazily allocates and constructs the process FaceGen manager singleton (0xDBC bytes). Callers use g_faceGenManager; the authoritative control/basis data comes from FaceGen\\si.ctl.
0x553A9F: mov     eax, ds:0B39B80h
0x553AA4: lea     edx, [esp+50h+out]
0x553AA8: push    edx; out
0x553AA9: push    ebx
0x553AAA: lea     ecx, [esi+eax+88h]
0x553AB1: call    sub_54F6C0
0x553AB6: mov     ecx, eax; this
0x553AB8: call    FaceGenMatrix_Transpose; Matrix transpose: out has source.columns x source.rows and receives out[col,row] = source[row,col].
0x553ABD: fld     [esp+50h+parameters]
0x553AC1: push    ecx
0x553AC2: lea     ecx, [esp+54h+var_3C]
0x553AC6: fstp    [esp+54h+scale]; scale
0x553AC9: push    ecx; out
0x553ACA: xor     esi, esi
0x553ACC: mov     ecx, eax; this
0x553ACE: mov     [esp+58h+var_4], esi
0x553AD2: call    FaceGenMatrix_Scale; Matrix scalar multiply: out = this * scale. Dimensions and storage are initialized from the source matrix.
0x553AD7: lea     edx, [edi+edi*2]
0x553ADA: push    eax; rhs
0x553ADB: lea     ecx, [ebp+edx*8+0]; this
0x553ADF: mov     byte ptr [esp+54h+var_4], 1
0x553AE4: call    FaceGenMatrix_AddInPlace; Dimension-checked in-place element addition: this += rhs.
0x553AE9: mov     eax, [esp+50h+var_3C.begin]
0x553AED: cmp     eax, esi
0x553AEF: jz      short loc_553AFA
0x553AF1: push    eax
0x553AF2: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x553AF7: add     esp, 4
0x553AFA: mov     eax, [esp+50h+out.begin]
0x553AFE: cmp     eax, esi
0x553B00: mov     [esp+50h+var_3C.begin], esi
0x553B04: mov     [esp+50h+var_3C.end], esi
0x553B08: mov     [esp+50h+var_3C.capacityEnd], esi
0x553B0C: jz      short loc_553B17
0x553B0E: push    eax
0x553B0F: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x553B14: add     esp, 4
0x553B17: mov     ecx, [esp+50h+var_C]
0x553B1B: mov     large fs:0, ecx
0x553B22: pop     ecx
0x553B23: pop     edi
0x553B24: pop     esi
0x553B25: pop     ebp
0x553B26: pop     ebx
0x553B27: add     esp, 3Ch
0x553B2A: retn
0x9BC000: lea     ecx, [ebp-24h]; this
0x9BC003: jmp     FaceGenMatrix_Destruct; Destroys a FaceGenMatrix by freeing the coefficient allocation at +0x0C, then clears begin/end/capacity-end.
0x9BC008: lea     ecx, [ebp-3Ch]; this
0x9BC00B: jmp     FaceGenMatrix_Destruct; Destroys a FaceGenMatrix by freeing the coefficient allocation at +0x0C, then clears begin/end/capacity-end.
0x9BC010: mov     edx, [esp+matrixGroup]
0x9BC014: lea     eax, [edx-40h]
0x9BC017: mov     ecx, [edx-44h]
0x9BC01A: xor     ecx, eax
0x9BC01C: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9BC021: mov     eax, offset stru_AE5C70
0x9BC026: jmp     ___CxxFrameHandler3
