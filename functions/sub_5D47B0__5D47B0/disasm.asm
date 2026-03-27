0x5D47B0: push    ecx; a3
0x5D47B1: push    esi; a3
0x5D47B2: mov     esi, ecx
0x5D47B4: mov     eax, [esi+2Ch]
0x5D47B7: mov     ecx, [eax+8]
0x5D47BA: cmp     byte ptr [ecx+4], 21h ; '!'
0x5D47BE: jnz     loc_5D4852
0x5D47C4: mov     eax, [esi+28h]
0x5D47C7: test    eax, eax
0x5D47C9: mov     dword ptr [esi+7Ch], 0
0x5D47D0: jz      short loc_5D480D
0x5D47D2: push    edi
0x5D47D3: lea     edi, [eax+7Ch]
0x5D47D6: test    edi, edi
0x5D47D8: jz      short loc_5D480C
0x5D47DA: lea     ebx, [ebx+0]
0x5D47E0: mov     ecx, [edi]
0x5D47E2: test    ecx, ecx
0x5D47E4: jz      short loc_5D480C
0x5D47E6: mov     eax, [ecx+10h]
0x5D47E9: cmp     eax, 1
0x5D47EC: jz      short loc_5D47F3
0x5D47EE: cmp     eax, 2
0x5D47F1: jnz     short loc_5D4805
0x5D47F3: push    0
0x5D47F5: call    EffectItem_MagickaCostForCaster
0x5D47FA: fiadd   dword ptr [esi+7Ch]
0x5D47FD: call    Double_To_SInt32
0x5D4802: mov     [esi+7Ch], eax
0x5D4805: mov     edi, [edi+4]
0x5D4808: test    edi, edi
0x5D480A: jnz     short loc_5D47E0
0x5D480C: pop     edi
0x5D480D: fild    dword ptr [esi+7Ch]
0x5D4810: push    ecx
0x5D4811: mov     ecx, [esi+4]; this
0x5D4814: fstp    [esp+0Ch+a2]; a3
0x5D4817: push    0FAEh; a2
0x5D481C: call    Tile_SetFloat
0x5D4821: mov     edx, [esi+28h]
0x5D4824: movzx   eax, byte ptr [edx+74h]
0x5D4828: mov     [esp+8+var_4], eax
0x5D482C: push    ecx
0x5D482D: mov     ecx, [esi+4]; this
0x5D4830: fild    [esp+0Ch+var_4]
0x5D4834: fstp    [esp+0Ch+a2]; a3
0x5D4837: push    0FAFh; a2
0x5D483C: call    Tile_SetFloat
0x5D4841: mov     ecx, [esi+28h]
0x5D4844: movzx   edx, byte ptr [ecx+74h]
0x5D4848: imul    edx, [esi+7Ch]
0x5D484C: mov     [esi+7Ch], edx
0x5D484F: pop     esi
0x5D4850: pop     ecx
0x5D4851: retn
0x5D4852: fldz
0x5D4854: push    ecx
0x5D4855: mov     ecx, [esi+4]; this
0x5D4858: fstp    [esp+0Ch+a2]; a3
0x5D485B: push    0FAEh; a2
0x5D4860: call    Tile_SetFloat
0x5D4865: fldz
0x5D4867: push    ecx
0x5D4868: fstp    [esp+0Ch+a2]; a3
0x5D486B: mov     ecx, [esi+4]; this
0x5D486E: push    0FAFh; a2
0x5D4873: call    Tile_SetFloat
0x5D4878: pop     esi
0x5D4879: pop     ecx
0x5D487A: retn
