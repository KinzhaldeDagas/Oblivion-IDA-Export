0x6CC3A0: push    esi; NiBlendTransformInterpolator virtual transform update (+0x4C). Dispatches by active blend-item count +0x0E: one item takes the single-item fast path, multiple items normalize/prepare blend state and evaluate the weighted transform path, and zero items fail. Caches the requested time at +0x08.
0x6CC3A1: mov     esi, ecx
0x6CC3A3: mov     cl, [esi+0Eh]
0x6CC3A6: xor     al, al
0x6CC3A8: cmp     cl, 1
0x6CC3AB: jnz     short loc_6CC3D1
0x6CC3AD: mov     eax, [esp+4+arg_8]
0x6CC3B1: fld     [esp+4+arg_0]
0x6CC3B5: mov     ecx, [esp+4+arg_4]
0x6CC3B9: push    eax; int
0x6CC3BA: push    ecx; int
0x6CC3BB: push    ecx
0x6CC3BC: mov     ecx, esi
0x6CC3BE: fstp    [esp+10h+var_10]; float
0x6CC3C1: call    NiBlendTransformInterpolator_UpdateSingle; Oblivion: evaluates the sole active 0x18-byte blend item. Honors the blend time-override flag, writes invalid TRS sentinels on failure/sentinel time, and normalizes a valid quaternion.
0x6CC3C6: fld     [esp+4+arg_0]
0x6CC3CA: fstp    dword ptr [esi+8]
0x6CC3CD: pop     esi
0x6CC3CE: retn    0Ch
0x6CC3D1: test    cl, cl
0x6CC3D3: jbe     short loc_6CC3F5
0x6CC3D5: mov     ecx, esi
0x6CC3D7: call    NiBlendInterpolator_RecomputeNormalizedWeights; Oblivion: when blend flag bit 2 marks weights dirty, recomputes item+8 normalized weights across 0x18-byte records. Handles one/two/many active items, priority groups, base*ease weights, optional threshold/renormalization, and highest-only flag bit 1.
0x6CC3DC: fld     [esp+4+arg_0]
0x6CC3E0: mov     edx, [esp+4+arg_8]
0x6CC3E4: mov     eax, [esp+4+arg_4]
0x6CC3E8: push    edx; int
0x6CC3E9: push    eax; int
0x6CC3EA: push    ecx
0x6CC3EB: mov     ecx, esi
0x6CC3ED: fstp    [esp+10h+var_10]; float
0x6CC3F0: call    NiBlendTransformInterpolator_UpdateMultiple; Oblivion: evaluates multiple 0x18-byte blend items using item+8 normalized weight. Translation, rotation, and scale validity are tracked independently; missing channels reduce only that channel's weight. Quaternions are hemisphere-corrected before weighted summation and normalized afterward.
0x6CC3F5: fld     [esp+4+arg_0]
0x6CC3F9: fstp    dword ptr [esi+8]
0x6CC3FC: pop     esi
0x6CC3FD: retn    0Ch
