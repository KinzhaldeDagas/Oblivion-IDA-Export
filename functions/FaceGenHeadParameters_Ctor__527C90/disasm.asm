0x527C90: push    0FFFFFFFFh; Constructs a 0xC4 FaceGenRenderState. The first 0x60 bytes are FaceGenHeadParameters; appearance assets and four 0x10-byte pointer arrays follow.
0x527C92: push    offset FaceGenHeadParameters_Ctor_SEH
0x527C97: mov     eax, large fs:0
0x527C9D: push    eax
0x527C9E: push    ecx
0x527C9F: push    ebx
0x527CA0: push    esi
0x527CA1: push    edi
0x527CA2: mov     eax, ds:0B30AACh
0x527CA7: xor     eax, esp
0x527CA9: push    eax
0x527CAA: lea     eax, [esp+20h+var_C]
0x527CAE: mov     large fs:0, eax
0x527CB4: mov     esi, ecx
0x527CB6: push    offset FaceGenMatrix_Destruct; a5
0x527CBB: push    offset FaceGenMatrix_Construct; a4
0x527CC0: push    4; size
0x527CC2: push    18h; a2
0x527CC4: push    esi; a1
0x527CC5: call    ArrayConstructor
0x527CCA: xor     eax, eax
0x527CCC: mov     edx, 1
0x527CD1: mov     dword ptr [esi+74h], offset ??_7?$NiTArray@PAVTESModel@@@@6B@; const NiTArray<TESModel *>::`vftable'
0x527CD8: mov     [esi+7Ch], ax
0x527CDC: mov     [esi+82h], dx
0x527CE3: mov     [esi+7Eh], ax
0x527CE7: mov     [esi+80h], ax
0x527CEE: mov     [esi+78h], eax
0x527CF1: mov     dword ptr [esi+84h], offset ??_7?$NiTArray@PAVTESTexture@@@@6B@; const NiTArray<TESTexture *>::`vftable'
0x527CFB: mov     [esi+8Ch], ax
0x527D02: mov     [esi+92h], dx
0x527D09: mov     [esi+8Eh], ax
0x527D10: mov     [esi+90h], ax
0x527D17: mov     [esi+88h], eax
0x527D1D: mov     dword ptr [esi+94h], offset ??_7?$NiTArray@PBD@@6B@; const NiTArray<char const *>::`vftable'
0x527D27: mov     [esi+9Ch], ax
0x527D2E: mov     [esi+0A2h], dx
0x527D35: mov     [esi+9Eh], ax
0x527D3C: mov     [esi+0A0h], ax
0x527D43: mov     [esi+98h], eax
0x527D49: fldz
0x527D4B: mov     dword ptr [esi+0A4h], offset ??_7?$NiTArray@V?$NiPointer@VNiTexture@@@@@@6B@; const NiTArray<NiPointer<NiTexture>>::`vftable'
0x527D55: mov     [esi+0ACh], ax
0x527D5C: mov     [esi+0B2h], dx
0x527D63: mov     [esi+0AEh], ax
0x527D6A: mov     [esi+0B0h], ax
0x527D71: mov     [esi+0A8h], eax
0x527D77: fstp    dword ptr [esi+68h]
0x527D7A: mov     [esi+60h], eax
0x527D7D: mov     [esi+64h], eax
0x527D80: mov     [esi+6Ch], eax
0x527D83: mov     [esi+70h], eax
0x527D86: xor     ecx, ecx
0x527D88: cmp     [esi+7Eh], ax
0x527D8C: jbe     short loc_527DA1
0x527D8E: mov     edi, edi
0x527D90: mov     ebx, [esi+78h]
0x527D93: movzx   edi, cx
0x527D96: add     ecx, edx
0x527D98: mov     [ebx+edi*4], eax
0x527D9B: cmp     cx, [esi+7Eh]
0x527D9F: jb      short loc_527D90
0x527DA1: mov     [esi+7Eh], ax
0x527DA5: mov     [esi+80h], ax
0x527DAC: xor     ecx, ecx
0x527DAE: cmp     [esi+8Eh], ax
0x527DB5: jbe     short loc_527DD7
0x527DB7: jmp     short loc_527DC0
0x527DC0: mov     ebx, [esi+88h]
0x527DC6: movzx   edi, cx
0x527DC9: add     ecx, edx
0x527DCB: mov     [ebx+edi*4], eax
0x527DCE: cmp     cx, [esi+8Eh]
0x527DD5: jb      short loc_527DC0
0x527DD7: mov     [esi+8Eh], ax
0x527DDE: mov     [esi+90h], ax
0x527DE5: xor     ecx, ecx
0x527DE7: cmp     [esi+9Eh], ax
0x527DEE: jbe     short loc_527E07
0x527DF0: mov     ebx, [esi+98h]
0x527DF6: movzx   edi, cx
0x527DF9: add     ecx, edx
0x527DFB: mov     [ebx+edi*4], eax
0x527DFE: cmp     cx, [esi+9Eh]
0x527E05: jb      short loc_527DF0
0x527E07: mov     [esi+9Eh], ax
0x527E0E: mov     [esi+0A0h], ax
0x527E15: mov     [esi+0B4h], al
0x527E1B: mov     dword ptr [esi+0C0h], 0FFFFFFFFh
0x527E25: mov     eax, esi
0x527E27: mov     ecx, [esp+20h+var_C]
0x527E2B: mov     large fs:0, ecx
0x527E32: pop     ecx
0x527E33: pop     edi
0x527E34: pop     esi
0x527E35: pop     ebx
0x527E36: add     esp, 10h
0x527E39: retn
0x431320: mov     eax, [ecx+4]
0x431323: push    eax
0x431324: mov     dword ptr [ecx], offset ??_7?$NiTArray@PBD@@6B@; const NiTArray<char const *>::`vftable'
0x43132A: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x43132F: pop     ecx
0x431330: retn
0x521CB0: mov     eax, [ecx+4]
0x521CB3: push    eax
0x521CB4: mov     dword ptr [ecx], offset ??_7?$NiTArray@PAVTESModel@@@@6B@; const NiTArray<TESModel *>::`vftable'
0x521CBA: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x521CBF: pop     ecx
0x521CC0: retn
0x521CD0: mov     eax, [ecx+4]
0x521CD3: push    eax
0x521CD4: mov     dword ptr [ecx], offset ??_7?$NiTArray@PAVTESTexture@@@@6B@; const NiTArray<TESTexture *>::`vftable'
0x521CDA: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x521CDF: pop     ecx
0x521CE0: retn
0x9B8270: push    offset FaceGenMatrix_Destruct; void (__thiscall *)(void *)
0x9B8275: push    4; int
0x9B8277: push    18h; unsigned int
0x9B8279: mov     eax, [ebp-10h]
0x9B827C: push    eax; void *
0x9B827D: call    $LN21
0x9B8282: retn
0x9B8283: mov     ecx, [ebp-10h]
0x9B8286: add     ecx, 74h ; 't'
0x9B8289: jmp     loc_521CB0
0x9B828E: mov     ecx, [ebp-10h]
0x9B8291: add     ecx, 84h ; '„'
0x9B8297: jmp     loc_521CD0
0x9B829C: mov     ecx, [ebp-10h]
0x9B829F: add     ecx, 94h ; '”'
0x9B82A5: jmp     loc_431320
0x9B82AA: mov     edx, [esp+arg_4]
0x9B82AE: lea     eax, [edx-10h]
0x9B82B1: mov     ecx, [edx-14h]
0x9B82B4: xor     ecx, eax
0x9B82B6: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B82BB: mov     eax, offset stru_AE2988
0x9B82C0: jmp     ___CxxFrameHandler3
