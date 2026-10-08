0x4E8190: push    ecx; Verified TESPathGridPoint_ClearRenderNode handles the per-point NiNode* at +0x28: clears/releases child objects, removes the node from its parent when attached, releases the returned parent reference, and nulls the field. This is the corrected interpretation of the former unknown28 field.
0x4E8191: push    esi
0x4E8192: mov     esi, ecx
0x4E8194: mov     eax, [esi+28h]
0x4E8197: test    eax, eax
0x4E8199: jz      short loc_4E81EF
0x4E819B: lea     ecx, [eax+0ACh]; this
0x4E81A1: call    NiTObjectArray_ClearAndRelease; Verified here: clear/release the NiNode child-object array at point->renderNode+0xAC. The next block detaches that renderNode from its parent if present, releases the returned reference, and nulls the point field.
0x4E81A6: mov     eax, [esi+28h]
0x4E81A9: mov     ecx, [eax+1Ch]
0x4E81AC: test    ecx, ecx
0x4E81AE: jz      short loc_4E81E8
0x4E81B0: mov     edx, [ecx]
0x4E81B2: mov     edx, [edx+88h]
0x4E81B8: push    eax
0x4E81B9: lea     eax, [esp+0Ch+var_4]
0x4E81BD: push    eax
0x4E81BE: call    edx
0x4E81C0: mov     eax, [esp+8+var_4]
0x4E81C4: test    eax, eax
0x4E81C6: jz      short loc_4E81E8
0x4E81C8: push    edi
0x4E81C9: mov     edi, eax
0x4E81CB: add     eax, 4
0x4E81CE: push    eax; lpAddend
0x4E81CF: call    dword ptr ds:0A2807Ch
0x4E81D5: test    eax, eax
0x4E81D7: jnz     short loc_4E81E7
0x4E81D9: test    edi, edi
0x4E81DB: jz      short loc_4E81E7
0x4E81DD: mov     eax, [edi]
0x4E81DF: mov     edx, [eax]
0x4E81E1: push    1
0x4E81E3: mov     ecx, edi
0x4E81E5: call    edx
0x4E81E7: pop     edi
0x4E81E8: mov     dword ptr [esi+28h], 0
0x4E81EF: pop     esi
0x4E81F0: pop     ecx
0x4E81F1: retn
